class cfgPatches
{
    class RB205_vehicles_seabob
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"CBS_K9N_WaterShadow730"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] =
		{
			"RB205_seabob"
		};
		weapons[] = {};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class B_CBS_WaterShadow730_F;
	class RB205_seabob: B_CBS_WaterShadow730_F
	{
		ACCESS_TRUE
		displayName = "Aiwha Submarine Speeder";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		VEH_INVENTORY_LIGHT
		CARGO_NONE
		ace_cargo_canLoad = 1;
		ace_cargo_size = 1;
		ace_cargo_noRename = 0;
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_naval";
		editorPreview = "";
	};
};