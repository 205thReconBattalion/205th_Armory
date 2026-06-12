params ["_spawnerType"];
createDialog "RB205_spawnVehicleDialog";
private _ctrlDisplay = findDisplay 205500;
private _ctrlListNBox = displayCtrl 205504;
lnbClear _ctrlListNBox;

call compile preprocessFileLineNumbers "\RB205_spawnerDialog\functions\VehicleList.sqf";
private _row;
private _vehicleList = [];
switch (_spawnerType) do {
    case "vehicles": { _vehicleList = ([rb205_vehicles] call RB205_spawnerDialog_fnc_createVehicleArray); };
    case "vehiclesArmored": { _vehicleList = ([rb205_vehicles_armored] call RB205_spawnerDialog_fnc_createVehicleArray); };
    case "airTransport": { _vehicleList = ([rb205_vehicles_air_transport] call RB205_spawnerDialog_fnc_createVehicleArray); };
    case "airCombat": { _vehicleList = ([rb205_vehicles_air_combat] call RB205_spawnerDialog_fnc_createVehicleArray); };
    case "naval": { _vehicleList = ([rb205_vehicles_naval] call RB205_spawnerDialog_fnc_createVehicleArray); };
    default { hint "Spawnertyp nicht gesetzt"; };
};

{
    _row = _ctrlListNBox lnbAddRow [_x select 1, _x select 4, _x select 2];
    _ctrlListNBox lnbSetData [[_row, 0], _x select 0];
    _ctrlListNBox lnbSetData [[_row, 1], _x select 5];

    _ctrlListNBox lnbSetPicture [[_row, 3], _x select 3];    
} forEach _vehicleList;
