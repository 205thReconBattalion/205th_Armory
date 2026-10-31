class CfgPatches
{
	class RB205_logistics_resupply
	{
		requiredAddons[] =
		{
			"RB205_logistics",
			"3AS_Prop_Crates"
		};
		requiredVersion=1.0;
		author = "205th Recon Battalion";
		units[]=
		{
			"RB205_resupply_base",
			"RB205_resupply_weapons",
			"RB205_resupply_medical",
			"RB205_resupply_equipment",
			"RB205_resupply_red",
			"RB205_resupply_green",
			"RB205_resupply_blue",
			"RB205_resupply_orange",

			"RB205_resupply_weapons_arsenal",
			"RB205_resupply_medical_arsenal",
			"RB205_resupply_equipment_arsenal",
			"RB205_resupply_complete_arsenal",

			"RB205_fuel_barrel",
			"RB205_fuel_barrel_jetpack",
			"RB205_veh_ammo_crate",
			"RB205_repair_crate"
		};
		weapons[]={};
	};
};

#include "\RB205_logistics\macro.hpp"

class DefaultEventhandlers;
class CfgVehicles
{
	class 3AS_Supply_Large_Prop;
	class RB205_resupply_base: 3AS_Supply_Large_Prop
	{
		displayName = "Resupply Crate";
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_crates_empty";
		INVENTORY_SPACE
		ACE_CARGO
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
		scope		= 2;
		scopeCurator= 2;
	};

	class RB205_resupply_weapons: RB205_resupply_base
	{
		displayName = "Resupply Crate (Weapons/Ammo)";
		editorPreview = "\3as\3as_props\Crates\EditorPreviews\3AS_Supply_Large_Ammo_Prop.jpg";
		hiddenSelections[] = {"camo1"};
		//hiddenSelectionsMaterials[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo.rvmat"};
		hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo_co.paa"};
	};
	class RB205_resupply_medical: RB205_resupply_base
	{
		displayName = "Resupply Crate (Medical)";
		hiddenSelections[] = {"camo1"};
		//hiddenSelectionsMaterials[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Medical\Supply_Large_Medical.rvmat"};
		hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Medical\Supply_Large_Medical_co.paa"};
	};
	class RB205_resupply_red: RB205_resupply_base
	{
		displayName = "Resupply Crate (Red)";
		hiddenSelections[] = {"camo1"};
		//hiddenSelectionsMaterials[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Red\Supply_Large_Red.rvmat"};
		hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Red\Supply_Large_Red_co.paa"};
	};
	class RB205_resupply_green: RB205_resupply_base
	{
		displayName = "Resupply Crate (Green)";
		hiddenSelections[] = {"camo1"};
		//hiddenSelectionsMaterials[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Red\Supply_Large_Red.rvmat"};
		hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Green\Supply_Large_green_co.paa"};
	};
	class RB205_resupply_blue: RB205_resupply_base
	{
		displayName = "Resupply Crate (Blue)";
		hiddenSelections[] = {"camo1"};
		//hiddenSelectionsMaterials[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Blue\Supply_Large_Blue.rvmat"};
		hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Blue\Supply_Large_Blue_co.paa"};
	};
	class RB205_resupply_orange: RB205_resupply_base
	{
		displayName = "Resupply Crate (Orange)";
		hiddenSelections[] = {"camo1"};
		//hiddenSelectionsMaterials[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Blue\Supply_Large_Blue.rvmat"};
		hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_orange\Supply_Large_orange_co.paa"};
	};

