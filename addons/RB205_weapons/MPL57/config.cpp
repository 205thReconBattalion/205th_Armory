class cfgPatches
{
	class RB205_weapons_mpl57
	{
		requiredAddons[] =
		{
			"RB205_weapons",
			"3AS_Weapons_MPL"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_MPL57"
		};
	};
};

#include "\RB205_weapons\emp_compat.hpp"

class GunParticles;
class Mode_Burst;
class Mode_SemiAuto;

class CfgWeapons
{
	class 3AS_MPL_Base_F;
	class 3AS_MPL_F: 3AS_MPL_Base_F
	{
		class Single;
	};
	class RB205_MPL57: 3AS_MPL_F
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_MPL57_DisplayName";
		displayNameShort = "$STR_205_MPL57_DisplayNameShort";
		descriptionShort = "Granatwerder der GAR<br />Freigegeben für: Grenadier";
		picture = "\3AS\3AS_Weapons\MPL\Data\UI\3as_mpl.paa";
		fireLightDiffuse[] = {0,0,1};
		magazines[] =
		{
			"3Rnd_HE_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",
			"ACE_HuntIR_M203",
			"ACE_40mm_Flare_white",
			"ACE_40mm_Flare_green",
			"ACE_40mm_Flare_red"
		};
		magazineWell[] = {};
		modes[] =
		{
			"Single"
		};
		class Single: Single
		{
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					"RB205_UGL_Shot_SoundSet"
				};
			};
		};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_MPL57_fried";
	};
	FRIED_WEAPON(RB205_MPL57,"\RB205_weapons\data\ui\mpl57_fried.paa")
};