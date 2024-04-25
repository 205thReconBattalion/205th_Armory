class cfgPatches
{
    class RB205_vehicles_arc170
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3as_arc_170"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_arc170"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgWeapons {};
class cfgVehicles
{
	class 3as_arc_170_base;

	class RB205_arc170: 3as_arc_170_base
	{
		ACCESS_TRUE
		displayName = "ARC-170";
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
			"RB205_vehicles\arc170\data\arc170_main_frame_co.paa",
			"RB205_vehicles\arc170\data\arc170_wings_engines_co.paa",
			"RB205_vehicles\arc170\data\arc170_guns_co.paa"
		};
		class TextureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\arc170\data\arc170_main_frame_co.paa",
					"RB205_vehicles\arc170\data\arc170_wings_engines_co.paa",
					"RB205_vehicles\arc170\data\arc170_guns_co.paa"
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
					"3as\3as_arc170\Data\Main_Frame_CO.paa",
					"3as\3as_arc170\Data\Wings_Engines_CO.paa",
					"3as\3as_arc170\Data\Guns_CO.paa"
				};
			};
		};
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};
};