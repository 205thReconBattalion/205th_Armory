//Bedingung für die ACE_SelfInteraction (Fahrer und Geschwindigkeit gleich 0)
private _condition = {
	_player == currentPilot _target && speed _target < 1; //==1
};


//Spawnscript für den BARC Speeder

private _spawnscript_barc = {
	if (isNull _target) exitWith {};

	private _vehPos = getPosASL _target;
	private _vehDir = getDir _target;
	private _spawnPos = [
		(_vehPos select 0) - (sin(_vehDir)*10),
		(_vehPos select 1) - (cos(_vehDir)*10),
		(_vehPos select 2)
	];

	private _unit = nil;
	_unit = "RB205_barc" createVehicle _spawnPos;
	_unit setDir _vehDir;
	_unit setVehicleVarName "BarcSpeeder";

	playSound3D ["A3\Sounds_F\structures\doors\ServoRamp\ServoRampSound_1.wss", _target];

	0 spawn {
		private _gas = fuel vehicle player;
		vehicle player setFuel 0;
		vehicle player animateSource ['ramp',1,1];
		(parseText "<t color='#ff0000'>'BARC Speeder' wird ausgeladen ...</t>") remoteExec ["hint", player];
		sleep 6;

		vehicle player setFuel _gas;
		vehicle player animateSource ['ramp',0,1];
		(parseText "<t color='#00ff00'>Ausladen abgeschlossen!</t>") remoteExec ["hint", player];
	};
};


//Spawnscript für den BARC Speeder (Sidecar)

private _spawnscript_barc_sidecar = {
	if (isNull _target) exitWith {};

	private _vehPos = getPosASL _target;
	private _vehDir = getDir _target;
	private _spawnPos = [
		(_vehPos select 0) - (sin(_vehDir)*10),
		(_vehPos select 1) - (cos(_vehDir)*10),
		(_vehPos select 2)
	];

	private _unit = nil;
	_unit = "RB205_barc_sidecar" createVehicle _spawnPos;
	_unit setDir _vehDir;
	_unit setVehicleVarName "BarcSpeeder";

	playSound3D ["A3\Sounds_F\structures\doors\ServoRamp\ServoRampSound_1.wss", _target];

	0 spawn {
		private _gas = fuel vehicle player;
		vehicle player setFuel 0;
		vehicle player animateSource ['ramp',1,1];
		(parseText "<t color='#ff0000'>'BARC Speeder (Sidecar)' wird ausgeladen ...</t>") remoteExec ["hint", player];
		sleep 6;

		vehicle player setFuel _gas;
		vehicle player animateSource ['ramp',0,1];
		(parseText "<t color='#00ff00'>Ausladen abgeschlossen!</t>") remoteExec ["hint", player];
	};
};


//Spawnscript für den AT-RT

private _spawnscript_atrt = {
	if (isNull _target) exitWith {};

	private _vehPos = getPosASL _target;
	private _vehDir = getDir _target;
	private _spawnPos = [
		(_vehPos select 0) - (sin(_vehDir)*10),
		(_vehPos select 1) - (cos(_vehDir)*10),
		(_vehPos select 2)
	];

	private _unit = nil;
	_unit = "RB205_atrt" createUnit [_spawnPos, createGroup west, "_unit = this"];
	_unit setDir _vehDir;
	_unit allowDamage false;

	playSound3D ["A3\Sounds_F\structures\doors\ServoRamp\ServoRampSound_1.wss", _target];

	0 spawn {
		private _gas = fuel vehicle player;
		vehicle player setFuel 0;
		vehicle player animateSource ['ramp',1,1];
		(parseText "<t color='#ff0000'>'AT-RT' wird ausgeladen ...</t>") remoteExec ["hint", player];
		sleep 6;

		vehicle player setFuel _gas;
		vehicle player animateSource ['ramp',0,1];
		(parseText "<t color='#00ff00'>Ausladen abgeschlossen!</t>") remoteExec ["hint", player];
	};
};


//ACE_SelfInteraction

private _unloadBarc = ["'BARC Speeder' ausladen", "'BARC Speeder' ausladen", "3AS\3AS_LightVics\3AS_BARC\data\ui\BARC_top_ca.paa", _spawnscript_barc, _condition] call ace_interact_menu_fnc_createAction;
private _unloadBarc_sidecar = ["'BARC Speeder (Sidecar)' ausladen", "'BARC Speeder (Sidecar)' ausladen", "3AS\3AS_LightVics\3AS_BARC\data\ui\BARC_top_ca.paa", _spawnscript_barc_sidecar, _condition] call ace_interact_menu_fnc_createAction;
private _unloadAtrt = ["'AT-RT' ausladen", "'AT-RT' ausladen", "RB205_vehicles\atrt\data\icon_atrt.paa", _spawnscript_atrt, _condition] call ace_interact_menu_fnc_createAction;


//Integration der ACE_SelfInteraction für die jeweiligen Fahrzeugklassen

{
	[_x, 1, ["ACE_SelfActions"], _unloadBarc, true] call ace_interact_menu_fnc_addActionToClass;
	[_x, 1, ["ACE_SelfActions"], _unloadBarc_sidecar, true] call ace_interact_menu_fnc_addActionToClass;
	[_x, 1, ["ACE_SelfActions"], _unloadAtrt, true] call ace_interact_menu_fnc_addActionToClass;
} forEach ["RB205_laat","RB205_laat_lights","RB205_laat_turrets","RB205_laatc","RB205_atte"];// 3AS_laat_Base | 3AS_ATTE_Base