class cfgPatches
{
    class RB205_vehicles_px10
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_Rebel_Armor_PX10"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_px10",
			"RB205_px10_service"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

#define LAATC_LIFTABLE \
	tas_canBlift = 1; \
	tas_liftVars = "[[[[0,-3,-7]]], [0], [0]]";

class cfgWeapons {};
class cfgVehicles
{
	class 3AS_PX10_REP_F;
	class RB205_px10: 3AS_PX10_REP_F
	{
		ACCESS_TRUE
		displayName = "PX-10";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY
		CARGO_S
		LAATC_LIFTABLE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		#include "\RB205_vehicles\px10\px10_textures.hpp"
	};

	class 3AS_PX10_REP_R3;
	class RB205_px10_service: 3AS_PX10_REP_R3
	{
		ACCESS_TRUE
		displayName = "PX-10 (Service)";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY
		CARGO_M
		LAATC_LIFTABLE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		#include "\RB205_vehicles\px10\px10_textures.hpp"
	};
};