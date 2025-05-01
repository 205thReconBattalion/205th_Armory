class cfgPatches
{
	class RB205_weapons_dc15x
	{
		requiredAddons[]=
		{
			"RB205_weapons",
			"3AS_Weapons_Republic_DC15X"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_DC15X",
			"RB205_optic_DC15X",
			"RB205_muzzle_DC15X",
			"RB205_bipod_DC15X"
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
	class 3AS_DC15X_Base_F;
	class 3AS_DC15X_F: 3AS_DC15X_Base_F
	{
		class Single;
	};
	class RB205_DC15X: 3AS_DC15X_F
	{
		baseWeapon = "RB205_DC15X";
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC15X_DisplayName";
		displayNameShort = "$STR_205_DC15X_DisplayNameShort";
		descriptionShort = "Scharfschützengewehr der GAR<br />Freigegeben für: ARF";
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
					"RB205_optic_DC15X"
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
					"RB205_muzzle_DC15X"
				};
				iconPicture = "";
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] =
				{
					"RB205_bipod_DC15X"
				};
				iconPicture = "";
			};
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RB205_optic_DC15X";
			};
			class LinkedItemsUnderBarrel
			{
				slot = "UnderBarrelSlot";
				item = "RB205_bipod_DC15X";
			};
		};
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_DC15X_Shot_SoundSet" };
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_Suppressed_DC15X_Shot_SoundSet" };
			};
			dispersion = 0;
		};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC15X_fried";
	};
	FRIED_WEAPON(RB205_DC15X,"\RB205_weapons\data\ui\dc15x_fried.paa")

	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class 3AS_optic_DC15X_F: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip;
			};
		};
	};
	class RB205_optic_DC15X: 3AS_optic_DC15X_F
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_OPTIC_DC15X_DisplayName";
		descriptionShort = "Vergrößerung: 6x-25x";
		class ItemInfo: ItemInfo
		{
			mass = MASS_ACC_OPTIC;
			class OpticsModes: OpticsModes
			{
				class Snip: Snip
				{
					visionMode[] = {"Normal","NVG","TI"};
					discretefov[] = {0.042,0.02,0.01};
				};
			};
		};
	};

	class muzzle_snds_338_black: ItemCore
	{
		class ItemInfo;
	};
	class RB205_muzzle_DC15X: muzzle_snds_338_black
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_MUZZLE_DC15X_DisplayName";
		picture = "\a3\Weapons_F_Mark\Data\UI\icon_muzzle_snds_338_black_ca.paa";
		model = "\3AS\3AS_Weapons\Republic\ACC\3AS_acca_DC15LE_Muzzle_F";
		class ItemInfo: ItemInfo
		{
			mass = MASS_ACC_MUZZLE;
		};
	};
	
	class 3AS_bipod_DC15X_F: ItemCore
	{
		class ItemInfo;
	};
	class RB205_bipod_DC15X: 3AS_bipod_DC15X_F
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_BIPOD_DC15X_DisplayName";
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
	class RB205_DC15X_SoundShader_Close
	{
		samples[]=
		{
			
			{
				"RB205_weapons\DC15X\sounds\DC15X_Close.wss",
				1
			}
		};
		volume=0.44668359;
		range=5;
	};
	class RB205_DC15X_SoundShader_Close2
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15X\sounds\DC15X_Close.wss",
				1
			}
		};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class RB205_DC15X_SoundShader_Medium
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15X\sounds\DC15X_Medium.wss",
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
	class RB205_DC15X_SoundShader_Far
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15X\sounds\DC15X_Far.wss",
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
	class RB205_Suppressed_DC15X_SoundShader_Close
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15X\sounds\SuppressedDC15X_Close.wss",
				1
			}
		};
		volume = 0.89999998;
		range = 300;
		rangeCurve[] =
		{
			{0,1},
			{300,0}
		};
	};
	class RB205_Suppressed_DC15X_SoundShader_Far
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC15X\sounds\SuppressedDC15X_Far.wss",
				1
			}
		};
		volume = 0.89999998;
		range = 1000;
		rangeCurve[] =
		{
			{0,0},
			{50,0},
			{300,1},
			{1000,1}
		};
	};
};
class cfgSoundSets
{
	class RB205_DC15X_Shot_SoundSet
	{
		soundShaders[] =
		{
			"RB205_DC15X_SoundShader_Close",
			"RB205_DC15X_SoundShader_Close2",
			"RB205_DC15X_SoundShader_Medium",
			"RB205_DC15X_SoundShader_Far"
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
	class RB205_Suppressed_DC15X_Shot_SoundSet
	{
		soundShaders[] =
		{
			"RB205_Suppressed_DC15X_SoundShader_Close",
			"RB205_Suppressed_DC15X_SoundShader_Far"
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
};