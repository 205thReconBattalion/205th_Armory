class cfgPatches
{
	class RB205_weapons_dp23
	{
		requiredAddons[] =
		{
			"RB205_weapons",
			"3AS_Weapons_Republic_DP23"
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

class WeaponSlotsInfo;
class CowsSlot;
class PointerSlot;
class MuzzleSlot;

class CfgWeapons
{
	class 3AS_DP23_Base_F;
	class 3AS_DP23_F: 3AS_DP23_Base_F
	{
		class 3AS_FL_F;
	};
	class RB205_DP23: 3AS_DP23_F
	{
		baseWeapon = "RB205_DP23";
        author = "205th Recon Battalion";
		displayName = "$STR_205_DP23_DisplayName";
		displayNameShort = "$STR_205_DP23_DisplayNameShort";
		descriptionShort = "Streu-Blaster der GAR<br />Freigegeben für: Rancor (1-3)";
		cursor = "RB205_CH_shotgun";
		mass = MASS_WP_CARBINE;
		magazines[] =
		{
			"RB205_Scatter_Energy_Pack"
		};
		magazineWell[] = {};
		fireLightDiffuse[] = {0,0,1};
		reloadAction = "GestureReload_JLTS_DC15S";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\Reload_Mx",1,1,10};
		recoil = "3AS_recoil_dc15a";
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
		muzzles[] = {"this", "3AS_FL_F"};
		class 3AS_FL_F: 3AS_FL_F
		{
			displayName = "$STR_205_DP23_DisplayName";
			magazines[] =
			{
				"RB205_Flechette_Energy_Pack"
			};
			magazineWell[] = {};
			reloadAction = "RB205_reload_charge";
			reloadMagazineSound[] = {"RB205_weapons\data\sounds\reload_charge.ogg",2,1,30};
		};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DP23_fried";
	};
	FRIED_WEAPON(RB205_DP23,"\RB205_weapons\data\ui\dp23_fried.paa")
};