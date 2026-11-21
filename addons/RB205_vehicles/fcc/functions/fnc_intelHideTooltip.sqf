/*
 * Blendet den Tooltip aus und setzt die Beschriftung der zuletzt angezeigten Gruppe zurück.
 */

disableSerialization;

private _group = RB205_fcc_intelHoverGroup;
RB205_fcc_intelHoverGroup = grpNull;
if (!isNull _group && {RB205_fcc_intelGroups findIf {(_x select 0) isEqualTo _group} != -1}) then {
	private _color = if ((units _group) findIf {alive _x} == -1) then {
		[0, 0, 0, 0.75]
	} else {
		[side _group, false] call BIS_fnc_sideColor
	};
	_group setGroupIconParams [_color, "", 1, true];
};

private _tooltip = (uiNamespace getVariable ["RB205_fcc_intelTooltip", [controlNull]]) select 0;
if (!isNull _tooltip) then {_tooltip ctrlShow false};
