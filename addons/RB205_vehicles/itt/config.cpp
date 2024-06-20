class cfgPatches
{
    class RB205_vehicles_itt
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_ITT"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_itt",
			"RB205_itt_logistic",
			"RB205_itt_medic"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3AS_ITT;
	class RB205_itt: 3AS_ITT
	{
		ACCESS_TRUE
		displayName = "ITT";
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

	class 3AS_ITT_Logistic;
	class RB205_itt_logistic: 3AS_ITT_Logistic
	{
		ACCESS_TRUE
		displayName = "ITT (Logistic)";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY
		CARGO_L
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
	};
	
	class 3AS_ITT_Medical;
	class RB205_itt_medic: 3AS_ITT_Medical
	{
		ACCESS_TRUE
		displayName = "ITT (Medical)";
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