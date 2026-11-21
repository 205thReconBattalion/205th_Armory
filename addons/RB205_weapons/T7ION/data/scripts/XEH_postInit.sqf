// The rb205_ion_* events are raised with CBA_fnc_globalEvent, so every handler runs on every machine.
// Sparks are local and run everywhere; everything with a global effect must run on one machine only.

["rb205_ion_electrocuteEvent", {
	params ["_target","_projectileOwner","_isDirectHit"];

	[_target] call RB205_T7ION_fnc_ionSparks;

	// The killer and instigator arguments of setDamage only count when it runs on the server.
	if (!isServer) exitWith {};

	if (_isDirectHit) then {
		[_target] call RB205_T7ION_fnc_spawnCrater;
	};

	createVehicle ["RB205_T7ION_electrocuteGrenade", getPosATL _target];
	_target setDamage [1,true,_projectileOwner,_projectileOwner];
	[{hideObjectGlobal _this}, _target, 1] call CBA_fnc_waitAndExecute;
}] call CBA_fnc_addEventHandler;

["rb205_ion_disableVehicleEvent", {
	params ["_target"];

	[_target] call RB205_T7ION_fnc_ionSparks;

	// The owner of the vehicle applies the damage and is the only one to advance the hit counter.
	if (!local _target) exitWith {};

	// Lower case, because the hit point names are compared with "in", which is case sensitive.
	private _weaponHitPoints = ["hitturret","hitcomturret","hitgun","hitcomgun"];
	private _lightHitPoints = ["#light_hitpoint","hitbatteries","hitlight","#light_l","#light_r","#light_l_flare","#light_r_flare","light_l","light_r","light_l2","light_r2"];
	private _driveHitPoints = ["hitengine","hitengine1","hitengine2","hitengine3","hitavionics","hithrotor","hitvrotor","hithydraulics","hithstabilizerl1","hithstabilizerr1","hitvstabilizer1"];

	// setHitPointDamage sets absolute values, so existing damage must never be lowered.
	private _fnc_raiseDamage = {
		params ["_hitPoints","_damage"];

		getAllHitPointsDamage _target params [["_names",[]],"",["_values",[]]];
		{
			if (toLower _x in _hitPoints) then {
				_target setHitPointDamage [_x, (_values select _forEachIndex) max _damage];
			};
		} forEach _names;
	};

	private _fnc_disableLights = {
		[_lightHitPoints,1] call _fnc_raiseDamage;
		_target disableAI "LIGHTS";
		_target setPilotLight false;
		_target setCollisionLight false;
		_target setHit ["light_1_hitpoint", 0.97]; //all possible light hitpoints
		_target setHit ["light_2_hitpoint", 0.97]; //no lights escape this
		_target setHit ["light_3_hitpoint", 0.97];
		_target setHit ["light_4_hitpoint", 0.97];
	};

	// Class names from the addon options. isKindOf also covers everything inheriting from them.
	private _largeVehicles = RB205_T7ION_largeVehicles splitString ", ";

	if ((_largeVehicles findIf {_target isKindOf _x}) == -1) exitWith {
		[_weaponHitPoints,1] call _fnc_raiseDamage;
		call _fnc_disableLights;
		[_driveHitPoints,1] call _fnc_raiseDamage;
		_target setVehicleAmmo 0;
	};

	// Large vehicles go through three stages and then start over, so a repaired vehicle can be disabled again.
	private _hitCounter = _target getVariable ["RB205_ION_hitCounter", 0];
	_target setVariable ["RB205_ION_hitCounter", (_hitCounter + 1) % 3, true];

	switch (_hitCounter) do
	{
		case 0: {
			call _fnc_disableLights;
			[_driveHitPoints,0.5] call _fnc_raiseDamage;
		};
		case 1: {
			[_weaponHitPoints,0.5] call _fnc_raiseDamage;
		};
		case 2: {
			[_weaponHitPoints,1] call _fnc_raiseDamage;
			[_driveHitPoints,1] call _fnc_raiseDamage;
			_target setVehicleAmmo 0;
		};
	};
}] call CBA_fnc_addEventHandler;

["rb205_ion_disableTurretEvent", {
	params ["_target","_projectileOwner"];

	[_target] call RB205_T7ION_fnc_ionSparks;

	// The killer and instigator arguments of setDamage only count when it runs on the server.
	if (!isServer) exitWith {};

	_target setDamage [1,true,_projectileOwner,_projectileOwner];
}] call CBA_fnc_addEventHandler;

// The charging sounds are raised by the shooter and have to be audible for everyone nearby.
["rb205_ion_chargeSoundEvent", {
	params ["_unit","_sound","_pitch"];

	if (!hasInterface) exitWith {};

	deleteVehicle (_unit getVariable ["RB205_T7ION_chargeSoundSource", objNull]);
	_unit setVariable ["RB205_T7ION_chargeSoundSource", _unit say3D [_sound, 75, _pitch]];
}] call CBA_fnc_addEventHandler;

["rb205_ion_chargeSoundStopEvent", {
	params ["_unit"];

	deleteVehicle (_unit getVariable ["RB205_T7ION_chargeSoundSource", objNull]);
}] call CBA_fnc_addEventHandler;

// Only the unit controlled by the player gets the charge mechanic, AI keeps firing directly.
// Variables survive a respawn, so the unit itself is stored to recognize a new body.
["unit", {
	params ["_unit"];

	if (isNull _unit || {(_unit getVariable ["RB205_T7ION_chargeActionUnit", objNull]) == _unit}) exitWith {};
	_unit setVariable ["RB205_T7ION_chargeActionUnit", _unit];

	[
		_unit,
		"DefaultAction",
		{[_this select 1] call RB205_T7ION_fnc_chargeBlocksFire},
		{[_this select 1] call RB205_T7ION_fnc_chargeStart}
	] call ace_common_fnc_addActionEventHandler;
}, true] call CBA_fnc_addPlayerEventHandler;

// TEMPORARY: logs T-7 reloads to the RPT. Remove together with fn_debugReload.sqf.
if (hasInterface) then {
	[RB205_T7ION_fnc_debugReload, 0.05, [-1, ""]] call CBA_fnc_addPerFrameHandler;
};

["ace_firedPlayer", {
	call RB205_T7ION_fnc_onFired;
	}] call CBA_fnc_addEventHandler;

["ace_firedNonPlayer", {
	call RB205_T7ION_fnc_onFired;
	}] call CBA_fnc_addEventHandler;
