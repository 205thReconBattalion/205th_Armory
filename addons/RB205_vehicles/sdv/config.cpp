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

#define LAATC_LIFTABLE \
	tas_canBlift = 1; \
	tas_liftVars = "[[[[0,-3,-4]]], [0], [0]]";

class cfgVehicles
{
	class B_SDV_01_F;
	class RB205_sdv: B_SDV_01_F
	{
		ACCESS_TRUE
		displayName = "'Opee' SDV";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		VEH_INVENTORY
        CARGO_S
		LAATC_LIFTABLE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_naval";
		editorPreview = "";
		#include "\RB205_vehicles\sdv\sdv_textures.hpp"
	};
};