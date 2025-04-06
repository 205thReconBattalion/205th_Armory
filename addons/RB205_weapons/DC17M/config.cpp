class cfgPatches
{
	class RB205_weapons_dc17m
	{
		requiredAddons[]=
		{
			"RB205_weapons"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_DC17M",
		};
		magazines[] =
		{
			"205_3AS_100Rnd_EC40_mag",
			"205_3AS_5Rnd_EC80_mag",
			"205_3AS_AntiArmour_mag"
		};
		ammo[] =
		{
			"RB205_ammo_40mm_at"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class WeaponSlotsInfo;
class BaseSoundModeType;

class CfgAmmo
{
	class SWLW_ammo_smg_blue;
	class SWLW_ammo_sniper_blue;
	class SWLW_ammo_40mm_at;
	
	class RB205_ammo_40mm_at: SWLW_ammo_40mm_at
	{
		hit = 1000;//550;
	};
};
class CfgMagazines
{
	class 3AS_100Rnd_EC40_mag;
	class 3AS_5Rnd_EC80_mag;
	class 3AS_AntiArmour_mag;

	class 205_3AS_100Rnd_EC40_mag: 3AS_100Rnd_EC40_mag
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC17M_blaster_Energy_Pack_DisplayName";
		displayNameShort = "$STR_205_DC17M_blaster_Energy_Pack_DisplayNameShort";
		descriptionShort = "$STR_205_DC17M_blaster_Energy_Pack_DescriptionShort";
		ammo = "RB205_ammo_experimental";
		count = 60;
		mass = 10;
	};
	class 205_3AS_5Rnd_EC80_mag: 3AS_5Rnd_EC80_mag
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC17M_sniper_Energy_Pack_DisplayName";
		displayNameShort = "$STR_205_DC17M_sniper_Energy_Pack_DisplayNameShort";
		descriptionShort = "$STR_205_DC17M_sniper_Energy_Pack_DescriptionShort";
		ammo = "RB205_ammo_overcharged";
		count = 5;
		mass = 4;
	};
	class 205_3AS_AntiArmour_mag: 3AS_AntiArmour_mag
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC17M_at_Energy_Pack_DisplayName";
		displayNameShort = "$STR_205_DC17M_at_Energy_Pack_DisplayNameShort";
		descriptionShort = "$STR_205_DC17M_at_Energy_Pack_DescriptionShort";
		ammo = "RB205_ammo_40mm_at";
		count = 1;
		mass = 15;//30;
	};
};
class CfgWeapons
{
	class SWLW_attachment_scope_DC17M_sniper;
	class InventoryOpticsItem_Base_F;
	class 3AS_DC17M_F;

	class RB205_attachment_scope_DC17M_sniper: SWLW_attachment_scope_DC17M_sniper
	{
		author = "205th Recon Battalion";
		displayName = "$STR_205_OPTIC_DC17M_DisplayName";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			opticType = 1;
			optics = 1;
			modelOptics = "\SWLW_clones_spec\DC17M_attachment_sniper_optic.p3d";
			class OpticsModes
			{
				class Scope
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsZoomMin = 0.025;
					opticsZoomMax = 0.125;
					opticsZoomInit = 0.125;
					discreteDistance[] = {100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					discreteFov[] = {0.125,0.0625,0.025};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};

	FRIED_WEAPON(RB205_DC17M,"\RB205_weapons\data\ui\dc17m_fried.paa")
	class RB205_DC17M: 3AS_DC17M_F
	{
		author = "205th Recon Battalion";
		displayName="$STR_205_DC17M_DisplayName";
		displayNameShort = "STR_205_DC17M_DisplayNameShort";
		descriptionShort = "Blasterkarabiner der GAR<br />Freigegeben für: Pathfinder, ARC";
		picture = "\3AS\3AS_Weapons\DC17M\data\UI\3as_dc17m.paa";
		mass = MASS_WP_CARBINE;
		hiddenSelectionsTextures[] =
		{
			"RB205_weapons\data\RB205_DC17M.paa"
		};
		magazines[] =
		{
			"205_3AS_100Rnd_EC40_mag",
			"205_3AS_5Rnd_EC80_mag",
			"205_3AS_AntiArmour_mag"
		};
		magazineWell[]=
		{
		};
		cursor = "RB205_CH_default";
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;
		JLTS_friedItem = "RB205_DC17M_fried";
		modes[] =
		{
			"Single",
			"FullAuto"
		};
		maxZeroing=1000;
		opticsZoomMin=0.005;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=40;
		distanceZoomMax=4000;
		
		class OpticsModes
		{
			class Ironsights
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare="true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
			class Scope: Ironsights
			{
				opticsID=2;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				discreteDistance[] = {100,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 1;
				distanceZoomMin = 100;
				distanceZoomMax = 1000;
				opticsZoomMin = 0.025;
				opticsZoomMax = 0.125;
				opticsZoomInit = 0.125;
				discreteFov[] = {0.125,0.925,0.0625,0.325,0.025};
				discreteInitIndex = 0;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				thermalMode[]={0};
				opticsFlare="true";
				cameraDir="";
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] =
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					1,
					1,
					1800
				};
				begin2[] =
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					1,
					1,
					1800
				};
				begin3[] =
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					1,
					1,
					1800
				};
				soundBegin[] =
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime = 0.1;
			dispersion = 0.0012;
			minRange = 5;
			minRangeProbab = 0.30000001;
			midRange = 25;
			midRangeProbab = 0.60000002;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] =
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					1,
					1,
					1800
				};
				begin2[] =
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					1,
					1,
					1800
				};
				begin3[] =
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					1,
					1,
					1800
				};
				soundBegin[] =
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime = 0.1;
			dispersion = 0.0012;
			minRange = 5;
			minRangeProbab = 0.30000001;
			midRange = 25;
			midRangeProbab = 0.60000002;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 60;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] =
				{
					"RB205_attachment_scope_DC17M_sniper"
				};
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
};