	class 3AS_Supply_Small_Ammo;
	class RB205_resupply_weapons_arsenal: 3AS_Supply_Small_Ammo
	{
		displayName="Resupply Crate (Weapons/Ammo) [Arsenal]";
		editorCategory="RB205_prop";
		editorSubcategory="RB205_crates_arsenal";
		INVENTORY_SPACE
		ACE_CARGO
		class EventHandlers: DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RB205_logistics\resupply\scripts\arsenal_weapons.sqf';";
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
		scope		= 2;
		scopeCurator= 2;
	};
	class 3AS_Supply_Small_Medical;
	class RB205_resupply_medical_arsenal: 3AS_Supply_Small_Medical
	{
		displayName="Resupply Crate (Medical) [Arsenal]";
		editorCategory="RB205_prop";
		editorSubcategory="RB205_crates_arsenal";
		INVENTORY_SPACE
		ACE_CARGO
		class EventHandlers: DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RB205_logistics\resupply\scripts\arsenal_medical.sqf';";
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
		scope		= 2;
		scopeCurator= 2;
	};
	class 3AS_Supply_Small;
	class RB205_resupply_equipment_arsenal: 3AS_Supply_Small
	{
		displayName="Resupply Crate (Equipment) [Arsenal]";
		editorCategory="RB205_prop";
		editorSubcategory="RB205_crates_arsenal";
		INVENTORY_SPACE
		ACE_CARGO
		class EventHandlers: DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RB205_logistics\resupply\scripts\arsenal_equipment.sqf';";
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
		scope		= 2;
		scopeCurator= 2;
	};
	class 3AS_Supply_Small_Black;
	class RB205_resupply_complete_arsenal: 3AS_Supply_Small_Black
	{
		displayName="Resupply Crate (Complete) [Arsenal]";
		editorCategory="RB205_prop";
		editorSubcategory="RB205_crates_arsenal";
		INVENTORY_SPACE
		ACE_CARGO
		class EventHandlers: DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RB205_logistics\resupply\scripts\arsenal_complete.sqf';";
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
		scope		= 2;
		scopeCurator= 2;
	};
	
	class Land_3as_Barrel_Rhydonium;
	class RB205_fuel_barrel: Land_3as_Barrel_Rhydonium
	{
		displayName = "Rhydonium Barrel";
		ace_refuel_fuelCargo = 200;
		ace_refuel_hooks[] = {{0,0,0}};
		ace_refuel_hoseLength = 5;
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_crates";
		ACE_CARGO
		CARRYABLE
		DRAGGABLE
		editorPreview = "";
	};
	class 3AS_Small_Fuel_Barrel;
	class RB205_fuel_barrel_jetpack: 3AS_Small_Fuel_Barrel
	{
		displayName = "Rhydonium Barrel (Jetpack)";
		ace_refuel_fuelCargo = 20;
		ace_refuel_hooks[] = {{0,0,0}};
		ace_refuel_hoseLength = 5;
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_crates";
		ACE_CARGO
		CARRYABLE
		DRAGGABLE
		editorPreview = "";
	};
	class 3AS_Crate_LargeAmmo;
	class RB205_veh_ammo_crate: 3AS_Crate_LargeAmmo
	{
		displayName = "Vehicle Ammo Crate";
		ace_rearm_defaultSupply = 2500;
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_crates";
		ace_cargo_size = 5;
		ace_cargo_canLoad = 1;
		ace_cargo_noRename = 0;
		ace_cargo_blockUnloadCarry = 0;
		ace_dragging_canCarry = 0;
		DRAGGABLE
		editorPreview = "";
	};
	class 3AS_Small_Box_9_Prop;
	class RB205_repair_crate: 3AS_Small_Box_9_Prop
	{
		displayName = "Repair Crate";
		ace_isRepairFacility = 1;
		ace_repair_canRepair = 1;
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_crates";
		ACE_CARGO
		CARRYABLE
		DRAGGABLE
		editorPreview = "";
	};
};

class CfgEditorSubcategories
{
	class RB205_crates
	{
		displayName = "Resupply Crates";
	};
	class RB205_crates_empty
	{
		displayName = "Resupply Crates (Empty)";
	};
	class RB205_crates_arsenal
	{
		displayName = "Resupply Crates (Arsenal)";
	};
};