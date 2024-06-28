class cfgPatches
{
    class RB205_vehicles_purrgil
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3as_Starships"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_purrgil"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgWeapons {};
class cfgVehicles
{
	class 3AS_Republic_Transport_01;

	class RB205_purrgil: 3AS_Republic_Transport_01
	{
		ACCESS_TRUE
		displayName = "Purrgil Transport Shuttle";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY
		CARGO_XL
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		//Textures
		hiddenselectionstextures[] =
		{
			"3as\3as_starships\data\hs_ext_co.paa",
			"3as\3as_starships\data\hs_int_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
		};
		class TextureSources
		{
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] =
				{
					"3as\3as_starships\data\hs_ext_co.paa",
					"3as\3as_starships\data\hs_int_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] =
				{
					"3as\3as_starships\data\hs_imp_ext_co.paa",
					"3as\3as_starships\data\hs_int_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
				};
			};
		};
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};
};