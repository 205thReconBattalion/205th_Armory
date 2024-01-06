class cfgPatches
{
    class RB205_vehicles_utat
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3as_UTAT"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_utat"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgWeapons {};
class cfgVehicles
{
	class 3as_UTAT;
	class RB205_utat: 3as_UTAT
	{
		ACCESS_TRUE
		displayName = "UT-AT";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		VEH_INVENTORY
		CARGO_M
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
	};
};