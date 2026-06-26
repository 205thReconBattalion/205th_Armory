params ["_control"];

call RB205_roleDialog_fnc_permissionCrewman;
player setVariable ["diwako_dui_nametags_customInfo", "Crewman", true];

closeDialog 0;