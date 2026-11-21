/*
 * Mauszeiger verlässt das Symbol einer Gruppe (onGroupIconOverLeave).
 * Liegt der Zeiger noch über einem anderen Symbol, wird dessen Tooltip angezeigt.
 *
 * Arguments:
 * 0: Gruppe <GROUP>
 */

params [["_group", grpNull, [grpNull]]];

RB205_fcc_intelHoverGroups = RB205_fcc_intelHoverGroups select {
	private _hoverGroup = _x;
	!isNull _hoverGroup
	&& {_hoverGroup isNotEqualTo _group}
	&& {RB205_fcc_intelGroups findIf {(_x select 0) isEqualTo _hoverGroup} != -1}
};

if (_group isNotEqualTo RB205_fcc_intelHoverGroup) exitWith {};

if (RB205_fcc_intelHoverGroups isEqualTo []) then {
	call RB205_fcc_fnc_intelHideTooltip;
} else {
	[RB205_fcc_intelHoverGroups select -1] call RB205_fcc_fnc_intelShowTooltip;
};
