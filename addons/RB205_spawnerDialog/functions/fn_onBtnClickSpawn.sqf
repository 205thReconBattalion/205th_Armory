private _ctrlDisplay = findDisplay 205500;
private _ctrlListNBox = _ctrlDisplay displayCtrl 205504;
private _ctrlSkinSelection = _ctrlDisplay displayCtrl 205512;
private _selectedSkin = _ctrlSkinSelection lnbData [lnbCurSelRow _ctrlSkinSelection, 0];
private _row = lnbCurSelRow _ctrlListNBox;
private _vehicleClassName = _ctrlListNBox lnbData [_row, 0];


private _spawnPossible = true;
RB205_VehicleMaxSpawns = missionNamespace getVariable["RB205_VehicleMaxSpawns", createHashMap];

if ((count RB205_VehicleMaxSpawns) > 0) then {
    _varNameVehicleMaxSpawns = format ["%1_VehicleMaxSpawns", toUpper _vehicleClassName];
    _anzahlVerfuegbar = RB205_VehicleMaxSpawns getOrDefault [_varNameVehicleMaxSpawns, -1];
    if (_anzahlVerfuegbar == 0) exitwith {
        ["<t align='center' size='1.5' color='#7A120C' shadow='1'><br/>FEHLER</t><t align='center' size='1' color='#2EB8FF' shadow='1'><br/><br/>Dieses Fahrzeug befindet<br/>sich nicht mehr im Lager!</t>",[]] call RB205_notification_fnc_openDialog;
        _spawnPossible = false;
    };

    if (_anzahlVerfuegbar > 0) then {
        _anzahlVerfuegbar = _anzahlVerfuegbar - 1;
        RB205_VehicleMaxSpawns set [_varNameVehicleMaxSpawns,_anzahlVerfuegbar];
        publicVariable "RB205_VehicleMaxSpawns";
    };
};

if (_spawnPossible) then {
    _landingPad = uiNamespace getVariable ["RB205_VehicleSpawnerVariableName",objNull];
    _landingPad = missionNamespace getVariable [_landingPad,objNull];

    _pos = nil;
    if (surfaceIsWater position _landingPad)
    then {
        _pos = getPosASL _landingPad;
    }
    else {
        _pos = getPosATL _landingPad;
    };

    _dir = getDir _landingPad;
    _veh = createVehicle [_vehicleClassName, _pos, [], 0, "CAN_COLLIDE"];

    _veh setDir _dir;
    [_veh, [_selectedSkin, 1], true] call BIS_fnc_initVehicle;
    private _tagVehicleClass = format ["RB205_VehicleSpawner_%1", _vehicleClassName];
    profilenamespace setVariable [_tagVehicleClass, _selectedSkin];
    closeDialog 0;
};
