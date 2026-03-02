class cfgPatches
{
	class RB205_weapons_plx1
	{
		requiredAddons[] =
		{
			"RB205_weapons",
			"3AS_Weapons_PLX1"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_PLX1"
		};
		magazines[] =
		{
			"RB205_PLX1_missile_AA",
			"RB205_PLX1_missile_AT"
		};
		ammo[] =
		{
			"RB205_ammo_PLX1_AA",
			"RB205_ammo_PLX1_AT"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class CfgAmmo
{
	class 3AS_M_MK39_AA;
	class RB205_ammo_PLX1_AA: 3AS_M_MK39_AA //M_Titan_AA
	{
		cmImmunity = 1;
	};
	class 3AS_M_MK43_AT;
	class RB205_ammo_PLX1_AT: 3AS_M_MK43_AT
	{
		cmImmunity = 1;
	};
};
class CfgMagazines
{
	class 3AS_JLTS_MK39_AA;
	class RB205_PLX1_missile_AA: 3AS_JLTS_MK39_AA
	{
		ammo = "RB205_ammo_PLX1_AA";
		displayName = "$STR_205_PLX1_AA_MISSILE_DisplayName";
		displayNameShort = "$STR_205_PLX1_AA_MISSILE_DisplayNameShort";
		descriptionShort = "$STR_205_PLX1_AA_MISSILE_DescriptionShort";
		mass = 66;
		count = 2
        author = "205th Recon Battalion";
	};
	class 3AS_JLTS_MK43_AT;
	class RB205_PLX1_missile_AT: 3AS_JLTS_MK43_AT
	{
		ammo = "RB205_ammo_PLX1_AT";
		displayName = "$STR_205_PLX1_AT_MISSILE_DisplayName";
		displayNameShort = "$STR_205_PLX1_AT_MISSILE_DisplayNameShort";
		descriptionShort = "$STR_205_PLX1_AT_MISSILE_DescriptionShort";
		mass = 66;
		count = 1;
		author = "205th Recon Battalion";
	};
};
class CfgWeapons
{
	class 3AS_PLX1_F;
	class RB205_PLX1: 3AS_PLX1_F
	{
		baseWeapon = "RB205_PLX1";
        author = "205th Recon Battalion";
		displayName = "$STR_205_PLX1_DisplayName";
		displayNameShort = "$STR_205_PLX1_DisplayNameShort";
		descriptionShort = "Raketenwerfer<br />Freigegeben für: AT/AA";
		magazines[] =
		{
			"RB205_PLX1_missile_AA",
			"RB205_PLX1_missile_AT"
		};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_PLX1_fried";
	};
	FRIED_WEAPON(RB205_PLX1,"\RB205_weapons\data\ui\plx_fried.paa")
};