//hint "Test1";
private _ctrlDisplay = findDisplay 205500;
private _ctrlListNBox = _ctrlDisplay displayCtrl 205504;
_row = lnbCurSelRow _ctrlListNBox;
_vehicleClassName = _ctrlListNBox lnbData [_row, 0];


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
closeDialog 0;