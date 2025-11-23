class cfgPatches
{
    class RB205_vehicles_rx200
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_RX200"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_rx200"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

#define LAATC_LIFTABLE \
	tas_canBlift = 1; \
	tas_liftVars = "[[[[0,-4.5,-9]]], [0], [0]]";

class cfgWeapons {};
class cfgVehicles
{
	class 3AS_RX200_Base;
	class RB205_rx200: 3AS_RX200_Base
	{
		ACCESS_TRUE
		displayName = "RX200";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY_LIGHT
		CARGO_M
		LAATC_LIFTABLE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		#include "\RB205_vehicles\rx200\rx200_textures.hpp"
	};
};