// Written by: Jenna
//
//
//
// Performs all checks for jetpack and turns it on/off as needed. Backpack must contain knd_isjetpack = 1 in order to be considered a jetpack.
//
//
//
//
#define GET_NUMBER(config,default) (if (isNumber (config)) then {getNumber (config)} else {default})

//WENN: Spieler in Fahrzeug oder bewusstlos
if (vehicle ace_player != ace_player OR (lifeState ace_player == "INCAPACITATED")) exitwith {};


if (ace_player getVariable ["knd_jetpackDisabled",false]) exitwith {};


private _pack = backpackContainer ace_player;
private _packclass = typeOf _pack;
private _config = configFile >> "CfgVehicles" >> _packclass;
private _isPack = GET_NUMBER(_config >> "knd_isJetpack",0);

//WENN: kein Jetpack vorhanden
if (_isPack != 1) exitwith {};



private _acceleration = GET_NUMBER(_config >> "knd_jetpack_acceleration",4);
private _resistance = GET_NUMBER(_config >> "knd_jetpack_resistance",6);
private _fuelCoef = GET_NUMBER(_config >> "knd_jetpack_fuelCoef",1);
private _heatCoef = GET_NUMBER(_config >> "knd_jetpack_heatCoef",1);
private _coolCoef = GET_NUMBER(_config >> "knd_jetpack_coolCoef",1);
private _strafeCoef = GET_NUMBER(_config >> "knd_jetpack_strafeCoef",1);
private _ascensionCoef = GET_NUMBER(_config >> "knd_jetpack_ascensionCoef",1);
private _jumpCoef = GET_NUMBER(_config >> "knd_jetpack_jumpCoef",1);
private _fuelCapacity = GET_NUMBER(_config >> "knd_jetpack_fuelCapacity",knd_jetpack_maxfuel);

if ((secondaryWeapon ace_player) isNotEqualTo "") then {
	_acceleration = _acceleration min 2.5;
	_resistance = _resistance * 1.2;
	_ascensionCoef = _ascensionCoef  * 0.8;
};


_pack setVariable ["knd_jetpack_tankSize",_fuelCapacity];
if (isNil {_pack getVariable ["knd_jetpacks_coolingHandle",nil]}) then {
	private _handle = [
	{
	if (isGamePaused OR !isGameFocused) exitWith {};
	_this select 0 params ["_pack","_coolCoef"];
	if isNull _pack exitwith {
	[_this select 1] call CBA_fnc_removePerFrameHandler;
	_pack setVariable ["knd_jetpacks_coolingHandle",nil];
	};
	if (ace_player getVariable ["knd_isJetpacking",false]) exitwith {};
	private _heat = _pack getvariable ["knd_jet_overheat",0];
	if (_heat > 0) exitwith {_heat = _heat - (diag_deltaTime * _coolCoef);
	if (_heat < knd_jetpack_maxheat * 0.7) then { _pack setVariable ["knd_jet_cooldown",false]};
	_pack setVariable ["knd_jet_overheat",_heat];
	};
	if !(_pack isEqualTo (backpackContainer ace_player)) then {
		[_this select 1] call CBA_fnc_removePerFrameHandler;
		_pack setVariable ["knd_jetpacks_coolingHandle",nil];
		_pack setVariable ["knd_jet_overheat",_heat,true];
	};
	
	}, 

	0, [_pack,_coolCoef]] call CBA_fnc_addPerFrameHandler;
	_pack setVariable ["knd_jetpacks_coolingHandle",_handle]
};

