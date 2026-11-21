/*
 * Karten-Intel ausblenden, z.B. wenn der Spieler das FCC verlässt. Nur lokal auf dem Client.
 */

{
	_x params ["_group"];
	if (!isNull _group) then {clearGroupIcons _group};
} forEach RB205_fcc_intelGroups;
RB205_fcc_intelGroups = [];

{deleteMarkerLocal _x} forEach RB205_fcc_intelRadarMarkers;
RB205_fcc_intelRadarMarkers = [];

{deleteMarkerLocal (_x select 0)} forEach RB205_fcc_intelTracers;
RB205_fcc_intelTracers = [];

setGroupIconsVisible [false, false];
setGroupIconsSelectable false;
onGroupIconOverEnter "";
onGroupIconOverLeave "";
RB205_fcc_intelHoverGroups = [];
call RB205_fcc_fnc_intelHideTooltip;

private _checkbox = uiNamespace getVariable ["RB205_fcc_intelCheckbox", controlNull];
if (!isNull _checkbox) then {_checkbox ctrlShow false};

RB205_fcc_intelActive = false;
