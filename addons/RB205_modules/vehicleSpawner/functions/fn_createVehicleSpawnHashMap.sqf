/*
Diese Funktion erstellt eine aus den angegeben VehicleList eine HashMap in welcher alle Fahrzeuge unendlich spawns haben (-1)
*/ 

private _rb205_vehicles_all = [];
_rb205_vehicles_all append rb205_vehicles;
_rb205_vehicles_all = _rb205_vehicles_all + rb205_vehicles_armored + rb205_vehicles_naval + rb205_vehicles_air_transport + rb205_vehicles_air_combat + rb205_vehicles_utility;

private _fahrzeugAnzahlHashMap = createHashMap;

{
    private _varName = (toUpper _x) + "_VehicleMaxSpawns";
    _fahrzeugAnzahlHashMap set [_varName, -1];
} forEach _rb205_vehicles_all;

missionNamespace setVariable ["RB205_VehicleMaxSpawns", _fahrzeugAnzahlHashMap, true];
publicVariable "RB205_VehicleMaxSpawns";