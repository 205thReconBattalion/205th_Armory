// Written by Jenna
//
// Returns the status of a worn jetpack
//
// [] call knd_fnc_jetpackCheck

private _pack = backpackContainer ace_player;
private _fuel = _pack getVariable ["knd_jet_fuel",knd_jetpack_maxfuel];
private _heat = _pack getvariable ["knd_jet_overheat",0];

private _fuelStr = str round (100 * _fuel/knd_jetpack_maxfuel);
private _heatStr = str round (100 * _heat/knd_jetpack_maxheat);




titleText [("Fuel: " + _fuelStr + " Heat: " + _heatStr), "PLAIN DOWN"];
titleFadeOut 3;