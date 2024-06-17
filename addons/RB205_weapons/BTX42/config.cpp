class cfgPatches
{
	class RB205_weapons_btx42
	{
		requiredAddons[]=
		{
			"RB205_weapons",
			"3AS_BX42",
			"M2"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_BTX42"
		};
	};
};

#include "\RB205_weapons\emp_compat.hpp"

class Mode_FullAuto;

class CfgWeapons
{
	class 3AS_Flamer_Base;
	class 41_Flammenwerfer_02_F;
	class RB205_BTX42: 41_Flammenwerfer_02_F
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_BTX42_DisplayName";
		displayNameShort = "$STR_205_BTX42_DisplayNameShort";
		descriptionShort = "Flammenwerfer der GAR";
		picture = "3AS\3AS_Weapons\X42\Data\UI\3as_btx42.paa";
		magazines[] =
		{
			"RB205_BTX42_mag"
		};
		model = "3AS\3AS_Weapons\X42\BX42.p3d";
		handAnim[] = {"OFP2_ManSkeleton","3AS\3AS_Weapons\Data\Anim\BX42.rtm"};
		drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",5,1,10};
		WBK_BurnEm_IsFlamethrower = "True";
		WBK_BurnEm_FlamethrowerDistance = 30;
		//WBK_BurnEm_FlamethrowerParticlePos = "[[-0.32,0.3,-0.3],'leftHand']";
		WBK_BurnEm_FlamethrowerParticlePos = "[[0,0,0],'leftHand']";
		//Position of the particle, use attachTo command to see where to put it, second element is the bone that particles will be attached
		WBK_BurnEm_FlamethrowerSoundArray = "['flamethrower_start','flamethrower_looping',4.8,'flamethrower_end']";
		WBK_BurnEm_RequiredBackpack = "";
	};
};

class CfgMagazines
{
	class 41_Fuel_Tank;
	class RB205_BTX42_mag: 41_Fuel_Tank
	{
		displayName = "$STR_205_RB205_BTX42_mag_DisplayName";
		displayNameShort = "$STR_205_RB205_BTX42_mag_DisplayNameShort";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_ammo_flamer.paa";
		ammo = "Flamethrower_Fuel";
		count = 350;
		mass = 23;
		descriptionShort = "$STR_205_RB205_BTX42_mag_DescriptionShort";
        author = "205th Recon Battalion";
	};
};