class cfgPatches
{
	class RB205_weapons_dc15a
	{
		requiredAddons[] =
		{
			"RB205_weapons",
			"3AS_Weapons_DC15A"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_DC15A",
			"RB205_DC15A_GL"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class Mode_SemiAuto;

class CfgWeapons
{
	class 3AS_DC15A_F;
	class RB205_DC15A: 3AS_DC15A_F
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC15A_DisplayName";
		displayNameShort = "$STR_205_DC15A_DisplayNameShort";
		descriptionShort = "Standard-Blastergewehr der GAR<br />Freigegeben für: Alle";
		picture = "\3AS\3AS_Weapons\DC15A\Data\UI\3as_dc15a.paa";
		mass = MASS_WP_RIFLE;
		fireLightDiffuse[] = {0,0,1};
		magazines[] =
		{
			"RB205_Standard_Energy_Pack"
		};
		magazineWell[] = {};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC15A_fried";
		modes[] =
		{
			"Single"
		};
		muzzles[] =
		{
			"this"
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
			soundBurst = 0;
		};
		class OpticsModes
		{
			class Ironsights
			{
				opticsID = 1;
				opticsZoomInit = 0.75;
				opticsZoomMax = 1.1;
				opticsZoomMin = 0.25;
				distanceZoomMax = 100;
				distanceZoomMin = 100;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0.67;
				opticsFlare = "true";
				opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
				useModelOptics = 0;
				visionMode[] = {};
			};
			class Scopes: Ironsights
			{
				opticsID = 2;
				opticsZoomInit = 0.125;
				opticsZoomMax = 0.125;
				opticsZoomMin = 0.0625;
				distanceZoomMax = 100;
				distanceZoomMin = 100;
				cameraDir = "";
				memoryPointCamera = "opticView";
				opticsDisablePeripherialVision = 0.67;
				opticsFlare = "true";
				opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
				useModelOptics = 1;
				visionMode[] = {"Normal","NVG"};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
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
	};
	FRIED_WEAPON(RB205_DC15A,"\RB205_weapons\data\ui\dc15a_fried.paa")
	
	class 3AS_DC15A_GL;
	class RB205_DC15A_GL: 3AS_DC15A_GL
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC15A_GL_DisplayName";
		displayNameShort = "$STR_205_DC15A_GL_DisplayNameShort";
		descriptionShort = "Standard-Blastergewehr der GAR<br />Freigegeben für: Grenadier";
		picture = "\3AS\3AS_Weapons\DC15A\Data\UI\3as_dc15agl.paa";
		mass = MASS_WP_RIFLE_GL;
		fireLightDiffuse[] = {0,0,1};
		magazines[] =
		{
			"RB205_Standard_Energy_Pack"
		};
		magazineWell[] = {};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC15A_GL_fried";
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
			dispersion = 0.00073000003;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.69999999;
			maxRange = 400;
			maxRangeProbab = 0.30000001;
			soundContinuous = 0;
			
		};
		class 3AS_GL_F;
		class RB205_GL_F: 3AS_GL_F
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
			class Single: Mode_SemiAuto
			{
				class BaseSoundModeType;
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[] =
					{
						"RB205_UGL_Shot_SoundSet"
					};
				};
				sounds[] =
				{
					"StandardSound"
				};
				reloadtime = 0.5;
				multiplier = 1;
				showtoplayer = 1;
				burst = 1;
				dispersion = 8.9999997e-007;
				displayName = "UGL";
				textureType = "semi";//textureType="fullAuto";
				aiRateOfFire = 5;
				aiRateOfFireDistance = 500;
				aiRateOfFireDispersion = 2;
				minRange = 10;
				minRangeProbab = 0.30000001;
				midRange = 40;
				midRangeProbab = 0.85000002;
				maxRange = 600;
				maxRangeProbab = 0.85000002;
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
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
		class OpticsModes
		{
			class Ironsights
			{
				opticsID = 1;
				opticsZoomInit = 0.75;
				opticsZoomMax = 1.1;
				opticsZoomMin = 0.25;
				distanceZoomMax = 100;
				distanceZoomMin = 100;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0.67;
				opticsFlare = "true";
				opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
				useModelOptics = 0;
				visionMode[] = {};
			};
			class Scopes: Ironsights
			{
				opticsID = 2;
				opticsZoomInit = 0.125;
				opticsZoomMax = 0.125;
				opticsZoomMin = 0.0625;
				distanceZoomMax = 100;
				distanceZoomMin = 100;
				cameraDir = "";
				memoryPointCamera = "opticView";
				opticsDisablePeripherialVision = 0.67;
				opticsFlare = "true";
				opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
				useModelOptics = 1;
				visionMode[] = {"Normal","NVG"};
			};
		};
	};
	FRIED_WEAPON(RB205_DC15A_GL,"\RB205_weapons\data\ui\dc15a_gl_fried.paa")
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