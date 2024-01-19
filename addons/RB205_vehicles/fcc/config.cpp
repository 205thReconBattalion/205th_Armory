class cfgPatches
{
    class RB205_vehicles_fcc
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_Static_FCP"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] =
		{
			"RB205_fcc"
		};
		weapons[] = {};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3AS_Republic_FCP;
	class RB205_fcc: 3AS_Republic_FCP
	{
		ACCESS_TRUE
		displayName = "Forward Command Center";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		VEH_INVENTORY
        CARGO_M
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_other";
		editorPreview = "";
	};
};