// Written by Jenna
//
// Returns whether the player has a jetpack on, uses ace_player because it never matters for AI
//
// [] call knd_fnc_hasJetpack

#define GET_NUMBER(config,default) (if (isNumber (config)) then {getNumber (config)} else {default})



private _pack = backpackContainer ace_player;
private _packclass = typeOf _pack;
private _isPack = GET_NUMBER(configFile >> "CfgVehicles" >> _packclass >> "knd_isJetpack",0);

[false,true] select _isPack;