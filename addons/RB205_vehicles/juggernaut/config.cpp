class cfgPatches
{
    class RB205_vehicles_juggernaut
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_APC_Jug"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_juggernaut"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3as_Jug;
	class RB205_juggernaut: 3as_Jug
	{
		ACCESS_TRUE
		displayName = "HAVw A6 Juggernaut";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY
		CARGO_L
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		hiddenSelectionsMaterials[] =
		{
			"RB205_vehicles\juggernaut\data\juggernaut_base.rvmat",
			"RB205_vehicles\juggernaut\data\juggernaut_guns.rvmat",
			"RB205_vehicles\juggernaut\data\juggernaut_props.rvmat",
			"RB205_vehicles\juggernaut\data\juggernaut_wheels.rvmat"
		};
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\juggernaut\data\juggernaut_base.paa",
			"RB205_vehicles\juggernaut\data\juggernaut_guns.paa",
			"RB205_vehicles\juggernaut\data\juggernaut_props.paa",
			"RB205_vehicles\juggernaut\data\juggernaut_wheels.paa"
		};
		class textureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\juggernaut\data\juggernaut_base.paa",
					"RB205_vehicles\juggernaut\data\juggernaut_guns.paa",
					"RB205_vehicles\juggernaut\data\juggernaut_props.paa",
					"RB205_vehicles\juggernaut\data\juggernaut_wheels.paa"
				};
				factions[] =
				{
					"RB205"
				};
			};
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] =
				{
					"3as\3as_jug\data\juggernaut_base_co.paa",
					"3as\3as_jug\data\juggernaut_guns_co.paa",
					"3as\3as_jug\data\juggernaut_props_co.paa",
					"3as\3as_jug\data\juggernaut_wheels_co.paa"
				};
			};
		};
	};
};