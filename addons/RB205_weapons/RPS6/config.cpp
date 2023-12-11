class cfgPatches
{
	class RB205_weapons_rps6
	{
		requiredAddons[] =
		{
			"RB205_weapons",
			"3AS_Weapons_RPS6HP"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_RPS6",
			"RB205_RPS6_disposable"
		};
		magazines[] =
		{
			"RB205_MAG_RPS6"
		};
		ammo[] =
		{
			"RB205_AMMO_RPS6"
		};
	};
};

#include "\RB205_weapons\emp_compat.hpp"

class CBA_DisposableLaunchers
{
	RB205_RPS6_disposable_base[]=
	{
		"RB205_RPS6_disposable",
		"RB205_RPS6_disposable_used"
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;

class WeaponSlotsInfo;

class CfgAmmo
{
	class 3AS_R_MK41_AT;
	class RB205_AMMO_RPS6: 3AS_R_MK41_AT
	{
		hit = 1400;
		indirectHit = 20;
		indirectHitRange = 2;
		warheadName = "HE";
		submunitionAmmo = "3AS_ammo_Penetrator_MK43";
	};
}
class CfgMagazines
{
	class 3AS_MK40_AT;
	class RB205_MAG_RPS6: 3AS_MK40_AT
	{
		displayName = "$STR_205_RPS6_ROCKET_DisplayName";
		displayNameShort = "$STR_205_RPS6_ROCKET_DisplayNameShort";
		descriptionShort = "$STR_205_RPS6_ROCKET_DescriptionShort";
		ammo = "RB205_AMMO_RPS6";//"3AS_R_MK41_AT";
		scope = 2;
		mass = 50;
		author = "205th Recon Battalion";
	};
	class RB205_MAG_RPS6D: RB205_MAG_RPS6
	{
		scope = 1;
	};
}
class CfgWeapons
{
	class Launcher_Base_F;
	class RB205_RPS6: Launcher_Base_F
	{
		displayName = "$STR_205_RPS6_DisplayName";
		displayNameShort = "$STR_205_RPS6_DisplayNameShort";
		descriptionShort = "Panzerabwehr-Raketenwerfer<br />Freigegeben für: AT/AA";
		picture = "\MRC\JLTS\weapons\RPS6\data\ui\rps6_ui_ca.paa";
		author = "205th Recon Battalion";
		baseWeapon = "RB205_RPS6";
		magazines[] =
		{
			"RB205_MAG_RPS6"
		};
		JLTS_hasElectronics = 0;
		scope = 2;
		_generalMacro = "launch_RPG32_F";
		model = "\3AS\3AS_Weapons\RPS6\3AS_RPS6_F.p3d";
		modelSpecial = "\3AS\3AS_Weapons\RPS6\3AS_RPS6_Loaded_F.p3d";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"3as\3as_weapons\data\anim\rps6_hold.rtm"
		};
		reloadAction = "ReloadRPG";
		recoil = "recoil_rpg";
		maxZeroing = 600;
		modelOptics = "\A3\Weapons_F\acc\reticle_RPG_F";
		weaponInfoType = "RscWeaponEmpty";
		opticsZoomMin = 0.1083;
		opticsZoomMax = 0.1083;
		opticsZoomInit = 0.1083;
		cameraDir = "look";
		class GunParticles
		{
			class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsRPGNT";
			};
		};
		class OpticsModes
		{
			class optic
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsZoomMin = 0.1083;
				opticsZoomMax = 0.1083;
				opticsZoomInit = 0.1083;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				cameraDir = "look";
				visionMode[] =
				{
					"Normal",
					"NVG"
				};
				opticsPPEffects[] =
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
		modes[] =
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] =
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",
					1.9952624,
					1,
					1500
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			recoil = "recoil_single_law";
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
		drySound[] =
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",
			0.44668359,
			1,
			20
		};
		reloadMagazineSound[] =
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",
			0.25118864,
			1,
			10
		};
		canLock = 0;
		weaponLockDelay = 3;
		lockAcquire = 0;
		inertia = 0.89999998;
		aimTransitionSpeed = 0.5;
		dexterity = 1.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 200;
		};
		class Library
		{
			libTextDesc = "$STR_A3_CfgWeapons_launch_LAW_Library0";
		};
	};



	class 3AS_RPS6_Base;
	class RB205_RPS6_disposable_base: 3AS_RPS6_Base
	{
		displayname = "$STR_205_RPS6_Disposable_DisplayName";
		displayNameShort = "$STR_205_RPS6_Disposable_DisplayName";
		descriptionShort = "Panzerabwehr-Raketenwerfer<br />Freigegeben für: AT/AA";
		picture = "\MRC\JLTS\weapons\RPS6\data\ui\rps6_ui_ca.paa";
		scope = 1;
		mass = 250;
		baseWeapon = "RB205_RPS6_disposable";
		magazines[] = 
		{
			"RB205_MAG_RPS6D"
		};
		class EventHandlers
		{
			fired = "_this call CBA_fnc_firedDisposable";
		};
	};
	class RB205_RPS6_disposable: RB205_RPS6_disposable_base
	{
		displayname = "$STR_205_RPS6_Disposable_DisplayName";
		displayNameShort = "$STR_205_RPS6_Disposable_DisplayName";
		descriptionShort = "Panzerabwehr-Raketenwerfer<br />Freigegeben für: AT/AA";
		picture = "\MRC\JLTS\weapons\RPS6\data\ui\rps6_ui_ca.paa";
		scope = 2;
		baseWeapon = "RB205_RPS6_disposable";
		magazines[] = 
		{
			"CBA_FakeLauncherMagazine"
		};
	};
	class RB205_RPS6_disposable_used: RB205_RPS6_disposable_base
	{
		displayname = "$STR_205_RPS6_DisposableUsed_DisplayName";
		displayNameShort = "$STR_205_RPS6_DisposableUsed_DisplayName";
		descriptionShort = "Panzerabwehr-Raketenwerfer<br />Freigegeben für: AT/AA";
		picture = "\MRC\JLTS\weapons\RPS6\data\ui\rps6_ui_ca.paa";
		scope = 1;
		mass = 200;
		baseWeapon = "RB205_RPS6_disposable_used";
		magazines[] = 
		{
			"CBA_FakeLauncherMagazine"
		};
	};
};