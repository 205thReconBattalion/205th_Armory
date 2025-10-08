class cfgPatches
{
    class RB205_vehicles_vwing
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_Vwing"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_vwing"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3as_Vwing_base;

	class RB205_vwing: 3as_Vwing_base
	{
		ACCESS_TRUE
		displayName = "V-Wing Fighter";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY_LIGHT
		CARGO_NONE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		//Textures
		hiddenselectionstextures[] =
		{
			"3AS\3AS_Vwing\data\vwing_main_co.paa",
			"3AS\3AS_Vwing\data\Vwing_AstromechDroid_co.paa",
			"3AS\3AS_Vwing\data\vwing_wings_co.paa"
		};
		textureList[] =
		{
			"Default", 1,
			"RB205_Pathfinder", 0,
			"Republic", 0,
			"Empire", 0
		};
		class TextureSources
		{
			/*class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\vwing\data\vwing_co.paa",
					"3as\3AS_Vwing\data\vwing_int_co.paa",
					"#(argb,8,8,3)color(0,0,0,1.0,CA)"
				};
				factions[] =
				{
					"RB205"
				};
			};
			class RB205_Pathfinder
			{
				displayName = "205th Recon Battalion - Pathfinder";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\vwing\data\vwing_pathfinder_co.paa",
					"3as\3AS_Vwing\data\vwing_int_co.paa",
					"#(argb,8,8,3)color(0,0,0,1.0,CA)"
				};
			};*/
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] =
				{
					"3AS\3AS_Vwing\data\vwing_main_co.paa",
					"3AS\3AS_Vwing\data\Vwing_AstromechDroid_co.paa",
					"3AS\3AS_Vwing\data\vwing_wings_co.paa"
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] =
				{
					"3AS\3AS_Vwing\data\vwing_main_Imp_co.paa",
					"3AS\3AS_Vwing\data\vwing_astromechdroid_Imp_co.paa",
					"3AS\3AS_Vwing\data\vwing_wings_Imp_co.paa"
				};
			};
		};
		//Weapons
		weapons[] =
		{
			"3as_Vwing_Medium_Cannon",
			"RB205_BIM9X_weapon",
			"RB205_AMRAAM_weapon",
			"RB205_AGM65_weapon",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"3as_Vwing_700Rnd_Medium_shells","3as_Vwing_700Rnd_Medium_shells","3as_Vwing_700Rnd_Medium_shells","3as_Vwing_700Rnd_Medium_shells","3as_Vwing_700Rnd_Medium_shells",
			"RB205_BIM9X_missile","RB205_BIM9X_missile","RB205_BIM9X_missile","RB205_BIM9X_missile","RB205_BIM9X_missile","RB205_BIM9X_missile","RB205_BIM9X_missile","RB205_BIM9X_missile",
			"RB205_AMRAAM_missile","RB205_AMRAAM_missile","RB205_AMRAAM_missile","RB205_AMRAAM_missile",
			"RB205_AGM65_missile","RB205_AGM65_missile",
			"240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine"
		};
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};
};