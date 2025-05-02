class cfgPatches
{
	class RB205_weapons_dc15a
	{
		requiredAddons[] =
		{
			"RB205_weapons",
			"3AS_Weapons_Republic_DC15A",
			"JLTS_weapons_DC15A"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_DC15A",
			"RB205_DC15A_GL",

			"RB205_DC15LE",
			"RB205_optic_DC15LE",
			"RB205_muzzle_DC15LE",

			"RB205_DC15A_JLTS",
			"RB205_DC15A_GL_JLTS"
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
	class 3AS_DC15A_Base_F;
	class 3AS_DC15A_F: 3AS_DC15A_Base_F
	{
		class Single;
		class OpticsModes
		{
			class Ironsights;
		}
	};
	class RB205_DC15A: 3AS_DC15A_F
	{
		baseWeapon = "RB205_DC15A";
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC15A_DisplayName";
		displayNameShort = "$STR_205_DC15A_DisplayNameShort";
		descriptionShort = "Standard-Blastergewehr der GAR<br />Freigegeben für: Alle";
		cursor = "RB205_CH_default";
		mass = MASS_WP_RIFLE;
		magazines[] =
		{
			"RB205_Standard_Energy_Pack"
		};
		magazineWell[] = {};
		reloadAction = "GestureReload_JLTS_DC15A";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\Reload_Mx",1,1,10};
		fireLightDiffuse[] = {0,0,1};
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
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_DC15A_Shot_SoundSet" };
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_DC15A_Shot_SoundSet" };
			};
		};
		class OpticsModes: OpticsModes
		{
			class Ironsights: Ironsights {};
		};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC15A_fried";
	};
	FRIED_WEAPON(RB205_DC15A,"\RB205_weapons\data\ui\dc15a_fried.paa")
	
	class 3AS_DC15A_GL: 3AS_DC15A_Base_F
	{
		class Single;
		class GL_3GL_F;
	};
	class RB205_DC15A_GL: 3AS_DC15A_GL
	{
		baseWeapon = "RB205_DC15A_GL";
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC15A_GL_DisplayName";
		displayNameShort = "$STR_205_DC15A_GL_DisplayNameShort";
		descriptionShort = "Standard-Blastergewehr der GAR<br />Freigegeben für: Grenadier";
		cursor = "RB205_CH_default";
		mass = MASS_WP_RIFLE_GL;
		magazines[] =
		{
			"RB205_Standard_Energy_Pack"
		};
		magazineWell[] = {};
		reloadAction = "GestureReload_JLTS_DC15A";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\Reload_Mx",1,1,10};
		fireLightDiffuse[] = {0,0,1};
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
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_DC15A_Shot_SoundSet" };
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_DC15A_Shot_SoundSet" };
			};
		};
		class GL_3GL_F: GL_3GL_F
		{
			displayName = "DC-15A (UGL)";
			magazines[] =
			{
				"RB205_ugl_he"
			};
			magazineWell[] =
			{
				"RB205_ugl_1rnd"
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
				maxRange = 400;
				maxRangeProbab = 0.05;
				midRange = 200;
				midRangeProbab = 0.7;
				minRange = 30;
				minRangeProbab = 0.1;
			};
		};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC15A_GL_fried";
	};
	FRIED_WEAPON(RB205_DC15A_GL,"\RB205_weapons\data\ui\dc15a_gl_fried.paa")

	class RB205_DC15LE: RB205_DC15A
	{
		baseWeapon = "RB205_DC15LE";
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC15LE_DisplayName";
		displayNameShort = "$STR_205_DC15LE_DisplayNameShort";
		descriptionShort = "Blastergewehr der GAR<br />Freigegeben für: Marksman";
		cursor = "RB205_CH_default";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[] =
				{
					"RB205_optic_DC15LE"
				};
				iconPicture = "";
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] =
				{
					"RB205_muzzle_DC15LE"
				};
				iconPicture = "";
			};
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RB205_optic_DC15LE";
			};
		};
	};

	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class 3AS_optic_DC15LE_F: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Scope;
			};
		};
	};
	class RB205_optic_DC15LE: 3AS_optic_DC15LE_F
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_OPTIC_DC15LE_DisplayName";
		descriptionShort = "Vergrößerung: 2x-8x";
		class ItemInfo: ItemInfo
		{
			mass = MASS_ACC_OPTIC;
			class OpticsModes: OpticsModes
			{
				class Scope: Scope
				{
					visionMode[] = {"Normal","NVG"};
					discreteFov[] = {0.125,0.05,0.03125};
					discreteInitIndex = 0;
					opticsZoomInit = "0.25/2";
					opticsZoomMax = "0.25/2";
					opticsZoomMin = "0.25/8";
				};
			};
		};
	}
	class muzzle_snds_338_black: ItemCore
	{
		class ItemInfo;
	};
	class RB205_muzzle_DC15LE: muzzle_snds_338_black
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_MUZZLE_DC15LE_DisplayName";
		picture = "\a3\Weapons_F_Mark\Data\UI\icon_muzzle_snds_338_black_ca.paa";
		model = "\3AS\3AS_Weapons\Republic\ACC\3AS_acca_DC15LE_Muzzle_F";
		class ItemInfo: ItemInfo
		{
			mass = MASS_ACC_MUZZLE;
		};
	};



	class arifle_MX_Base_F;
	class JLTS_DC15A: arifle_MX_Base_F
	{
		class WeaponSlotsInfo;
	};
	class JLTS_DC15A_plastic: JLTS_DC15A
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
			class MuzzleSlot;
			class PointerSlot;
		};
		class Single: Mode_SemiAuto
		{
			class StandardSound;
		};
	};
	class RB205_DC15A_JLTS: JLTS_DC15A_plastic
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC15A_JLTS_DisplayName";
		displayNameShort = "$STR_205_DC15A_DisplayNameShort";
		descriptionShort = "Standard-Blastergewehr der GAR<br />Freigegeben für: Alle";
		picture = "\3AS\3AS_Weapons\Republic\DC15A\Data\UI\3as_dc15a.paa";
		mass = MASS_WP_RIFLE;
		fireLightDiffuse[] = {0,0,1};
		magazines[] =
		{
			"RB205_Standard_Energy_Pack"
		};
		cursor = "RB205_CH_default";
		magazineWell[] = {};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC15A_JLTS_fried";
		modes[] =
		{
			"Single"
		};
		muzzles[] = {"this"};
		baseWeapon = "RB205_DC15A_JLTS";
		class Single: Single
		{
			dispersion = 0.00066;
			class StandardSound//: StandardSound
			{
				soundSetShot[] = { "RB205_DC15A_Shot_SoundSet" };
			};
			class SilencedSound {};
		};
		class OpticsModes
		{
			class sight
			{
				cameraDir = "";
				discreteDistance[] = {100,200,300,400,500,600,700};
				discreteDistanceInitIndex = 0;
				discreteInitIndex = 0;
				distanceZoomMax = 700;
				distanceZoomMin = 100;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0.67;
				opticsFlare = "true";
				opticsID = 2;
				opticsPPEffects[] = {"Default"};
				opticsZoomInit = 0.75;
				opticsZoomMax = 1.1;
				opticsZoomMin = 0.375;
				useModelOptics = 0;
				visionMode[] = {};
			};
			class scope: sight
			{
				cameraDir = "";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 0;
				discretefov[] = {0.125};
				discreteInitIndex = 0;
				distanceZoomMax = 1000;
				distanceZoomMin = 100;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0.67;
				opticsFlare = 1;
				opticsID = 1;
				opticsPPEffects[] = {"Default"};
				opticsZoomInit = 0.125;
				opticsZoomMax = 0.125;
				opticsZoomMin = 0.03;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
		/*class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconScale = 0;
				compatibleItems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				iconScale = 0;
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				iconScale = 0;
				compatibleItems[] =
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
		};*/
	};
	FRIED_WEAPON(RB205_DC15A_JLTS,"\RB205_weapons\data\ui\dc15a_fried.paa")

	class JLTS_DC15A_ugl: JLTS_DC15A
	{
		class EGLM;
		class WeaponSlotsInfo;
	};
	class JLTS_DC15A_ugl_plastic: JLTS_DC15A_ugl
	{
		class Single: Mode_SemiAuto
		{
			class StandardSound;
		};
		class EGLM: EGLM
		{
			class Single;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
			class MuzzleSlot;
			class PointerSlot;
		};
	};
	class RB205_DC15A_GL_JLTS: JLTS_DC15A_ugl_plastic
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC15A_GL_JLTS_DisplayName";
		displayNameShort = "$STR_205_DC15A_GL_DisplayNameShort";
		descriptionShort = "Standard-Blastergewehr der GAR<br />Freigegeben für: Grenadier";
		picture = "\3AS\3AS_Weapons\Republic\DC15A\Data\UI\3as_dc15a.paa";
		mass = MASS_WP_RIFLE_GL;
		fireLightDiffuse[] = {0,0,1};
		magazines[] =
		{
			"RB205_Standard_Energy_Pack"
		};
		cursor = "RB205_CH_default";
		magazineWell[] = {};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC15A_GL_JLTS_fried";
		modes[] =
		{
			"Single"
		};
		muzzles[] =
		{
			"this",
			"RB205_GL_F"
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
					"RB205_DC15A_Shot_SoundSet"
				};
			};
			reloadTime = 0.1;
			dispersion = 0.00066;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.69999999;
			maxRange = 400;
			maxRangeProbab = 0.30000001;
			soundContinuous = 0;
			
		};
		class RB205_GL_F: EGLM
		{
			displayName = "DC-15A-GL";
			magazines[] =
			{
				"RB205_ugl_he"
			};
			magazineWell[] =
			{
				"RB205_ugl_1rnd"
			};
			modes[] =
			{
				"Single"
			};
			class Single: Single
			{
				class BaseSoundModeType;
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[] =
					{
						"RB205_UGL_Shot_SoundSet"
					};
				};
				reloadAction = "GestureReloadMXUGL";
			};
			reloadAction = "GestureReloadMXUGL";
		};
		class OpticsModes
		{
			class sight
			{
				cameraDir = "";
				discreteDistance[] = {100,200,300,400,500,600,700};
				discreteDistanceInitIndex = 0;
				discreteInitIndex = 0;
				distanceZoomMax = 700;
				distanceZoomMin = 100;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0.67;
				opticsFlare = "true";
				opticsID = 2;
				opticsPPEffects[] = {"Default"};
				opticsZoomInit = 0.75;
				opticsZoomMax = 1.1;
				opticsZoomMin = 0.375;
				useModelOptics = 0;
				visionMode[] = {};
			};
			class scope: sight
			{
				cameraDir = "";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 0;
				discretefov[] = {0.125};
				discreteInitIndex = 0;
				distanceZoomMax = 1000;
				distanceZoomMin = 100;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0.67;
				opticsFlare = 1;
				opticsID = 1;
				opticsPPEffects[] = {"Default"};
				opticsZoomInit = 0.125;
				opticsZoomMax = 0.125;
				opticsZoomMin = 0.03;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
	};
	FRIED_WEAPON(RB205_DC15A_GL_JLTS,"\RB205_weapons\data\ui\dc15a_gl_fried.paa")
};

