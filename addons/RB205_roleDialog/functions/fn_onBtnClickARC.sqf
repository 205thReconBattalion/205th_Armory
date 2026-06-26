params ["_control"];

call RB205_roleDialog_fnc_permissionARC;
player setVariable ["diwako_dui_nametags_customInfo", "ARC", true];

closeDialog 0;