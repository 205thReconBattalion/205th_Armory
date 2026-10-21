/*
 * Cabin Lights addon setting for RB205_vehicles.
 * Started automatically by CfgFunctions, preInit = 1, on all machines.
 */

[
    "RB205_vehicles_cabinLightAccess",
    "LIST",
    [
        "Cabin Lights - Interaction Access",
        "Choose who can change the cabin lights from inside the vehicle."
    ],
    "[205] Miscellaneous",
    [[0, 1, 2], [
        "Everyone",
        "Squad Leaders, Pilot and Copilot Only",
        "Pilot and Copilot Only"
    ], 0],
    1,
    {},
    false
] call CBA_fnc_addSetting;
