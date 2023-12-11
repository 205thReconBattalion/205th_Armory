class cfgPatches
{
	class RB205_weapons_v38x
	{
		requiredAddons[] =
		{
			"RB205_weapons",
			"3AS_Weapons_Valken38X"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_Valken38X"
		};
	};
};

#include "\RB205_weapons\emp_compat.hpp"

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class WeaponSlotsInfo;

class CfgWeapons
{
	class 3AS_Valken38X_F;
	class 3AS_Optic_VK38X;

	class BaseSoundModeType;
	class InventoryOpticsItem_Base_F;

	class RB205_Valken38X: 3AS_Valken38X_F
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_V38X_DisplayName";
		displayNameShort = "$STR_205_V38X_DisplayNameShort";
		descriptionShort = "Blastergewehr der GAR<br />Freigegeben für: Marksman";
		picture = "\RB205_weapons\data\ui\v38x.paa";
		fireLightDiffuse[] = {0,0,1};
		magazines[] =
		{
			"RB205_Overcharged_Energy_Pack"
		};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_Valken38X_fried";
		modes[] =
		{
			"Single"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] =
				{
					"RB205_Optic_VK38X"
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
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] =
				{
					"3AS_Bipod_VK38X_f"
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"RB205_V38X_Shot_SoundSet"
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
	};
	FRIED_WEAPON(RB205_Valken38X,"\RB205_weapons\data\ui\v38x_fried.paa")

	class RB205_Optic_VK38X: 3AS_Optic_VK38X
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_OPTIC_V38X_DisplayName";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 7;
			modelOptics = "\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
			class OpticsModes
			{
				class RB205_VK38X_Optic
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] =
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin = 0.01;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					discreteDistance[] = {100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					discreteFov[] = {0.125,0.0625,0.025,0.01};
					discreteInitIndex = 0;
					modelOptics[] =
					{
						"\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d"
					};
					memoryPointCamera = "opticView";
					visionMode[] =
					{
						"Normal",
						"NVG",
						"TI"
					};
					thermalMode[] = {0,1};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class IronOnTopOfMyOptics: RB205_VK38X_Optic
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discretefov[] = {};
				};
			};
		};
	};
};

class cfgSoundShaders
{
	class RB205_V38X_SoundShader_Close
	{
		samples[] =
		{
			
			{
				"RB205_weapons\V38X\sounds\V38X_Close.wss",
				1
			}
		};
		volume = 0.44668359;
		range = 5;
	};
	class RB205_V38X_SoundShader_Close2
	{
		samples[] =
		{
			
			{
				"RB205_weapons\V38X\sounds\V38X_Close.wss",
				1
			}
		};
		volume = 0.89999998;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class RB205_V38X_SoundShader_Medium
	{
		samples[] =
		{
			
			{
				"RB205_weapons\V38X\sounds\V38X_Medium.wss",
				1
			}
		};
		volume = 0.79432821;
		range = 1800;
		rangeCurve[] =
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class RB205_V38X_SoundShader_Far
	{
		samples[] =
		{
			
			{
				"RB205_weapons\V38X\sounds\V38X_Far.wss",
				1
			}
		};
		volume = 1;
		range = 4000;
		rangeCurve[] =
		{
			{0,0},
			{50,0},
			{300,1},
			{4000,1}
		};
	};
};
class cfgSoundSets
{
	class RB205_V38X_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RB205_V38X_SoundShader_Close",
			"RB205_V38X_SoundShader_Close2",
			"RB205_V38X_SoundShader_Medium",
			"RB205_V38X_SoundShader_Far"
		};
		volumeFactor = 1;
		frequencyRandomizer = 1;
		frequencyRandomizermin = 0.34999999;
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