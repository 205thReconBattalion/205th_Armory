/*
Dieser Dialog ist für die begrenzung einzelner Fahrzeuge
*/
createDialog "RB205_limitVehicleSpawnsDialog";
private _ctrlDisplay = findDisplay 205520;
private _ctrlListBox = _ctrlDisplay displayCtrl 205521;

_var = "";
private _vehicleList = [];
_vehicleList = rb205_vehicles + rb205_vehicles_armored + rb205_vehicles_naval + rb205_vehicles_air_transport + rb205_vehicles_air_combat + rb205_vehicles_utility;
{
	_hashMap = missionNamespace getVariable ["RB205_VehicleMaxSpawns", createHashMap];
	_var = (toUpper _x) + "_VehicleMaxSpawns";
	_value = _hashMap getOrDefault [_var,"-1"];
	_name = (getText (configFile >> "CfgVehicles" >> _x >> "displayName"));
	_entry = _ctrlListBox lnbAddRow [_name, str _value];
	_ctrlListBox lnbSetData [[_entry,0], _x];
	

} forEach _vehicleList;
