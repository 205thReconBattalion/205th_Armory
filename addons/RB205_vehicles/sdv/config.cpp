class cfgPatches
{
    class RB205_vehicles_sdv
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
			"RB205_sdv"
		};
		weapons[] = {};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class B_SDV_01_F;
	class RB205_sdv: B_SDV_01_F
	{
		ACCESS_TRUE
		displayName = "SDV";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		VEH_INVENTORY
        CARGO_M
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_naval";
		editorPreview = "";
		//Textures
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\sdv\data\sdv_ext_co.paa"
		};
	};
};