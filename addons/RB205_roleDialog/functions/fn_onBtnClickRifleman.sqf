params ["_control"];

player setVariable ["ace_medical_medicClass", 0, true];
player setVariable ["ACE_IsEngineer", 0, true];
player setVariable ["ACE_isEOD", 0, true];
/*
_role = "Rifleman";
player setVariable ["RB205_combatRole", _role, true];
player setVariable ["diwako_dui_nametags_customInfo", _role, true];

_iconPath = "\z\diwako_dui\addons\main\UI\icon_styles\clones\icon_rifleman.paa";
player setVariable ["diwako_dui_radar_customIcon", _iconPath, true];
player setVariable ["diwako_dui_indicators_customIcon", _iconPath, true];
player setVariable ["diwako_dui_linecompass_customIcon", [_iconPath, 2], true];
*/
closeDialog 0;