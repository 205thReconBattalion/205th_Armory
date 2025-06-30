/* ----------------------------------------------------------------------------
Function: RB205_VS_fnc_createVehSpawnerLand

Description:
    creates a spawner for land vehicles

Parameters:
    terminal   - terminal to which the addaction is added
    landingPad - spawning position of the vehicle

Returns:
    none

Author:
    Spark2000
---------------------------------------------------------------------------- */

params ["_terminal","_landingPad"];
terminal = _terminal;
landingPad = _landingPad;

// select which vehicles to be spawnable
rb205_vehicles_spawnArray_land = [];
{
    if (_x select 1) then {
        rb205_vehicles_spawnArray_land append [_x select 0];
    };

} forEach [
    ["RB205_barc",true],
    ["RB205_barc_sidecar",true],

    ["RB205_atrt",true],

    ["RB205_swamp",true],
    ["RB205_swamp_transport",true],

    ["RB205_WH",true],
    ["RB205_WH_TT",true],
    ["RB205_WH_MG",true],
    ["RB205_WH_AT",true],
    ["RB205_WH_AA",true],
    ["RB205_WH_Repair",true],

    ["RB205_truck_transport",true],
    ["RB205_truck_transport_covered",true],
    ["RB205_truck_ammo",true],
    ["RB205_truck_fuel",true],
    ["RB205_truck_repair",true],
    ["RB205_truck_device",true]
];

// prepare array for interface function
rb205_vehicles_spawnArray_land_applied = rb205_vehicles_spawnArray_land apply {
    [
        [getText (configFile >> "CfgVehicles" >> _x >> "displayName")],
        [str getNumber (configFile >> "CfgVehicles" >> _x >> "ace_cargo_space")],
        [],
        [getText (configFile >> "CfgVehicles" >> _x >> "icon")],
        "Crew: " + str ([_x, false] call BIS_fnc_crewCount) + " | Gesamt: " + str ([_x, true] call BIS_fnc_crewCount),
        "X2",
        0
    ]
};

// create interface (via fuction) that spawns selected vehicle
terminal addaction [
    "Fahrzeug Spawner (Standard)",
    {
        [
            [
                rb205_vehicles_spawnArray_land_applied,
                0,
                false
            ],
            "Spawner (Landfahrzeuge)",
            {
                if (!_confirmed) exitWith {};
                
                _vehicle = (rb205_vehicles_spawnArray_land select _index);
                
                _spawnPad = nil;
                if (surfaceIsWater position landingPad)
                then {
                    _spawnPad = getPosASL landingPad;
                }
                else {
                    _spawnPad = getPosATL landingPad;
                };
                _dir = getDir landingPad;
                _veh = createVehicle
                [
                    _vehicle,
                    _spawnPad,
                    [],
                    0,     
                    "CAN_COLLIDE"
                ];
                _veh setDir _dir;
            },
            "Spawnen",
            "Abbrechen"
        ] call CAU_UserInputMenus_fnc_listbox;
    },nil, 16, false,	true, "", "", 5
];