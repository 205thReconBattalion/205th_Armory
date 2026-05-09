class cfgPatches
{
    class RB205_vehicles_laat_le
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_Republic_Heli_LAS"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_las",
			"RB205_las_turrets"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgWeapons {};
class cfgVehicles
{
	class 3AS_Rep_LAS_F;
	class RB205_las: 3AS_Rep_LAS_F
	{
		ACCESS_TRUE
		displayName = "LAS"; //Low Altitude Support Craft
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		#include "\RB205_vehicles\las\las_textures.hpp"
		#include "\RB205_vehicles\laat\laat_sounds.hpp"
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};
	class 3AS_Rep_LAS_Z6_F;
	class RB205_las_turrets: 3AS_Rep_LAS_Z6_F
	{
		ACCESS_TRUE
		displayName = "LAS (Turrets)";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		#include "\RB205_vehicles\las\las_textures.hpp"
		#include "\RB205_vehicles\laat\laat_sounds.hpp"
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};
};