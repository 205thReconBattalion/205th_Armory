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

class cfgVehicles
{
	class Plane_Fighter_03_dynamicLoadout_base_F;
	class 3as_arc_170_base: Plane_Fighter_03_dynamicLoadout_base_F
	{
		class Components;
	};
	class RB205_arc170: 3as_arc_170_base
	{
		ACCESS_TRUE
		displayName = "ARC-170";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY_LIGHT
		CARGO_NONE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		#include "\RB205_vehicles\arc170\arc170_textures.hpp"
		#include "\RB205_vehicles\arc170\arc170_weapons.hpp"
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};
};