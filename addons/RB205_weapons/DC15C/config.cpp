class cfgPatches
{
	class RB205_weapons_dc15c
	{
		requiredAddons[] =
		{
			"RB205_weapons",
			"3AS_Weapons_Republic_DC15C"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_DC15C",
			"RB205_DC15C_GL",
			"RB205_optic_DC15C"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class WeaponSlotsInfo;
class CowsSlot;
class PointerSlot;
class MuzzleSlot;

class Mode_SemiAuto;
class GunParticles;

class CfgWeapons
{
	class 3AS_DC15C_Base_F;
	class 3AS_DC15C_F: 3AS_DC15C_Base_F
	{
		class Single;
		class FullAuto;
	};
	class RB205_DC15C: 3AS_DC15C_F
	{
		baseWeapon = "RB205_DC15C";
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC15C_DisplayName";
		displayNameShort = "$STR_205_DC15C_DisplayNameShort";
		descriptionShort = "Blasterkarabiner der GAR<br />Freigegeben für: Alle<br />(Unterwasser-Fähig)";
		cursor = "RB205_CH_default";
		mass = MASS_WP_CARBINE;
		magazines[] =
		{
			"RB205_Standard_Energy_Pack"
		};
		magazineWell[] = {};
		fireLightDiffuse[] = {0,0,1};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[] =
				{
					"RB205_optic_DC15C"
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
		canShootInWater = 1;
		class GunParticles: GunParticles
		{
			class SecondEffect 
			{
				effectName = "ShotUnderwater";
				positionName = "usti hlavne";
				directionName = "konec hlavne";
			};
		};
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_DC15S_Shot_SoundSet" };
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_DC15S_Shot_SoundSet" };
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_DC15S_Shot_SoundSet" };
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_DC15S_Shot_SoundSet" };
			};
		};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC15C_fried";
	};
	FRIED_WEAPON(RB205_DC15C,"\RB205_weapons\data\ui\dc15c_fried.paa")
	
	class 3AS_DC15C_GL: 3AS_DC15C_Base_F
	{
		class Single;
		class FullAuto;
		class GL_3GL_F;
	};
	class RB205_DC15C_GL: 3AS_DC15C_GL
	{
		baseWeapon = "RB205_DC15C_GL";
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC15C_GL_DisplayName";
		displayNameShort = "$STR_205_DC15C_GL_DisplayNameShort";
		descriptionShort = "Blasterkarabiner der GAR<br />Freigegeben für: Alle<br />(Unterwasser-Fähig)";
		cursor = "RB205_CH_default";
		mass = MASS_WP_CARBINE_GL;
		magazines[] =
		{
			"RB205_Standard_Energy_Pack"
		};
		magazineWell[] = {};
		fireLightDiffuse[] = {0,0,1};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[] =
				{
					"RB205_optic_DC15C"
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
		canShootInWater = 1;
		class GunParticles: GunParticles
		{
			class SecondEffect 
			{
				effectName = "ShotUnderwater";
				positionName = "usti hlavne";
				directionName = "konec hlavne";
			};
		};
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_DC15S_Shot_SoundSet" };
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_DC15S_Shot_SoundSet" };
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_DC15S_Shot_SoundSet" };
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_DC15S_Shot_SoundSet" };
			};
		};
		class GL_3GL_F: GL_3GL_F
		{
			displayName = "DC-15C (UGL)";
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
		JLTS_friedItem = "RB205_DC15C_GL_fried";
	};
	FRIED_WEAPON(RB205_DC15C_GL,"\RB205_weapons\data\ui\dc15c_gl_fried.paa")

	class ItemCore;
	class 3AS_optic_DC15C_F: ItemCore
	{
		class ItemInfo;
	};
	class RB205_optic_DC15C: 3AS_optic_DC15C_F
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_OPTIC_DC15C_DisplayName";
		descriptionShort = "Vergrößerung: 1x-3x";
		class ItemInfo: ItemInfo
		{
			mass = MASS_ACC_OPTIC;
		};
	};
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