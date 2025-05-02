class cfgPatches
{
	class RB205_weapons_dc15s
	{
		requiredAddons[] =
		{
			"RB205_weapons",
			"3AS_Weapons_Republic_DC15S",
			"JLTS_weapons_DC15S"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[]=
		{
			"RB205_DC15S",
			"RB205_DC15S_GL",
			"RB205_DC15S_shield"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class WeaponSlotsInfo;
class CowsSlot;
class PointerSlot;
class MuzzleSlot;
class UnderBarrelSlot;

class Mode_SemiAuto;

class CfgWeapons
{
	class 3AS_DC15S_Base_F;
	class 3AS_DC15S_F: 3AS_DC15S_Base_F
	{
		class Single;
		class FullAuto;
	};
	class RB205_DC15S: 3AS_DC15S_F
	{
		baseWeapon = "RB205_DC15S";
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC15S_DisplayName";
		displayNameShort = "$STR_205_DC15S_DisplayNameShort";
		descriptionShort = "Standard-Blasterkarabiner der GAR<br />Freigegeben für: Alle";
		cursor = "RB205_CH_default";
		mass = MASS_WP_CARBINE;
		magazines[] =
		{
			"RB205_Standard_Energy_Pack"
		};
		magazineWell[] = {};
		reloadAction = "GestureReload_JLTS_DC15S";
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
		JLTS_canHaveShield = 1;
		JLTS_shieldedWeapon = "RB205_DC15S_shield";
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC15S_fried";
	};
	FRIED_WEAPON(RB205_DC15S,"\RB205_weapons\data\ui\dc15s_fried.paa")

	class 3AS_DC15S_GL: 3AS_DC15S_Base_F
	{
		class Single;
		class FullAuto;
		class GL_1GL_F;
	};
	class RB205_DC15S_GL: 3AS_DC15S_GL
	{
		baseWeapon = "RB205_DC15S_GL";
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC15S_GL_DisplayName";
		displayNameShort = "$STR_205_DC15S_GL_DisplayNameShort";
		descriptionShort = "Standard-Blasterkarabiner der GAR<br />Freigegeben für: Grenadier";
		cursor = "RB205_CH_default";
		mass = MASS_WP_CARBINE_GL;
		magazines[] =
		{
			"RB205_Standard_Energy_Pack"
		};
		magazineWell[] = {};
		reloadAction = "GestureReload_JLTS_DC15S";
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
		class GL_1GL_F: GL_1GL_F
		{
			displayName = "DC-15S (UGL)";
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
		JLTS_friedItem = "RB205_DC15S_GL_fried";
	};
	FRIED_WEAPON(RB205_DC15S_GL,"\RB205_weapons\data\ui\dc15s_fried.paa")

	class RB205_DC15S_shield: RB205_DC15S
	{
		scope = 1;
		baseWeapon = "RB205_DC15S_shield";
		displayName = "$STR_205_DC15S_shield_DisplayName";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_shielded.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DC15S\data\DC15S_co.paa","\MRC\JLTS\weapons\Shield\data\shield_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\DC15S\anims\DC15S_shielded_handanim.rtm"};
		reloadAction = "GestureReload";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] =
				{
					"JLTS_riot_shield_attachment",
					"JLTS_riot_shield_101_attachment",
					"JLTS_riot_shield_212_attachment",
					"JLTS_riot_shield_501_attachment",
					"JLTS_riot_shield_CG_attachment",
					"JLTS_riot_shield_GD_attachment",
					"JLTS_riot_shield_droid_attachment"
				};
			};
		};
		JLTS_isShielded = 1;
		JLTS_baseWeapon = "RB205_DC15S";
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC15S_shield_fried";
	};
	FRIED_WEAPON(RB205_DC15S_shield,"\RB205_weapons\data\ui\dc15s_fried.paa")
};

class cfgSoundShaders
{
	class RB205_DC15S_SoundShader_Close
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15S\sounds\DC15S_Close.wss",
				1
			}
		};
		volume = 0.44668359;
		range = 5;
	};
	class RB205_DC15S_SoundShader_Close2
	{
		samples[]=
		{
			
			{
				"RB205_weapons\DC15S\sounds\DC15S_Close.wss",
				1
			}
		};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class RB205_DC15S_SoundShader_Medium
	{
		samples[]=
		{
			
			{
				"RB205_weapons\DC15S\sounds\DC15S_Medium.wss",
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
	class RB205_DC15S_SoundShader_Far
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15S\sounds\DC15S_Far.wss",
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
	class RB205_DC15S_Shot_SoundSet
	{
		soundShaders[] =
		{
			"RB205_DC15S_SoundShader_Close",
			"RB205_DC15S_SoundShader_Close2",
			"RB205_DC15S_SoundShader_Medium",
			"RB205_DC15S_SoundShader_Far"
		};
		volumeFactor = 1.2;
		frequencyRandomizer = 0.75;
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