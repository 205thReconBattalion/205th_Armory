class cfgPatches
{
    class RB205_vehicles_v19
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3as_V19_Torrent"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_v19"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3as_V19_base;

	class RB205_v19: 3as_V19_base
	{
		ACCESS_TRUE
		displayName = "V-19";
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
			"3as\3as_v19\textures\wings_co.paa",
			"3as\3as_v19\textures\wing plates_co.paa",
			"3as\3as_v19\textures\hull_co.paa",
			"3as\3as_v19\textures\gun gear_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"3as\3as_v19\textures\pizzlepit_co.paa"
		};
		class TextureSources
		{
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] =
				{
					"3as\3as_v19\textures\wings_co.paa",
					"3as\3as_v19\textures\wing plates_co.paa",
					"3as\3as_v19\textures\hull_co.paa",
					"3as\3as_v19\textures\gun gear_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
					"3as\3as_v19\textures\pizzlepit_co.paa"
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
	}
};