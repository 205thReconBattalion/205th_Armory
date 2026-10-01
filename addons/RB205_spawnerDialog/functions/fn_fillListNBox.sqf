private _ctrlDisplay = findDisplay 205500;
if (isNull _ctrlDisplay) exitWith {};
private _spawnerType = _ctrlDisplay getVariable ["RB205_SpawnerType", ""];
private _ctrlListNBox = _ctrlDisplay displayCtrl 205504;
private _ctrlOnlyAvailableVehiclesCheckbox = _ctrlDisplay displayCtrl 205513;
private _selectedVehicle = _ctrlListNBox lnbData [lnbCurSelRow _ctrlListNBox, 0];
lnbClear _ctrlListNBox;
lnbClear (_ctrlDisplay displayCtrl 205512);
//(_ctrlDisplay displayCtrl 205505) ctrlSetStructuredText parseText "";

private _selectedRow = -1;
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

private _vehicleMaxSpawnsHashMap = missionNamespace getVariable["RB205_VehicleMaxSpawns", createHashMap];

{
    private _varNameVehicleMaxSpawns = format ["%1_VehicleMaxSpawns", toUpper (_x select 0)];
    private _anzahlVerfuegbar = _vehicleMaxSpawnsHashMap getOrDefault [_varNameVehicleMaxSpawns, -1];
    if (!(cbChecked _ctrlOnlyAvailableVehiclesCheckbox) || {_anzahlVerfuegbar != 0}) then {
        private _remainingText = if (_anzahlVerfuegbar == -1) then { "∞" } else { str _anzahlVerfuegbar };
        private _row = _ctrlListNBox lnbAddRow [_x select 1, _x select 4, _x select 2, _remainingText, ""];
        _ctrlListNBox lnbSetData [[_row, 0], _x select 0];
        _ctrlListNBox lnbSetData [[_row, 1], _x select 5];
        _ctrlListNBox lnbSetPicture [[_row, 4], _x select 3];
    };
} forEach _vehicleList;
