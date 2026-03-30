class CfgPatches
{
    class RB205_weapons_z6_shield
    {
        requiredAddons[] = { "cba_main" };
        requiredVersion = 1.0;
        author = "Putzi";
        weapons[] = {};
        units[] = {};
    };
};

#include "UIElements\schildanzeige.hpp"


class Extended_PreInit_EventHandlers
{
	class RB205_Z6Shield_PreInit
	{
		init = "call compile preprocessFileLineNumbers '\RB205_weapons\Z6\shield\scripts\XEH_PreInit.sqf'";
	};
	class RB205_Z6Shield_SettingsPreInit
	{
		init = "call compile preprocessFileLineNumbers '\RB205_weapons\Z6\shield\scripts\Settings_PreInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers
{
	class RB205_Z6Shield_PostInit
	{
		init = "call compile preprocessFileLineNumbers '\RB205_weapons\Z6\shield\scripts\XEH_postInit.sqf'";
	};
};

class CfgUIGrids
{
	class IGUI
	{
		class Presets
		{
			class Arma3
			{
				class Variables
				{
					grid_205RB_Z6_Shield[]=
					{
						
						{
							"0.4 * safezoneW + safezoneX",
							"0.2 * safezoneH + safezoneY",
							"0.2 * safezoneW",
							"0.03 * safezoneH"
						},
						"(1 * (((safezoneW / safezoneH) min 1.2) / 50))",
						"(1 * (((safezoneW / safezoneH) min 1.2) / 50))"
					};
				};
			};
		};
		class Variables
		{
			class grid_205RB_Z6_Shield
			{
				displayName="205th Z6 Schildanzeige";
				description="Position des Energiebalkens für das Z6 Schild";
				preview="\RB205_weapons\shield\UIElements\progressBar.paa";
				saveToProfile[]={0,1,2,3};
				canResize=1;
			};
		};
	};
};