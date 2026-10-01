params ["_spawnerType","_landingpad"];
createDialog "RB205_spawnVehicleDialog";
uiNamespace setVariable ["RB205_VehicleSpawnerVariableName", _landingpad];
private _ctrlDisplay = findDisplay 205500;
private _ctrlOnlyAvailableCheckbox = _ctrlDisplay displayCtrl 205513;
private _checked = profilenamespace getVariable ["RB205_VehicleSpawner_ShowOnlyAvailableCheckboxChecked", false];
//Die Arma 3 funktion onCheckedChanged gibt 0 und 1 zurück daher hier die übersetzung in true/false
_checked = _checked == 1;
_ctrlOnlyAvailableCheckbox cbSetChecked _checked;
_ctrlDisplay setVariable ["RB205_SpawnerType", _spawnerType];
[] call RB205_spawnerDialog_fnc_fillListNBox;
