class cfgPatches
{
	class RB205_weapons_dc15x
	{
		requiredAddons[]=
		{
			"RB205_weapons",
			"JLTS_weapons_DC15X"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] =
		{
			"RB205_GH_DC15X"
		};
		weapons[] =
		{
			"RB205_DC15X",
			"RB205_DC15X_scoped",
			"RB205_DC15X_Suppressor"
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
	class JLTS_DC15X;

	class RB205_DC15X: JLTS_DC15X
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC15X_DisplayName";
		displayNameShort = "$STR_205_DC15X_DisplayNameShort";
		descriptionShort = "-> 205th Recon Battalion";
		picture = "\RB205_weapons\data\ui\dc15x.paa";
		fireLightDiffuse[] = {0,0,1};
		baseWeapon = "RB205_DC15X";
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC15X_fried";
		magazines[] =
		{
			"RB205_Overcharged_Energy_Pack"
		};
		class Single: Mode_SemiAuto
		{
			sounds[] =
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					"RB205_DC15X_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					"RB205_Suppressed_DC15X_Shot_SoundSet"
				};
			};
			reloadTime = 0.5;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion = 0;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.69999999;
			maxRange = 450;
			maxRangeProbab = 0.30000001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: SlotInfo
			{
				compatibleItems[] =
				{
					"RB205_DC15X_Suppressor"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[] =
				{
					"jlts_dc15x_scope"
				};
			};
			class UnderBarrelSlot
			{
				linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[] = {};
			};
			mass = 130;
		};
	};
	FRIED_WEAPON(RB205_DC15X,"\RB205_weapons\data\ui\dc15x_fried.paa")
	class RB205_DC15X_scoped: RB205_DC15X
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "JLTS_DC15X_scope";
			};
		};
	};

	class muzzle_snds_338_black;
	class InventoryMuzzleItem_Base_F;
	class RB205_DC15X_Suppressor: muzzle_snds_338_black
	{
		author = "205th Recon Battalion";
		scope = 2;
		displayName = "$STR_205_SUPPRESSOR_DC15X_DisplayName";
		picture = "\a3\Weapons_F_Mark\Data\UI\icon_muzzle_snds_338_black_ca.paa";
		model = "\A3\Weapons_F\Acc\acca_snds_338_black_F";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			soundTypeIndex = 1;
			class MagazineCoef
			{
				initSpeed = 0.67000002;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.1;
				audibleFire = 0.1;
				visibleFireTime = 1;
				audibleFireTime = 1;
				cost = 1;
				typicalSpeed = 1;
				airFriction = 1;
			};
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef = "1.0f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
};
class CfgVehicles
{
	class JLTS_GH_DC15X;

	class RB205_GH_DC15X: JLTS_GH_DC15X
	{
		author = "205th Recon Battalion";
		displayName = "[205] DC-15X Sniper Rifle";
		scope = 2;
		class TransportWeapons
		{
			class JLTS_DC15X_scoped
			{
				count = 1;
				weapon = "RB205_DC15X_scoped";
			};
		};
		class TransportMagazines
		{
			class JLTS_DC15X_mag
			{
				count = 1;
				magazine = "RB205_DC15X_mag";
			};
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