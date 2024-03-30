#include "\a3\editor_f\Data\Scripts\dikCodes.h"

/*
knd_jet_toggle | RB205_jetpack_toggle
knd_jet_hover | RB205_jetpack_hover

knd_jetpack_coolCoef
knd_isJetpacking
knd_jet_overheat
knd_jet_fuel
knd_jet_cooldown
knd_jetpacks_coolingHandle

knd_jetpackfuel

knd_jetpackParticleEvent | RB205_jetpackParticleEvent
*/

/*
knd_fnc_jetpack
knd_fnc_hasJetpack

*/


//////////////////////////////////////
// Keybinds //
/////////////////////////////////////

[
	"205th Recon Battalion",
	"knd_jet_toggle",
	"Jetpack - Toggle On/Off",
	{

		call knd_fnc_jetpack;
	},
	{},
	[DIK_SPACE,[true,false,false]]
] call CBA_fnc_addKeybind;


[
	"House Kandosii Aux Mod",
	"knd_jet_hover",
	"Jetpack - Up",
	{
		ace_player setvariable ["knd_jet_Hover",true]
	},
	{
		ace_player setvariable ["knd_jet_Hover",false]
	},
	[DIK_SPACE,[false,false,false]]
] call CBA_fnc_addKeybind;

//////////////////
// Events //
/////////////////

addMissionEventHandler ["HandleDisconnect", {
	params ["_unit", "_id", "_uid", "_name"];
	["knd_jetpackParticleEvent", [_unit,false]] call CBA_fnc_globalEvent;   
}];

