class cfgPatches
{
    class RB205_vehicles_laat_le
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3as_LAAT_LE"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_laatle"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgWeapons {};
class cfgVehicles
{
	class 3AS_Patrol_LAAT_Republic;

	class RB205_laatle: 3AS_Patrol_LAAT_Republic
	{
		ACCESS_TRUE
		displayName = "LAAT/LE";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		#include "\RB205_vehicles\laat_le\laat_le_textures.hpp"
		#include "\RB205_vehicles\laat\laat_sounds.hpp"
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};
};