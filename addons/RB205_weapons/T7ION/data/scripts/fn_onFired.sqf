params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

if !(local _unit) exitwith {};

if (_weapon isEqualTo "RB205_T7ION") then
{
	_projectile addEventHandler ["HitPart", {
		params ["_projectile", "_hitEntity", "_projectileOwner", "_pos", "_velocity", "_normal", "_components", "_radius" ,"_surfaceType"];

		// A round can hit several surfaces, the EMP only goes off at the first one.
		if !(_projectile getVariable ["RB205_T7ION_empDone", false]) then
		{
			_projectile setVariable ["RB205_T7ION_empDone", true];
			[_pos vectorAdd (_normal vectorMultiply 0.2), _projectileOwner, _hitEntity] call RB205_T7ION_fnc_empBlast;
		};

		if ([_hitEntity,_projectileOwner,true] call RB205_T7ION_fnc_applyIon) then
		{
			deleteVehicle _projectile;
		};
	}];
};
