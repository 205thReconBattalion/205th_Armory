class cfgPatches
{
    class RB205_vehicles_swamp
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_ISP"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_swamp",
			"RB205_swamp_transport"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgWeapons {};
class cfgVehicles
{
	class 3AS_ISP;
	class RB205_swamp: 3AS_ISP
	{
		ACCESS_TRUE
		displayName = "Swamp Speeder";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		VEH_INVENTORY
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
	};

	class 3AS_ISP_Transport;
	class RB205_swamp_transport: 3AS_ISP_Transport
	{
		ACCESS_TRUE
		displayName = "Swamp Speeder (Transport)";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		VEH_INVENTORY
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
	};
};