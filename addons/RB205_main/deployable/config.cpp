class CfgPatches
{
	class RB205_deployableBackpacks
	{
		author="205th Recon Battalion";
		requiredAddons[] =
		{
			"RB205_main"
		};
		requiredVersion=1.0;
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

#include "\RB205_core\macros.hpp"
#include "\RB205_main\macros.hpp"

class CfgVehicles
{
	class RB205_B_heavy;
	class RB205_B_deployable_base: RB205_B_heavy
	{
		ACCESS_FALSE
		picture = "\RB205_main\data\ui\backpacks\icon_B.paa";
		maximumload=0;
		mass=250;
	};

	class RB205_B_heavyRepeater: RB205_B_deployable_base
	{
		ACCESS_TRUE
		displayName="[205] Disassembled Heavy Repeater";
		class assembleInfo
		{
			primary=1;
			base="";
			displayName="Heavy Repeater";
			assembleTo="RB205_heavyRepeater";
			dissasembleTo[]={};
		};
	};
	class RB205_B_autoTurret: RB205_B_deployable_base
	{
		ACCESS_TRUE
		displayName="[205] Disassembled Auto Turret";
		class assembleInfo
		{
			primary=1;
			base="";
			displayName="Auto Turret";
			assembleTo="RB205_autoTurret";
			dissasembleTo[]={};
		};
	};
	class RB205_B_squadShield: RB205_B_deployable_base
	{
		ACCESS_TRUE
		displayName="[205] Disassembled Squad Shield";
		class assembleInfo
		{
			primary=1;
			base="";
			displayName="Squad Shield";
			assembleTo="RB205_squadShield";
			dissasembleTo[]={};
		};
	};
	class RB205_B_prowler: RB205_B_deployable_base
	{
		ACCESS_TRUE
		displayName = "[205] Disassembled Prowler 1000";
		class assembleInfo
		{
			primary = 1;
			base = "";
			displayName = "Prowler 1000";
			assembleTo = "RB205_prowler";
			dissasembleTo[]={};
		};
	};



	class 3AS_HeavyRepeater_Unarmoured;
	class JLTS_UST_turret_GAR;
	class JLTS_portable_shield_gar;

	class RB205_heavyRepeater: 3AS_HeavyRepeater_Unarmoured
	{
		ACCESS_TRUE
		class assembleInfo
		{
			primary=0;
			base="";
			displayName="";
			assembleTo="";
			dissasembleTo[]=
			{
				"RB205_B_heavyRepeater"
			};
		};
	};
	class RB205_autoTurret: JLTS_UST_turret_GAR
	{
		ACCESS_TRUE
		class assembleInfo
		{
			primary=0;
			base="";
			displayName="";
			assembleTo="";
			dissasembleTo[]=
			{
				"RB205_B_autoTurret"
			};
		};
	};
	class RB205_squadShield: JLTS_portable_shield_gar
	{
		ACCESS_TRUE
		class assembleInfo
		{
			primary=0;
			base="";
			displayName="";
			assembleTo="";
			dissasembleTo[]=
			{
				"RB205_B_squadShield"
			};
		};
	};
};