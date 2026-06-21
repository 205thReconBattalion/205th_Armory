createDialog "RB205_limitVehicleSpawnsDialog";
private _ctrlDisplay = findDisplay 205520;
private _ctrlComboBox = displayCtrl 205521;


private _vehicleList = [];
_vehicleList = rb205_vehicles + rb205_vehicles_armored + rb205_vehicles_naval + rb205_vehicles_air_transport + rb205_vehicles_air_combat + rb205_vehicles_utility;
{
    _entry = _ctrlComboBox lbAdd (getText (configFile >> "CfgVehicles" >> _className >> "displayName"));
    _ctrlComboBox lbSetData [_entry, _x];

} forEach _vehicleList;
