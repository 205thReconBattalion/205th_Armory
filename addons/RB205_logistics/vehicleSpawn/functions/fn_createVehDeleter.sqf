/* ----------------------------------------------------------------------------
Function: RB205_VS_fnc_createVehDeleter

Description:
    creates a deletion addaction for vehicles

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

terminal addaction ["<t color='#6a0f0f'>Fahrzeug einlagern</t>",
    {
        _allVehiclesInSpawnArea = nearestObjects [landingPad, ["Land", "Air", "Ship"], 5];
        if ((count _allVehiclesInSpawnArea) >= 1) then {
            
            deleteVehicle (_allVehiclesInSpawnArea select 0);
        };
        
    },nil, 16, false,	true, "", "", 5
];