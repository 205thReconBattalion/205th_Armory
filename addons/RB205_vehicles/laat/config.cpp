class cfgPatches
{
    class RB205_vehicles_laat
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_LAAT"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_laat",
			"RB205_laat_lights",
			"RB205_laat_turrets"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgWeapons {};
class cfgVehicles
{
	class 3AS_laat_Base;
	class 3AS_LAAT_LampBase;
	class 3as_LAAT_Mk1: 3AS_laat_Base
	{
		class Components;
	};
	class 3as_LAAT_Mk1Lights: 3AS_LAAT_LampBase
	{
		class Components;
	};
	class 3as_LAAT_Mk2: 3AS_laat_Base
	{
		class Components;
	};

	class RB205_laat: 3as_LAAT_Mk2
	{
		ACCESS_TRUE
		displayName = "LAAT/I";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY
		CARGO_M
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		#include "\RB205_vehicles\laat\laat_textures.hpp"
		#include "\RB205_vehicles\laat\laat_weapons.hpp"
		#include "\RB205_vehicles\laat\laat_sounds.hpp"
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};
	class RB205_laat_lights: 3as_LAAT_Mk1Lights
	{
		ACCESS_TRUE
		displayName = "LAAT/I (Lights)";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY
		CARGO_M
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		#include "\RB205_vehicles\laat\laat_textures.hpp"
		#include "\RB205_vehicles\laat\laat_weapons.hpp"
		#include "\RB205_vehicles\laat\laat_sounds.hpp"
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};
	class RB205_laat_turrets: 3as_LAAT_Mk1
	{
		ACCESS_TRUE
		displayName = "LAAT/I (Turrets)";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY
		CARGO_M
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		#include "\RB205_vehicles\laat\laat_textures.hpp"
		#include "\RB205_vehicles\laat\laat_weapons.hpp"
		#include "\RB205_vehicles\laat\laat_sounds.hpp"
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};
};