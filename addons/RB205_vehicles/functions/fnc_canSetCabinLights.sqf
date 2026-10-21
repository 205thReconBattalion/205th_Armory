/*
 * Original author: DartRuffian
 * Macro-free adaptation for RB205_vehicles.
 *
 * Arguments: [vehicle <OBJECT>, player <OBJECT>]
 * Returns: <BOOL>
 * Example: [_vehicle, player] call RB205_vehicles_fnc_canSetCabinLights;
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_player", objNull, [objNull]]
];

if (isNull _vehicle || {isNull _player}) exitWith {false};
if (!alive _vehicle) exitWith {false};
if (objectParent _player isNotEqualTo _vehicle) exitWith {false};

//if (_player isNotEqualTo (currentPilot _vehicle)) exitWith {false};

private _lightPositions = _vehicle call RB205_vehicles_fnc_getCabinLightPositions;
if (_lightPositions isEqualTo []) exitWith {false};

private _copilotTurret = [_vehicle] call ace_common_fnc_getTurretCopilot;

private _isPilotOrCopilot =
    _player isEqualTo (driver _vehicle) || {
        _player isEqualTo (_vehicle turretUnit _copilotTurret)
    };

switch (missionNamespace getVariable ["RB205_vehicles_cabinLightAccess", 0]) do {
    case 0: {true};
    case 1: {
        _isPilotOrCopilot ||
        {_player isEqualTo (leader group _player)}
    };
    case 2: {_isPilotOrCopilot};
    default {false};
};
