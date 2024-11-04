class cfgPatches
{
	class RB205_weapons_dc17
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
			"RB205_DC17",
			"RB205_DC17_Dual",
			"RB205_DC17_alt"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class Mode_SemiAuto;

class CfgWeapons
{
	class 3AS_DC17S_F;
	class JLTS_stun_muzzle;
	
	class RB205_DC17: 3AS_DC17S_F
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC17_DisplayName";
		displayNameShort = "$STR_205_DC17_DisplayNameShort";
		descriptionShort = "Blasterpistole der GAR<br />Freigegeben für: Alle";
		picture = "\3AS\3AS_Weapons\DC17S\Data\UI\3as_dc17s.paa";
		mass = MASS_WP_PISTOL;
		fireLightDiffuse[] = {0,0,1};
		magazines[] =
		{
			"RB205_Compact_Energy_Pack"
		};
		cursor = "RB205_CH_sidearm";
		magazineWell[] = {};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC17_fried";
		muzzles[] =
		{
			"this",
			"Stun"
		};
		class Stun: JLTS_stun_muzzle
		{
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
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
					"RB205_DC17_Shot_SoundSet"
				};
			};
			recoil = "recoil_pistol_heavy";
			recoilProne = "recoil_prone_pistol_heavy";
			reloadTime = 0.1;
			dispersion = 0;//0.0039900001;
			minRange = 5;
			minRangeProbab = 0.30000001;
			midRange = 25;
			midRangeProbab = 0.60000002;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
	};
	FRIED_WEAPON_SECONDARY(RB205_DC17,"\RB205_weapons\data\ui\dc17_fried.paa")
	class RB205_DC17_Dual: RB205_DC17
	{
		author = "205th Recon Battalion";
		scope = 2;
		displayName = "$STR_205_DC17_DUAL_DisplayName";
		displayNameShort = "$STR_205_DC17_DUAL_DisplayNameShort";
		descriptionShort = "Blasterpistolen der GAR<br />Freigegeben für: ARC, CS+";
		picture = "\3AS\3AS_Weapons\DC17S\Data\UI\3as_dc17s_d.paa";
		mass = MASS_WP_PISTOL;
		fireLightDiffuse[] = {0,0,1};
		model = "3AS\3AS_Weapons\DC17S\3AS_DC17S_Dual_F.p3d";
		weaponInfoType = "RscWeaponZeroing";
		reloadAction = "ls_dualPistol_reload";
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"3AS\3AS_Weapons\DC17S\data\anim\attempt1.rtm"
		};
		magazines[] =
		{
			"RB205_Compact_Energy_Pack"
		};
		cursor = "RB205_CH_sidearm_dual";
		magazineWell[] = {};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC17_Dual_fried";
	};
	FRIED_WEAPON_SECONDARY(RB205_DC17_Dual,"\RB205_weapons\data\ui\dc17_dual_fried.paa")

	class SWLW_DC17;
	class RB205_DC17_alt: SWLW_DC17
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC17_ALT_DisplayName";
		displayNameShort = "$STR_205_DC17_ALT_DisplayNameShort";
		descriptionShort = "Blasterpistole der GAR<br />Freigegeben für: Alle";
		picture = "\3AS\3AS_Weapons\DC17S\Data\UI\3as_dc17s.paa";
		mass = MASS_WP_PISTOL;
		fireLightDiffuse[] = {0,0,1};
		magazines[] =
		{
			"RB205_Compact_Energy_Pack"
		};
		cursor = "RB205_CH_sidearm";
		magazineWell[] = {};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC17_alt_fried";
		modes[] =
		{
			"Single"
		};
		muzzles[] =
		{
			"this",
			"Stun"
		};
		class Stun: JLTS_stun_muzzle {};
		class Single: Mode_SemiAuto
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
					"RB205_DC17_Shot_SoundSet"
				};
			};
			recoil = "recoil_pistol_heavy";
			recoilProne = "recoil_prone_pistol_heavy";
			reloadTime = 0.1;
			dispersion = 0;//0.0039900001
			minRange = 5;
			minRangeProbab = 0.30000001;
			midRange = 25;
			midRangeProbab = 0.60000002;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
	};
	FRIED_WEAPON_SECONDARY(RB205_DC17_alt,"\RB205_weapons\data\ui\dc17_fried.paa")


	class hgun_P07_F;
	class JLTS_DC17SA: hgun_P07_F
	{
		magazines[] = {"JLTS_DC17SA_mag","JLTS_EMP_mag","RB205_Compact_Energy_Pack"};
	};
};

class cfgSoundShaders
{
	class RB205_DC17_SoundShader_Close
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC17\sounds\DC17_Close.wss",
				1
			}
		};
		volume = 0.44668359;
		range = 5;
	};
	class RB205_DC17_SoundShader_Close2
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC17\sounds\DC17_Close.wss",
				1
			}
		};
		volume = 1.1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class RB205_DC17_SoundShader_Medium
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC17\sounds\DC17_Medium.wss",
				1
			}
		};
		volume = 0.79432821;
		range = 1800;
		rangeCurve[] =
		{
			{0,0.2},{50,1},
			{300,0},{1800,0}
		};
	};
	class RB205_DC17_SoundShader_Far
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC17\sounds\DC17_Far.wss",
				1
			}
		};
		volume = 1;
		range = 4000;
		rangeCurve[] =
		{
			{0,0},	{50,0},
			{300,1},{4000,1}
		};
	};
};
class cfgSoundSets
{
	class RB205_DC17_Shot_SoundSet
	{
		soundShaders[] =
		{
			"RB205_DC17_SoundShader_Close",
			"RB205_DC17_SoundShader_Close2",
			"RB205_DC17_SoundShader_Medium",
			"RB205_DC17_SoundShader_Far"
		};
		volumeFactor = 1;
		frequencyRandomizer = 0.5;
		frequencyFactor = 0.94999999;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		occlusionFactor = 0.25;
		obstructionFactor = 0.30000001;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};