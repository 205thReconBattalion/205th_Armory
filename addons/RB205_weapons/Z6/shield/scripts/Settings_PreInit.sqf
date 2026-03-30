[
    "RB205_Z6_SHIELD_LIFETIME",
    "EDITBOX",
    ["Z6 Shield Lifetime", "Time the Shield is Active."],
    ["205th Recon Battalion","Z6 Shield"],
    "10",
    1,
    {}
] call CBA_fnc_addSetting;

[
    "RB205_Z6_SHIELD_RECHARGE_TIME",
    "EDITBOX",
    ["Z6 Shield Recharge Time", "Time in seconds for the Z6 Shield to fully recharge."],
    ["205th Recon Battalion","Z6 Shield"],
    "10",
    1,
    {}
] call CBA_fnc_addSetting;

[
    "RB205_Z6_SHIELD_HIDE_SHIELD_IF_FULLY_CHARGED",
    "CHECKBOX",
    ["Hide Progress Bar if fully charged","If the Progressbar should hide if fully charged."],
    ["205th Recon Battalion", "Z6 Shield"],
    true,
    0,
    {},
    true
] call CBA_fnc_addSetting;

[
    "RB205_Z6_SHIELD_FADE_AFTER",
    "EDITBOX",
    ["Progressbar hide after (seconds)", "Time in seconds for Progressbar to Hide"],
    ["205th Recon Battalion","Z6 Shield"],
    "3",
    0,
    {}
] call CBA_fnc_addSetting;