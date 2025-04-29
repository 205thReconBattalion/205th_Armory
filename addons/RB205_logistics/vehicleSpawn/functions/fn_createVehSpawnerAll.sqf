/* ----------------------------------------------------------------------------
Function: RB205_VS_fnc_createVehSpawnerAll

Description:
    creates a vehicle spawner with all available categories

Parameters:
    terminal   - terminal to which the addaction is added
    landingPad - spawning position of the vehicle

Returns:
    none

Author:
    Spark2000
---------------------------------------------------------------------------- */

params ["_terminal","_landingPad"];

[_terminal,_landingPad] call RB205_VS_fnc_createVehDeleter;
[_terminal,_landingPad] call RB205_VS_fnc_createVehSpawnerLand;
[_terminal,_landingPad] call RB205_VS_fnc_createVehSpawnerArmor;
[_terminal,_landingPad] call RB205_VS_fnc_createVehSpawnerAir;
[_terminal,_landingPad] call RB205_VS_fnc_createVehSpawnerNaval;