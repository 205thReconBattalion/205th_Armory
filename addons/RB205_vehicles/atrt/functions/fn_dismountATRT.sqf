/*
 * Author: Spark (205th Recon Battalion)
 * Repairs the AT-RT by deleting the unit and spawning a new one
 *
 * Arguments:
 * atrt: Object - The AT-RT to teleport
 * instant: boolean - proper dismount (false) oder instant dismount (true) (eg on AT-RT destruction)
 *
 * Return Value:
 * None
 *
 * Example:
 * [atrt, instant] call RB205_fnc_dismountATRT;
 */

params ["_atrt", "_instant"];
private ["_rider", "_direction", "_position", "_collision"];

_rider = _atrt getVariable ["TAS_ATRT_rider", nil];
if (isNil "_rider") exitWith {};

// Prevent the player getting stuck on top
_direction = direction _rider;
/*_position = getPosASL _atrt;
_position =
[
    _position#0 - 0.35 + sin (_direction - 90),
    _position#1 - 0.3 + cos (_direction - 90),
    _position#2 + 1
];*/

_atrt setAnimSpeedCoef 1;

// AT-RT animation
if (!(_instant)) then {
	[_atrt, "ATRT_deactivate"] remoteExec ["playMove", 0];
	playsound "ATRT_deactivate";
	sleep 1;
	_atrt setunitPos "MIDDLE";
};

// Switch camera back to rider
if (cameraOn != (vehicle _rider)) then
{
    // Reset camera view to player
    (vehicle _rider) switchCamera cameraView;
};

if (!(_instant)) then {
	[_rider, "GetOutQuadbike"] remoteExec ["switchMove", 0]; //1.538s
	sleep 1.54;
};

//_rider setPosASL _position;
_rider attachTo [_atrt, [-1.2,0,0], "seat"];
[_rider, ""] remoteExec ["switchMove", 0];
detach _rider;
_rider setDir _direction - 90;

_rider setVariable ["TAS_ATRT_isRiding", false];

// Switch camera back to rider
/*if (cameraOn != (vehicle _rider)) then
{
    // Reset camera view to player
    (vehicle _rider) switchCamera cameraView;
};*/

_atrt remoteControl objNull;
_rider remoteControl objNull;

if (isClass (configFile >> "CfgPatches" >> "ace_advanced_throwing")) then
{
    [_rider, "blockThrow", "ridingATRT", false] call ace_common_fnc_statusEffect_set;
};

//Remove Collision Shield for Rider added by fn_mountATRT.sqf
_collision = _atrt getVariable ["TAS_ATRT_collisionObj", objNull]; // Remove collision
deleteVehicle _collision;

_atrt setVariable ["TAS_ATRT_rider", nil, true]; // Reset rider
inGameUISetEventHandler ["Action", ""];

/*[
    {
        params ["_rider"];
        [_rider, ""] remoteExec ["switchMove", 0]; // Seated animation
    },
    [_rider],
    0.5
] call CBA_fnc_waitAndExecute;*/