["rb205_ion_electrocuteEvent", {  
	params ["_target","_projectileOwner"]; 
	
	_spark_sound = ["spark1","spark11","spark2","spark22","spark4"] call BIS_fnc_selectRandom;
	_target say3D _spark_sound; 
	_e_static = "#particlesource" createVehicleLocal (getPosATL _target);
	_e_static setParticleCircle [1, [0, 0, 0]];
	_e_static setParticleRandom [0.35, [0.5, 0.5, 0.5], [0.175, 0.175, 0.175], 0.15, 0.05, [0, 0, 0, 1], 1, 0];
	_e_static setParticleParams [["\A3\data_f\blesk1", 1, 0, 1], "", "SpaceObject", 1, 0.35, [0, 0, 0], [0, 0, -2], 0.05, 10, 7.9,0, [0, 0.0175, 0], [[1, 1, 0.1, 1], [1, 1, 1, 1]], [0.01], 1, 0, "", "", _target, 0, false, -1, [[100,100,100,1],[0,0,1,0.01]]];
	_e_static setDropInterval 0.35;

	createVehicle ["RB205_T7ION_electrocuteGrenade", getPosATL _target];
	_target setDamage [1,true,_projectileOwner,_projectileOwner];
	//sleep 1;
	hideObjectGlobal _target;
	deleteVehicle _e_static;
}] call CBA_fnc_addEventHandler;

["rb205_ion_disableVehicleEvent", {  
	params ["_target"]; 
	
	_spark_sound = ["spark1","spark11","spark2","spark22","spark4"] call BIS_fnc_selectRandom;
	_target say3D _spark_sound; 
	_e_static = "#particlesource" createVehicleLocal (getPosATL _target);
	_e_static setParticleCircle [1, [0, 0, 0]];
	_e_static setParticleRandom [0.35, [0.5, 0.5, 0.5], [0.175, 0.175, 0.175], 0.15, 0.05, [0, 0, 0, 1], 1, 0];
	_e_static setParticleParams [["\A3\data_f\blesk1", 1, 0, 1], "", "SpaceObject", 1, 0.35, [0, 0, 0], [0, 0, -2], 0.05, 10, 7.9,0, [0, 0.0175, 0], [[1, 1, 0.1, 1], [1, 1, 1, 1]], [0.01], 1, 0, "", "", _target, 0, false, -1, [[100,100,100,1],[0,0,1,0.01]]];
	_e_static setDropInterval 0.35;

	_target_isLargeVehicle = false;
	{
		if ((typeOf _target) == _x) exitWith { _target_isLargeVehicle = true };
	} forEach [
		"RB205_MTT","3AS_MTT","ls_ground_mtt_cisBlue","ls_ground_mtt_federation",
		"RB205_dragonFly","lsd_largeVTOL_cisDropship",
		"RB205_ATAT","3AS_ATAT","WM_ATAT",
		"RB205_emp_gozanti","3AS_Gozanti_F",
		"RB205_purrgil","RB205_emp_purrgil","3AS_Republic_Transport_01","3AS_Imperial_Transport_01",
		"RB205_civ_veh_purrgil_blue","RB205_civ_veh_purrgil_green","RB205_civ_veh_purrgil_yellow","3AS_Civilian_Transport_01","3AS_Civilian_Transport_03","3AS_Civilian_Transport_02"
	];

	if (!_target_isLargeVehicle) then {
		_target setHitPointDamage ["hitturret",1]; 
		_target setHitPointDamage ["hitcomturret",1];
		_target setHitPointDamage ["hitgun",1];
		_target setHitPointDamage ["hitcomgun",1]; 
		_target setHitPointDamage ["#light_hitpoint",1];
		_target setHitPointDamage ["HitBatteries",1]; 
		_target setHitPointDamage ["HitLight",1]; 
		_target setHitPointDamage ["#light_l",1];
		_target setHitPointDamage ["#light_r",1];
		_target setHitPointDamage ["#light_l_flare",1];
		_target setHitPointDamage ["#light_r_flare",1];
		_target setHitPointDamage ["light_l",1]; 
		_target setHitPointDamage ["light_r",1]; 
		_target setHitPointDamage ["light_l2",1]; 
		_target setHitPointDamage ["light_r2",1]; 
		_target setHitPointDamage ["hitEngine",1];  
		_target setHitPointDamage ["hitengine",1]; 
		_target setHitPointDamage ["hitengine1",1];
		_target setHitPointDamage ["hitengine2",1];
		_target setHitPointDamage ["hitengine3",1];
		_target setHitPointDamage ["HitEngine2",1];
		_target setHitPointDamage ["HitAvionics",1];
		_target setHitPointDamage ["HitHRotor",1];
		_target setHitPointDamage ["HitVRotor",1];
		_target setHitPointDamage ["HitHydraulics",1];
		_target setHitPointDamage ["HitHStabilizerL1",1];
		_target setHitPointDamage ["HitHStabilizerR1",1];
		_target setHitPointDamage ["HitVStabilizer1",1];
		_target disableAI "LIGHTS"; 
		_target setPilotLight false;  
		_target setCollisionLight false;
		_target setHit ["light_1_hitpoint", 0.97]; //all possible light hitpoints
		_target setHit ["light_2_hitpoint", 0.97]; //no lights escape this
		_target setHit ["light_3_hitpoint", 0.97];
		_target setHit ["light_4_hitpoint", 0.97];
		_target setVehicleAmmo 0;
	} else {
		switch (_target getVariable ["RB205_ION_hitCounter", 0]) do
		{
			case 0: {
				_target setVariable ["RB205_ION_hitCounter",1,true];

				_target setHitPointDamage ["#light_hitpoint",1];
				_target setHitPointDamage ["HitBatteries",1]; 
				_target setHitPointDamage ["HitLight",1]; 
				_target setHitPointDamage ["#light_l",1];
				_target setHitPointDamage ["#light_r",1];
				_target setHitPointDamage ["#light_l_flare",1];
				_target setHitPointDamage ["#light_r_flare",1];
				_target setHitPointDamage ["light_l",1]; 
				_target setHitPointDamage ["light_r",1]; 
				_target setHitPointDamage ["light_l2",1]; 
				_target setHitPointDamage ["light_r2",1];
				_target disableAI "LIGHTS"; 
				_target setPilotLight false;  
				_target setCollisionLight false;
				_target setHit ["light_1_hitpoint", 0.97]; //all possible light hitpoints
				_target setHit ["light_2_hitpoint", 0.97]; //no lights escape this
				_target setHit ["light_3_hitpoint", 0.97];
				_target setHit ["light_4_hitpoint", 0.97];

				_target setHitPointDamage ["hitEngine",0.5];  
				_target setHitPointDamage ["hitengine",0.5]; 
				_target setHitPointDamage ["hitengine1",0.5];
				_target setHitPointDamage ["hitengine2",0.5];
				_target setHitPointDamage ["hitengine3",0.5];
				_target setHitPointDamage ["HitEngine2",0.5];
				_target setHitPointDamage ["HitAvionics",0.5];
				_target setHitPointDamage ["HitHRotor",0.5];
				_target setHitPointDamage ["HitVRotor",0.5];
				_target setHitPointDamage ["HitHydraulics",0.5];
				_target setHitPointDamage ["HitHStabilizerL1",0.5];
				_target setHitPointDamage ["HitHStabilizerR1",0.5];
				_target setHitPointDamage ["HitVStabilizer1",0.5];
			};
			case 1: {
				_target setVariable ["RB205_ION_hitCounter",2,true];

				_target setHitPointDamage ["hitturret",0.5]; 
				_target setHitPointDamage ["hitcomturret",0.5];
				_target setHitPointDamage ["hitgun",0.5];
				_target setHitPointDamage ["hitcomgun",0.5];
			};
			case 2: {
				_target setVariable ["RB205_ION_hitCounter",3,true];

				_target setHitPointDamage ["hitturret",1]; 
				_target setHitPointDamage ["hitcomturret",1];
				_target setHitPointDamage ["hitgun",1];
				_target setHitPointDamage ["hitcomgun",1];
				_target setHitPointDamage ["hitEngine",1];  
				_target setHitPointDamage ["hitengine",1]; 
				_target setHitPointDamage ["hitengine1",1];
				_target setHitPointDamage ["hitengine2",1];
				_target setHitPointDamage ["hitengine3",1];
				_target setHitPointDamage ["HitEngine2",1];
				_target setHitPointDamage ["HitAvionics",1];
				_target setHitPointDamage ["HitHRotor",1];
				_target setHitPointDamage ["HitVRotor",1];
				_target setHitPointDamage ["HitHydraulics",1];
				_target setHitPointDamage ["HitHStabilizerL1",1];
				_target setHitPointDamage ["HitHStabilizerR1",1];
				_target setHitPointDamage ["HitVStabilizer1",1];
				_target setVehicleAmmo 0;
			};
			default { _target setVariable ["RB205_ION_hitCounter",0,true]; };
		};
	};
	//sleep 1;
	deleteVehicle _e_static;
}] call CBA_fnc_addEventHandler;

