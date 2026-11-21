// Raises the ion event matching the type of the object. Returns true if the object is affected.
params ["_target", "_owner", ["_isDirectHit", false]];

private _vehicleTypes = ["Car","Motorcycle","UAV","Tank","Air","HeliH","Ship","Lamps","Helicopter","Plane","Autonomous","Armored"];

if ((_vehicleTypes findIf {_target isKindOf _x}) != -1) exitWith {
	["rb205_ion_disableVehicleEvent", [_target,_owner]] call CBA_fnc_globalEvent;
	true
};

if (_target isKindOf "StaticWeapon") exitWith {
	["rb205_ion_disableTurretEvent", [_target,_owner]] call CBA_fnc_globalEvent;
	true
};

if (_target isKindOf "Man") exitWith {
	["rb205_ion_electrocuteEvent", [_target,_owner,_isDirectHit]] call CBA_fnc_globalEvent;
	true
};

false
