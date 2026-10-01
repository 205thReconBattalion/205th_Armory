params ["_control", "_checked"];
hint format ["%1",_checked];
profilenamespace setVariable ["RB205_VehicleSpawner_ShowOnlyAvailableCheckboxChecked", _checked];
[] call RB205_spawnerDialog_fnc_fillListNBox;
