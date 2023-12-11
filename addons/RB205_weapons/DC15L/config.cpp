class cfgPatches
{
	class RB205_weapons_dc15l
	{
		requiredAddons[] =
		{
			"RB205_weapons",
			"3AS_Weapons_DC15L"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_DC15L",
			"RB205_Optic_DC15L"
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
	class 3AS_DC15L_F;
	class RB205_DC15L: 3AS_DC15L_F
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC15L_DisplayName";
		displayNameShort = "$STR_205_DC15L_DisplayNameShort";
		descriptionShort = "Blastergewehr der GAR<br />Freigegeben für: Heavy";
		picture = "\RB205_weapons\data\ui\dc15a.paa";
		fireLightDiffuse[] = {0,0,1};
		magazines[] =
		{
			"RB205_Heavy_Energy_Pack",
			"RB205_Standard_Energy_Pack"
		};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC15L_fried";
		modes[] =
		{
			"FullAuto"
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
				soundSetShot[] =
				{
					"RB205_DC15L_Shot_SoundSet"
				};
			};
			reloadTime = 0.1;
			dispersion = 0.00133;
			minRange = 0;
			minRangeProbab = 0.89999998;
			midRange = 15;
			midRangeProbab = 0.69999999;
			maxRange = 30;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]  =
				{
					"RB205_Optic_DC15L"
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
					"3AS_Bipod_DC15L_f"
				};
			};
		};
	};
	FRIED_WEAPON(RB205_DC15L,"\RB205_weapons\data\ui\dc15a_fried.paa")

	class 3AS_Optic_DC15L;
	class InventoryOpticsItem_Base_F;

	class RB205_Optic_DC15L: 3AS_Optic_DC15L
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_OPTIC_DC15L_DisplayName";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 7;
			modelOptics = "\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
			class OpticsModes
			{
				class RB205_DC15L_Optic
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] =
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin = 0.122173;
					opticsZoomMax = 0.122173;
					opticsZoomInit = 0.122173;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					nFovLimit = 0.07;
					discreteFov[] = {0.122173};
					discreteInitIndex = 0;
					modelOptics[] =
					{
						"\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d"
					};
					memoryPointCamera = "opticView";
					visionMode[] =
					{
						"Normal",
						"NVG"
					};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class IronOnTopOfMyOptics: RB205_DC15L_Optic
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
	class RB205_DC15L_SoundShader_Close
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15L\sounds\DC15L_Close.wss",
				1
			}
		};
		volume = 0.25;
		range = 5;
	};
	class RB205_DC15L_SoundShader_Close2
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15L\sounds\DC15L_Close.wss",
				1
			}
		};
		volume = 0.5;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class RB205_DC15L_SoundShader_Medium
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15L\sounds\DC15L_Medium.wss",
				1
			}
		};
		volume = 0.69432819;
		range = 1800;
		rangeCurve[] =
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1800,0}
		};
	};
	class RB205_DC15L_SoundShader_Far
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15L\sounds\DC15L_Far.wss",
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
	class RB205_DC15L_Shot_SoundSet
	{
		soundShaders[] =
		{
			"RB205_DC15L_SoundShader_Close",
			"RB205_DC15L_SoundShader_Close2",
			"RB205_DC15L_SoundShader_Medium",
			"RB205_DC15L_SoundShader_Far"
		};
		volumeFactor = 1.1;
		frequencyRandomizer = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		occlusionFactor = 0.25;
		obstructionFactor = 0.30000001;
		loop = 0;
	};
};