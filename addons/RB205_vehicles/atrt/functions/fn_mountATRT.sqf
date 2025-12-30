/*
 * Author: 3AS (edited by Spark)
 * Manages player mountint an AT-RT
 *
 * Arguments:
 * atrt: Object - the AT-RT that is being mounted
 * rider: Object - player that mounts AT-RT
 *
 * Return Value:
 * None
 *
 * Example:
 * [atrt, rider] call RB205_fnc_mountATRT;
 */

params ["_atrt", "_rider"];
private ["_collision"];

if (typeOf _rider isKindOf "3AS_ATRT_Base") exitWith {}; //prevents stacking of AT-RTs

_atrt setVariable ["TAS_ATRT_rider", _rider, true];

_rider attachTo [_atrt, [0, 0, 0], "seat"];
//[_rider, "ChopperLight_C_LIn_H"] remoteExec ["switchMove", 0];
_rider setVariable ["TAS_ATRT_isRiding", true];

//Add Collision Shield for Rider (Currently think this is not needed ~Jek)
_collision = "3AS_ATRT_Collision" createVehicle (position _atrt); // Object to simulate collision for the vehicle
_collision attachTo [_atrt, [0.0, 0.3, -2.3], "seat"];
_atrt setVariable ["TAS_ATRT_collisionObj", _collision, true];

// Switch camera to AT-RT
if (cameraOn != (vehicle _atrt)) then
{
    (vehicle _atrt) switchCamera cameraView;
    _atrt enableStamina false;
    _atrt forceWalk false;
};

// Give control of the unit to the player
objNull remoteControl driver _rider;
player remoteControl _atrt;


if (isClass (configFile >> "CfgPatches" >> "ace_advanced_throwing") and isClass (configFile >> "CfgPatches" >> "ace_common")) then
{
    [_rider, "blockThrow", "ridingATRT", true] call ace_common_fnc_statusEffect_set;
};

// Makes the "Release UAV Controls" action not do anything to avoid issues
inGameUISetEventHandler ["Action", "if ((_this select 3) isEqualTo ""BackFromUAV"") then {true};"];

[
    {
        params ["_rider"];
        [_rider, "RB205_ATRT_Driver"] remoteExec ["switchMove", 0]; // Seated animation
    },
    [_rider],
    1.5
] call CBA_fnc_waitAndExecute;

// AT-RT animations
[_atrt, "ATRT_activated"] remoteExec ["playMove", 0];
sleep 1;
[_atrt, "Walker_Idle"] remoteExec ["SwitchMove", 0];