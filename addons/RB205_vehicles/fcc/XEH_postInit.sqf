//FCC errichten

private _condition1 = {
	(_target animationSourcePhase "ramp" > 1);
};
 
private _deploy = {
	_target animateSource ["ramp",0];
	playSound3D ["A3\Sounds_F\structures\doors\ServoRamp\ServoRampSound_1.wss", _target];
	RB205_fcc_respawn = _target;
	RB205FCCRespawn = [missionNamespace,"RB205_fcc_respawn", "Forward Command Center"] call BIS_fnc_addRespawnPosition;
	["RB205_RespawnModule_text", ["", ""]] call BIS_fnc_showNotification;
	RB205_fcc_respawn execVM "\RB205_logistics\scripts\gonk\addActions\aceArsenal.sqf";                     //Ace-Arsenal

	RB205_flagfcc = "ls_commandPost_republic_blue" createVehicle (getPos _target);                          //Republik-Logo
	RB205_flagfcc attachTo [_target, [0.24,-1.5,0]];

	//RB205_resupplyweaponsfcc = "RB205_resupply_weapons" createVehicle (getPos _target);                     //Resupply-Kisten
	//RB205_resupplyweaponsfcc attachTo [_target, [1.2,-1.5,-1.1]];

	//RB205_resupplymedicfcc = "RB205_resupply_medical" createVehicle (getPos _target);                       //Resupply-Kisten
	//RB205_resupplymedicfcc attachTo [_target, [-0.7,-1.5,-1.1]];

	[_target, 10] call ace_cargo_fnc_setSpace;

	RB205_fcc_resupplyCrate_weapons = "RB205_resupply_weapons" createVehicle (getPos _target);
	[RB205_fcc_resupplyCrate_weapons, _target, true] call ace_cargo_fnc_loadItem;
	
	RB205_fcc_resupplyCrate_medical = "RB205_resupply_medical" createVehicle (getPos _target);
	[RB205_fcc_resupplyCrate_medical, _target, true] call ace_cargo_fnc_loadItem;
	
	RB205_fcc_resupplyCrate_equipment = "RB205_resupply_equipment" createVehicle (getPos _target);
	[RB205_fcc_resupplyCrate_equipment, _target, true] call ace_cargo_fnc_loadItem;
	
	RB205_fcc_resupplyCrate_arsenal = "RB205_resupply_arsenal" createVehicle (getPos _target);
	[RB205_fcc_resupplyCrate_arsenal, _target, true] call ace_cargo_fnc_loadItem;

	RB205_fcc_resupplyCrate_empty = "RB205_resupply_base" createVehicle (getPos _target);
	[RB205_fcc_resupplyCrate_empty, _target, true] call ace_cargo_fnc_loadItem;
};

//FCC abbauen

private _condition2 = {
	(_target animationSourcePhase "ramp" < 1)
};
 
private _undeploy = {
	_target animateSource ["ramp",2];
	playSound3D ["A3\Sounds_F\structures\doors\ServoRamp\ServoRampSound_1.wss", _target];
	RB205FCCRespawn call BIS_fnc_removeRespawnPosition;
	[RB205_fcc_respawn, true] call ace_arsenal_fnc_removeBox;                                               //Ace-Arsenal entfernen

	deleteVehicle RB205_flagfcc;                                                                            //Republik-Logo entfernen

	//deleteVehicle RB205_resupplyweaponsfcc;                                                                 //Resupply-Kisten entfernen
	//deleteVehicle RB205_resupplymedicfcc;                                                                   //Resupply-Kisten entfernen

	[RB205_fcc_resupplyCrate_weapons, _target] call ace_cargo_fnc_unloadItem;
	deleteVehicle RB205_fcc_resupplyCrate_weapons;
	
	[RB205_fcc_resupplyCrate_medical, _target] call ace_cargo_fnc_unloadItem;
	deleteVehicle RB205_fcc_resupplyCrate_medical;
	
	[RB205_fcc_resupplyCrate_equipment, _target] call ace_cargo_fnc_unloadItem;
	deleteVehicle RB205_fcc_resupplyCrate_equipment;
	
	[RB205_fcc_resupplyCrate_arsenal, _target] call ace_cargo_fnc_unloadItem;
	deleteVehicle RB205_fcc_resupplyCrate_arsenal;
	
	[RB205_fcc_resupplyCrate_empty, _target] call ace_cargo_fnc_unloadItem;
	deleteVehicle RB205_fcc_resupplyCrate_arsenal;
};

//ACE-Integration

_deployFCC = ["FCC errichten", "FCC errichten", "",_deploy,_condition1] call ace_interact_menu_fnc_createAction;
["RB205_fcc", 0, ["ACE_MainActions"],_deployFCC, true] call ace_interact_menu_fnc_addActionToClass;

_undeployFCC = ["FCC abbauen", "FCC abbauen", "",_undeploy,_condition2] call ace_interact_menu_fnc_createAction;
["RB205_fcc", 0, ["ACE_MainActions"],_undeployFCC, true] call ace_interact_menu_fnc_addActionToClass;