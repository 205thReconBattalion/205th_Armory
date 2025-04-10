class cfgPatches
{
	class RB205_weapons_dc17m
	{
		requiredAddons[]=
		{
			"RB205_weapons"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_DC17M",
		};
		magazines[] =
		{
			"RB205_DC17M_Blaster_Mag",
			"RB205_DC17M_Sniper_Mag",
			"RB205_DC17M_AT_Mag"
		};
		ammo[] =
		{
			"RB205_ammo_40mm_at"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class WeaponSlotsInfo;
class BaseSoundModeType;

class CfgAmmo
{
	class SWLW_ammo_smg_blue;
	class SWLW_ammo_sniper_blue;
	class SWLW_ammo_40mm_at;
	
	class RB205_ammo_40mm_at: SWLW_ammo_40mm_at
	{
		hit = 1000;//550;
	};
};
class CfgMagazines
{
	class 3AS_100Rnd_EC40_mag;
	class 3AS_5Rnd_EC80_mag;
	class 3AS_AntiArmour_mag;

	class RB205_DC17M_Blaster_Mag: 3AS_100Rnd_EC40_mag
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC17M_blaster_Energy_Pack_DisplayName";
		displayNameShort = "$STR_205_DC17M_blaster_Energy_Pack_DisplayNameShort";
		descriptionShort = "$STR_205_DC17M_blaster_Energy_Pack_DescriptionShort";
		ammo = "RB205_ammo_experimental";
		count = 60;
		mass = 10;
	};
	class RB205_DC17M_Sniper_Mag: 3AS_5Rnd_EC80_mag
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC17M_sniper_Energy_Pack_DisplayName";
		displayNameShort = "$STR_205_DC17M_sniper_Energy_Pack_DisplayNameShort";
		descriptionShort = "$STR_205_DC17M_sniper_Energy_Pack_DescriptionShort";
		ammo = "RB205_ammo_overcharged";
		count = 5;
		mass = 4;
	};
	class RB205_DC17M_AT_Mag: 3AS_AntiArmour_mag
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC17M_at_Energy_Pack_DisplayName";
		displayNameShort = "$STR_205_DC17M_at_Energy_Pack_DisplayNameShort";
		descriptionShort = "$STR_205_DC17M_at_Energy_Pack_DescriptionShort";
		ammo = "RB205_ammo_40mm_at";
		count = 1;
		mass = 15;
	};
};
class CfgWeapons
{
	class 3AS_DC17M_Base_F;
	class 3AS_DC17M_F: 3AS_DC17M_Base_F
	{
		class OpticsModes
		{
			class Ironsights;
			class Scope;
		};
	};
	class RB205_DC17M: 3AS_DC17M_F
	{
		author = "205th Recon Battalion";
		displayName="$STR_205_DC17M_DisplayName";
		displayNameShort = "STR_205_DC17M_DisplayNameShort";
		descriptionShort = "Blasterkarabiner der GAR<br />Freigegeben für: Pathfinder, ARC";
		picture = "\3AS\3AS_Weapons\DC17M\data\UI\3as_dc17m.paa";
		mass = MASS_WP_CARBINE;
		hiddenSelectionsTextures[] =
		{
			"RB205_weapons\data\RB205_DC17M.paa"
		};
		magazines[] =
		{
			"RB205_DC17M_Blaster_Mag",
			"RB205_DC17M_Sniper_Mag",
			"RB205_DC17M_AT_Mag"
		};
		magazineWell[] = {};
		cursor = "RB205_CH_default";
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;
		JLTS_friedItem = "RB205_DC17M_fried";
		modes[] =
		{
			"Single",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] =
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					1,
					1,
					1800
				};
				begin2[] =
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					1,
					1,
					1800
				};
				begin3[] =
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					1,
					1,
					1800
				};
				soundBegin[] =
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime = 0.1;
			dispersion = 0; //dispersion = 0.0012;
			minRange = 5;
			minRangeProbab = 0.30000001;
			midRange = 25;
			midRangeProbab = 0.60000002;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] =
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					1,
					1,
					1800
				};
				begin2[] =
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					1,
					1,
					1800
				};
				begin3[] =
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					1,
					1,
					1800
				};
				soundBegin[] =
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime = 0.1;
			dispersion = 0.0012;
			minRange = 5;
			minRangeProbab = 0.30000001;
			midRange = 25;
			midRangeProbab = 0.60000002;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class OpticsModes: OpticsModes
		{
			class Ironsights: Ironsights {};
			class Scope: Scope
			{
				discreteFov[] = {0.125,0.0625,0.025};
				discreteInitIndex = 0;
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 60;
		};
	};
	FRIED_WEAPON(RB205_DC17M,"\RB205_weapons\data\ui\dc17m_fried.paa")
};