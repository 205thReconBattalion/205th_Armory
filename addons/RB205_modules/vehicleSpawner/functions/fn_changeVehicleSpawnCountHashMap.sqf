/*
Diese Methode ändert einen Einzelnen Wert mithilfe vom Klassennamen und der neuen Anzahl
*/
private _ctrlDisplay = displayCtrl 205520;
private _ctrlListNBox = displayCtrl 205521;
private _ctrlText = displayCtrl 205524;

_newCount = ctrlText _ctrlText;
_newCount = trim _newCount;
RB205_VehicleMaxSpawns = missionNamespace getVariable ["RB205_VehicleMaxSpawns", createHashMap];

private _curSelRow = lbCurSel _ctrlListNBox;
private _className = _ctrlListNBox lnbData [_curSelRow,0];
_className = (toUpper _className) + "_VehicleMaxSpawns";

if (count RB205_VehicleMaxSpawns == 0) then {
    call RB205_vehicleSetSpawnerModule_fnc_createVehicleSpawnHashMap;
};


if (_newCount == "0" ) then {
    _newCount = 0;
} else {
    if ((parseNumber _newCount) == 0) then {
        hint "Ungültiger Wert in Anzahl Spawns: ";
        _newCount = RB205_VehicleMaxSpawns get _className;
    } else {
        _newCount = parseNumber _newCount;
    };
};

_ctrlListNBox lnbSetText [[_curSelRow,1], str _newCount];

RB205_VehicleMaxSpawns set [_className, _newCount];
publicVariable "RB205_VehicleMaxSpawns";
