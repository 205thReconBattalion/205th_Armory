/*
 * Author: Spark (205th Recon Battalion)
 * Repairs the AT-RT by deleting the unit and spawning a new one
 *
 * Arguments:
 * atrt: Object - The AT-RT to teleport
 *
 * Return Value:
 * None
 *
 * Example:
 * atrt call RB205_fnc_repairATRT;
 */

params ["_atrt"];
private ["_class", "_position", "_side", "_direction"];

_class = typeOf _atrt;
_position = getPos _atrt;
_side = WEST; //TODO: getSide before death
_direction = getDir _atrt ;

deleteVehicle _atrt;

_atrtNew = (createGroup _side) createUnit [_class, _position, [], 0, "NONE"];
_atrtNew setDir _direction;