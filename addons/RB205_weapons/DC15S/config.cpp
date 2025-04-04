class cfgPatches
{
	class RB205_weapons_dc15s
	{
		requiredAddons[] =
		{
			"RB205_weapons",
			"3AS_Weapons_DC15S"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[]=
		{
			"RB205_DC15S",
			"RB205_DC15S_JLTS",
			"RB205_DC15S_JLTS_shield"
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
	class 3AS_DC15S_F;
	class RB205_DC15S: 3AS_DC15S_F
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC15S_DisplayName";
		displayNameShort = "$STR_205_DC15S_DisplayNameShort";
		descriptionShort = "Standard-Blasterkarabiner der GAR<br />Freigegeben für: Alle";
		picture = "\3AS\3AS_Weapons\DC15S\Data\UI\3as_dc15s.paa";
		mass = MASS_WP_CARBINE;
		fireLightDiffuse[] = {0,0,1};
		magazines[] =
		{
			"RB205_Standard_Energy_Pack"
		};
		cursor = "RB205_CH_default";
		magazineWell[] = {};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC15S_fried";
		opticsZoomInit = 0.75;//0.5
		opticsZoomMax = 1.25;
		opticsZoomMin = 0.25;//0.5
		modes[] =
		{
			"FullAuto",
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
					"RB205_DC15S_Shot_SoundSet"
				};
			};
			reloadTime = 0.1;
			dispersion = 0.0012;
			minRange = 2;
			minRangeProbab = 0.30000001;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 350;
			maxRangeProbab = 0.1;
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
				soundSetShot[] =
				{
					"RB205_DC15S_Shot_SoundSet"
				};
			};
			reloadTime = 0.1;
			dispersion = 0.0012;
			minRange = 0;
			minRangeProbab = 0.89999998;
			midRange = 15;
			midRangeProbab = 0.69999999;
			maxRange = 30;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
		};
	};
	FRIED_WEAPON(RB205_DC15S,"\RB205_weapons\data\ui\dc15s_fried.paa")



	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class JLTS_DC15S: arifle_MX_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
		};
		class Single: Mode_SemiAuto
		{
			class StandardSound;
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound;
		};
	};
	class RB205_DC15S_JLTS: JLTS_DC15S
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC15S_JLTS_DisplayName";
		displayNameShort = "$STR_205_DC15S_DisplayNameShort";
		descriptionShort = "Standard-Blasterkarabiner der GAR<br />Freigegeben für: Alle";
		picture = "\3AS\3AS_Weapons\DC15S\Data\UI\3as_dc15s.paa";
		mass = MASS_WP_CARBINE;
		fireLightDiffuse[] = {0,0,1};
		magazines[] =
		{
			"RB205_Standard_Energy_Pack"
		};
		cursor = "RB205_CH_default";
		magazineWell[] = {};
		muzzles[] = {"this"};
		baseWeapon = "RB205_DC15S_JLTS";
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC15S_JLTS_fried";
		JLTS_canHaveShield = 1;
		JLTS_shieldedWeapon = "RB205_DC15S_JLTS_shield";
		opticsZoomInit = 0.75;
		opticsZoomMax = 1.25;
		opticsZoomMin = 0.25;
		class LinkedItems
		{
			item = "3AS_optic_holo_DC15S";
			slot = "CowsSlot";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = { "3AS_optic_holo_DC15S" };
				iconScale = 0;
				iconPosition[] = {0,0};
				iconPicture = "";
			};
		};
		class Single: Single
		{
			dispersion = 0.0012;
			class StandardSound//: StandardSound
			{
				soundSetShot[] = { "RB205_DC15S_Shot_SoundSet" };
			};
			class SilencedSound {};
		};
		class FullAuto: FullAuto
		{
			dispersion = 0.0012;
			class StandardSound//: StandardSound
			{
				soundSetShot[] = { "RB205_DC15S_Shot_SoundSet" };
			};
			class SilencedSound {};
		};
	};
	FRIED_WEAPON(RB205_DC15S_JLTS,"\RB205_weapons\data\ui\dc15s_fried.paa")

	class JLTS_DC15S_shield: JLTS_DC15S
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
		};
		class Single: Mode_SemiAuto
		{
			class StandardSound;
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound;
		};
	};
	class RB205_DC15S_JLTS_shield: JLTS_DC15S_shield
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC15S_JLTS_shield_DisplayName";
		displayNameShort = "$STR_205_DC15S_DisplayNameShort";
		descriptionShort = "Standard-Blasterkarabiner der GAR<br />Freigegeben für: Alle";
		picture = "\3AS\3AS_Weapons\DC15S\Data\UI\3as_dc15s.paa";
		fireLightDiffuse[] = {0,0,1};
		magazines[] =
		{
			"RB205_Standard_Energy_Pack"
		};
		cursor = "RB205_CH_default";
		magazineWell[] = {};
		muzzles[] = {"this"};
		baseWeapon = "RB205_DC15S_JLTS_shield";
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC15S_JLTS_shield_fried";
		JLTS_isShielded = 1;
		JLTS_baseWeapon = "RB205_DC15S_JLTS";
		opticsZoomInit = 0.75;
		opticsZoomMax = 1.25;
		opticsZoomMin = 0.25;
		class LinkedItems
		{
			item = "3AS_optic_holo_DC15S";
			slot = "CowsSlot";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = { "3AS_optic_holo_DC15S" };
				iconScale = 0;
				iconPosition[] = {0,0};
				iconPicture = "";
			};
		};
		class Single: Single
		{
			dispersion = 0.0012;
			class StandardSound: StandardSound
			{
				soundSetShot[] = { "RB205_DC15S_Shot_SoundSet" };
			};
			class SilencedSound {};
		};
		class FullAuto: FullAuto
		{
			dispersion = 0.0012;
			class StandardSound: StandardSound
			{
				soundSetShot[] = { "RB205_DC15S_Shot_SoundSet" };
			};
			class SilencedSound {};
		};
	};
	FRIED_WEAPON(RB205_DC15S_JLTS_shield,"\RB205_weapons\data\ui\dc15s_fried.paa")
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