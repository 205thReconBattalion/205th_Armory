params ["_spawnerType","_landingpad"];
createDialog "RB205_spawnVehicleDialog";
private _ctrlDisplay = findDisplay 205500;
private _ctrlListNBox = displayCtrl 205504;
lnbClear _ctrlListNBox;

uiNamespace setVariable ["RB205_VehicleSpawnerVariableName", _landingpad];

_row = nil;
private _vehicleList = [];
switch (_spawnerType) do {
    case "vehicles": { _vehicleList = ([rb205_vehicles] call RB205_spawnerDialog_fnc_createVehicleArray); };
    case "vehiclesArmored": { _vehicleList = ([rb205_vehicles_armored] call RB205_spawnerDialog_fnc_createVehicleArray); };
    case "airTransport": { _vehicleList = ([rb205_vehicles_air_transport] call RB205_spawnerDialog_fnc_createVehicleArray); };
    case "airCombat": { _vehicleList = ([rb205_vehicles_air_combat] call RB205_spawnerDialog_fnc_createVehicleArray); };
    case "naval": { _vehicleList = ([rb205_vehicles_naval] call RB205_spawnerDialog_fnc_createVehicleArray); };
    case "utility": { _vehicleList = ([rb205_vehicles_utility] call RB205_spawnerDialog_fnc_createVehicleArray); };
    default { hint "Spawnertyp nicht gesetzt"; };
};

_vehicleMaxSpawnsHashMap = missionNamespace getVariable["RB205_VehicleMaxSpawns", createHashMap];

{
    _anzahlVerfuegbar = "";
        _varNameVehicleMaxSpawns = format ["%1_VehicleMaxSpawns", toUpper (_x select 0)];
        _anzahlVerfuegbar = _vehicleMaxSpawnsHashMap getOrDefault [_varNameVehicleMaxSpawns, -1];
        if (_anzahlVerfuegbar == -1) then {
            _anzahlVerfuegbar = "∞";
        } else {
            _anzahlVerfuegbar = str _anzahlVerfuegbar;
        };
    _row = _ctrlListNBox lnbAddRow [_x select 1, _x select 4, _x select 2, _anzahlVerfuegbar];
    _ctrlListNBox lnbSetData [[_row, 0], _x select 0];
    _ctrlListNBox lnbSetData [[_row, 1], _x select 5];
    _ctrlListNBox lnbSetPicture [[_row, 4], _x select 3];   

} forEach _vehicleList;