class cfgSoundShaders
{
	class RB205_DC15A_SoundShader_Close
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15A\sounds\DC15A_Close.wss",
				1
			}
		};
		volume = 0.44668359;
		range = 5;
	};
	class RB205_DC15A_SoundShader_Close2
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15A\sounds\DC15A_Close.wss",
				1
			}
		};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class RB205_DC15A_SoundShader_Medium
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15A\sounds\DC15A_Medium.wss",
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
	class RB205_DC15A_SoundShader_Far
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15A\sounds\DC15A_Far.wss",
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
			{4000,0}
		};
	};

	
	class RB205_UGL_SoundShader_Close
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15A\sounds\UGL_Close.wss",
				1
			}
		};
		volume = 0.44668359;
		range = 5;
	};
	class RB205_UGL_SoundShader_Close2
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15A\sounds\UGL_Close.wss",
				1
			}
		};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class RB205_UGL_SoundShader_Medium
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15A\sounds\UGL_Medium.wss",
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
	class RB205_UGL_SoundShader_Far
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15A\sounds\UGL_Far.wss",
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
	class RB205_DC15A_Shot_SoundSet
	{
		soundShaders[] =
		{
			"RB205_DC15A_SoundShader_Close",
			"RB205_DC15A_SoundShader_Close2",
			"RB205_DC15A_SoundShader_Medium",
			"RB205_DC15A_SoundShader_Far"
		};
		volumeFactor = 1;
		frequencyRandomizer = 1;
		frequencyRandomizermin = 0.34999999;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		occlusionFactor = 0.25;
		obstructionFactor = 0.30000001;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};	
	class RB205_UGL_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RB205_UGL_SoundShader_Close",
			"RB205_UGL_SoundShader_Close2",
			"RB205_UGL_SoundShader_Medium",
			"RB205_UGL_SoundShader_Far"
		};
		volumeFactor = 1.5;
		frequencyFactor = 0.89999998;
		frequencyRandomizer = 0.60000002;
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