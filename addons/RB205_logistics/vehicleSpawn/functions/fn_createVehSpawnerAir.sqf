/* ----------------------------------------------------------------------------
Function: RB205_VS_fnc_createVehSpawnerAir

Description:
    creates a spawner for air vehicles

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
rb205_vehicles_spawnArray = [];
{
    if (_x select 1) then {
        rb205_vehicles_spawnArray append [_x select 0];
    };

} forEach [
    ["RB205_laat", true],
    ["RB205_laat_turrets",true],
    ["RB205_laat_lights",true],
    ["RB205_laatc",true],
    ["RB205_laatle",true],

    ["RB205_z95",true],
    ["RB205_vwing",true],
    ["RB205_v19",true],
    ["RB205_arc170",true],
    ["RB205_ywing",true],

    ["RB205_nuclass",true],
    ["RB205_rhoclass",true],
    ["RB205_purrgil",true],
    ["RB205_gozanti",true],

    ["RB205_rhoclass_crate_transport",true],
    ["RB205_rhoclass_crate_medical",true],
    ["RB205_rhoclass_crate_barracks",true]
];

// prepare array for interface function
rb205_vehicles_spawnArray_applied = rb205_vehicles_spawnArray apply {
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
    "Fahrzeug Spawner (Sternenjäger)",
    {
        [
            [
                rb205_vehicles_spawnArray_applied,
                0,
                false
            ],
            "Vehicle Spawner (Starfighter)",
            {
                if (!_confirmed) exitWith {};
                
                _vehicle = (rb205_vehicles_spawnArray select _index);
                
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
            "Cancel"
        ] call CAU_UserInputMenus_fnc_listbox;
    },nil, 16, false,	true, "", "", 5
];