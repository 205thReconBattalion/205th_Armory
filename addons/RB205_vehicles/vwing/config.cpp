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
		#include "\RB205_vehicles\vwing\vwing_textures.hpp"
		#include "\RB205_vehicles\vwing\vwing_weapons.hpp"
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};
};