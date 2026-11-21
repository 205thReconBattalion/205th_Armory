// EMP at the point of impact, with the effect of the RB205_droidPopper grenade and its handling of nearby units.
// Runs on the machine of the shooter, like the hit handler of the grenade.
params ["_posASL", "_owner", "_hitEntity"];

private _posAGL = ASLToAGL _posASL;

createVehicle ["RB205_T7ION_empBlast", _posAGL, [], 0, "CAN_COLLIDE"];

if ((missionNamespace getVariable ["JLTS_settings_EMP_mainSwitch", 1]) != 1) exitWith {};

// The radius comes from the grenade, so both always stay the same. The unit hit directly is handled by the shot itself.
private _range = getNumber (configFile >> "CfgAmmo" >> "RB205_droidPopper_ammo" >> "indirectHitRange");
{
	[_x, _owner, "RB205_droidPopper_ammo", ASLToATL _posASL] spawn RB205W_grenades_fnc_onHitEMP;
} forEach ((_posAGL nearEntities ["CAManBase", _range]) - [_hitEntity]);
