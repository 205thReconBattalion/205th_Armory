/*
 * Zeigt Beschriftung und Tooltip einer aufgedeckten Gruppe. Es ist immer nur ein Tooltip sichtbar,
 * die Beschriftung der vorher angezeigten Gruppe wird zurückgesetzt.
 *
 * Arguments:
 * 0: Gruppe <GROUP>
 */

params [["_group", grpNull, [grpNull]]];

disableSerialization;
if (_group isNotEqualTo RB205_fcc_intelHoverGroup) then {call RB205_fcc_fnc_intelHideTooltip};
RB205_fcc_intelHoverGroup = _group;

private _units = units _group;
private _isDead = _units findIf {alive _x} == -1;
private _vehicles = [];
private _onFootCount = 0;
private _footText = "";
private _vehicleText = "";

{
	private _vehicle = objectParent _x;
	if (isNull _vehicle) then {
		_onFootCount = _onFootCount + 1;
		if (alive _x) then {
			private _iconName = getText (configOf _x >> "icon");
			private _icon = getText (configFile >> "CfgVehicleIcons" >> _iconName);
			if (_icon == "") then {_icon = _iconName};
			_footText = _footText + format ["<img image='%1' shadow='0' size='1.2' valign='middle'/>", _icon];
		};
	} else {
		if !(_vehicle in _vehicles) then {
			_vehicles pushBack _vehicle;
			if (alive _x) then {
				_vehicleText = _vehicleText + format ["<img image='%1' shadow='0' size='1.33' valign='middle'/>", getText (configOf _vehicle >> "picture")];
			};
		};
	};
} forEach _units;

//Beschriftung am Symbol: Name des Fahrzeugs bei genau einem Fahrzeug, sonst der Typ
private _label = getText (configFile >> "CfgMarkers" >> ([_group] call RB205_fcc_fnc_intelGetMarkerType) >> "name");
if (count _vehicles == 1) then {
	_label = getText (configOf (_vehicles select 0) >> "displayName");
};
if (_isDead) then {
	_group setGroupIconParams [[0, 0, 0, 0.75], _label + " (DEAD)", 1.25, true];
} else {
	_group setGroupIconParams [[side _group, false] call BIS_fnc_sideColor, _label, 1.25, true];
};

private _controls = uiNamespace getVariable ["RB205_fcc_intelTooltip", []];
if (_controls isEqualTo []) exitWith {};
_controls params ["_tooltip", "_infantryHeader", "_infantryBody", "_vehicleHeader", "_vehicleBody"];

private _sideColor = [side _group, false] call BIS_fnc_sideColor;
_sideColor set [3, 0.75];
_infantryHeader ctrlSetBackgroundColor _sideColor;
_vehicleHeader ctrlSetBackgroundColor _sideColor;

private _showInfantry = _footText != "";
private _showVehicles = _vehicleText != "";

//Erst die Gruppe einblenden, dann die Teile: Das Einblenden der Gruppe macht alle Teile wieder sichtbar.
//Sonst lag z.B. bei Fahrzeugen die alte Infanterieübersicht über der Fahrzeugübersicht.
_tooltip ctrlShow (_showInfantry || _showVehicles);
{_x ctrlShow _showInfantry} forEach [_infantryHeader, _infantryBody];
{_x ctrlShow _showVehicles} forEach [_vehicleHeader, _vehicleBody];

if (_showInfantry) then {
	_infantryBody ctrlSetStructuredText parseText ("<t size='0.1'>&#160;</t><br/>" + _footText);
};

if (_showVehicles) then {
	_vehicleBody ctrlSetStructuredText parseText ("<t size='0.5'>&#160;</t><br/>" + _vehicleText);

	//Ohne Infantrie rutscht die Fahrzeugübersicht nach oben
	private _offset = [0, 0.16] select _showInfantry;
	_vehicleHeader ctrlSetPosition [0.0125, 0.02 + _offset, 0.4375, 0.04];
	_vehicleBody ctrlSetPosition [0.0125, 0.06 + _offset, 0.4375, 0.1];
	_vehicleHeader ctrlCommit 0.05;
	_vehicleBody ctrlCommit 0.05;
};

getMousePosition params ["_mouseX", "_mouseY"];
_tooltip ctrlSetPosition [_mouseX, _mouseY + 0.05];
_tooltip ctrlCommit 0;
