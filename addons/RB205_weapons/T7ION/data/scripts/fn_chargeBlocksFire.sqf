// Whether the T-7 of this unit can only be fired through the charge mechanic right now.
// Runs every frame as condition of the hidden DefaultAction: while it returns true, a click does not fire.
params ["_unit"];

if (currentWeapon _unit != "RB205_T7ION") exitWith {false};

// forceWeaponFire does not work in FFV seats, so the weapon fires directly there.
if (!isNull objectParent _unit) exitWith {false};

// When empty, the engine keeps handling the dry click and the automatic reload.
if ((_unit ammo currentMuzzle _unit) == 0) exitWith {false};

(weaponState _unit) params ["_weapon", "_muzzle", "", "", "", "", "_magazineReloadPhase"];

// The engine cannot fire while reloading, so the hidden action stays out of the way of the reload.
if (_magazineReloadPhase > 0) exitWith {false};

// On safe, ACE safe mode already blocks the shot and charging must not start.
!(_muzzle in ((_unit getVariable ["ace_safemode_safedWeapons", createHashMap]) getOrDefault [_weapon, createHashMap]))
