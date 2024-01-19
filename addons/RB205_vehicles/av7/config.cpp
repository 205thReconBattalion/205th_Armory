class cfgPatches
{
    class RB205_vehicles_av7
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3as_AV7"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] =
		{
			"RB205_av7"
		};
		weapons[] = {};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3as_AV7;
	class RB205_av7: 3as_AV7
	{
		ACCESS_TRUE
		displayName = "AV-7";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		VEH_INVENTORY_LIGHT
        CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_other";
		editorPreview = "";
	};
};