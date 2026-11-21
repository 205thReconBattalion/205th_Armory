/*
 * Karten-Intel: deckt jede Sekunde die Gruppen auf, die die eigene Seite vollständig kennt,
 * und zeigt die Radar-Kontakte des FCC. Nur lokal auf dem Client.
 */

private _fcc = call RB205_fcc_fnc_intelGetFcc;

if (isNull _fcc) exitWith {
	if (RB205_fcc_intelActive) then {call RB205_fcc_fnc_intelClear};
};

if (!RB205_fcc_intelActive) then {
	//Wie im Original über die Engine-Befehle. Mit den Mission-Eventhandlern (GroupIconOverEnter/Leave)
	//überlagerten sich im Test die Tooltips mehrerer Gruppen. Die Befehle gelten global, intelClear setzt sie zurück.
	onGroupIconOverEnter {[_this select 1] call RB205_fcc_fnc_intelIconEnter};
	onGroupIconOverLeave {[_this select 1] call RB205_fcc_fnc_intelIconLeave};
};
RB205_fcc_intelActive = true;
setGroupIconsVisible [RB205_fcc_intelShowIcons, false];                                            //Nur auf der Karte, nicht im HUD
setGroupIconsSelectable RB205_fcc_intelShowIcons;

private _checkbox = uiNamespace getVariable ["RB205_fcc_intelCheckbox", controlNull];
if (!isNull _checkbox) then {_checkbox ctrlShow true};

private _side = side group player;

//Gruppen aufdecken

private _revealed = [];
{
	private _group = _x;
	private _units = units _group;
	if (_units isEqualTo [] || {side _group isEqualTo civilian}) then {continue};
	if (_units findIf {isPlayer _x} != -1) then {continue};                                          //Spielergruppen nicht anzeigen

	private _inVehicle = !isNull objectParent (_units select 0);
	if (!_inVehicle && {count _units < RB205_fcc_intelMinGroupSize}) then {continue};
	if (side _group isEqualTo _side && {count _units <= 1} && {!_inVehicle}) then {continue};

	//Aufgedeckt, sobald irgendein Mitglied vollständig bekannt ist
	if (_units findIf {(_side knowsAbout vehicle _x) >= 4} == -1) then {continue};

	_revealed pushBack _group;
} forEach allGroups;

//Icons von Gruppen entfernen, die nicht mehr aufgedeckt sind
RB205_fcc_intelGroups = RB205_fcc_intelGroups select {
	_x params ["_group"];
	private _keep = !isNull _group && {_group in _revealed};
	if (!_keep && {!isNull _group}) then {clearGroupIcons _group};
	_keep
};

//Tooltip ausblenden, wenn die angezeigte Gruppe nicht mehr aufgedeckt ist
private _tooltip = (uiNamespace getVariable ["RB205_fcc_intelTooltip", [controlNull]]) select 0;
if (!isNull _tooltip && {ctrlShown _tooltip} && {!(RB205_fcc_intelHoverGroup in _revealed)}) then {
	RB205_fcc_intelHoverGroups = RB205_fcc_intelHoverGroups - [RB205_fcc_intelHoverGroup];
	call RB205_fcc_fnc_intelHideTooltip;
};

{
	private _group = _x;
	private _type = [_group] call RB205_fcc_fnc_intelGetMarkerType;
	private _index = RB205_fcc_intelGroups findIf {(_x select 0) isEqualTo _group};

	if (_index == -1) then {
		clearGroupIcons _group;
		private _id = _group addGroupIcon [_type, [0, 0]];
		RB205_fcc_intelGroups pushBack [_group, _id, _type];
		{[_x] call RB205_fcc_fnc_intelInitUnit} forEach units _group;
	} else {
		(RB205_fcc_intelGroups select _index) params ["", "_id", "_currentType"];
		if (_type != _currentType) then {
			_group setGroupIcon [_id, _type];
			(RB205_fcc_intelGroups select _index) set [2, _type];
		};
	};

	//Die Beschriftung setzt der Tooltip beim Überfahren mit der Maus
	if (_group isNotEqualTo RB205_fcc_intelHoverGroup) then {
		private _color = if ((units _group) findIf {alive _x} == -1) then {
			[0, 0, 0, 0.75]
		} else {
			[side _group, false] call BIS_fnc_sideColor
		};
		_group setGroupIconParams [_color, "", 1, true];
	};
} forEach _revealed;

//Schuss-Marker auch für befreundete Spieler
if (RB205_fcc_intelShotTracers) then {
	{
		if (side group _x isEqualTo _side) then {[_x] call RB205_fcc_fnc_intelInitUnit};
	} forEach allPlayers;
};

//Radar-Kontakte des FCC, außer sie sind schon als Gruppe aufgedeckt

private _contacts = [];
if (RB205_fcc_intelRadarContacts) then {
	_contacts = (_fcc getVariable ["RB205_fcc_radarContacts", []]) select {
		_x params ["_target"];
		alive _target && {!((group effectiveCommander _target) in _revealed)}
	};
};

while {count RB205_fcc_intelRadarMarkers > count _contacts} do {
	deleteMarkerLocal (RB205_fcc_intelRadarMarkers deleteAt (count RB205_fcc_intelRadarMarkers - 1));
};

{
	_x params ["_target", "_isAir", "_relationship"];

	private _marker = RB205_fcc_intelRadarMarkers param [_forEachIndex, ""];
	if (_marker == "") then {
		_marker = createMarkerLocal [format ["RB205_fcc_radar_%1", _forEachIndex], getPosASL _target];
		_marker setMarkerTextLocal "RADAR";
		_marker setMarkerSizeLocal [0.8, 0.8];
		RB205_fcc_intelRadarMarkers pushBack _marker;
	};

	private _type = switch (true) do {
		case (_target isKindOf "Helicopter"): {"o_air"};
		case (_isAir): {"o_plane"};
		default {"o_unknown"};
	};
	_marker setMarkerTypeLocal _type;
	_marker setMarkerColorLocal (["ColorUNKNOWN", "ColorOPFOR"] select (_relationship == "enemy"));
	_marker setMarkerAlphaLocal ([0, 1] select RB205_fcc_intelShowIcons);
	_marker setMarkerPosLocal getPosASL _target;
} forEach _contacts;
