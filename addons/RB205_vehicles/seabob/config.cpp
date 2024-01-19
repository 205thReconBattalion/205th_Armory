class cfgPatches
{
    class RB205_vehicles_seabob
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"A3_Boat_F_Beta_SDV_01"
		};
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
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		VEH_INVENTORY_LIGHT
		ace_cargo_canLoad = 1;
		ace_cargo_size = 2;
		ace_cargo_noRename = 0;
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_naval";
		editorPreview = "";
	};
};