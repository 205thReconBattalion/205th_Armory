/* ----------------------------------------------------------------------------
Function: RB205_VS_fnc_createVehSpawnerNaval

Description:
    creates a spawner for naval vehicles

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
rb205_vehicles_spawnArray_naval = [];
{
    if (_x select 1) then {
        rb205_vehicles_spawnArray_naval append [_x select 0];
    };

} forEach [
    ["RB205_catfish_mg", true],
    ["RB205_catfish_at",true],
    ["RB205_catfish_aa",true],

    ["RB205_sdv",true],
    ["RB205_seabob",true]
];

// prepare array for interface function
rb205_vehicles_spawnArray_naval_applied = rb205_vehicles_spawnArray_naval apply {
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
    "Fahrzeug Spawner (Wasser)",
    {
        [
            [
                rb205_vehicles_spawnArray_naval_applied,
                0,
                false
            ],
            "Spawner (Wasserfahrzeuge)",
            {
                if (!_confirmed) exitWith {};
                
                _vehicle = (rb205_vehicles_spawnArray_naval select _index);
                
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