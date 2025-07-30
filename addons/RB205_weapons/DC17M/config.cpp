class cfgPatches
{
	class RB205_weapons_dc17m
	{
		requiredAddons[]=
		{
			"RB205_weapons",
			"3AS_Weapons_DC17M"
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
			"RB205_ammo_antiArmorGrenade"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class WeaponSlotsInfo;
class CowsSlot;
class PointerSlot;
class MuzzleSlot;

class CfgAmmo
{
	class G_40MM_AMC;	
	class RB205_ammo_antiArmorGrenade: G_40MM_AMC
	{
		hit = 1000;//550;
		coefgravity = 0;
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
		ammo = "RB205_ammo_antiArmorGrenade";
		count = 1;
		mass = 15;
	};
};
class CfgWeapons
{
	class 3AS_DC17M_Base_F;
	class 3AS_DC17M_F: 3AS_DC17M_Base_F
	{
		class Single;
		class FullAuto;
		class OpticsModes
		{
			class Ironsights;
			class Scope;
		};
	};
	class RB205_DC17M: 3AS_DC17M_F
	{
		baseWeapon = "RB205_DC17M";
		author = "205th Recon Battalion";
		displayName="$STR_205_DC17M_DisplayName";
		displayNameShort = "STR_205_DC17M_DisplayNameShort";
		descriptionShort = "Blasterkarabiner der GAR";
		cursor = "RB205_CH_default";
		mass = MASS_WP_CARBINE;
		magazines[] =
		{
			"RB205_DC17M_Blaster_Mag",
			"RB205_DC17M_Sniper_Mag",
			"RB205_DC17M_AT_Mag"
		};
		magazineWell[] = {};
		fireLightDiffuse[] = {0,0,1};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {};
			};
		};
		class Single: Single
		{
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[] = {"ls_dc17m_sniper_Shot_SoundSet"}; //,"ls_sniper_Tail_SoundSet"
			};
			dispersion = DISPERSION_SPECIAL;
			reloadTime = 0.1;
		};
		class FullAuto: FullAuto
		{
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[] = {"ls_dc17m_Shot_SoundSet"}; //,"ls_mediumBlaster_Tail_SoundSet"
			};
			dispersion = DISPERSION_SPECIAL;
			reloadTime = 0.1;
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
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;
		JLTS_friedItem = "RB205_DC17M_fried";
	};
	FRIED_WEAPON(RB205_DC17M,"\RB205_weapons\data\ui\dc17m_fried.paa")
};