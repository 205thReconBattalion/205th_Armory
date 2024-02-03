class cfgPatches
{
    class RB205_vehicles_bantha
	{
		requiredAddons[]=
		{
			"RB205_vehicles"/*,
			"212th_APC_test"*/
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_bantha",
			"RB205_bantha_unarmed",
			"RB205_bantha_mg",
			"RB205_bantha_aa",
			"RB205_bantha_mortar"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{

	class 212th_B_APC_Wheeled_02_cannon_F;
	class RB205_bantha: 212th_B_APC_Wheeled_02_cannon_F
	{
		ACCESS_TRUE
		displayName = "HAVw A2 Bantha";
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

	class 212th_B_APC_Wheeled_unarmed_F;
	class RB205_bantha_unarmed: 212th_B_APC_Wheeled_unarmed_F
	{
		ACCESS_TRUE
		displayName = "HAVw A2 Bantha (Transport)";
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
	
	class 212th_B_APC_Wheeled_mg_F;
	class RB205_bantha_mg: 212th_B_APC_Wheeled_mg_F
	{
		ACCESS_TRUE
		displayName = "HAVw A2 Bantha (MG)";
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

	class 212th_B_APC_Wheeled_aa_cannon_F;
	class RB205_bantha_aa: 212th_B_APC_Wheeled_aa_cannon_F
	{
		ACCESS_TRUE
		displayName = "HAVw A2 Bantha (AA)";
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

	class 212th_B_APC_Wheeled_fs_cannon_F;
	class RB205_bantha_mortar: 212th_B_APC_Wheeled_fs_cannon_F
	{
		ACCESS_TRUE
		displayName = "HAVw A2 Bantha (Mortar)";
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