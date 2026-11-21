/*
 * Mauszeiger betritt das Symbol einer Gruppe (onGroupIconOverEnter).
 * Liegen mehrere Symbole übereinander, wird das zuletzt betretene angezeigt.
 *
 * Arguments:
 * 0: Gruppe <GROUP>
 */

#define MAX_DISTANCE 0.04                                                                           //Anteil der Bildschirmhöhe

params [["_group", grpNull, [grpNull]]];

disableSerialization;
if (!RB205_fcc_intelActive || {!visibleMap} || {isNull _group}) exitWith {};
if (RB205_fcc_intelGroups findIf {(_x select 0) isEqualTo _group} == -1) exitWith {};

//Zusätzlich prüfen, ob das Symbol wirklich unter dem Mauszeiger liegt (Symbol sitzt am Gruppenführer)
private _map = (findDisplay 12) displayCtrl 51;
private _leader = leader _group;
private _isNearMouse = true;
if (!isNull _map && {!isNull _leader}) then {
	(_map ctrlMapWorldToScreen getPosVisual vehicle _leader) params ["_iconX", "_iconY"];
	getMousePosition params ["_mouseX", "_mouseY"];
	private _distance = sqrt (((_iconX - _mouseX) / pixelW) ^ 2 + ((_iconY - _mouseY) / pixelH) ^ 2);
	_isNearMouse = _distance <= MAX_DISTANCE * safeZoneH / pixelH;
};
if (!_isNearMouse) exitWith {};

RB205_fcc_intelHoverGroups = (RB205_fcc_intelHoverGroups - [_group, grpNull]) + [_group];
[_group] call RB205_fcc_fnc_intelShowTooltip;
