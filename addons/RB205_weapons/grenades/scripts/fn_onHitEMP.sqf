/*
 * Author: MrClock (edited by Spark)
 * EMP ammo hit handler
 *
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Unit <OBJECT>
 * 2: Ammo <STRING>
 * 3: Projectile <OBJECT>
 *
 * Example:
 * [Bob,Jack,"GrenadeHand",objNull] call JLTS_fnc_onHitEMP;
 *
 * Return Value:
 * None
 *
 */
 
#define COOLDOWN 2

params["_target", "_shooter", "_ammo","_projectile"];

//[_fnc_scriptName,_this] call JLTS_fnc_logVariables;

if ((getText(configFile >> "CfgAmmo" >> _ammo >> "simulation") != "shotBullet") && ((_projectile distance _target) > getNumber(configFile >> "CfgAmmo" >> _ammo >> "indirectHitRange"))) exitWith {/*systemChat "Out of range"*/}; 

private _weaponsTarget = weapons _target;

if (_target getVariable["JLTS_EMPCooldown",CBA_missionTime - 1] < CBA_missionTime) then {
	
	if (JLTS_settings_EMP_EMPEffectScope > 0) then {
		{
			
			if (getNumber(configFile >> "CfgWeapons" >> _x >> "JLTS_isFried") == 1) then {} else 
			{
				
				if (getNumber(configFile >> "CfgWeapons" >> _x >> "JLTS_hasElectronics") == 1 && getNumber(configFile >> "CfgWeapons" >> _x >> "JLTS_hasEMPProtection") != 1) then 
				{
					private _friedWeapon = getText(configFile >> "CfgWeapons" >> _x >> "JLTS_friedItem");
					switch (true) do {
						case (_x in uniformItems _target): {
							_target removeItemFromUniform _x;
							_target addItemToUniform _friedWeapon;
						};
						case (_x in vestItems _target): {
							_target removeItemFromVest _x;
							_target addItemToVest _friedWeapon;
						};
						case (_x in backpackItems _target): {
							_target removeItemFromBackpack _x;
							_target addItemToBackpack _friedWeapon;
						};
						default {
							switch (true) do {
								case (_x in weapons _target): {
									[_x,_target,"FRY"] call JLTS_fnc_weaponEMPEffect;
								};
								default {};
							};
						};
					};
				};
			};
		} forEach _weaponsTarget;

		if (JLTS_settings_EMP_EMPEffectScope > 1) then {
			{
				if (getNumber(configFile >> "CfgMagazines" >> _x >> "JLTS_hasElectronics") == 1 && getNumber(configFile >> "CfgMagazines" >> _x >> "JLTS_hasEMPProtection") != 1) then {
					_target removeMagazines _x;
				};
			} forEach magazines _target;
		};
		
		if (JLTS_settings_EMP_EMPEffectScope > 2) then {
			{
				if (getNumber(configFile >> "CfgWeapons" >> _x >> "JLTS_hasElectronics") == 1 && getNumber(configFile >> "CfgWeapons" >> _x >> "JLTS_hasEMPProtection") != 1) then {
					_target unassignItem _x;
				};
			} forEach assignedItems _target;
			{
				if (getNumber(configFile >> "CfgWeapons" >> _x >> "JLTS_hasElectronics") == 1 && getNumber(configFile >> "CfgWeapons" >> _x >> "JLTS_hasEMPProtection") != 1) then {
					_target removeItem _x;
				};
			} forEach items _target;
		};
	};
	
	playSound3D[
		selectRandom [
			"MRC\JLTS\weapons\Core\sounds\fried_weapon\1.wss",
			"MRC\JLTS\weapons\Core\sounds\fried_weapon\2.wss",
			"MRC\JLTS\weapons\Core\sounds\fried_weapon\3.wss",
			"MRC\JLTS\weapons\Core\sounds\fried_weapon\4.wss",
			"MRC\JLTS\weapons\Core\sounds\fried_weapon\5.wss"
		],
		_target,
		false,
		getPosASL _target,
		5,
		1,
		0
	];
	
	_target setVariable["JLTS_EMPCooldown",CBA_missionTime + COOLDOWN,true];
	
	private _uniform = uniform _target;
	private _isDroid = getNumber(configFile >> "CfgWeapons" >> _uniform >> "JLTS_isDroid");
	private _affectedUniforms = missionNamespace getVariable["JLTS_emp_affectedUniforms",[]];
	private _protectedUniforms = missionNamespace getVariable["JLTS_emp_protectedUniforms",[]];
	private _useConfig = missionNamespace getVariable["JLTS_emp_useConfig",true];

	//if ((_isDroid != 1 || (_uniform in _protectedUniforms)) && !(_uniform in _affectedUniforms)) exitWith {[_target,"HUMAN"] remoteExec ["JLTS_fnc_showHintEMP",0,true];};
	
	_toFry = false;
	
	if (_useConfig) then {
		if ((_isDroid == 1 || _uniform in _affectedUniforms) && {!(_uniform in _protectedUniforms)} && {alive _target}) then {
			_toFry = true;
		};
	} else {
		if (_uniform in _affectedUniforms && {alive _target}) then {
			_toFry = true;
		};
	};

	if (_toFry) then {
		
		[_target] spawn {
			private _timeOfHit = CBA_missionTime;
			private _useDefaultSounds = missionNamespace getVariable["JLTS_emp_useDefaultSounds",true];

			
			params ["_target"];
			private _uniform = uniform _target;
			_target stop true;

			//waitUntil {_timeOfHit + 1 < CBA_missionTime};
			_target disableAI "all";
			[_target,"DROID"] remoteExec ["JLTS_fnc_showHintEMP",0,true];
			private _delay = _timeOfHit + random[1,5,10];
			//waitUntil {_delay < CBA_missionTime};
			
			if (getText(configFile >> "CfgWeapons" >> _uniform >> "JLTS_deathSounds") != "") then {
				private _deathSoundClass = getText(configFile >> "CfgWeapons" >> _uniform >> "JLTS_deathSounds");
				private _friedSound = selectRandom getArray(configFile >> "CfgJLTSDeathSounds" >> _deathSoundClass >> "emp");
				playSound3D[_friedSound,_target,false,getPosASL _target,2,1,0];
			} else {
				if (_useDefaultSounds) then {
					private _friedSound = selectRandom getArray(configFile >> "CfgJLTSDeathSounds" >> "DeathDroid" >> "emp");
					playSound3D[_friedSound,_target,false,getPosASL _target,2,1,0];
				};
			};
			

			if (alive _target) then {
				[_target, {
					if (isDedicated) exitWith {};
					_unit_afect = _this; 
					_bbr = boundingBoxReal vehicle _unit_afect; 
					_p1 = _bbr select 0; 
					_p2 = _bbr select 1; 
					_maxWidth = abs ((_p2 select 0) - (_p1 select 0)); 
					_maxLength = abs ((_p2 select 1) - (_p1 select 1)); 
					_maxHeight = abs ((_p2 select 2) - (_p1 select 2)); 
					_e_static = "#particlesource" createVehicleLocal (getPos _unit_afect); 
					_e_static setParticleCircle [0,[0,0,0]]; 
					_e_static setParticleRandom [0.2,[_maxWidth/4,_maxLength/4,_maxHeight],[0,0,0],0,0.001,[0,0,0,1],1,0]; 
					_e_static setParticleParams [["\A3\data_f\blesk1",1,0,1],"","SpaceObject",1,0.2,[0,0,0],[0,0,0],0,10,7.9,0,[0.002,0.002],[[1,2,1,1],[1,1,1,1]],[0.08], 1, 0, "", "", _unit_afect]; 
					_e_static setDropInterval 0.01; 
					[_e_static] spawn {_de_sters = _this select 0;sleep 2;deleteVehicle _de_sters};
				}] remoteExec ["spawn",0];
				switch true do {
					case ((stance _target == "PRONE") or (stance _target == "UNDEFINED")): {};
					default {[_target,"empGrenade_shock"] remoteExec ["switchMove",0];};
				};

				_target setDamage 1;
			};
			
			_target setVariable ["JLTS_EMPCooldown",nil, true];
		};
	} else {
		[_target,"HUMAN"] remoteExec ["JLTS_fnc_showHintEMP",0,true];
	};
} else {
	//systemChat "EMP cooldown"
};
