class CfgPatches
{
	class RB205_logistics
	{
		requiredAddons[] =
		{
			"RB205_main",
			"RB205_weapons",
			"RB205_custom",
			"3AS_Prop_Droids"
		};
		requiredVersion=1.0;
		units[]=
		{
			"RB205_gonk_base",
			"RB205_gonk_aio",
			"RB205_gonk_arsenal",
			"RB205_gonk_heal",
			"RB205_gonk_restricted",
			"RB205_resupply_weapons",
			"RB205_resupply_medical",
			"RB205_resupply_equipment",
			"RB205_resupply_arsenal",
			"RB205_resupply_base",
			"RB205_resupply_weapons_empty",
			"RB205_resupply_medical_empty",
			"RB205_resupply_blue_empty",
			"RB205_resupply_red_empty"
		};
		weapons[]={};
	};
};

class CfgEditorCategories
{
	class RB205_prop
	{
		displayName = "[205] Props";
	};
};
class CfgEditorSubcategories
{
	class RB205_gonk
	{
		displayName = "Droids";
	};
	class RB205_crates
	{
		displayName = "Crates";
	};
	class RB205_crates_empty
	{
		displayName = "Crates (Empty)";
	};
};


#define INVENTORY_SPACE maximumload = 1000000;
#define ACE_CARGO \
	ace_cargo_size = 1; \
	ace_cargo_canLoad = 1; \
	ace_cargo_noRename = 0; \
	ace_cargo_blockUnloadCarry = 0;

#define CARRYABLE \
	ace_dragging_canCarry = 1; \
	ace_dragging_carryPosition[] = {0, 1.2, 0}; \
	ace_dragging_carryDirection  = 0;
	
#define DRAGGABLE \
	ace_dragging_canDrag = 1; \
	ace_dragging_dragPosition[] = {0, 1.2, 0}; \
	ace_dragging_dragDirection  = 0;


class DefaultEventhandlers;
class CfgVehicles
{
	class JLTS_Ammobox_weapons_GAR;
	class JLTS_Ammobox_weapons_special_GAR;
	class JLTS_Ammobox_launchers_GAR;
	class JLTS_Ammobox_explosives_GAR;
	class JLTS_Ammobox_support_GAR;
	class JLTS_Ammobox_ammo_GAR;
	class JLTS_Ammobox_grenades_GAR;
	
	class 3as_GNK;
	class RB205_gonk_base: 3as_GNK
	{
		author = "Tachanka";
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_gonk";
		ACE_CARGO
		CARRYABLE
		DRAGGABLE
		//simulation="fountain";
		//sound="GonkMarch";
		scope=1;
	};
	class Land_3AS_Medical_Droid;
	class RB205_med_base: Land_3AS_Medical_Droid
	{
		author = "Spark";
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_gonk";
		ACE_CARGO
		CARRYABLE
		DRAGGABLE
		scope=1;
	};
	class RB205_gonk_aio: RB205_gonk_Base
	{
		displayName = "[205] Gonk (All In One)";
		class EventHandlers: DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RB205_logistics\scripts\gonk\aio.sqf';";
		};
		scope		= 2;
		scopeCurator= 2;
	};
	class RB205_gonk_arsenal: RB205_gonk_Base
	{
		displayName = "[205] Gonk (Arsenal)";
		class EventHandlers: DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RB205_logistics\scripts\gonk\arsenal.sqf';";
		};
		scope		= 2;
		scopeCurator= 2;
	};
	class RB205_gonk_heal: RB205_med_base
	{
		displayName = "[205] Medical Droid";
		class EventHandlers: DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RB205_logistics\scripts\gonk\heal.sqf';";
		};
		scope		= 2;
		scopeCurator= 2;
	};
	class RB205_gonk_restricted: RB205_gonk_Base
	{
		displayName = "[205] Gonk (Restricted)";
		class EventHandlers: DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RB205_logistics\scripts\gonk\restricted.sqf';";
		};
		scope		= 2;
		scopeCurator= 2;
	};

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
			init = "[_this select 0] execVM '\RB205_logistics\scripts\crates\weapons.sqf';";
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
			init = "[_this select 0] execVM '\RB205_logistics\scripts\crates\medical.sqf';";
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
			init = "[_this select 0] execVM '\RB205_logistics\scripts\crates\equipment.sqf';";
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
			init = "[_this select 0] execVM '\RB205_logistics\scripts\gonk\arsenal.sqf';";
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
		hiddenSelectionsMaterials[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo.rvmat"};
		hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo_co.paa"};
	};
	class RB205_resupply_medical_empty: RB205_resupply_base
	{
		displayName = "[205] Resupply Crate (Medical)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsMaterials[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Medical\Supply_Large_Medical.rvmat"};
		hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Medical\Supply_Large_Medical_co.paa"};
	};
	class RB205_resupply_blue_empty: RB205_resupply_base
	{
		displayName = "[205] Resupply Crate (Blue)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsMaterials[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Blue\Supply_Large_Blue.rvmat"};
		hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Blue\Supply_Large_Blue_co.paa"};
	};
	class RB205_resupply_red_empty: RB205_resupply_base
	{
		displayName = "[205] Resupply Crate (Red)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsMaterials[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Red\Supply_Large_Red.rvmat"};
		hiddenSelectionsTextures[] = {"3AS\3AS_Props\Crates\Data\Supply_Large_Red\Supply_Large_Red_co.paa"};
	};
};

class ACEX_Fortify_Presets {
    class RB205_fort_metal {
        displayName = "Republic Fortifications (Metal)";
        objects[] = {
            {"3AS_Short_Wall", 3},
            {"3AS_Short_Wall_Long", 3},
			{"3AS_Short_Wall_Curved", 3},
			{"3AS_Short_Wall_Bunker", 10},
			{"Land_lsb_fob_hBarrier_1", 3},
			{"Land_lsb_fob_hBarrier_3", 4},
			{"Land_lsb_fob_hBarrier_5", 5},
			{"Land_lsb_fob_hBarrierWall_4", 7},
			{"Land_lsb_fob_hBarrierWall_7", 10},
			{"Land_lsb_fob_hBarrier_ramp", 3},
			{"Land_lsb_fob_hBarrierWall_ramp", 7},
			{"Land_lsb_fob_hBarrierWall_exvertedCorner", 7},
			{"Land_lsb_fob_hBarrierWall_invertedCorner", 7},
			{"Land_lsb_fob_hBarrier_corridor", 7},
			{"land_3as_Bunker_Metal", 30},
			{"Land_OPTRE_hard_tent_urban", 20},
			{"Land_ConcreteHedgehog_01_F", 3},
			{"3as_FOB_Banner_prop", 1}
        };
    };
};