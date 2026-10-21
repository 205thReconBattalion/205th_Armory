/*
 * Original author: DartRuffian
 * Macro-free adaptation for RB205_vehicles.
 *
 * Argument: vehicle <OBJECT|STRING>; [vehicle] is also accepted.
 * Returns: light positions in model coordinates <ARRAY>
 * Example: _vehicle call RB205_vehicles_fnc_getCabinLightPositions;
 * Example: "MyVehicleClass" call RB205_vehicles_fnc_getCabinLightPositions;
 *
 * Read directly from config, so no external cache initialization is required.
 */

params [["_vehicle", objNull, [objNull, ""]]];

private _vehicleClass = if (_vehicle isEqualType objNull) then {
    typeOf _vehicle
} else {
    _vehicle
};

getArray (configFile >> "CfgVehicles" >> _vehicleClass >> "RB205_vehicles_cabinLightPositions");
