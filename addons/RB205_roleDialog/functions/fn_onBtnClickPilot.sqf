params ["_control"];

call RB205_roleDialog_fnc_permissionPilot;
player setVariable ["diwako_dui_nametags_customInfo", "Pilot", true];

closeDialog 0;