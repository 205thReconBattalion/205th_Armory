class cfgPatches
{
    class RB205_vehicles_barc
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
            "3AS_LightVics_Barc",
            "ls_vehicles_ground"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] =
		{
			"RB205_barc",
			"RB205_barc_sidecar"
		};
		weapons[] =
		{
			"3AS_BARC_repeater",
			"RB205_barc_repeater_he"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"
#include "\RB205_vehicles\barc\barc_macros.hpp"

#define LAATC_LIFTABLE \
    tas_canBlift = 2; \
    tas_liftVars = "[[[[0,-3.7,-6]],[[-1,-3.7,-6],[1,-3.7,-6]]], [0.5,0.25], [-0.1,0.05]]";

class cfgVehicles
{
	class 3AS_Barc;
	class RB205_barc: 3AS_Barc
	{
		ACCESS_TRUE
		displayName = "BARC Speeder";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		VEH_INVENTORY_LIGHT
		CARGO_1
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Textures
        hiddenSelectionsMaterials[] =
		{
			"RB205_vehicles\barc\data\barc.rvmat"
		};
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\barc\data\barc_co.paa"
		};
        textureList[] =
        {
            "Default",	1,
            "Republic",	0
        };
		class textureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\barc\data\barc_co.paa"
				};
		        factions[] = {"RB205"};
			};
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] =
				{
					"3AS\3AS_LightVics\3AS_BARC\data\barc_rep_co.paa"
				};
			};
		};
		weapons[] =
		{
			"RB205_barc_repeater"
		};
		magazines[] =
		{
			"RB205_barc_mag",
			"RB205_barc_mag",
			"RB205_barc_mag",
			"RB205_barc_mag",
            "RB205_barc_mag"
		};
		BARC_SOUND
		BARC_FLIP
	};

	class 3AS_BarcSideCar;
	class RB205_barc_sidecar: 3AS_BarcSideCar
	{
		ACCESS_TRUE
		displayName = "BARC Speeder (Sidecar)";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		VEH_INVENTORY_LIGHT
		CARGO_1
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Textures
		hiddenSelectionsMaterials[] =
		{
			"RB205_vehicles\barc\data\barc.rvmat",
			"RB205_vehicles\barc\data\barc_sidecar.rvmat"
		};
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\barc\data\barc_co.paa",
			"RB205_vehicles\barc\data\barc_sidecar_co.paa"
		};
        textureList[] =
        {
            "Default",	1,
            "Republic",	0
        };
		class textureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\barc\data\barc_co.paa",
					"RB205_vehicles\barc\data\barc_sidecar_co.paa"
				};
		        factions[] = {"RB205"};
			};
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] =
				{
					"3AS\3AS_LightVics\3AS_BARC\data\barc_rep_co.paa",
					"3AS\3AS_LightVics\3AS_BARC\data\sidecar\GUNNER_co.paa"
				};
			};
		};
		weapons[] =
		{
			"RB205_barc_repeater"
		};
		magazines[] =
		{
			"RB205_barc_mag",
			"RB205_barc_mag",
			"RB205_barc_mag",
			"RB205_barc_mag",
            "RB205_barc_mag"
		};
		BARC_SOUND
		BARC_FLIP
	};
};
#include "\RB205_vehicles\barc\barc_weapons.hpp"