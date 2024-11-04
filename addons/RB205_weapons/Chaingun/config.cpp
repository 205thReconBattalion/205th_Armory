class cfgPatches
{
	class RB205_weapons_chaingun
	{
		requiredAddons[] =
		{
			"RB205_weapons"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_Chaingun"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class CfgWeapons
{
	class 3AS_Chaingun;
	class RB205_Chaingun: 3AS_Chaingun
	{
		displayName = "$STR_205_Chaingun_DisplayName";
		displayNameShort = "$STR_205_Chaingun_DisplayNameShort";
		descriptionShort = "Rotationsblaster der GAR";
		picture = "\3AS\3AS_Weapons\Chaingun\data\UI\3as_chaingun.paa";
        author = "205th Recon Battalion";
		magazines[] =
		{
			"RB205_chaingun_mag"
		};
		cursor = "RB205_CH_default";
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_Chaingun_fried";
	};
	FRIED_WEAPON(RB205_Chaingun,"\RB205_weapons\data\ui\chaingun_fried.paa")
};
class cfgMagazines
{
	class RB205_RapidFire_Energy_Pack;
	class RB205_chaingun_mag: RB205_RapidFire_Energy_Pack
	{
		displayName = "$STR_205_Chaingun_Energy_Pack_DisplayName";
		displayNameShort = "$STR_205_Chaingun_Energy_Pack_DisplayNameShort";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_ammo_chain.paa";
		model = "SWLW_clones\machineguns\Z7\Z7_mag.p3d";
		ammo = "RB205_ammo_chaingun";
		count = 600;
		descriptionShort = "$STR_205_Chaingun_Energy_Pack_DescriptionShort";
	};
};
class cfgAmmo
{
	class 3AS_Chaingun_Ammo;
	class RB205_ammo_chaingun: 3AS_Chaingun_Ammo
	{
		hit = 15;
		caliber = 1.65;
		ACE_damageType = "bullet";

		effectFly = "3AS_PlasmaBolt_Blue_Fly";//"3AS_PlasmaBolt_Yellow_Fly"
		effectsMissile = "3AS_PlasmaBolt_Blue_Fly";//"3AS_PlasmaBolt_Yellow_Fly"
		craterEffects = "";//"ExploAmmoCrater";
		model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		class CamShakeFire
		{
			distance = 0;
			duration = 0;
			frequency = 0;
			power = 0;
		};
		class CamShakePlayerFire
		{
			distance = 0;
			duration = 0;
			frequency = 0;
			power = 0;
		};
		class CamShakeHit
		{
			distance = 0;
			duration = 0;
			frequency = 0;
			power = 0;
		};
		class CamShakeExplode
		{
			distance = 0;
			duration = 0;
			frequency = 0;
			power = 0;
		};
	};
};