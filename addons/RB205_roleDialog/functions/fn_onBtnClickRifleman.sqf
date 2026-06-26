params ["_control"];

call RB205_roleDialog_fnc_permissionRifleman;
player setVariable ["diwako_dui_nametags_customInfo", "Rifleman", true];

closeDialog 0;