class cfgPatches
{
	class RB205_weapons_dp23
	{
		requiredAddons[] =
		{
			"RB205_weapons",
			"JLTS_weapons_DP23"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_DP23"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class CfgWeapons
{	
	class WeaponSlotsInfo;
	class CowsSlot;
	class UnderBarrelSlot;
	class MuzzleSlot;
	class PointerSlot;

	class JLTS_DP23;
	class RB205_DP23: JLTS_DP23
	{
		displayName = "$STR_205_DP23_DisplayName";
		displayNameShort = "$STR_205_DP23_DisplayNameShort";
		descriptionShort = "Freigegeben für: 1-3 'Rancor'";
		picture = "\3AS\3AS_Weapons\MPL\Data\UI\3as_mpl.paa";
		mass = MASS_WP_CARBINE;
		magazines[] =
		{
			"RB205_Scatter_Energy_Pack"
		};
		cursor = "RB205_CH_shotgun";
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon="RB205_DP23_shield";
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DP23_fried";
		baseWeapon = "RB205_DP23";
        author = "205th Recon Battalion";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=85;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
	};
	FRIED_WEAPON(RB205_DP23,"\RB205_weapons\data\ui\dp23_fried.paa")

	class JLTS_DP23_shield;
	class RB205_DP23_shield: JLTS_DP23_shield
	{
		displayName = "$STR_205_DP23_DisplayName";
		displayNameShort = "$STR_205_DP23_DisplayNameShort";
		descriptionShort = "Freigegeben für: 1-3 'Rancor'";
		picture = "\RB205_weapons\data\ui\dp23.paa";
        author = "205th Recon Battalion";
		magazines[] =
		{
			"RB205_Scatter_Energy_Pack"
		};
		JLTS_isShielded=1;
		JLTS_baseWeapon="RB205_DP23";
		baseWeapon = "RB205_DP23_shield";
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DP23_shield_fried";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					"JLTS_riot_shield_attachment",
					"JLTS_riot_shield_212_attachment",
					"JLTS_riot_shield_501_attachment",
					"JLTS_riot_shield_101_attachment",
					"JLTS_riot_shield_CG_attachment",
					"JLTS_riot_shield_GD_attachment",
					"JLTS_riot_shield_droid_attachment"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
		};
	};
	FRIED_WEAPON(RB205_DP23_shield,"\RB205_weapons\data\ui\dp23_fried.paa")
};