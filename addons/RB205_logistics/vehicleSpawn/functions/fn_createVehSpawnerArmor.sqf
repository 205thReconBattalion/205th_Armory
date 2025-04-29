/* ----------------------------------------------------------------------------
Function: RB205_VS_fnc_createVehSpawnerArmor

Description:
    creates a spawner for armored vehicles

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
rb205_vehicles_spawnArray_armor = [];
{
    if (_x select 1) then {
        rb205_vehicles_spawnArray_armor append [_x select 0];
    };

} forEach [
    ["RB205_bantha", true],
    ["RB205_bantha_aa",true],
    ["RB205_bantha_mortar",true],
    ["RB205_bantha_assault",true],
    ["RB205_bantha_unarmed",true],
    ["RB205_bantha_cargo",true],
    ["RB205_bantha_service",true],

    ["RB205_px10",true],
    ["RB205_px10_service",true],

    ["RB205_tx130",true],
    ["RB205_tx130_gl",true],
    ["RB205_tx130_recon",true],
    ["RB205_tx130_super",true],

    ["RB205_atte",true],
    ["RB205_atap",true],
    ["RB205_rx200",true],
    ["RB205_utat",true],
    ["RB205_juggernaut",true],

    ["RB205_av7",true],
    ["RB205_keeradak",true],
    ["RB205_fcc",true]
];

// prepare array for interface function
rb205_vehicles_spawnArray_armor_applied = rb205_vehicles_spawnArray_armor apply {
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
    "Fahrzeug Spawner (Gepanzert)",
    {
        [
            [
                rb205_vehicles_spawnArray_armor_applied,
                0,
                false
            ],
            "Spawner (gepanzerte Fahrzeuge)",
            {
                if (!_confirmed) exitWith {};
                
                _vehicle = (rb205_vehicles_spawnArray_armor select _index);
                
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