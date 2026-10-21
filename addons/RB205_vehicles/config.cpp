class cfgPatches
{
    class RB205_vehicles
	{
		requiredAddons[]=
		{
			"RB205_main",
			"cba_main",
			"cba_events",
			"ace_common",
			"ace_interact_menu"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] = {};
	};
};

class CfgEditorSubcategories
{
	class RB205_veh_ground
	{
		displayName = "Vehicles";
	};
	class RB205_veh_tank
	{
		displayName = "Vehicles - Armored";
	};
	class RB205_veh_air
	{
		displayName = "Vehicles - Starfighter";
	};
	class RB205_veh_naval
	{
		displayName = "Vehicles - Naval";
	};
	class RB205_veh_other
	{
		displayName = "Vehicles - Other";
	};
};

class CfgFunctions
{
    class RB205_vehicles
    {
        tag = "RB205_vehicles";

        class CabinLights
        {
            class canSetCabinLights
            {
                file = "\RB205_vehicles\functions\fnc_canSetCabinLights.sqf";
            };
            class getCabinLightPositions
            {
                file = "\RB205_vehicles\functions\fnc_getCabinLightPositions.sqf";
            };
            class setCabinLights
            {
                file = "\RB205_vehicles\functions\fnc_setCabinLights.sqf";
            };
            class cabinLightsPreInit
            {
                file = "\RB205_vehicles\functions\fnc_cabinLightsPreInit.sqf";
                preInit = 1;
            };
            class cabinLightsPostInit
            {
                file = "\RB205_vehicles\functions\fnc_cabinLightsPostInit.sqf";
                postInit = 1;
            };
        };
    };
};

#include "fieldManual.hpp"