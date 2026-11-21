// Starts charging when the trigger is pressed. Runs on the machine of the shooter.
params ["_unit"];

if (!isNil "RB205_T7ION_chargeHandle") exitWith {};

// A lowered weapon comes up first, charging then takes a new click.
if (weaponLowered _unit) exitWith {
	_unit action ["WeaponInHand", _unit];
};

if !([_unit] call RB205_T7ION_fnc_chargeCanContinue) exitWith {};

private _chargeTime = RB205_T7ION_chargeTime;

("RB205_T7ION_chargeRing" call BIS_fnc_rscLayer) cutRsc ["RB205_T7ION_chargeRing", "PLAIN"];

// charge_sound.ogg lasts 3 seconds, the pitch makes it fit the configured charge time.
["rb205_ion_chargeSoundEvent", [_unit, "RB205_T7ION_charge", 3 / _chargeTime]] call CBA_fnc_globalEvent;

RB205_T7ION_chargeHandle = [
	RB205_T7ION_fnc_chargeUpdate,
	0,
	[_unit, CBA_missionTime, _chargeTime, RB205_T7ION_fireWindow, false]
] call CBA_fnc_addPerFrameHandler;
