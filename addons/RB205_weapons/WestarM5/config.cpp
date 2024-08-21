class cfgPatches
{
	class RB205_weapons_westarM5
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
			"RB205_WestarM5"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class WeaponSlotsInfo;
class CowsSlot;
class PointerSlot;
class Mode_FullAuto;
class Mode_SemiAuto;
class CfgWeapons
{
	//class 3AS_WestarM5_F;
	//class 205_WestarM5: 3AS_WestarM5_F { displayName="[205] Westar-M5 Blaster Rifle"; };
	
	//class 3AS_WestarM5_GL;
	//class UGL_F;

	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class 3AS_WestarM5_Base_F: Rifle_Base_F
	{
		class 3AS_WestarM5_GL_F: UGL_F
		{
			class Single: Mode_SemiAuto
			{
			};
		};
	};

	class 3AS_WestarM5_GL: 3AS_WestarM5_Base_F {};

	class RB205_WestarM5: 3AS_WestarM5_GL
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_WESTARM5_DisplayName";
		displayNameShort = "$STR_205_WESTARM5_DisplayNameShort";
		descriptionShort = "Blastergewehr der GAR<br />Freigegeben für: ARC";
		picture = "\3AS\3AS_Weapons\WestarM5\Data\UI\3as_westar.paa";
		mass = MASS_WP_RIFLE;
		fireLightDiffuse[] = {0,0,1};
		scope = 2;
		recoil = "recoil_smg_03";
		magazines[] =
		{
			"RB205_Experimental_Energy_Pack"
		};
		magazineWell[] = {};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_WestarM5_fried";
		modes[] =
		{
			"Single",
			"FullAuto"
		};
		muzzles[] =
		{
			"this",
			"RB205_WestarM5_GL_F"
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
					"RB205_WestarM5_Shot_SoundSet"
				};
			};
			reloadTime = 0.2;
			dispersion = 0;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.69999999;
			maxRange = 400;
			maxRangeProbab = 0.30000001;
			soundContinuous = 0;
			soundBurst = 0;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"RB205_WestarM5_Shot_SoundSet"
				};
			};
			reloadTime = 0.079999998;
			dispersion = 0;
			minRange = 0;
			minRangeProbab=0.89999998;
			midRange = 15;
			midRangeProbab = 0.69999999;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] =
				{
					"3AS_Optic_Scope_WestarM5"
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] =
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
		};
		class RB205_WestarM5_GL_F: 3AS_WestarM5_GL_F
		{
			displayName = "Westar-M5-GL";
			magazines[] =
			{
				"RB205_ugl_he_6rnd"
			};
			magazineWell[] =
			{
				"RB205_ugl_arc"
			};
			modes[] =
			{
				"Single"
			};
			class Single: Single//Mode_SemiAuto
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
				/*aiDispersionCoefX = 1.4;
				aiDispersionCoefY = 1.7;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 1;
				aiRateOfFireDistance = 500;
				artilleryCharge = 1;
				artilleryDispersion = 1;
				autoFire = 0;
				burst = 1;
				burstRangeMax = -1;
				canShootInWater = 0;
				dispersion = 0.0002;
				displayName = "Semi";
				ffCount = 1;
				ffFrequency = 11;
				ffMagnitude = 0.5;
				flash = "gunfire";
				flashSize = 0.1;
				maxRange = 400;
				maxRangeProbab = 0.05;
				midRange = 200;
				midRangeProbab = 0.7;
				minRange = 30;
				minRangeProbab = 0.1;
				multiplier = 1;
				recoil = "M240Recoil";
				recoilProne = "M240Recoil";
				reloadTime = 0.1;
				requiredOpticType = -1;
				showToPlayer = 1;
				sound[] = {"",10,1};
				soundBegin[] = {"sound",1};
				soundBeginWater[] = {"sound",1};
				soundBurst = 0;
				soundClosure[] = {"sound",1};
				soundContinuous = 0;
				soundEnd[] = {};
				soundLoop[] = {};
				textureType = "semi";
				useAction = 0;
				useActionTitle = "";
				weaponSoundEffect = "";*/
			};
		};
		ACE_Overheating_Dispersion = 0;
		ACE_Overheating_SlowdownFactor = 1;
		ACE_Overheating_JamChance = 0.0001;
		ACE_overheating_mrbs = 3e+009;
		ACE_overheating_allowSwapBarrel = 0;
	};	
	FRIED_WEAPON(RB205_WestarM5,"\RB205_weapons\data\ui\westar_fried.paa")
};

class cfgSoundShaders
{
	class RB205_WestarM5_SoundShader
	{
		samples[] =
		{
			
			{
				"RB205_weapons\WestarM5\sounds\WestarM5_Close.wss",
				1
			}
		};
		volume = 0.89999998;
		range = 300;
		rangeCurve[] =
		{
			{0,1},
			{300,0}
		};
	};
	class RB205_WestarM5_SoundShader_Far
	{
		samples[] =
		{
			
			{
				"RB205_weapons\WestarM5\sounds\WestarM5_Far.wss",
				1
			}
		};
		volume = 1;
		range = 1000;
		rangeCurve[] =
		{
			{0,0},
			{50,0},
			{300,1},
			{1000,1}
		};
	};
};
class cfgSoundSets
{
	class RB205_WestarM5_Shot_SoundSet
	{
		soundShaders[] =
		{
			"RB205_WestarM5_SoundShader",
			"RB205_WestarM5_SoundShader_Far"
		};
		volumeFactor = 1;
		frequencyRandomizer = 0.60000002;
		frequencyRandomizermin = 0.25;
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