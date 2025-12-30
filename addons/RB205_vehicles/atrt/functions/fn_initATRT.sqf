/*
 * Author: Spark (based on 3AS)
 * Creates mount/dismount actions for an AT-RT object
 *
 * Arguments:
 * atrt: Object - The AT-RT
 *
 * Return Value:
 * None
 *
 * Example:
 * init = "(_this select 0) call RB205_fnc_initATRT";
 */

#define ATRT_BASE_HEALTH 50

params ["_atrt"];
if (isNull _atrt) exitWith {};

//_atrt setAnimSpeedCoef 1.5;

_atrt disableAI "AIMINGERROR";
_atrt disableAI "AUTOTARGET";
_atrt disableAI "AUTOCOMBAT";
_atrt disableAI "MOVE";
_atrt disableAI "RADIOPROTOCOL";

[_atrt, "ATRT_deactivate"] remoteExec ["playMove", 0];
_atrt setUnitpos "MIDDLE";

_atrt addEventHandler
[
    "HandleDamage",
    {
        params ["_atrt", "", "_damage", "", "", "", "", ""];

        // health calculations
        private _atrtHealth = _atrt getVariable ["TAS_ATRT_Health", ATRT_BASE_HEALTH];
        _atrtHealth = _atrtHealth - _damage;
        _atrt setVariable ["TAS_ATRT_Health", _atrtHealth, true];

		// kills AT-RT if health is 0 (or below)
        if (_atrtHealth <= 0) then
        {
            _atrt setDamage 1;

            _atrt removeEventHandler [_thisEvent, _thisEventHandler];
        };

        0;
    }
];

_atrt addEventHandler [
    "Killed",
    {
        params ["_atrt"];

        [_atrt, true] call RB205_fnc_dismountATRT; //instant dimsount
        [_atrt, "ATRT_destroyed"] remoteExecCall ["switchMove", 0];
    }
];

_atrt addEventHandler [
    "Deleted",
    {
        params ["_atrt"];
		
        [_atrt, true] call RB205_fnc_dismountATRT; //instant dimsount
    }
];

_atrt addAction
[
    "Mount",
    {
        //       _target, _caller
        params ["_atrt", "_rider", "", ""];

        //_riderCheck = _atrt getVariable "TAS_ATRT_rider";
        //if (!(isNil _riderCheck)) exitWith {};
        _rider = _atrt getVariable ["TAS_ATRT_rider", _rider]; //Sets Variable to _rider if Variable not set
        [_atrt, _rider] call RB205_fnc_mountATRT;

        // Check if the player should be able to ride
        waitUntil
        {
            sleep 2;
            private _expression =
            (
                !alive _rider or
                lifeState _rider == "INCAPACITATED" or
                _rider getVariable ["ACE_isUnconscious", false] or
                !alive _atrt
            );
            // See https://community.bistudio.com/wiki/waitUntil#Problems
            !isNil "_expression" and { _expression };
        };

        if (!alive _atrt) exitWith {};

        [_atrt, false] call RB205_fnc_dismountATRT; //normal dismount
    },
    [],
    1.5,
    true,
    true,
    "",
    "_this != _originalTarget and alive _target", // Prevents rider from seeing mount action,
    4,                                            // and from players getting stuck on dead units
    false,
    "",
    ""
];

_atrt addAction
[
    "Dismount",
    {
        params ["", "_atrt", "", ""];
        [_atrt, false] call RB205_fnc_dismountATRT; //normal dismount
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