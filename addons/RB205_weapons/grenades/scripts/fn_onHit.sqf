/*
 * Author: MrClock (edited by Spark)
 * HitPart XEH function
 *
 *
 * Arguments:
 * Inherited from HitPart XEH
 *
 * Example:
 * (_this select 0) call JLTS_fnc_onHit;
 *
 * Return Value:
 * None
 *
 */

params["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];

//if (!hasInterface) exitWith {};

//[_fnc_scriptName,[_target,_shooter,_projectile,_position,_velocity,_selection,_ammo,_vector,_radius,_surfaceType,_isDirect]] call JLTS_fnc_logVariables;

if (isNil{_ammo select 4}) exitWith {/*systemChat "Fall damage"*/};

if (!alive _target) exitWith {};

private _ammoUsed = _ammo select 4;

if (getNumber(configFile >> "CfgAmmo" >> _ammoUsed >> "RB205_isEMPGrenade") == 1) then {[_target,_shooter,_ammoUsed,getPosATL _projectile] spawn RB205W_grenades_fnc_onHitEMP};