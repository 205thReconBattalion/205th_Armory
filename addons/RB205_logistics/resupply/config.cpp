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
			"RB205_resupply_weapons",
			"RB205_resupply_medical",
			"RB205_resupply_equipment",
			"RB205_resupply_arsenal",

			"RB205_resupply_base",
			"RB205_resupply_weapons_empty",
			"RB205_resupply_medical_empty",
			"RB205_resupply_red_empty",
			"RB205_resupply_green_empty",
			"RB205_resupply_blue_empty",
			"RB205_resupply_orange_empty"
		};
		weapons[]={};
	};
};

#include "\RB205_logistics\macro.hpp"

class DefaultEventhandlers;
class CfgVehicles
{	
	class 3AS_Supply_Large_Ammo_Prop;
	class RB205_resupply_weapons: 3AS_Supply_Large_Ammo_Prop
	{
		displayName="[205] Resupply Crate (Weapons/Ammo)";
		editorCategory="RB205_prop";
		editorSubcategory="RB205_crates";
		INVENTORY_SPACE
		ACE_CARGO
		class EventHandlers: DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RB205_logistics\resupply\scripts\weapons.sqf';";
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
		scope		= 2;
		scopeCurator= 2;
	};
	class 3AS_Supply_Large_Medical_Prop;
	class RB205_resupply_medical: 3AS_Supply_Large_Medical_Prop
	{
		displayName="[205] Resupply Crate (Medical)";
		editorCategory="RB205_prop";
		editorSubcategory="RB205_crates";
		INVENTORY_SPACE
		ACE_CARGO
		class EventHandlers: DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RB205_logistics\resupply\scripts\medical.sqf';";
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
		scope		= 2;
		scopeCurator= 2;
	};
	class 3AS_Supply_Large_Prop;
	class RB205_resupply_equipment: 3AS_Supply_Large_Prop
	{
		displayName="[205] Resupply Crate (Equipment)";
		editorCategory="RB205_prop";
		editorSubcategory="RB205_crates";
		INVENTORY_SPACE
		ACE_CARGO
		class EventHandlers: DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RB205_logistics\resupply\scripts\equipment.sqf';";
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
		scope		= 2;
		scopeCurator= 2;
	};
	class 3AS_Supply_Large_Black_Prop;
	class RB205_resupply_arsenal: 3AS_Supply_Large_Black_Prop
	{
		displayName="[205] Resupply Crate (Arsenal)";
		editorCategory="RB205_prop";
		editorSubcategory="RB205_crates";
		INVENTORY_SPACE
		ACE_CARGO
		class EventHandlers: DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RB205_logistics\gonk\scripts\arsenal.sqf';";
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
		scope		= 2;
		scopeCurator= 2;
	};

	class RB205_resupply_base: 3AS_Supply_Large_Prop
	{
		displayName = "[205] Resupply Crate";
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
	class RB205_resupply_weapons_empty: RB205_resupply_base
	{
		displayName = "[205] Resupply Crate (Weapons/Ammo)";
		editorPreview = "\3as\3as_props\Crates\EditorPreviews\3AS_Supply_Large_Ammo_Prop.jpg";
		hiddenSelections[] = {"camo1"};
		//hiddenSelectionsMaterials[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo.rvmat"};
		hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo_co.paa"};
	};
	class RB205_resupply_medical_empty: RB205_resupply_base
	{
		displayName = "[205] Resupply Crate (Medical)";
		hiddenSelections[] = {"camo1"};
		//hiddenSelectionsMaterials[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Medical\Supply_Large_Medical.rvmat"};
		hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Medical\Supply_Large_Medical_co.paa"};
	};
	class RB205_resupply_red_empty: RB205_resupply_base
	{
		displayName = "[205] Resupply Crate (Red)";
		hiddenSelections[] = {"camo1"};
		//hiddenSelectionsMaterials[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Red\Supply_Large_Red.rvmat"};
		hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Red\Supply_Large_Red_co.paa"};
	};
	class RB205_resupply_green_empty: RB205_resupply_base
	{
		displayName = "[205] Resupply Crate (Green)";
		hiddenSelections[] = {"camo1"};
		//hiddenSelectionsMaterials[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Red\Supply_Large_Red.rvmat"};
		hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Green\Supply_Large_green_co.paa"};
	};
	class RB205_resupply_blue_empty: RB205_resupply_base
	{
		displayName = "[205] Resupply Crate (Blue)";
		hiddenSelections[] = {"camo1"};
		//hiddenSelectionsMaterials[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Blue\Supply_Large_Blue.rvmat"};
		hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Blue\Supply_Large_Blue_co.paa"};
	};
	class RB205_resupply_orange_empty: RB205_resupply_base
	{
		displayName = "[205] Resupply Crate (Orange)";
		hiddenSelections[] = {"camo1"};
		//hiddenSelectionsMaterials[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Blue\Supply_Large_Blue.rvmat"};
		hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_orange\Supply_Large_orange_co.paa"};
	};
};

class CfgEditorSubcategories
{
	class RB205_crates
	{
		displayName = "Crates";
	};
	class RB205_crates_empty
	{
		displayName = "Crates (Empty)";
	};
};