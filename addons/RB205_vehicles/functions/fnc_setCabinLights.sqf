/*
 * Original author: DartRuffian
 * Macro-free adaptation for RB205_vehicles.
 *
 * Arguments: [vehicle <OBJECT>, mode <NUMBER> = 0]
 * Modes: 0 = off, 1 = red, 2 = green
 * Returns: nil
 * Example: [_vehicle, 1] call RB205_vehicles_fnc_setCabinLights;
 *
 * Call once on the initiating machine, not once per client.
 * Pilot access is checked by the ACE menu. Scripts may call this function too.
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_mode", 0, [0]]
];

if (isNull _vehicle) exitWith {};
if !(_mode in [0, 1, 2]) exitWith {
    diag_log format ["[RB205_vehicles] Invalid cabin light mode: %1", _mode];
};
if (_mode != 0 && {!alive _vehicle}) exitWith {};

private _lightPositions = _vehicle call RB205_vehicles_fnc_getCabinLightPositions;
if (_lightPositions isEqualTo []) exitWith {};

private _color = switch (_mode) do {
    case 1: {[1, 0, 0]};
    case 2: {[0, 1, 0]};
    default {[]};
};

private _previousMode = _vehicle getVariable ["RB205_vehicles_cabinLightMode", 0];
_vehicle setVariable ["RB205_vehicles_cabinLightMode", _mode, true];

private _eventName = "RB205_vehicles_removeCabinLights";
private _eventArguments = [_vehicle];
if (_mode != 0) then {
    _eventName = "RB205_vehicles_createCabinLights";
    _eventArguments = [_vehicle, _color];
};

if (isMultiplayer) then {
    // The same ID is used for every mode of this vehicle, including off.
    // A later change replaces its previous JIP event instead of adding another.
    private _jipID = format ["RB205_vehicles_cabinLights_%1", netId _vehicle];
    [_eventName, _eventArguments, _jipID] call CBA_fnc_globalEventJIP;
    [_jipID, _vehicle] call CBA_fnc_removeGlobalEventJIP;
} else {
    [_eventName, _eventArguments] call CBA_fnc_localEvent;
};

// A separate live event prevents an old signal from being replayed on JIP.
// Reapplying the same mode or switching the lights off is silent.
if (_mode in [1, 2] && {_mode isNotEqualTo _previousMode}) then {
    ["RB205_vehicles_cabinLightSignal", [_vehicle, _mode]] call CBA_fnc_globalEvent;
};

nil;
