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
            class updateCabinLightIndicator
            {
                file = "\RB205_vehicles\functions\fnc_updateCabinLightIndicator.sqf";
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

class RscText;
class RscTitles
{
    class RB205_vehicles_CabinLightIndicator
    {
        idd = -1;
        duration = 1e10;
        fadeIn = 0;
        fadeOut = 0;
        onLoad = "uiNamespace setVariable ['RB205_vehicles_cabinLightIndicatorDisplay', _this select 0];";
        onUnload = "uiNamespace setVariable ['RB205_vehicles_cabinLightIndicatorDisplay', displayNull];";

        class controls
        {
            class Status: RscText
            {
                idc = 20501;
                style = 2;
                x = "safeZoneX + safeZoneW * 0.865";
                y = "safeZoneY + safeZoneH * 0.22";
                w = "safeZoneW * 0.12";
                h = "safeZoneH * 0.035";
                sizeEx = "safeZoneH * 0.025";
                font = "RobotoCondensedBold";
                shadow = 1;
                colorBackground[] = {0.02, 0.02, 0.02, 0.8};
                colorText[] = {1, 1, 1, 1};
                text = "";
            };
        };
    };
};

#include "fieldManual.hpp"