["rb205_ion_disableTurretEvent", {  
	params ["_target","_projectileOwner"]; 
	
	_spark_sound = ["spark1","spark11","spark2","spark22","spark4"] call BIS_fnc_selectRandom;
	_target say3D _spark_sound; 
	_e_static = "#particlesource" createVehicleLocal (getPosATL _target);
	_e_static setParticleCircle [1, [0, 0, 0]];
	_e_static setParticleRandom [0.35, [0.5, 0.5, 0.5], [0.175, 0.175, 0.175], 0.15, 0.05, [0, 0, 0, 1], 1, 0];
	_e_static setParticleParams [["\A3\data_f\blesk1", 1, 0, 1], "", "SpaceObject", 1, 0.35, [0, 0, 0], [0, 0, -2], 0.05, 10, 7.9,0, [0, 0.0175, 0], [[1, 1, 0.1, 1], [1, 1, 1, 1]], [0.01], 1, 0, "", "", _target, 0, false, -1, [[100,100,100,1],[0,0,1,0.01]]];
	_e_static setDropInterval 0.35;

	_target setDamage [1,true,_projectileOwner,_projectileOwner];
	//sleep 1;
	deleteVehicle _e_static;
}] call CBA_fnc_addEventHandler;



["ace_firedPlayer", {
	call RB205_T7ION_fnc_onFired;
	}] call CBA_fnc_addEventHandler;

["ace_firedNonPlayer", {
	call RB205_T7ION_fnc_onFired;
	}] call CBA_fnc_addEventHandler;