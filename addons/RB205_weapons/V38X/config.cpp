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
			"RB205_Valken38X",
			"RB205_optic_VK38X",
			"RB205_bipod_VK38X"
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
	class 3AS_Valken38X_Base_F;
	class 3AS_Valken38X_F: 3AS_Valken38X_Base_F
	{
		class Single;
	};
	class RB205_Valken38X: 3AS_Valken38X_F
	{
		baseWeapon = "RB205_Valken38X";
		author = "205th Recon Battalion";
		displayName = "$STR_205_V38X_DisplayName";
		displayNameShort = "$STR_205_V38X_DisplayNameShort";
		descriptionShort = "Blastergewehr der GAR<br />Freigegeben für: Marksman";
		cursor = "RB205_CH_sniper";
		mass = MASS_WP_RIFLE;
		magazines[] =
		{
			"RB205_Overcharged_Energy_Pack"
		};
		magazineWell[] = {};
		fireLightDiffuse[] = {0,0,1};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[] =
				{
					"RB205_optic_VK38X"
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
					"RB205_bipod_VK38X"
				};
				iconPicture = "";
			};
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RB205_optic_VK38X";
			};
			class LinkedItemsUnderBarrel
			{
				slot = "UnderBarrelSlot";
				item = "RB205_bipod_VK38X";
			};
		};
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_V38X_Shot_SoundSet" };
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_V38X_Shot_SoundSet" };
			};
			dispersion = 0;
		};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_Valken38X_fried";
	};
	FRIED_WEAPON(RB205_Valken38X,"\RB205_weapons\data\ui\v38x_fried.paa")

	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class 3AS_optic_VK38X_F: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip;
			};
		};
	};
	class RB205_optic_VK38X: 3AS_optic_VK38X_F
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_OPTIC_V38X_DisplayName";
		descriptionShort = "Vergrößerung: 4x-12x";
		class ItemInfo: ItemInfo
		{
			mass = MASS_ACC_OPTIC;
			class OpticsModes: OpticsModes
			{
				class Snip: Snip
				{
					visionMode[] = {"Normal","NVG","TI"};
				};
			};
		};
	};

	class 3AS_Bipod_VK38X_f: ItemCore
	{
		class ItemInfo;
	};
	class RB205_bipod_VK38X: 3AS_Bipod_VK38X_f
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_BIPOD_V38X_DisplayName";
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