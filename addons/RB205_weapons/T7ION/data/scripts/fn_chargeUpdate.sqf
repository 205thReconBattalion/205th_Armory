// Per frame handler while charging: evaluates the trigger and updates the charge ring.
params ["_args"];
_args params ["_unit", "_startTime", "_chargeTime", "_fireWindow", "_readyCuePlayed"];

if !([_unit] call RB205_T7ION_fnc_chargeCanContinue) exitWith {
	[_unit] call RB205_T7ION_fnc_chargeEnd;
};

private _elapsed = CBA_missionTime - _startTime;

// Released in the window it fires, released too early it just aborts and keeps the shot.
if (inputAction "DefaultAction" == 0) exitWith {
	[_unit] call RB205_T7ION_fnc_chargeEnd;
	if (_elapsed >= _chargeTime) then {
		_unit forceWeaponFire [currentMuzzle _unit, currentWeaponMode _unit];
	};
};

if (_elapsed >= _chargeTime + _fireWindow) exitWith {
	[_unit] call RB205_T7ION_fnc_chargeEnd;
	[_unit] call RB205_T7ION_fnc_chargeOverload;
};

if (_elapsed < _chargeTime) exitWith {
	[_unit, _elapsed / _chargeTime, [0.43, 0.76, 0.96]] call RB205_T7ION_fnc_chargeRing;
};

// In the window the ring drains again and turns from green to red.
private _windowUsed = (_elapsed - _chargeTime) / _fireWindow;
[
	_unit,
	1 - _windowUsed,
	[0.35 + 0.65 * _windowUsed, 0.88 - 0.63 * _windowUsed, 0.47 - 0.24 * _windowUsed]
] call RB205_T7ION_fnc_chargeRing;

if (!_readyCuePlayed) then {
	_args set [4, true];
	playSound "RB205_T7ION_ready";
	["rb205_ion_chargeSoundEvent", [_unit, "RB205_T7ION_hold", 1]] call CBA_fnc_globalEvent;
};
