class cfgPatches
{
	class RB205_weapons_westarM5
	{
		requiredAddons[] =
		{
			"RB205_weapons",
			"3AS_Weapons_WestarM5"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_WestarM5",
			"RB205_optic_WM5"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class WeaponSlotsInfo;
class CowsSlot;
class PointerSlot;
class MuzzleSlot;

class Mode_SemiAuto;

class CfgWeapons
{
	class 3AS_WestarM5_Base_F;
	class 3AS_WestarM5_GL: 3AS_WestarM5_Base_F
	{
		class Single;
		class FullAuto;
		class 3AS_WestarM5_GL_F;
	};
	class RB205_WestarM5: 3AS_WestarM5_GL
	{
		baseWeapon = "RB205_WestarM5";
		author = "205th Recon Battalion";
		displayName = "$STR_205_WESTARM5_DisplayName";
		displayNameShort = "$STR_205_WESTARM5_DisplayNameShort";
		descriptionShort = "Blastergewehr der GAR<br />Freigegeben für: ARC";
		cursor = "RB205_CH_default";
		mass = MASS_WP_RIFLE;
		magazines[] =
		{
			"RB205_Experimental_Energy_Pack"
		};
		magazineWell[] = {};
		fireLightDiffuse[] = {0,0,1};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[] =
				{
					"RB205_optic_WM5"
				};
				iconPicture = "";
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
		modes[] =
		{
			"Single",
			"FullAuto"
		};
		recoil = "recoil_smg_03";
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_WestarM5_Shot_SoundSet" };
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_WestarM5_Shot_SoundSet" };
			};
			dispersion = 0;
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_WestarM5_Shot_SoundSet" };
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_WestarM5_Shot_SoundSet" };
			};
			dispersion = 0;
		};
		class 3AS_WestarM5_GL_F: 3AS_WestarM5_GL_F
		{
			displayName = "Westar-M5 (UGL)";
			magazines[] =
			{
				"RB205_ugl_he_6rnd"
			};
			magazineWell[] =
			{
				"RB205_ugl_arc"
			};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class BaseSoundModeType;
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[] =
					{
						"RB205_UGL_Shot_SoundSet"
					};
				};
				recoil = "M240Recoil";
				recoilProne = "M240Recoil";
				maxRange = 600;
				maxRangeProbab = 0.04;
				midRange = 300;
				midRangeProbab = 0.58;
				minRange = 30;
				minRangeProbab = 0.25;
			};
		};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_WestarM5_fried";
	};	
	FRIED_WEAPON(RB205_WestarM5,"\RB205_weapons\data\ui\westar_fried.paa")

	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class 3AS_Optic_Scope_WestarM5: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class 3AS_Scope_Optics;
			};
		};
	};
	class RB205_optic_WM5: 3AS_Optic_Scope_WestarM5
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_OPTIC_WM5_DisplayName";
		descriptionShort = "Vergrößerung: 4x-12x";
		class ItemInfo: ItemInfo
		{
			mass = MASS_ACC_OPTIC;
			class OpticsModes: OpticsModes
			{
				class 3AS_Scope_Optics: 3AS_Scope_Optics
				{
					visionMode[] = {"Normal","NVG","TI"};
					discreteFov[] = {0.125,0.05,0.03125};
					opticsZoomInit = "0.25/2";
					opticsZoomMax = "0.25";
					opticsZoomMin = "0.25/8";
				};
			};
		};
	};
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