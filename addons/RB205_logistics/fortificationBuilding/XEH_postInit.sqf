if (!hasInterface) exitWith {};

[
    "unit",
    {
        params ["_newUnit", "_oldUnit"];

        _newUnit setVariable ["mti_fortify_canFortify", true, true];
    },
    true
] call CBA_fnc_addPlayerEventHandler;