params ["_control"];

call RB205_roleDialog_fnc_permissionEOD;
player setVariable ["diwako_dui_nametags_customInfo", "EOD", true];

closeDialog 0;