params ["_control"];

call RB205_roleDialog_fnc_permissionMedic;
player setVariable ["diwako_dui_nametags_customInfo", "ARF", true];

closeDialog 0;