// If you can remove the handler, do so - otherwise, add it. It works!
if !([knd_jetpack_handle] call CBA_fnc_removePerFrameHandler) then {

	//Reset or set the idle timer 
	ace_player setvariable ["knd_jet_idletimer",0.2];  

	//Fallanimation deaktivieren
	private _oldfreefall = (getUnitFreefallInfo ace_player) select 2;
	ace_player setunitFreefallHeight 10000;


	// "Jump" when starting out
	private _pack = backpackContainer ace_player;
	private _fuel = _pack getVariable ["knd_jet_fuel",_fuelCapacity];

	if (isTouchingGround ace_player AND _fuel > 0.1 AND !(_pack getVariable ["knd_jet_cooldown",false])) then
	{
		_pos = getposASL ace_player;
		_pos set [2, (_pos select 2) + 0.05];
		_vel = velocity ace_player;
		_vel set [2, (_vel select 2) + 7 * _jumpCoef];
		ace_player setposASL _pos;
		ace_player setvelocity _vel;
		playsound3d ["3AS\3AS_Weapons\X42\SFX\flamer.ogg", ace_player, false, getposASL ace_player, 1,0.7]; // Temporary sound 
	};


	["knd_jetpackParticleEvent", [ace_player,true]] call CBA_fnc_globalEvent;

	//Tag player as jetpacking
	ace_player setVariable ["knd_isJetpacking",true];

	//Add the PFH
	knd_jetpack_handle = [{

		if (isGamePaused) exitWith {};

		_this select 0 params ["_acceleration","_resistance","_fuelCoef","_heatCoef","_ascensionCoef","_strafeCoef","_oldfreefall"];

		// Get our variables
		private _pack = backpackContainer ace_player;
		private _heat = _pack getvariable ["knd_jet_overheat",0];
		private _maxFuel = _pack getVariable ["knd_jetpack_tankSize",nil];
		if (isNil {_maxFuel}) then {
			private _fuelCapacity = [configFile >> "CfgVehicles" >> typeOf _pack, "knd_jetpack_fuelCapacity",knd_jetpack_maxfuel];
			_pack setVariable ["knd_jetpack_tankSize",_fuelCapacity];
		};
		private _fuel = _pack getVariable ["knd_jet_fuel",_maxFuel];

		//WENN: Spieler ist bewusstlos oder tot
		if (isNull _pack OR !alive ace_player OR !([ace_player] call ace_common_fnc_isAwake) or ace_player getVariable ["knd_jetpackDisabled",false]) exitwith 
		{
			["knd_jetpackParticleEvent", [ace_player,false]] call CBA_fnc_globalEvent;
			ace_player setVariable ["knd_isJetpacking",false];
			[_this select 1] call CBA_fnc_removePerFrameHandler;
			[knd_jetpack_sound_handle] call CBA_fnc_removePerFrameHandler;
			[_pack] call knd_fnc_jetpack_variableSync;
		};

		// Make sure you can take damage while on the ground, reset freefall height. It's more performant to do this each frame of the handler than to check. Also, increment the idle timer.
		//
		if (isTouchingGround ace_player or [ace_player] call ace_common_fnc_isSwimming or (vehicle ace_player != ace_player) OR (lifeState ace_player == "INCAPACITATED") OR ((getPosVisual ace_player) select 2 < 0.05)) exitwith 
		{
			ace_player setunitFreefallHeight _oldfreefall;
			if (_heat > 0) then {_heat = _heat - diag_deltaTime};
			if (_heat < knd_jetpack_maxheat * 0.7) then { _pack setVariable ["knd_jet_cooldown",false]};
			_pack setVariable ["knd_jet_overheat",_heat];
			private _idletimer = ace_player getvariable ["knd_jet_idletimer",2];
			_idletimer = _idletimer - diag_deltaTime;
			ace_player setvariable ["knd_jet_idletimer",_idletimer];
			if (_idletimer < 0) exitwith 
			{
				[_this select 1] call CBA_fnc_removePerFrameHandler;
				[knd_jetpack_sound_handle] call CBA_fnc_removePerFrameHandler;
				[_pack] call knd_fnc_jetpack_variableSync;
				["knd_jetpackParticleEvent", [ace_player,false]] call CBA_fnc_globalEvent;
				ace_player setVariable ["knd_isJetpacking",false];
			};
		};

		//Reset the idle timer if you're not on the ground
		ace_player setvariable ["knd_jet_idletimer",0.2];  

		//If player is on cooldown (due to overheating), only do the heat reduction and the fall damage un-fuckery
		if (_pack getVariable ["knd_jet_cooldown",false] OR _fuel < 0.01) exitwith 
		{
			if (_heat > 0) then {
				_heat = _heat - 2 *diag_deltaTime
			};
			_pack setVariable ["knd_jet_overheat",_heat];
		};

		// Handle overheating
		if (_heat > knd_jetpack_maxheat) exitwith {
			_heat = _heat + 5;
			_pack setVariable ["knd_jet_cooldown",true];
			playsound3d ["\WeatherPLUS\Functions\sound\spark5.ogg", ace_player];
			[_this select 1] call CBA_fnc_removePerFrameHandler;
			[knd_jetpack_sound_handle] call CBA_fnc_removePerFrameHandler;
			[_pack] call knd_fnc_jetpack_variableSync;
			["knd_jetpackParticleEvent", [ace_player,false]] call CBA_fnc_globalEvent;
			ace_player setVariable ["knd_isJetpacking",false];
		};

		// Reset overheating if needed (will only be needed in select situations, likely almost never)
		_pack setVariable ["knd_jet_cooldown",false];



		// Define our direction and velocity variables
		private _dir = direction ace_player;
		private _vel = velocity ace_player;



		// Check for controls, change velocity variable accordingly. Multiply by previous frametime to normalize for different performance situations.
		if (inputAction "MoveForward" == 1) then {
			_heat = _heat + (_heatCoef * diag_deltaTime);
			_fuel = _fuel - (_fuelCoef * diag_deltaTime);
			_speed = diag_deltaTime * 5 * _acceleration;
			_vel = [
				(_vel select 0) + (sin _dir * _speed),
				(_vel select 1) + (cos _dir * _speed),
				(_vel select 2) + (5 * diag_deltaTime)
			];
		};

		if (inputAction "TurnRight" == 1) then {
			_heat = _heat + (_heatCoef * diag_deltaTime);
			_fuel = _fuel - diag_deltaTime;
			_speed = diag_deltaTime * 5 * _acceleration * _strafeCoef;
			_vel =  [
				(_vel select 0) + (sin (_dir + 90) * _speed),
				(_vel select 1) + (cos (_dir + 90) * _speed),
				(_vel select 2) + (5 * diag_deltaTime)
			];
		};

		if (inputAction "TurnLeft" == 1) then {
			_heat = _heat + (_heatCoef * diag_deltaTime);
			_fuel = _fuel - diag_deltaTime;
			_speed = diag_deltaTime * 5 * _acceleration * _strafeCoef;
			_vel =  [
				(_vel select 0) + (sin (_dir - 90) * _speed),
				(_vel select 1) + (cos (_dir - 90) * _speed),
				(_vel select 2) + (5 * diag_deltaTime)
			];
		};

		if (inputAction "MoveBack" == 1) then {
			_heat = _heat + (_heatCoef * diag_deltaTime);
			_fuel = _fuel - diag_deltaTime;
			_speed = diag_deltaTime * -5 * _acceleration;
			_vel =  [
				(_vel select 0) + (sin (_dir) * _speed),
				(_vel select 1) + (cos (_dir) * _speed),
				(_vel select 2) - (2.5 * diag_deltaTime)
			];
		};

		if (ace_player getvariable ["knd_jet_Hover",false]) then {
			_heat = _heat + (_heatCoef * diag_deltaTime);
			_fuel = _fuel - diag_deltaTime;
			_vel =  [
				(_vel select 0) ,
				(_vel select 1) ,
				((_vel select 2) + (15 * diag_deltaTime * (_ascensionCoef min 1.5))) min 19 // Gravity *should* be 9.8 * diag_deltaTime and this simplifies out to 15 * diag_deltaTime, enough to counteract gravity and then a bit of up
			];
		};


		// Perform "air resistance" calculation - really just a counter-vector to slow player down by the air resistance coefficient every second
		private _airResistanceCoef = -0.1 * diag_deltaTime * _resistance;
		private _airResistance = _vel vectorMultiply _airResistanceCoef;
		_vel = _vel vectorAdd _airResistance;


		// Set velocity to the final calculated value
		ace_player setvelocity _vel;


		// Increment heat downward for cooling down
		if (_heat > 0) then {_heat = _heat - diag_deltaTime/3};

		_pack setvariable ["knd_jet_fuel", _fuel];
		_pack setVariable ["knd_jet_overheat",_heat];

	}, 0, [_acceleration, _resistance,_fuelCoef,_heatCoef,_ascensioncoef,_strafeCoef, _oldfreefall]] call CBA_fnc_addPerFrameHandler;

} else 
{
	//Tag player as not jetpacking
	[_pack] call knd_fnc_jetpack_variableSync;

	["knd_jetpackParticleEvent", [ace_player,false]] call CBA_fnc_globalEvent;
	ace_player setVariable ["knd_isJetpacking",false];

};


if !([knd_jetpack_sound_handle] call CBA_fnc_removePerFrameHandler) then
{
	knd_jetpack_sound_handle = [
		{
			if (isGamePaused OR !isGameFocused) exitWith {};
			private _volume = 0.05;
			if (!(isTouchingGround ace_player or [ace_player] call ace_common_fnc_isSwimming)) then 
			{
				private _volumecoef = {ace_player getVariable [_x, false]} count ["knd_jet_Hover"];
				_volumecoef = _volumecoef + ({inputAction _x == 1} count ["moveBack","TurnLeft","TurnRight","MoveForward"]);
				_volume = 0.1 + _volume * _volumecoef;
			};
			
			playsound3d ["3AS\3AS_Weapons\X42\SFX\flamer.ogg", ace_player, false, getposASL ace_player, _volume]; // Temporary sound
		},	
		0.1, []
	] call CBA_fnc_addPerFrameHandler;
};

