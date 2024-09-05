/*
 * Author: Spark (205th Recon Battalion)
 * Puts the carbonite in an upright position
 *
 * Arguments:
 * carbonite: Object - The carbonite to put up
 *
 * Return Value:
 * None
 *
 * Example:
 * carbonite call RB205_fnc_rotateCarbonite;
 */

params ["_carbonite"];

_curPos = getPosASL _carbonite;
_pos = [(_curPos select 0),(_curPos select 1),(_curPos select 2)+0.6];
_dir = getDir _carbonite;

_carbonite setPosASL _pos;
[_carbonite, [_dir,90,0]] call BIS_fnc_setObjectRotation;