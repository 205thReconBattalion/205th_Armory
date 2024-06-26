if !(hasInterface) exitWith {};

[
    "RB205_prowler_item",
    ["CONTAINER","CLOTHES"],
    ["Deploy Prowler 1000"],
    [],
    "",
    [
        {true},
        {
            params ["_unit", "_container", "_item", "_slot", "_params"];
            _unit == vehicle _unit
        }
    ],
    {  
        params ["_unit", "_container", "_item", "_slot", "_params"]; 
        [_unit,_item] call RB205_uav_fnc_deploy_uav;
    },
    true
] call CBA_fnc_addItemContextMenuOption;