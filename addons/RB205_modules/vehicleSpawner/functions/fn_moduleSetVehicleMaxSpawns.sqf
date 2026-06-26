/*
Diese Funktion ist für das Eden Modul und erstellt für jeden Eintrag die angegebene MissionNamespace/HashMap eintrag
*/
params ["_logic", "_units", "_activated"];

private _rb205_vehicles_all = [];
_rb205_vehicles_all append rb205_vehicles;
_rb205_vehicles_all = _rb205_vehicles_all + rb205_vehicles_armored + rb205_vehicles_naval + rb205_vehicles_air_transport + rb205_vehicles_air_combat + rb205_vehicles_utility;

_fahrzeugAnzahlHashMap = createHashMap;

{
    private _varName = (toUpper _x) + "_VehicleMaxSpawns";
    _fahrzeugAnzahlSpawns = _logic getVariable [_varName,-1];
    _fahrzeugAnzahlHashMap set [_varName, _fahrzeugAnzahlSpawns];
    
    
} forEach _rb205_vehicles_all;

missionNamespace setVariable ["RB205_VehicleMaxSpawns", _fahrzeugAnzahlHashMap, true];
