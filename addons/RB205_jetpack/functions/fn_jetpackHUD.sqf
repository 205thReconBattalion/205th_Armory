// Written by: Jenna
//
//
//
// Handles jetpack HUD creation 
// Example:
// call knd_fnc_jetpackHUD
//


// To show HUD:
"KND_JenpackLayer" cutRsc ["KND_JenpackHUD", "PLAIN"];
private _display = uiNamespace getVariable "KND_JenpackHUD";
private _jetpackBackgroundGauge = _display displayCtrl 4948;
private _jetpackFuelGauge = _display displayCtrl 4947;
private _jetpackHeatGauge = _display displayCtrl 4946;

_jetpackBackgroundGauge ctrlSetBackgroundColor [0,0,0,0.2];

_handle = [{
    params ["_args","_handle"];
    _args params ["_jetpackFuelGauge","_jetpackHeatGauge","_jetpackBackgroundGauge"];
	if (!(call knd_fnc_hasJetpack) OR visibleMap OR (ace_player getVariable ["ACE_isUnconscious", false]) OR ((call CBA_fnc_getActiveFeatureCamera) isNotEqualTo "")) exitwith 
	{
		{
			_x ctrlShow false
		} foreach [_jetpackFuelGauge,_jetpackHeatGauge,_jetpackBackgroundGauge]
	};
	{
		_x ctrlShow true
	} foreach [_jetpackFuelGauge,_jetpackHeatGauge,_jetpackBackgroundGauge];

	_jetpackFuelGauge ctrlSetTextColor knd_jetpack_fuelColor;
	_jetpackHeatGauge ctrlSetTextColor knd_jetpack_heatColor;

	private _pack = backpackContainer ace_player;
	private _maxFuel = _pack getVariable ["knd_jetpack_tankSize",nil];
	if (isNil {_maxFuel}) then {
		private _fuelCapacity = [configFile >> "CfgVehicles" >> typeOf _pack, "knd_jetpack_fuelCapacity",knd_jetpack_maxfuel] call BIS_fnc_returnConfigEntry;
		_pack setVariable ["knd_jetpack_tankSize",_fuelCapacity];
	};
	private _fuel = _pack getVariable ["knd_jet_fuel",_maxFuel];
    private _heat = _pack getVariable ["knd_jet_overheat",0];
    _fuel =  ((_fuel/_maxFuel));
    _heat = _heat/knd_jetpack_maxheat;
	
    _jetpackFuelGauge progressSetPosition _fuel;
    _jetpackHeatGauge progressSetPosition _heat;
}, 0, [_jetpackFuelGauge,_jetpackHeatGauge,_jetpackBackgroundGauge]] call CBA_fnc_addPerFrameHandler;