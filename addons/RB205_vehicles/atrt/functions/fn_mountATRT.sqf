/*
 * Author: Spark (205th Recon Battalion)
 * Manages player mountint an AT-RT
 *
 * Arguments:
 * atrt: Object - the AT-RT that is being mounted
 * rider: Object - player that mounts AT-RT
 *
 * Return Value:
 * None
 *
 * Example:
 * [atrt, rider] call RB205_fnc_mountATRT;
 */

params ["_atrt","_rider"];
private ["_class", "_position", "_side", "_direction"];

_class = typeOf _atrt;
_position = getPos _atrt;
_side = WEST; //TODO: getSide before death
_direction = getDir _atrt ;

deleteVehicle _atrt;

_atrtNew = (createGroup _side) createUnit [_class, _position, [], 0, "NONE"];
_atrtNew setDir _direction;