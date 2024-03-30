
[
    "knd_jetpack_maxheat",
    "SLIDER",
    "Maximum Heat",
    ["205th Recon Battalion","Jetpack"],
    [30, 100, 40, 0],
    true,
    {}
] call CBA_fnc_addSetting;
/*
[
    "knd_jetpack_maxfuel", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    "Maximum Fuel", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["House Kandosii Aux Mod","Jetpack"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [150, 500, 250, 0], // data for this setting: [min, max, default, number of shown trailing decimals]
    true, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;
*/

[
    "knd_jetpack_fuelColor",
    "COLOR",
    "Jetpack Fuel Color (HUD)",
    ["205th Recon Battalion","Jetpack"],
    [0.7, 0.7, 0, 0.5],
    false,
    {}
] call CBA_fnc_addSetting;

[
    "knd_jetpack_heatColor",
    "COLOR",
    "Jetpack Heat Color (HUD)",
    ["205th Recon Battalion","Jetpack"],
    [0.7, 0, 0, 0.5],
    false,
    {}
] call CBA_fnc_addSetting;