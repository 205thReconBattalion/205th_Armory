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
			"RB205_PLX1_F"
		};
		magazines[] =
		{
			"RB205_MK39_AA"
		};
		ammo[] =
		{
			"RB205_M_Titan_AA"
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
	class M_Titan_AA;
	class RB205_M_Titan_AA: M_Titan_AA
	{
		cmImmunity = 1;
		hit = 2000;//hit=1400;
		missileLockMaxDistance = 3000;
		manueuvrability = 30;
		sideAirFriction = 0.02;
		effectsMissile = "RB205_effects_missile_plx_blue";
	};
};
class CfgMagazines
{
	class 3AS_JLTS_MK39_AA;
	class RB205_MK39_AA: 3AS_JLTS_MK39_AA
	{
		ammo = "RB205_M_Titan_AA";
		displayName = "$STR_205_PLX1_AA_MISSILE_DisplayName";
		displayNameShort = "$STR_205_PLX1_AA_MISSILE_DisplayNameShort";
		descriptionShort = "$STR_205_PLX1_AA_MISSILE_DescriptionShort";
		mass = 50;
        author = "205th Recon Battalion";
	};
};
class CfgWeapons
{
	class 3AS_PLX1_F;
	class RB205_PLX1_F: 3AS_PLX1_F
	{
		baseWeapon = "RB205_PLX1_F";
        author = "205th Recon Battalion";
		displayName = "$STR_205_PLX1_DisplayName";
		displayNameShort = "$STR_205_PLX1_DisplayNameShort";
		descriptionShort = "Luftabwehr-Raketenwerfer<br />Freigegeben für: AT/AA";
		picture = "\3AS\3AS_Weapons\PLX1\Data\UI\3as_plx.paa";
		magazines[] =
		{
			"RB205_MK39_AA"
		};
		ace_overpressure_angle = 45;
		ace_overpressure_damage = 0.69999999;
		ace_overpresssure_priority = 1;
		ace_overpressure_range = 10;
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
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_PLX1_F_fried";
	};
	FRIED_WEAPON(RB205_PLX1_F,"\RB205_weapons\data\ui\plx_fried.paa")
};



class CfgLights
{
	class ls_light_hailfireRocket;
	class RB205_effects_rocket_blue: ls_light_hailfireRocket
	{
		color[] = {0,0,1};
	};
	class RB205_effects_rocket_red: ls_light_hailfireRocket
	{
		color[] = {186,0,0};
	};
};
class CfgCloudlets
{
	class ls_particle_hailfireRocket;
	class RB205_effects_smoke_PLXblue: ls_particle_hailfireRocket
	{
		color[] =
		{
			{0.1,0.2,0.80000001,1},
			{0,0,0,1},
			{0,0,0,1}
		};
		colorVar[] = {0,0,0,1};
		lifetime = 3;
		colorCoef[] = {1,1,1,1};
		size[] = {2,2};
		volume = 2;
	};
	class RB205_effects_smoke_PLXred: ls_particle_hailfireRocket
	{
		color[] =
		{
			{0.80000001,0.1,0.2,1},
			{0,0,0,1},
			{0,0,0,1}
		};
		colorVar[] = {0,0,0,1};
		lifetime=3;
		colorCoef[] = {1,1,1,1};
		size[] = {2,2};
		volume = 2;
	};
};
class RB205_effects_missile_plx_blue
{
	class light1
	{
		intensity= 1;
		interval = 1;
		lifeTime = 4;
		position[] = {0,0,0};
		simulation = "light";
		type = "RB205_effects_rocket_blue";
	};
	class MissileEffect1
	{
		simulation = "particles";
		type = "RB205_effects_smoke_PLXblue";
	};
};
class RB205_effects_missile_plx_red
{
	class light1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 4;
		position[] = {0,0,0};
		simulation = "light";
		type = "RB205_effects_rocket_red";
	};
	class MissileEffect1
	{
		simulation = "particles";
		type = "RB205_effects_smoke_PLXred";
	};
};