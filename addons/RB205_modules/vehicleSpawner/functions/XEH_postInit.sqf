/*
Diese Funktion ist das Zeus Modul
*/
private _hasZen = isClass (configFile >> "CfgPatches" >> "zen_custom_modules");

if !(_hasZen) exitWith
{
	diag_log "******CBA and/or ZEN not detected. They are required for this mod.";
};

if (!hasInterface) exitWith {};

["RB205 Fahrzeugspawner", "Fahrzeugspawn begrenzen",
    {
        params [["_pos",[0,0,0],[[]],3], ["_logic",objNull,[objNull]]];
       
        _hashMap = missionNamespace getVariable ["RB205_VehicleMaxSpawns", createHashMap];
        _rb205_vehicles_all = [];
        _rb205_vehicles_all append rb205_vehicles;
        _rb205_vehicles_all = _rb205_vehicles_all + rb205_vehicles_armored + rb205_vehicles_naval + rb205_vehicles_air_transport + rb205_vehicles_air_combat + rb205_vehicles_utility;

        _rb205_vehicles_all_displayName = [];

        {
            _rb205_vehicles_all_displayName pushBack (getText (configFile >> "CfgVehicles" >> _x >> "displayName"));
        } forEach _rb205_vehicles_all;
        
        [] call RB205_vehicleSetSpawnerModule_fnc_openDialog;
    }, ""
] call zen_custom_modules_fnc_register;	