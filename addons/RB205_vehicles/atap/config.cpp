class cfgPatches
{
    class RB205_vehicles_atap
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_ATAP"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_atap"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3as_ATAP_base;
	class RB205_atap: 3as_ATAP_base
	{
		ACCESS_TRUE
		displayName = "AT-AP";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
	};
};