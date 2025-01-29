params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

if !(local _unit) exitwith {};

if (_weapon isEqualTo "RB205_T7ION") then 
{
	_projectile addEventHandler ["HitPart", {
		params ["_projectile", "_hitEntity", "_projectileOwner", "_pos", "_velocity", "_normal", "_components", "_radius" ,"_surfaceType"];

		if !((_hitEntity isKindOf "Car") or (_hitEntity isKindOf "Motorcycle") or (_hitEntity isKindOf "UAV") or (_hitEntity isKindOf "Tank") or (_hitEntity isKindOf "Air") or (_hitEntity isKindOf "HeliH") or (_hitEntity isKindOf "Ship") or (_hitEntity isKindOf "Lamps") or (_hitEntity isKindOf "Helicopter") or (_hitEntity isKindOf "Plane") or (_hitEntity isKindOf "Autonomous") or (_hitEntity isKindOf "Armored")) exitwith
		{
			if !((_hitEntity isKindOf "StaticWeapon")) exitwith
			{			
				if !(_hitEntity isKindOf "Man") exitwith {};
				["rb205_ion_electrocuteEvent", [_hitEntity,_projectileOwner]] call CBA_fnc_globalEvent;
				deleteVehicle _projectile;
			};
			["rb205_ion_disableTurretEvent", [_hitEntity,_projectileOwner]] call CBA_fnc_globalEvent;
			deleteVehicle _projectile;
		};
		["rb205_ion_disableVehicleEvent", [_hitEntity,_projectileOwner]] call CBA_fnc_globalEvent;
		deleteVehicle _projectile;
	}];
};