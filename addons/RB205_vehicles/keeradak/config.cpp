class cfgPatches
{
    class RB205_vehicles_keeradak
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_Reoublic_Static_Keeradak"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] =
		{
			"RB205_keeradak"
		};
		weapons[] = {};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3AS_Keeradak_F;
	class RB205_keeradak: 3AS_Keeradak_F
	{
		ACCESS_TRUE
		displayName = "Keeradak Anti-Air Gun";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		VEH_INVENTORY
        CARGO_NONE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_other";
		editorPreview = "";
	};
};