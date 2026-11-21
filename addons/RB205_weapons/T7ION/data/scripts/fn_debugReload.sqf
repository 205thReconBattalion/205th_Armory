// TEMPORARY: logs every T-7 reload to the RPT to find the cause of the wrong reload animation. Remove afterwards.
params ["_args"];
_args params ["_startTime", "_lastGesture"];

private _unit = call CBA_fnc_currentUnit;
if (currentWeapon _unit != "RB205_T7ION") exitWith {};

private _reloadPhase = (weaponState _unit) select 6;
private _gesture = gestureState _unit;

if (_reloadPhase > 0 && {_startTime < 0}) then {
	_startTime = diag_tickTime;
	_args set [0, _startTime];

	private _state = animationState _unit;
	private _actions = getText (configFile >> "CfgMovesMaleSdr" >> "States" >> _state >> "actions");
	private _action = configFile >> "CfgMovesMaleSdr" >> "Actions" >> _actions >> "t7ion_reload";
	private _states = configFile >> "CfgGesturesMale" >> "States" >> "t7ion_reload";

	diag_log format ["RB205_T7DEBUG start: state=%1 actions=%2 action=%3/%4", _state, _actions, getArray _action, getText _action];
	diag_log format ["RB205_T7DEBUG config: weaponAction=%1 mag=%2 magAction=%3", getText (configFile >> "CfgWeapons" >> "RB205_T7ION" >> "reloadAction"), currentMagazine _unit, getText (configFile >> "CfgMagazines" >> currentMagazine _unit >> "reloadAction")];
	diag_log format ["RB205_T7DEBUG gesture: file=%1 speed=%2 parent=%3 addons=%4", getText (_states >> "file"), getNumber (_states >> "speed"), configName inheritsFrom _states, configSourceAddonList _states];
};

if (_startTime < 0) exitWith {};

if (_gesture != _lastGesture) then {
	_args set [1, _gesture];
	diag_log format ["RB205_T7DEBUG t=%1 gesture=%2", (diag_tickTime - _startTime) toFixed 2, _gesture];
};

if (_reloadPhase == 0) then {
	diag_log format ["RB205_T7DEBUG end: duration=%1", (diag_tickTime - _startTime) toFixed 2];
	_args set [0, -1];
	_args set [1, ""];
};
