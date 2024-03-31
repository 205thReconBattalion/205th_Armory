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
			"RB205_bantha_aa",
			"RB205_bantha_mortar",
			"RB205_bantha_assault",
			"RB205_bantha_cargo",
			"RB205_bantha_service"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{

	class Aux212_Bantha_C_IFV;
	class RB205_bantha: Aux212_Bantha_C_IFV
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

	class Aux212_Bantha_C_Unarmed;
	class RB205_bantha_unarmed: Aux212_Bantha_C_Unarmed
	{
		ACCESS_TRUE
		displayName = "HAVw A2 Bantha (Unarmed)";
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

	class Aux212_Bantha_C_AA;
	class RB205_bantha_aa: Aux212_Bantha_C_AA
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

	class Aux212_Bantha_C_Mortar;
	class RB205_bantha_mortar: Aux212_Bantha_C_Mortar
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
	
	class Aux212_Bantha_T_Assault;
	class RB205_bantha_assault: Aux212_Bantha_T_Assault
	{
		ACCESS_TRUE
		displayName = "HAVw A2 Bantha (Assault)";
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
	
	class Aux212_Bantha_T_Cargo;
	class RB205_bantha_cargo: Aux212_Bantha_T_Cargo
	{
		ACCESS_TRUE
		displayName = "HAVw A2 Bantha (Cargo)";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		VEH_INVENTORY
		CARGO_L
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
	};
	
	class Aux212_Bantha_E_MSV;
	class RB205_bantha_service: Aux212_Bantha_E_MSV
	{
		ACCESS_TRUE
		displayName = "HAVw A2 Bantha (Service)";
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