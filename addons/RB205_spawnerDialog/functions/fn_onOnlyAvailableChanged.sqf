params ["_control", "_checked"];
profilenamespace setVariable ["RB205_VehicleSpawner_ShowOnlyAvailableCheckboxChecked", _checked];
[] call RB205_spawnerDialog_fnc_fillListNBox;
