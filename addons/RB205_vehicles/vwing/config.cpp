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

class cfgWeapons {};
class cfgVehicles
{
	class 3as_Vwing_base;

	class RB205_vwing: 3as_Vwing_base
	{
		ACCESS_TRUE
		displayName = "V-Wing Fighter";
		author = "205th Recon Battalion";
		crew = "RB205_clone_plt_trooper";
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
			"RB205_vehicles\vwing\data\vwing_co.paa",
			"3as\3AS_Vwing\data\vwing_int_co.paa",
			"#(argb,8,8,3)color(0,0,0,1.0,CA)"
		};
		class TextureSources
		{
			class Default
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
			};
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] =
				{
					"3as\3AS_Vwing\data\vwing_co.paa",
					"3as\3AS_Vwing\data\vwing_int_co.paa",
					"#(argb,8,8,3)color(0,0,0,1.0,CA)"
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] =
				{
					"3as\3AS_Vwing\data\vwing_imp_co.paa",
					"3as\3AS_Vwing\data\vwing_int_co.paa",
					"#(argb,8,8,3)color(0,0,0,1.0,CA)"
				};
			};
		};
	};
};