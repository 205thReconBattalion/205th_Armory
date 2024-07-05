/*
 * Author: Spark (205th Recon Battalion)
 * Teleports the AT-RT backwards in order to get it unstuck from bushes etc.
 *
 * Arguments:
 * atrt: Object - The AT-RT to teleport
 *
 * Return Value:
 * New AT-RT position
 *
 * Example:
 * atrt call RB205_fnc_unstuckATRT;
 */

#define TELEPORT_LENGTH 2

params ["_atrt"];
private ["_direction", "_position", "_positionAfterTeleport"];

_direction = getDir _atrt;
_position = getPos _atrt;
_positionAfterTeleport = _position;

switch (true) do {
    case (_direction <= 45) : {
        _positionAfterTeleport = [(_position select 0), (_position select 1) - TELEPORT_LENGTH, (_position select 2)]
    };
    case ((_direction > 45) && (_direction <= 135)) : {
        _positionAfterTeleport = [(_position select 0) - TELEPORT_LENGTH, (_position select 1), (_position select 2)]
    };
    case ((_direction > 135) && (_direction <= 225)) : {
        _positionAfterTeleport = [(_position select 0), (_position select 1) + TELEPORT_LENGTH, (_position select 2)]
    };
    case ((_direction > 225) && (_direction <= 315)) : {
        _positionAfterTeleport = [(_position select 0) + TELEPORT_LENGTH, (_position select 1), (_position select 2)]
    };
    case (_direction > 315) : {
        _positionAfterTeleport = [(_position select 0), (_position select 1) - TELEPORT_LENGTH, (_position select 2)]
    };
};
_atrt setPos _positionAfterTeleport;

_positionAfterTeleport;