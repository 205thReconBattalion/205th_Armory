class cfgPatches
{
    class RB205_vehicles_tx130
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_SaberTank"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_tx130",
			"RB205_tx130_gl",
			//"RB205_tx130_aa",
			"RB205_tx130_recon",
			"RB205_tx130_super"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3as_saber_m1;
	class 3as_saber_m1G;
	class 3as_saber_AA;
	class 3as_saber_m1Recon;
	class 3as_saber_super;

	class RB205_tx130: 3as_saber_m1
	{
		ACCESS_TRUE
		displayName = "TX-130";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		//Texture
		hiddenSelectionsTextures[]=
		{
			"RB205_vehicles\tx130\data\tx130_hull_co.paa",
			"RB205_vehicles\tx130\data\tx130_weapons_co.paa"
		};
		class textureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\tx130\data\tx130_hull_co.paa",
					"RB205_vehicles\tx130\data\tx130_weapons_co.paa"
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
					"3as\3as_saber\data\saber_hull_co.paa",
					"3as\3as_saber\data\saber_weapons_co.paa"
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] =
				{
					"3AS\3as_saber\data\saber_Imp_hull_co.paa",
					"3AS\3as_saber\data\saber_Imp_weapons_co.paa"
				};
			};
		};
	};
	class RB205_tx130_gl: 3as_saber_m1G
	{
		ACCESS_TRUE
		displayName="TX-130/GL";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		//Texture
		hiddenSelectionsTextures[]=
		{
			"RB205_vehicles\tx130\data\tx130_hull_co.paa",
			"RB205_vehicles\tx130\data\tx130_weapons_co.paa"
		};
		class textureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\tx130\data\tx130_hull_co.paa",
					"RB205_vehicles\tx130\data\tx130_weapons_co.paa"
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
					"3as\3as_saber\data\saber_hull_co.paa",
					"3as\3as_saber\data\saber_weapons_co.paa"
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] =
				{
					"3AS\3as_saber\data\saber_Imp_hull_co.paa",
					"3AS\3as_saber\data\saber_Imp_weapons_co.paa"
				};
			};
		};
	};
	class RB205_tx130_recon: 3as_saber_m1Recon
	{
		ACCESS_TRUE
		displayName="TX-130/R";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY_LIGHT
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		//Texture
		hiddenSelectionsTextures[]=
		{
			"RB205_vehicles\tx130\data\tx130_hull_co.paa",
			"RB205_vehicles\tx130\data\tx130_weapons_co.paa"
		};
		class textureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\tx130\data\tx130_hull_co.paa",
					"RB205_vehicles\tx130\data\tx130_weapons_co.paa"
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
					"3as\3as_saber\data\saber_hull_co.paa",
					"3as\3as_saber\data\saber_weapons_co.paa"
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] =
				{
					"3AS\3as_saber\data\saber_Imp_hull_co.paa",
					"3AS\3as_saber\data\saber_Imp_weapons_co.paa"
				};
			};
		};
	};
	class RB205_tx130_super: 3as_saber_super
	{
		ACCESS_TRUE
		displayName="TX-130/S";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY_LIGHT
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		//Texture
		hiddenSelectionsTextures[]=
		{
			"RB205_vehicles\tx130\data\tx130_hull_co.paa",
			"RB205_vehicles\tx130\data\tx130_weapons_co.paa"
		};
		class textureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\tx130\data\tx130_hull_co.paa",
					"RB205_vehicles\tx130\data\tx130_weapons_co.paa"
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
					"3as\3as_saber\data\saber_hull_co.paa",
					"3as\3as_saber\data\saber_weapons_co.paa"
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] =
				{
					"3AS\3as_saber\data\saber_Imp_hull_co.paa",
					"3AS\3as_saber\data\saber_Imp_weapons_co.paa"
				};
			};
		};
	};
};