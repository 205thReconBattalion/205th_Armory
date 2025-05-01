class cfgPatches
{
	class RB205_weapons_dc15l
	{
		requiredAddons[] =
		{
			"RB205_weapons",
			"3AS_Weapons_Republic_DC15L"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_DC15L",
			"RB205_optic_DC15L",
			"RB205_bipod_DC15L"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class WeaponSlotsInfo;
class CowsSlot;
class PointerSlot;
class MuzzleSlot;
class UnderBarrelSlot;

class CfgWeapons
{
	class 3AS_DC15L_Base_F;
	class 3AS_DC15L_F: 3AS_DC15L_Base_F
	{
		class FullAuto;
	};
	class RB205_DC15L: 3AS_DC15L_F
	{
		baseWeapon = "RB205_DC15L";
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC15L_DisplayName";
		displayNameShort = "$STR_205_DC15L_DisplayNameShort";
		descriptionShort = "Blastergewehr der GAR<br />Freigegeben für: Heavy";
		cursor = "RB205_CH_default";
		mass = MASS_WP_RIFLE;
		magazines[] =
		{
			"RB205_Heavy_Energy_Pack",
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
				compatibleItems[] =
				{
					"RB205_optic_DC15L"
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
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] =
				{
					"RB205_bipod_DC15L"
				};
				iconPicture = "";
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
		JLTS_friedItem = "RB205_DC15L_fried";
	};
	FRIED_WEAPON(RB205_DC15L,"\RB205_weapons\data\ui\dc15l_fried.paa")

	class ItemCore;
	class 3AS_optic_DC15L_F: ItemCore
	{
		class ItemInfo;
	};
	class RB205_optic_DC15L : 3AS_optic_DC15L_F
	{	
		author = "205th Recon Battalion";
		displayName = "$STR_205_OPTIC_DC15L_DisplayName";
		descriptionShort = "Vergrößerung: 1x-3x";
		class ItemInfo: ItemInfo
		{
			mass = MASS_ACC_OPTIC;
		};
	};

	class 3AS_bipod_DC15L_F: ItemCore
	{
		class ItemInfo;
	};
	class RB205_bipod_DC15L : 3AS_bipod_DC15L_F
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_BIPOD_DC15L_DisplayName";
		descriptionShort = "";
		picture = "\a3\Weapons_F_Mark\Data\UI\icon_bipod_02_F_blk_ca.paa";
		class ItemInfo: ItemInfo
		{
			mass = MASS_ACC_BIPOD;
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