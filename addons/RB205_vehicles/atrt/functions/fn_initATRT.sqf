/*
 * Author: 3AS, Edited DartRuffian
 * Creates mount/dismount actions for an AT-RT object.
 *
 * Arguments:
 * atrt: Object - The AT-RT
 *
 * Return Value:
 * None
 *
 * Example:
 * init = "(_this select 0) call TAS_fnc_initATRT";
 */


#define ATRT_BASE_HEALTH 50
params ["_atrt"];

if (isNull _atrt) exitWith {};

_atrt disableAI "RADIOPROTOCOL";
_atrt disableAI "AIMINGERROR";
_atrt disableAI "AUTOTARGET";
_atrt disableAI "AUTOCOMBAT";
_atrt disableAI "MOVE";

_atrt setUnitpos "MIDDLE";

_atrt addEventHandler
[
    "HandleDamage",
    {
        params ["_atrt", "", "_damage", "", "", "", "", ""];
        private ["_atrtHealth"];

        _atrtHealth = _atrt getVariable ["TAS_ATRT_Health", ATRT_BASE_HEALTH]; //Sets Variable to ATRT_BASE_HEALTH if Variable not Set
        _atrtHealth = _atrtHealth - _damage;
        _atrt setVariable ["TAS_ATRT_Health", _atrtHealth, true];

		//Kill ATRT if health is 0 or less.
        if (_atrtHealth <= 0) then
        {
            _atrt call TAS_fnc_spawnATRTSmoke;
            _atrt call TAS_fnc_dismountATRT;
            _atrt setDamage 1;

            _atrt removeEventHandler [_thisEvent, _thisEventHandler];
        };

        0;
    }
];

_atrt addEventHandler
[
    "Deleted",
    {
        // Clears up particles that are spawned by BNAKC_fnc_spawnATRTSmoke before the object is deleted
        params ["_entity"];
        private _allEffects = _entity getVariable ["TAS_ATRT_effects", []];
        { deleteVehicle _x; } forEach _allEffects;
    }
];

_atrt addAction
[
    "Drive",
    {
        //       _target, _caller
        params ["_atrt", "_rider", "", ""];

        _currentRider = _atrt getVariable ["RB205_ATRT_rider", objNull];

        if (!isNull _currentRider) exitWith {
            hint "AT-RT is already mounted!";
        };
        if (typeOf _rider in ["3AS_ATRT","RB205_atrt","RB205_atrt_cmd"]) exitWith {
            hint "You are already on an AT-RT!";
        };

        _atrt setVariable ["RB205_ATRT_rider", _rider, true];
        
        //[_rider, _atrt] call TAS_fnc_mountATRT;        
        
        [_rider, "ATRT_Driver"] remoteExec ["switchMove", 0];
        _rider attachTo [_atrt, [0,0,0], "seat"];
        
        //_shield = "3AS_ATRT_Collision" createVehicle position _atrt;
        //_shield attachTo [_atrt, [0.0, 0.3, -2.3], "seat"];
        
        [_atrt, "ATRT_Stand"] remoteExec ["playMove", 0];
        playsound "ATRT_Start";
        sleep 1;
        
        [_atrt, "Walker_Idle"] remoteExec ["SwitchMove", 0];
        
        // Move the player "into" ATRT using the remoteControl function
        objNull remoteControl driver _rider;
        player remoteControl _atrt;
        
        // Switch the camera to the ATRT now
        if (cameraon != (vehicle _atrt)) then {
            (vehicle _atrt) switchcamera cameraview;
            _atrt enableStamina false;
            _atrt setanimspeedCoef 1.5;
            _atrt forceWalk false;
        };
        
        // Add Killed event handler for cleanup and death animation
        _atrt addEventHandler ["Killed", {
            params ["_atrt"];
            private _rider = _atrt getVariable "RB205_ATRT_rider";
            [_rider, ""] remoteExec ["switchMove", 0];
            detach _rider;
            objNull remoteControl driver _atrt;
            player remoteControl _rider;
            if (cameraon != (vehicle _rider)) then {(vehicle _rider) switchcamera cameraview;};
            
            _atrt setVariable ["RB205_ATRT_rider", nil, true];
            _atrt switchMove "Walker_Dead"; // Use switchMove directly
            inGameUISetEventHandler ["Action", ""];
        }];
        
        inGameUISetEventHandler ["Action", "if ((_this select 3) isEqualTo ""BackFromUAV"") then {true};"];
        
        waitUntil {
            sleep 2;
            private _expression =
            (
                !alive _rider or
                lifeState _currentRider == "INCAPACITATED" or
                _currentRider getVariable ["ACE_isUnconscious", false]
            );
            // See https://community.bistudio.com/wiki/waitUntil#Problems
            !isNil "_expression" and {_expression}
        };

        //_atrt call TAS_fnc_dismountATRT;

        [_rider, ""] remoteExec ["switchMove", 0];
        detach _rider;
        objNull remoteControl driver _atrt;
        player remoteControl _rider;
        if (cameraon != (vehicle _rider)) then {(vehicle _rider) switchcamera cameraview;};
        
        _atrt setVariable ["RB205_ATRT_rider", nil, true];
        //deleteVehicle _shield;
        _atrt allowDamage true;
        [_atrt, "Walker_Dead"] remoteExec ["switchMove", 0];
        _atrt setDamage 1;
        inGameUISetEventHandler ["Action", ""];
    },
    [],
    1.5,
    true,
    true,
    "",
    "_this != _originalTarget", // Prevents rider from seeing mount action,
    4,                                            // and from players getting stuck on dead units
    false,
    "",
    ""
];

