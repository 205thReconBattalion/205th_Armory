class cfgPatches
{
    class RB205_vehicles_ywing
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_BTLB_Bomber"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_ywing"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3AS_BTLB_Bomber;
	class 3AS_BTLB_Bomber_ShadowLeader: 3AS_BTLB_Bomber
	{
		class Components;
	};
	class RB205_ywing: 3AS_BTLB_Bomber_ShadowLeader
	{
		ACCESS_TRUE
		displayName = "Y-Wing Bomber";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY_LIGHT
		CARGO_NONE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		#include "\RB205_vehicles\ywing\ywing_textures.hpp"
		#include "\RB205_vehicles\ywing\ywing_weapons.hpp"
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};
};