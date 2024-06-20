class cfgPatches
{
    class RB205_vehicles_bantha
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"212th_APC_test"
		};
        skipWhenMissingDependencies = 1;
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
	class Aux212_Bantha_C_IFV_Base;
	class Aux212_Bantha_C_IFV: Aux212_Bantha_C_IFV_Base
	{
		class ACE_SelfActions;
	};
	class RB205_bantha: Aux212_Bantha_C_IFV
	{
		ACCESS_TRUE
		displayName = "HAVw A2 Bantha";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		#include "intercom.hpp"
	};

	class Aux212_Bantha_C_Unarmed_Base;
	class Aux212_Bantha_C_Unarmed: Aux212_Bantha_C_Unarmed_Base
	{
		class ACE_SelfActions;
	};
	class RB205_bantha_unarmed: Aux212_Bantha_C_Unarmed
	{
		ACCESS_TRUE
		displayName = "HAVw A2 Bantha (Unarmed)";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		#include "intercom.hpp"
	};

	class Aux212_Bantha_C_AA_Base;
	class Aux212_Bantha_C_AA: Aux212_Bantha_C_AA_Base
	{
		class ACE_SelfActions;
	};
	class RB205_bantha_aa: Aux212_Bantha_C_AA
	{
		ACCESS_TRUE
		displayName = "HAVw A2 Bantha (AA)";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		#include "intercom.hpp"
	};

	class Aux212_Bantha_C_Mortar_Base;
	class Aux212_Bantha_C_Mortar: Aux212_Bantha_C_Mortar_Base
	{
		class ACE_SelfActions;
	};
	class RB205_bantha_mortar: Aux212_Bantha_C_Mortar
	{
		ACCESS_TRUE
		displayName = "HAVw A2 Bantha (Mortar)";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		#include "intercom.hpp"
	};
	
	class Aux212_Bantha_T_Assault_Base;
	class Aux212_Bantha_T_Assault: Aux212_Bantha_T_Assault_Base
	{
		class ACE_SelfActions;
	};
	class RB205_bantha_assault: Aux212_Bantha_T_Assault
	{
		ACCESS_TRUE
		displayName = "HAVw A2 Bantha (Assault)";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		#include "intercom.hpp"
	};
	
	class Aux212_Bantha_T_Cargo_Base;
	class Aux212_Bantha_T_Cargo: Aux212_Bantha_T_Cargo_Base
	{
		class ACE_SelfActions;
	};
	class RB205_bantha_cargo: Aux212_Bantha_T_Cargo
	{
		ACCESS_TRUE
		displayName = "HAVw A2 Bantha (Cargo)";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY
		CARGO_L
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		#include "intercom.hpp"
	};
	
	class Aux212_Bantha_E_MSV_Base;
	class Aux212_Bantha_E_MSV: Aux212_Bantha_E_MSV_Base
	{
		class ACE_SelfActions;
	};
	class RB205_bantha_service: Aux212_Bantha_E_MSV
	{
		ACCESS_TRUE
		displayName = "HAVw A2 Bantha (Service)";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY
		CARGO_M
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		#include "intercom.hpp"
	};
};