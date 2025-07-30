class CfgPatches
{
	class RB205_logistics_deployable
	{
		requiredAddons[] =
		{
			"RB205_main",
			"RB205_vehicles_prowler",
			"JLTS_C_Intel",
			"3AS_Mortar"
		};
		requiredVersion=1.0;
		author="205th Recon Battalion";
		units[] =
		{
			"RB205_B_heavyRepeater",
			"RB205_B_autoTurret",
			"RB205_B_squadShield",
			"RB205_B_prowler",
			"RB205_B_mortar",

			"RB205_heavyRepeater",
			"RB205_autoTurret",
			"RB205_squadShield",
			"RB205_mortar",

			"RB205_prowler_packed"
		};
		weapons[] =
		{
			"RB205_prowler_item"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"

class CfgVehicles
{
	class RB205_B_heavy;
	class RB205_B_deployable_base: RB205_B_heavy
	{
		ACCESS_FALSE
		picture = "\RB205_main\data\ui\backpacks\icon_B.paa";
		maximumload = 0;
		mass = MASS_BACKPACK;
	};

	class RB205_B_heavyRepeater: RB205_B_deployable_base
	{
		ACCESS_TRUE
		displayName = "[205] Disassembled Heavy Repeater";
		model = "\ls\core\addons\vehicles_mrbc\ls_turret_mrbc_backpack.p3d";
		picture = "ls_equipment_bluefor\backpack\gar\mrbc\data\ui\mrbc_ui_ca.paa";
		class assembleInfo
		{
			displayName = "Heavy Repeater";
			assembleTo = "RB205_heavyRepeater";
			dissasembleTo[] = {};
			primary = 1;
			base = "";
		};
	};
	class RB205_B_autoTurret: RB205_B_deployable_base
	{
		ACCESS_TRUE
		displayName = "[205] Disassembled Auto Turret";
		class assembleInfo
		{
			displayName = "Auto Turret";
			assembleTo = "RB205_autoTurret";
			dissasembleTo[] = {};
			primary = 1;
			base = "";
		};
	};
	class RB205_B_squadShield: RB205_B_deployable_base
	{
		ACCESS_TRUE
		displayName = "[205] Disassembled Squad Shield";
		class assembleInfo
		{
			displayName = "Squad Shield";
			assembleTo = "RB205_squadShield";
			dissasembleTo[] = {};
			primary = 1;
			base = "";
		};
	};
	class RB205_B_prowler: RB205_B_deployable_base
	{
		ACCESS_TRUE
		displayName = "[205] Disassembled Prowler 1000";
		class assembleInfo
		{
			displayName = "Prowler 1000";
			assembleTo = "RB205_prowler";
			dissasembleTo[] = {};
			primary = 1;
			base = "";
		};
	};
	class 3AS_Republic_Mortar_Bag;
	class RB205_B_mortar: 3AS_Republic_Mortar_Bag
	{
		ACCESS_TRUE
		displayName = "[205] Disassembled Mortar";
		picture = "\RB205_main\data\ui\backpacks\icon_B.paa";
		maximumload = 0;
		mass = MASS_BACKPACK;
		class assembleInfo
		{
			displayName = "Mortar";
			assembleTo = "RB205_mortar";
			dissasembleTo[] = {};
			primary = 1;
			base = "";
		};
	};


	class 3AS_HeavyRepeater_Unarmoured;
	class RB205_heavyRepeater: 3AS_HeavyRepeater_Unarmoured
	{
		ACCESS_TRUE
		displayName = "Heavy Repeater";
		faction = "RB205";
		editorSubcategory = "RB205_veh_other";
		editorPreview = "";
		crew = CREW_DEFAULT;
		class assembleInfo
		{
			displayName = "";
			assembleTo = "";
			dissasembleTo[] = {"RB205_B_heavyRepeater"};
			primary = 0;
			base = "";
		};
	};
	class JLTS_UST_turret_GAR;
	class RB205_autoTurret: JLTS_UST_turret_GAR
	{
		ACCESS_TRUE
		displayName = "Auto Turret";
		faction = "RB205";
		editorSubcategory = "RB205_veh_other";
		editorPreview = "";
		class assembleInfo
		{
			displayName = "";
			assembleTo = "";
			dissasembleTo[] = {"RB205_B_autoTurret"};
			primary = 0;
			base = "";
		};
	};
	class JLTS_portable_shield_gar;
	class RB205_squadShield: JLTS_portable_shield_gar
	{
		ACCESS_TRUE
		displayName = "Portable shield generator";
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_other";
		editorPreview = "";
		class assembleInfo
		{
			displayName = "";
			assembleTo = "";
			dissasembleTo[] = {"RB205_B_squadShield"};
			primary = 0;
			base = "";
		};
	};
	class Mortar_01_base_F;
	class B_Mortar_01_F: Mortar_01_base_F
	{
		class Turrets;
	};
	class 3AS_Republic_Mortar: B_Mortar_01_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class RB205_mortar: 3AS_Republic_Mortar
	{
		ACCESS_TRUE
		displayName = "Mortar";
		faction = "RB205";
		editorSubcategory = "RB205_veh_other";
		editorPreview = "";
		crew = CREW_DEFAULT;
		class assembleInfo
		{
			displayName = "";
			assembleTo = "";
			dissasembleTo[] = {"RB205_B_mortar"};
			primary = 0;
			base = "";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					"3AS_8Rnd_82mm_Mo_shells","3AS_8Rnd_82mm_Mo_shells",
					"3AS_8Rnd_82mm_Mo_Flare_white","3AS_8Rnd_82mm_Mo_Flare_white",
					"3AS_8Rnd_82mm_Mo_Smoke_white","3AS_8Rnd_82mm_Mo_Smoke_white"
				};
			};
		};
	};

	class JLTS_UAV_prowler_gar;
	class RB205_prowler: JLTS_UAV_prowler_gar
	{
		class assembleInfo
		{
			displayName = "";
			assembleTo = "";
			dissasembleTo[] = {"RB205_B_prowler"};
			primary = 0;
			base = "";
		};
		class UserActions
		{
			class pick_up
			{
				userActionID = 52;
				displayName = "Pack up Prowler 1000";
				displayNameDefault = "<t align='center'><img image='\a3\missions_f_oldman\data\img\holdactions\holdAction_box_ca.paa' size='2' /><br/></t><t align='center'>Pack up Prowler 1000</t>";
				condition = "alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
				statement = "[this] call RB205_uav_fnc_pick_drone";
				position = "";
				priority = 5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 1;
				showWindow = 1;
			};
		};
	};


	class JLTS_GH_intel_briefcase;
	class RB205_prowler_packed: JLTS_GH_intel_briefcase
	{
		displayName = "Prowler 1000 (Packed)";
		class TransportItems
		{
			class RB205_prowler_item
			{
				name = "RB205_prowler_item";
				count = 1;
			};
		};
	};
};

class CfgWeapons
{
	class JLTS_intel_briefcase;
	class InventoryWeapon_Base_F;
	class RB205_prowler_item: JLTS_intel_briefcase
	{
		displayName = "Prowler 1000 (Packed)";
		descriptionShort = "Auseinandergebaute Prowler 1000 Drohne<br/>Doppelklick zum aufbauen";
		class ItemInfo: InventoryWeapon_Base_F
		{
			mass = 100;
		};
		simulation = "ItemMineDetector";
		type = 4096;
		detectRange = -1;
	};
};

class CfgFunctions
{
	class RB205_uav
	{
		class UAV
		{
			file="\RB205_logistics\deployable\functions";
			class uav_init
			{
				postInit = 1;
			};
			class deploy_uav {};
			class pick_drone {};
		};
	};
};