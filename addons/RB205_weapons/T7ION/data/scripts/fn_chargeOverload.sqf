// The trigger was held too long: the charge is lost and the EMP goes off at the shooter, who dies with it.
params ["_unit"];

_unit setAmmo [currentMuzzle _unit, 0];

createVehicle ["RB205_T7ION_overloadBlast", getPosATL _unit];

private _targets = _unit nearEntities [["Man","Air","Car","Motorcycle","Tank","Ship","StaticWeapon"], 5];
_targets pushBackUnique _unit;

{
	[_x, _unit] call RB205_T7ION_fnc_applyIon;
} forEach _targets;
