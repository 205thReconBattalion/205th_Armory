params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

if !(local _unit) exitwith {};

if (_weapon isEqualTo "RB205_T7ION") then 
{
	_projectile addEventHandler ["HitPart", {
		params ["_projectile", "_hitEntity", "_projectileOwner", "_pos", "_velocity", "_normal", "_components", "_radius" ,"_surfaceType"];
		if !(_hitEntity isKindOf "Man") exitwith {};
		["rb205_disintegrateEvent", [_hitEntity,_projectileOwner]] call CBA_fnc_globalEvent; 
		deleteVehicle _projectile;
	}];
};