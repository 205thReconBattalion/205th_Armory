class cfgPatches
{
    class RB205_vehicles_juggernaut
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_APC_Jug"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_juggernaut"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3as_Jug;
	class RB205_juggernaut: 3as_Jug
	{
		ACCESS_TRUE
		displayName = "HAVw A6 Juggernaut";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY
		CARGO_L
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		#include "\RB205_vehicles\juggernaut\juggernaut_textures.hpp"
	};
};