class cfgPatches
{
	class RB205_weapons_dc15c
	{
		requiredAddons[] =
		{
			"RB205_weapons",
			"3AS_Weapons_DC15C"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_DC15C",
			"RB205_DC15C_GL"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class GunParticles;
class Mode_Burst;
class Mode_SemiAuto;

class CfgWeapons
{
	class 3AS_DC15C_F;
	class RB205_DC15C: 3AS_DC15C_F
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC15C_DisplayName";
		displayNameShort = "$STR_205_DC15C_DisplayNameShort";
		descriptionShort = "Blasterkarabiner der GAR<br />Freigegeben für: Alle<br />(Unterwasser-Fähig)";
		picture = "\3AS\3AS_Weapons\DC15C\Data\UI\3as_dc15c.paa";
		mass = MASS_WP_CARBINE;
		fireLightDiffuse[] = {0,0,1};
		canShootInWater = 1;
		magazines[] =
		{
			"RB205_Standard_Energy_Pack"
		};
		cursor = "RB205_CH_default";
		magazineWell[] = {};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC15C_fried";
		muzzles[] =
		{
			"this"
		};
		class GunParticles : GunParticles
		{
			class SecondEffect 
			{
				effectName = "ShotUnderwater";
				positionName = "usti hlavne";
				directionName = "konec hlavne";
			};
		};
		modes[] =
		{
			"Burst",
			"Single"
		};
		class Burst: Mode_Burst
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
					"RB205_DC15C_Shot_SoundSet"
				};
			};
			reloadTime = 0.05;
			dispersion = 0.0011;
			minRange = 0;
			minRangeProbab = 0.89999998;
			midRange = 15;
			midRangeProbab = 0.69999999;
			maxRange = 30;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
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
					"RB205_DC15C_Shot_SoundSet"
				};
			};
			reloadTime = 0.1;
			dispersion = 0.0011;
			minRange = 2;
			minRangeProbab = 0.30000001;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 350;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
		};
	};
	FRIED_WEAPON(RB205_DC15C,"\RB205_weapons\data\ui\dc15c_fried.paa")
	
	class 3AS_DC15C_GL;
	class RB205_DC15C_GL: 3AS_DC15C_GL
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC15C_GL_DisplayName";
		displayNameShort = "$STR_205_DC15C_GL_DisplayNameShort";
		descriptionShort = "Blasterkarabiner der GAR<br />Freigegeben für: Alle<br />(Unterwasser-Fähig)";
		picture = "\3AS\3AS_Weapons\DC15C\Data\UI\3as_dc15cgl.paa";
		mass = MASS_WP_CARBINE_GL;
		fireLightDiffuse[] = {0,0,1};
		canShootInWater = 1;
		magazines[] =
		{
			"RB205_Standard_Energy_Pack"
		};
		cursor = "RB205_CH_default";
		magazineWell[] = {};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC15C_GL_fried";
		modes[] =
		{
			"Burst",
			"Single"
		};
		muzzles[] =
		{
			"this",
			"RB205_15CGL"
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
				soundSetShot[] =
				{
					"RB205_DC15C_Shot_SoundSet"
				};
			};
			reloadTime = 0.1;
			dispersion = 0.0011;
			minRange = 2;
			minRangeProbab = 0.30000001;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 350;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
		};
		class Burst: Mode_Burst
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
					"RB205_DC15C_Shot_SoundSet"
				};
			};
			reloadTime = 0.05;
			dispersion = 0.0011;
			minRange = 0;
			minRangeProbab = 0.89999998;
			midRange = 15;
			midRangeProbab = 0.69999999;
			maxRange = 30;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
		};
		class 3AS_15CGL;
		class RB205_15CGL: 3AS_15CGL
		{
			displayName = "DC-15C-GL";
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
					soundSetShot[]=
					{
						"RB205_UGL_Shot_SoundSet"
					};
				};
				sounds[]=
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
		class GunParticles : GunParticles
		{
			class SecondEffect 
			{
				effectName = "ShotUnderwater";
				positionName = "usti hlavne";
				directionName = "konec hlavne";
			};
		};
	};
	FRIED_WEAPON(RB205_DC15C_GL,"\RB205_weapons\data\ui\dc15c_gl_fried.paa")
};

class cfgSoundShaders
{
	class RB205_DC15C_SoundShader_Close
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15C\sounds\DC15C_Close.wss",
				1
			}
		};
		volume = 0.44668359;
		range = 5;
	};
	class RB205_DC15C_SoundShader_Close2
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15C\sounds\DC15C_Close.wss",
				1
			}
		};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class RB205_DC15C_SoundShader_Medium
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15C\sounds\DC15C_Medium.wss",
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
	class RB205_DC15C_SoundShader_Far
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15C\sounds\DC15C_Far.wss",
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
	class RB205_DC15C_Shot_SoundSet
	{
		soundShaders[]=
		{
			"RB205_DC15C_SoundShader_Close",
			"RB205_DC15C_SoundShader_Close2",
			"RB205_DC15C_SoundShader_Medium",
			"RB205_DC15C_SoundShader_Far"
		};
		volumeFactor = 1;
		frequencyRandomizer = 1;
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