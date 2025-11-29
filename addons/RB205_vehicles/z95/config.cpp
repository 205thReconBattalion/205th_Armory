class cfgPatches
{
    class RB205_vehicles_z95
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3as_Z95_base"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_z95"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3AS_Z95_VTOL_Dynamic_Base_F;
	class 3as_Z95_Republic: 3AS_Z95_VTOL_Dynamic_Base_F
	{
		class Components;
	};

	class RB205_z95: 3as_Z95_Republic
	{
		ACCESS_TRUE
		displayName = "Z-95 Headhunter";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY_LIGHT
		CARGO_NONE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		#include "\RB205_vehicles\z95\z95_textures.hpp"
		#include "\RB205_vehicles\z95\z95_weapons.hpp"
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};
};