/*
 * Author: Spark (205th Recon Battalion)
 * Deletes the AT-RT and spawns a new one to repair it,
 * once the movement is broken due to a collision with another AT-RT
 *
 * Arguments:
 * atrt: Object - The AT-RT to teleport
 *
 * Return Value:
 * None
 *
 * Example:
 * atrt call RB205_fnc_repairAfterCollisionATRT;
 */

params ["_atrt"];
private ["_class", "_spawnPosition", "_side"];

_class = typeOf _atrt;
_spawnPosition = _atrt call RB205_fnc_unstuckATRT;
_side = side _atrt;

deleteVehicle _atrt;

_class createUnit [_spawnPosition, createGroup _side];