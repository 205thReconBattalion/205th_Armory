class cfgPatches
{
    class RB205_vehicles_barc
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"RB205_vehicles_barc_base"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] =
		{
			"RB205_barc",
			"RB205_barc_sidecar",
			"RB205_barc_stretcher"
		};
		weapons[] =
		{
			"RB205_barc_repeater",
			"RB205_barc_repeater_sidecar",
			"RB205_barc_flamer_sidecar"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"
#include "\RB205_vehicles\barc\barc_macros.hpp"

class cfgVehicles
{
	class RB205_barc_base;
	class RB205_barc: RB205_barc_base
	{
		ACCESS_TRUE
		displayName = "BARC Speeder";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		typicalCargo[] = { CREW_DEFAULT };
		VEH_INVENTORY_LIGHT
		CARGO_NONE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Textures
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\barc\data\barc_ca.paa",
			"RB205_vehicles\barc\data\barc_exterior_ca.paa",
			"RB205_vehicles\barc\data\barc_lever_ca.paa"
		};
		textureList[] =
        {
            "Default",	1,
            "Republic",	0
        };
		class TextureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\barc\data\barc_ca.paa",
					"RB205_vehicles\barc\data\barc_exterior_ca.paa",
					"RB205_vehicles\barc\data\barc_lever_ca.paa"
				};
				factions[] = {"RB205"};
			};
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "205th Recon Battalion";
				textures[] =
				{
					"\QS_Barc_F\data\Barc_ca.paa",
					"\QS_Barc_F\data\Barc_exterior_ca.paa",
					"\QS_Barc_F\data\Barc_lever_ca.paa"
				};
			};
		};
	};

	class RB205_barc_sidecar_base;
	class RB205_barc_sidecar: RB205_barc_sidecar_base
	{
		ACCESS_TRUE
		displayName = "BARC Speeder (Sidecar)";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		typicalCargo[] = { CREW_DEFAULT };
		VEH_INVENTORY_LIGHT
		CARGO_NONE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Textures
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\barc\data\barc_ca.paa",
			"RB205_vehicles\barc\data\barc_exterior_ca.paa",
			"RB205_vehicles\barc\data\barc_lever_ca.paa",
			"RB205_vehicles\barc\data\barc_sidecar_ca.paa",
			"RB205_vehicles\barc\data\barc_sidecar_exterior_ca.paa"
		};
		textureList[] =
        {
            "Default",	1,
            "Republic",	0
        };
		class TextureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\barc\data\barc_ca.paa",
					"RB205_vehicles\barc\data\barc_exterior_ca.paa",
					"RB205_vehicles\barc\data\barc_lever_ca.paa",
					"RB205_vehicles\barc\data\barc_sidecar_ca.paa",
					"RB205_vehicles\barc\data\barc_sidecar_exterior_ca.paa"
				};
				factions[] = {"RB205"};
			};
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "205th Recon Battalion";
				textures[] =
				{
					"\QS_Barc_F\data\Barc_ca.paa",
					"\QS_Barc_F\data\Barc_exterior_ca.paa",
					"\QS_Barc_F\data\Barc_lever_ca.paa",
					"\QS_Barc_F\data\Barc_sidecar_ca.paa",
					"\QS_Barc_F\data\Barc_sidecar_exterior_ca.paa"
				};
			};
		};
	};

	class RB205_barc_stretcher_base;
	class RB205_barc_stretcher: RB205_barc_stretcher_base
	{
		ACCESS_TRUE
		displayName = "BARC Speeder (Stretcher)";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		typicalCargo[] = { CREW_DEFAULT };
		VEH_INVENTORY_LIGHT
		CARGO_NONE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Textures
		hiddenSelectionsTextures[]=
		{
			"RB205_vehicles\barc\data\barc_ca.paa",
			"RB205_vehicles\barc\data\barc_exterior_ca.paa",
			"RB205_vehicles\barc\data\barc_lever_ca.paa",
			"\QS_Barc_F\data\Barc_stretcher_ca.paa"
		};
		textureList[] =
        {
            "Default",	1,
            "Republic",	0
        };
		class TextureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\barc\data\barc_ca.paa",
					"RB205_vehicles\barc\data\barc_exterior_ca.paa",
					"RB205_vehicles\barc\data\barc_lever_ca.paa",
					"\QS_Barc_F\data\Barc_stretcher_ca.paa"
				};
				factions[] = {"RB205"};
			};
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "205th Recon Battalion";
				textures[] =
				{
					"\QS_Barc_F\data\Barc_ca.paa",
					"\QS_Barc_F\data\Barc_exterior_ca.paa",
					"\QS_Barc_F\data\Barc_lever_ca.paa",
					"\QS_Barc_F\data\Barc_stretcher_ca.paa"
				};
			};
		};
	};
};
#include "\RB205_vehicles\barc\barc_weapons.hpp"

class Extended_PostInit_EventHandlers
{
	class RB205_vehicles_barc_postInit
	{
		init = "call compile preProcessFileLineNumbers '\RB205_vehicles\barc\XEH_postInit.sqf'";
	};
};