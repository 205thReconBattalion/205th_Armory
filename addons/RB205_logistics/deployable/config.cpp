class CfgPatches
{
	class RB205_logistics_deployable
	{
		requiredAddons[] =
		{
			"RB205_main",
			"RB205_vehicles_prowler"
		};
		requiredVersion=1.0;
		author="205th Recon Battalion";
		units[] =
		{
			"RB205_B_heavyRepeater",
			"RB205_B_autoTurret",
			"RB205_B_squadShield",
			"RB205_B_prowler",

			"RB205_heavyRepeater",
			"RB205_autoTurret",
			"RB205_squadShield"
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
		displayName = "[205] Portable shield generator";
		class assembleInfo
		{
			displayName = "";
			assembleTo = "";
			dissasembleTo[] = {"RB205_B_squadShield"};
			primary = 0;
			base = "";
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
	};
};