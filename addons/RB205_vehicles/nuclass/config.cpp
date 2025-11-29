class cfgPatches
{
    class RB205_vehicles_nuclass
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_Republic_Heli_Nu"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_nuclass"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3AS_Nu_REP_F;
	class RB205_nuclass: 3AS_Nu_REP_F
	{
		ACCESS_TRUE
		displayName = "Nu-Class Shuttle";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY
		CARGO_L
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		#include "\RB205_vehicles\nuclass\nuclass_textures.hpp"
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};
};