_atrt addAction
[
    "Dismount",
    {
        //       _target,  _caller
        params ["", "_atrt", "", ""];

        //_atrt call TAS_fnc_dismountATRT;

        _currentRider = _atrt getVariable ["RB205_ATRT_rider", objNull];

        [_atrt, "ATRT_Crouch"] remoteExec ["playMove", 0]; // Put rider in seated animation
        playsound "ATRT_Stop";
        _rider attachTo [_atrt, [1,0,0], "seat"];
        //deleteVehicle _shield;
        sleep 1;

        _atrt setunitPos "MIDDLE";

        // Dismount animation
        [_rider, ""] remoteExec ["switchMove", 0];
        detach _rider;
        objNull remoteControl driver _atrt;
        player remoteControl _rider;
        if (cameraon != (vehicle _rider)) then {(vehicle _rider) switchcamera cameraview;};
        
        _atrt setVariable ["RB205_ATRT_rider", nil, true];
        _atrt allowDamage true;
        inGameUISetEventHandler ["Action", ""];
    },
    nil,
    1.5,
    false,
    true,
    "",
    "_this == _originalTarget", // Prevent multiple addActions
    2,
    false,
    "",
    ""
];



/* 205th Additions */

_atrt addAction
[
    "<t color='#FF9800'>Unstuck</t>",
    {
        //       _target,  _caller
        params ["", "_atrt", "", ""];
        _atrt call RB205_fnc_unstuckATRT;
    },
    nil,
    1.5,
    false,
    true,
    "",
    "_this == _originalTarget", // Prevent multiple addActions
    2,
    false,
    "",
    ""
];
_atrt addAction
[
    "<t color='#FF9800'>Repair (Collision)</t>",
    {
        //       _target, _caller
        params ["_atrt", "_rider", "", ""];
        _atrt call RB205_fnc_repairAfterCollisionATRT;
    },
    [],
    1.5,
    true,
    true,
    "",
    "_this != _originalTarget and alive _target", // Prevents rider from seeing mount action,
    4,                                            // and from performing this action on dead units
    false,
    "",
    ""
];
_atrt addAction
[
    "<t color='#FF0000'>Disassemble</t>",
    {
        //       _target, _caller
        params ["_atrt", "_rider", "", ""];
        _atrt call RB205_fnc_disassembleATRT;
    },
    [],
    1.5,
    true,
    true,
    "",
    "_this != _originalTarget and alive _target", // Prevents rider from seeing mount action,
    4,                                            // and from performing this action on dead units
    false,
    "",
    ""
];
_atrt addAction
[
    "<t color='#98FF00'>Repair</t>",
    {
        //       _target, _caller
        params ["_atrt", "_rider", "", ""];
        _atrt call RB205_fnc_repairATRT;
    },
    [],
    1.5,
    true,
    true,
    "",
    "_this != _originalTarget and !alive _target and 'ToolKit' in (items player)", // Prevents rider from seeing mount action,
    4,                                            // and from performing this action on dead units
    false,
    "",
    ""
];