ace_player addEventHandler ["SlotItemChanged", {
	params ["_unit", "_name", "_slot", "_assigned"];
	if !_assigned exitwith {};
	if (_slot == 901) then {
		if ([] call knd_fnc_hasJetpack) then {
			private _pack = backpackContainer _unit;
			private _packClass = typeOf _pack;
			private _coolCoef = [configFile >> "CfgVehicles" >> _packclass, "knd_jetpack_coolCoef",1] call BIS_fnc_returnConfigEntry;
			if (isNil {_pack getVariable ["knd_jetpacks_coolingHandle",nil]}) then {
				private _handle = [
				{
				if (isGamePaused OR !isGameFocused) exitWith {};
				_this select 0 params ["_pack","_coolCoef"];
				if isNull _pack exitwith {
					[_this select 1] call CBA_fnc_removePerFrameHandler;
				};
				if (ace_player getVariable ["knd_isJetpacking",false]) exitwith {};
				private _heat = _pack getvariable ["knd_jet_overheat",0];
				private _fuel = _pack getVariable ["knd_jet_fuel",knd_jetpack_maxfuel];
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
		};
	};
}];

["ace_arsenal_displayclosed", {
	private _pack = backpackContainer ace_player;
	private _packClass = typeOf _pack;
	private _coolCoef = [configFile >> "CfgVehicles" >> _packclass, "knd_jetpack_coolCoef",1] call BIS_fnc_returnConfigEntry;
	if (isNil {_pack getVariable ["knd_jetpacks_coolingHandle",nil]}) then {
		private _handle = [
		{
		if (isGamePaused OR !isGameFocused) exitWith {};
		_this select 0 params ["_pack","_coolCoef"];
				if isNull _pack exitwith {
				[_this select 1] call CBA_fnc_removePerFrameHandler;
			};
		if (ace_player getVariable ["knd_isJetpacking",false]) exitwith {};
		private _heat = _pack getvariable ["knd_jet_overheat",0];
		private _fuel = _pack getVariable ["knd_jet_fuel",knd_jetpack_maxfuel];
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
    }] call CBA_fnc_addEventHandler;

[missionNamespace,"arsenalClosed", {    
    private _pack = backpackContainer ace_player;
	private _packClass = typeOf _pack;
	private _coolCoef = [configFile >> "CfgVehicles" >> _packclass, "knd_jetpack_coolCoef",1] call BIS_fnc_returnConfigEntry;
	if (isNil {_pack getVariable ["knd_jetpacks_coolingHandle",nil]}) then {
		private _handle = [
		{
		if (isGamePaused OR !isGameFocused) exitWith {};
		_this select 0 params ["_pack","_coolCoef"];
			if isNull _pack exitwith {
		[_this select 1] call CBA_fnc_removePerFrameHandler;
	};
		if (ace_player getVariable ["knd_isJetpacking",false]) exitwith {};
		private _heat = _pack getvariable ["knd_jet_overheat",0];
		private _fuel = _pack getVariable ["knd_jet_fuel",knd_jetpack_maxfuel];
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
 }] call bis_fnc_addScriptedEventhandler;

/*["knd_repulsorevent", {
params ["_tgt", "_forceVector"];
_tgt addForce [_forceVector, [0, 0, 0]];
[
	{
		params ["_tgt"];
		[{speed _this < 1}, {
	_this setUnconscious false;
		}, _tgt, 5, {_this setUnconscious false;}] call CBA_fnc_waitUntilAndExecute;
	}, 
	[_tgt], 
	5
] call CBA_fnc_waitAndExecute;
}] call CBA_fnc_addEventHandler;*/



//////////////////////////// Begin jenpacks

["knd_jetpackParticleEvent", {  
	if !(hasInterface) exitwith {};
	_this call KND_fnc_jetpackParticles;
}] call CBA_fnc_addEventHandler;  


["knd_jetpackfuel", "CONTAINER", "Refuel Jetpack", nil, "\A3\ui_f\data\igui\cfg\simpleTasks\types\refuel_ca.paa", {[ace_player] call knd_fnc_hasJetpack}, {
    params ["_unit", "_container", "_item", "_slot", "_params"];
    [_item,200] call knd_fnc_jetpackrefuel
}, false, []] call CBA_fnc_addItemContextMenuOption;


////////////////////////////////////////// end jenpacks



private _action = 
[
	"knd_refuel_action", //Action name
	"Refuel Jetpack", //Display name
	"\z\ace\addons\refuel\ui\icon_refuel_interact.paa", //Icon path
	{["", 100] call knd_fnc_jetpackRefuel}, //Code
	{
		_pack = backpackContainer ace_player;
		_packclass = typeOf _pack;
		_isPack = [configFile >> "CfgVehicles" >> _packclass, "knd_isJetpack",0] call BIS_fnc_returnConfigEntry;
		([_this select 0] call ace_refuel_fnc_getFuel > 10) AND (_isPack == 1)
		
	}, // Condition
	{}, //Children code
	[], // Params
	[0,0,0], // Position
	10 // Distance
] call ace_interact_menu_fnc_createAction;
[
	"AllVehicles", // Class name
	 0, // Type of action (1 for self, 0 for main)
	 ["ACE_MainActions"], //Parent path 
	 _action,
	 true
] call ace_interact_menu_fnc_addActionToClass;
 
[
	"ReammoBox_F", // Class name
	 0, // Type of action (1 for self, 0 for main)
	 ["ACE_MainActions"], //Parent path 
	 _action,
	 true
] call ace_interact_menu_fnc_addActionToClass;


["ace_refuel_sourceInitialized", {
params ["_source"];  
private _action = 
[
	"knd_refuel_action", //Action name
	"Refuel Jetpack", //Display name
	"\z\ace\addons\refuel\ui\icon_refuel_interact.paa", //Icon path
	{["", 100] call knd_fnc_jetpackRefuel}, //Code
	{
		_pack = backpackContainer ace_player;
		_packclass = typeOf _pack;
		_isPack = [configFile >> "CfgVehicles" >> _packclass, "knd_isJetpack",0] call BIS_fnc_returnConfigEntry;
		([_this select 0] call ace_refuel_fnc_getFuel > 10) AND (_isPack == 1)
		
	}, // Condition
	{}, //Children code
	[], // Params
	[0,0,0], // Position
	10 // Distance
] call ace_interact_menu_fnc_createAction;

[_source, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

}] call CBA_fnc_addEventHandler;  




[missionNamespace,"arsenalOpened", {	
	ace_player setvariable ["knd_jet_Hover",false]
 }] call bis_fnc_addScriptedEventhandler;


[] spawn {
waitUntil {!(isNull findDisplay 46)};

call knd_fnc_jetpackHUD;

};

// Default max fuel, will only be used in weird situations (such as jetpack fuel being iterated before jetpack has been used)
knd_jetpack_maxfuel = 250;

//////// SCRIPTED FIREMODE THINGY DO NOT TOUCH IT /////////////////
/*
private _fnc_scriptedFiremodeCondition = {
	private _isReplacement = getNumber (configFile >> "CfgWeapons" >> currentWeapon player >> currentWeaponMode player >> "knd_isReplacementMode");
	private _replacementCost = getNumber (configFile >> "CfgWeapons" >> currentWeapon player >> currentWeaponMode player >> "knd_replacementAmmoCost");
	private _return = false;
	if (_isReplacement == 1 && (player weaponReloadingTime [player, currentMuzzle player] <= 0.5)) then {
		_return = true;
	};
	_return
};


player addAction ["", {
		private _replacementCost = getNumber (configFile >> "CfgWeapons" >> currentWeapon player >> currentWeaponMode player >> "knd_replacementAmmoCost");
		
		private _canFireCost = ((player ammo (currentMuzzle player)) < _replacementCost);
		private _state = animationState player;
		private _moves = getText (configOf player >> "moves");
		private _canFire = getNumber (configFile >> _moves  >> "States" >> _state  >> "disableWeapons");
		if (_canFireCost || (_canFire != 0) || weaponLowered player) exitWith {
			// Maybe fizzle noise
		};

		private _replacementMode = getText (configFile >> "CfgWeapons" >> currentWeapon player >> currentWeaponMode player >> "knd_ReplacementMode");
		private _replacementMuzzle = getText (configFile >> "CfgWeapons" >> currentWeapon player >> currentWeaponMode player >> "knd_ReplacementMuzzle");
		private _replacementMag = getText (configFile >> "CfgWeapons" >> currentWeapon player >> currentWeaponMode player >> "knd_ReplacementMag");

		player addWeaponItem [currentWeapon player, _replacementMag, true];
		player setAmmo [_replacementMuzzle, -1];
		private _oldMuzzle = currentMuzzle player;
		private _oldMode = currentWeaponMode player;
		player selectWeapon [currentWeapon player, _replacementMuzzle, _replacementMode];
		player forceWeaponFire [_replacementMuzzle, _replacementMode];
		
		[
			{
				params ["_oldMuzzle", "_oldMode", "_replacementCost"];
				player selectWeapon [currentWeapon player, _oldMuzzle, _oldMode];
				player setAmmo [_oldMuzzle, ((player ammo _oldMuzzle) - _replacementCost) max 0];
				player setWeaponReloadingTime [player, _oldMuzzle, 1];
			},
			[
				_oldMuzzle,
				_oldMode,
				_replacementCost
			],
			0.01
		] call CBA_fnc_waitAndExecute;
		
}, "", 0, false, true, "DefaultAction", toString _fnc_scriptedFiremodeCondition];
*/
//////// NO LONGER THE SCRIPTED FIREMODE THINGY DO TOUCH IT /////////////////