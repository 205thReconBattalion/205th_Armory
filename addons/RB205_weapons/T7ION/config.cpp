class cfgPatches
{
	class RB205_weapons_t7ion
	{
		requiredAddons[] =
		{
			"RB205_weapons"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_T7ION"
		};
		magazines[] =
		{
			"RB205_T7ION_mag"
		};
		ammo[] =
		{
			"RB205_T7ION_ammo"
		};
	};
};

class Mode_SemiAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
    class srifle_EBR_F;
	class OPTRE_LongRifle_Base: srifle_EBR_F
	{
		class WeaponSlotsInfo;
	};
    class RB205_T7ION: OPTRE_LongRifle_Base //OPTRE_M99A2S3
	{
		scope = 2;
		scopeArsenal = 2;
		author = "205th Recon Battalion";
		_generalMacro = "RB205_T7ION";
		baseWeapon = "RB205_T7ION";
		displayName = "$STR_205_T7ION_DisplayName";
		displayNameShort = "$STR_205_T7ION_DisplayNameShort";
		description = "";
		descriptionShort = "";
        picture = "\RB205_weapons\T7ION\data\t7ion_ui.paa";
		/*HUD_BulletInARows=7;
		HUD_TotalPosibleBullet=7;
		picture="\OPTRE_Weapons\Sniper\icons\stanchion_icon.paa";
		pictureMjolnirHud="\OPTRE_Suit_Scripts\textures\weaponIcons\SniperRifles\Stanchion.paa";*/

        model = "\RB205_weapons\T7ION\t7ion.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\RB205_weapons\T7ION\data\camo_co.paa"
		};
		/*hiddenSelectionsMaterials[]=
		{
			"\RB205_weapons\T7ION\data\camo.rvmat"
		};*/
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\Sniper\data\anim\srs99D_handpos.rtm",
		};
		reloadAction = "t7ion_reload";
		reloadMagazineSound[] = {"RB205_weapons\T7ION\data\sounds\reload_sound.ogg",2,1,30};
        drySound[] = {"RB205_weapons\T7ION\data\sounds\dry_sound.ogg",1,1,20};

		magazines[] =
		{
			"RB205_T7ION_mag"
		};
		magazineWell[] = {};
		/*class EventHandlers
		{
			fired="if (isPlayer (_this select 0)) then {_this spawn RB205_T7ION_WeaponFiredHandler_BlueParticles;};";
		};
		selectionFireAnim="muzzleFlash";
		fireLightDuration=0.05;
		fireLightIntensity=0.5;
		fireLightDiffuse[]={0,0,1};
		fireLightAmbient[]={0,0,0};*/

        modelOptics = "\RB205_weapons\T7ION\t7ion_optic";
		opticType = 1;
		optics = 1;
		opticsID = 1;
		useModelOptics = 1;
		opticsZoomMin = 0.01;
		opticsZoomMax = 0.25;
		opticsZoomInit = 0.25;
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		opticsPPEffects[] =
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1,5,6,7};
		discretefov[]={0.25,0.05,0.025,0.01};
		discreteinitIndex=0;
		discreteDistance[]={50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
		discreteDistanceInitIndex=1;
		distanceZoomMin=100;
		distanceZoomMax=2000;

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 150;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]={};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]={};
			};
		};

		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RB205_weapons\T7ION\data\sounds\fire_sound.ogg",
					3,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33
				};
				class SoundTails
				{
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_forest",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_houses",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_interior",
							1.99526,
							1,
							2200
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_meadows",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_trees",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 1;
			dispersion = 0;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_gm6";
			minRange = 2;
			minRangeProbab = 0.25;
			midRange = 800;
			midRangeProbab = 0.75;
			maxRange = 2000;
			maxRangeProbab = 0.25;
		};
		caseless[] = {"",1,1,1};
		soundBullet[] = {"caseless",1};
	};
};

class CfgMagazines
{
	class OPTRE_7Rnd_20mm_APFSDS_Mag;
	//class FIG_LasGun_Standart_Tzeench;
	class RB205_T7ION_mag: OPTRE_7Rnd_20mm_APFSDS_Mag
	{
		displayname = "$STR_205_T7ION_mag_DisplayName";
		displayNameShort = "$STR_205_RB205_T7ION_mag_DisplayNameShort";
		descriptionShort = "$STR_205_T7ION_mag_DescriptionShort";
		author = "205th Recon Battalion";

		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_sniper_b.paa";
		mass = 4;

		ammo = "RB205_T7ION_ammo";
		count = 1;
		/*tracersEvery = 0;
		initSpeed=2920;*/
	};
};

class CfgAmmo
{
	//class OPTRE_B_20mm_APFSDS;
	//class FIG_LasGun_Ammo_Tzeench;
	class B_127x108_APDS;
	class RB205_T7ION_ammo: B_127x108_APDS
	{
		hit = 5;
		indirectHit = 1;
		indirectHitRange = 2;
		caliber = 1;
		deflecting = 0;
		explosive = 0.25;
		ExplosionEffects = "RB205_T7ION_EMPExplosion";
		explosionTime = -1;
		SoundSetExplosion[] = {"EMP_Sparks_SoundSet_GL"};
		class CamShakeExplode
		{
			power = 3.60555;
			duration = 0.8;
			frequency = 20;
			distance = 10.8167;
		};
		class CamShakeHit
		{
			power = 13;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		/*effectFly = "WBK_M36_FlyingEffectS_Tzeench"; //WBK_M36_FlyingEffectS_Tzeench //RB205_T7ION_FlyingEffectS

		ACE_damageType="Laser";
		ACE_ballisticCoefficients[]={0.1};
		caliber=0.1;
		coefGravity=0.0099999998;
		deflecting=0;
		maxRangeProbab=0.81;
		maxRange=2500;
		midRange=1050;
		Minrange=1;
		minRangeProbab=0.51999998;
		typicalSpeed=100;
		timetolive=7;
		tracerEndTime=0.1;
		tracerStartTime=0;
		tracerScale=0.1;
		cartridge="";
		hit=10;*/
	};
};

class CfgMovesBasic
{
	class ManActions
	{
		t7ion_reload[]=
		{
			"t7ion_reload",
			"Gesture"
		};
	};
};
class CfgGesturesMale
{
	class ManActions
	{
	};
	class Actions;
	class BlendAnims;
	class Default;
	class States
	{
		class t7ion_reload: Default
		{
			enableOptics = 0;
			file = "RB205_weapons\T7ION\data\animations\reload_anim.rtm";
			speed = -2.9;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.3;
			headBobMode = 1;
			rightHandIKCurve[] = {1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {1};
		};
    };
};

/*class CfgCloudlets
{
	class AirFireSparks;
	class RB205_T7ION_FlyingEffect: AirFireSparks
	{
		lifeTime=0.60000002;
		interval=0.001;
		color[]=
		{
			{1,0,0,1},
			{1,0,0,1},
			{1,0,0,1}
		};
		emissiveColor[]=
		{
			{255,0,0,255},
			{1,0,0,1}
		};
		weight=1.3;
		volume=0.80000001;
		rubbing=0.5;
		ignoreWind=1;
	};
};
class CfgLights
{
	class CruiseMissileLight;
	class RB205_T7ION_light: CruiseMissileLight
	{
		intensity = 2500;
		flareSize = 0.80000001;
		color[] = {0,0.050000001,1,1};
		diffuse[] = {0,0.050000001,1,1};
		ambient[] = {0,0.050000001,1,1};
		dayLight = 1;
		useFlare = 1;
		flareMaxDistance = 2500;
		drawLight = 1;
	};
};
class RB205_T7ION_FlyingEffectS
{
	class RB205_T7ION_lightS
	{
		simulation = "light";
		type = "RB205_T7ION_light";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 2;
	};
};*/

class CfgCloudlets
{
	class Default;
	
	class RB205_T7ION_EMPExp: Default
	{
		circleVelocity[] = {0,0,0};
		moveVelocity[] = {0,0,0};
		size[] = {10,10};
		color[] = {{ 0,0,0,0}};
		animationSpeed[] = {1};
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {1.75,1.75,1.75};
		colorVar[] = {0,0,0,0.02};
		interval = "0.007 * interval + 0.007";
		circleRadius = "intensity";
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.05;
		lifeTime = 0.5;
		rotationVelocity = 0;
		weight = 4;
		volume = 1;
		rubbing = 0;
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 0.08;
		onTimerScript = ""; 
		beforeDestroyScript = "\RB205_weapons\T7ION\data\scripts\emp_effect.sqf";
		lifeTimeVar = 0;
		rotationVelocityVar = 1;
		sizeVar = 0;
		randomDirectionPeriodVar = 2;
		randomDirectionIntensityVar = 0.1;
	};
	class EMPGL_Refract: Default
	{
		angleVar = 1;
		animationName = "";
		animationSpeed[] = {1};
		beforeDestroyScript = "";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		colorVar[] = {0,0,0,0};
		color[] = {{0.1,0.1,0.1,1},{0.25,0.25,0.25,1},{0.5,0.5,0.5,1},{0,0,0,1},{0,0,0,0.75},{0,0,0,0.5}};
		interval = "3 * 10";
		lifeTime = 1;
		lifeTimeVar = 0;
		MoveVelocityVar[] = {0.2,0.5,0.2};
		moveVelocity[] = {0,0,0};
		onTimerScript = "";
		particleFSFrameCount = 1;
		particleFSIndex = 0;
		particleFSLoop = 0;
		particleFSNtieth = 1;
		particleShape = "\A3\data_f\ParticleEffects\Universal\refract";
		particleType = "Billboard";
		positionVar[] = {0.4,0.1,0.4};
		randomDirectionIntensity = 0.2;
		randomDirectionIntensityVar = 0;
		randomDirectionPeriod = 0.2;
		randomDirectionPeriodVar = 0;
		rotationVelocity = 0;
		rotationVelocityVar = 90;
		rubbing = 0.1;
		sizeVar = 0.5;
		Size[] = {0,15};
		timerPeriod = 1;
		volume = 7.9;
		weight = 10;
	};
	class EMPGL_CLExp: Default
	{
		angleVar = 1;
		animationName = "";
		animationSpeed[] = {1};
		beforeDestroyScript = "";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		colorVar[] = {0,0,0,0};
		color[] = {{0,0,1,1},{0,0,0.25,0.1}};
		emissiveColor[] = {{0,0,30,0.75},{0,0,1,0}};	
		interval = 1;
		lifeTime = 1;
		lifeTimeVar = 0;
		MoveVelocityVar[] = {0,0,0};
		moveVelocity[] = {0,0,0};
		onTimerScript = "";
		particleFSFrameCount = 1;
		particleFSIndex = 0;
		particleFSLoop = 0;
		particleFSNtieth = 1;
		particleShape = "\A3\data_f\kouleSvetlo";
		particleType = "Billboard";
		positionVar[] = {0,0,0};
		randomDirectionIntensity = 0.2;
		randomDirectionIntensityVar = 0;
		randomDirectionPeriod = 0.2;
		randomDirectionPeriodVar = 0;
		rotationVelocity = 10;
		rotationVelocityVar = 1;
		rubbing = 0.1;
		sizeVar = 0.5;
		Size[] = {0,15};
		timerPeriod = 1;
		volume = 7.9;
		weight = 10;
	};
	class EMPGL_sparks_Large: Default
	{
		angleVar = 1;
		animationName = "";
		animationSpeed[] = {0.01};
		beforeDestroyScript = "";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		colorVar[] = {0,0,0,0};
		color[] = {{1,1,0.1,1},{1,1,1,1}};
		emissiveColor[] = {{100,100,100,1},{1,1,1,0}};	
		interval = 0.1;
		lifeTime = 0.75;
		lifeTimeVar = 0.05;
		MoveVelocityVar[] = {0,0,0};
		moveVelocity[] = {0,0,0};
		onTimerScript = "";
		particleFSFrameCount = 1;
		particleFSIndex = 0;
		particleFSLoop = 0;
		particleFSNtieth = 1;
		particleShape = "\A3\data_f\blesk1";
		particleType = "SpaceObject";
		positionVar[] = {0,0,0};
		randomDirectionIntensity = 0;
		randomDirectionIntensityVar = 0;
		randomDirectionPeriod = 1;
		randomDirectionPeriodVar = 0;
		rotationVelocity = 0.25;
		rotationVelocityVar = 0.15;
		rubbing = 0;
		sizeVar = 0.15;
		Size[] = {0,0.05};
		timerPeriod = 1;
		volume = 7.9;
		weight = 10;
	};
	class EMPGL_SparksSmallRound: Default
	{
		angle = 90;	
		angleVar = 90;
		animationName = "";
		animationSpeed[] = {1};
		beforeDestroyScript = "";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		colorVar[] = {0,0,0,0};
		color[] = {{1,1,1,1},{1,1,1,1},{1,1,1,1}};
		interval = 0.005;
		lifeTime = 0.5;
		lifeTimeVar = 0.5;
		MoveVelocityVar[] = {15,15,15};
		moveVelocity[] = {0,5,0};
		onTimerScript = "";
		particleFSFrameCount = 1;
		particleFSIndex = 0;
		particleFSLoop = 1;
		particleFSNtieth = 1;
		particleShape ="\A3\data_f\kouleSvetlo";
		particleType = "Billboard";
		positionVar[] = {0,0,0};
		randomDirectionIntensity = 0;
		randomDirectionIntensityVar = 0.2;
		randomDirectionPeriod = 2;
		randomDirectionPeriodVar = 0;
		rotationVelocity = 10;
		rotationVelocityVar = 90;
		bounceOnSurface = -1;	
		rubbing = 10;
		sizeVar = 0.15;
		Size[] = {0.2,0.01};
		timerPeriod = 1;
		volume = 1;
		weight = 200;
		emissiveColor[] = {{5000,5000,5000,1},{100,100,100,1}};	
		destroyOnWaterSurface = 1;
	};

};
class CfgLights
{
	class RB205_T7ION_EMPLight
	{
		color[] = {0.1,0.1,1,1};
		ambient[] = {0.1,0.1,1,1};
		brightness = 1;
		diffuse[] = {0,0,1,1};
		position[] = {0,0,0};
		dayLight = 1;			// boolean (0/1). Is light shown during daylight.
		useFlare = 1;			// boolean (0/1). Is light having a flare effect
		flareSize = 1;			// Default is 1
		flareMaxDistance = 2000;	// Default is 600
		class Attenuation
		{
			start = 0;				// distance with 100% intensity, falloff starts here
			constant = 0;			// constant attenuation coef
			linear = 0;				// linear attenuation coef
			quadratic = 0.4;			// quadratic attenuation coef
			hardLimitStart = 0; // max distance hard limit start (start of fading of intensity to 0) in meter – default is (1e20 * 0.7)
			hardLimitEnd = 15;	// max distance hard limit end (end of fading of intensity to 0) in meter – default is 1e20
		};
	};
};
class RB205_T7ION_EMPExplosion
{
	class GrenadeLight1
	{
		position[] = {0,0,0};
		simulation = "light";
		type = "RB205_T7ION_EMPLight";
		intensity = 1;
		interval = 1;
		lifeTime = 0.85;
	};
	class GrenadeExp1
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "RB205_T7ION_EMPExp";
		intensity = 1;
		interval = 0.25;
		lifeTime = 0.25;
		particleFSLoop = 0;
	};
	class refraction
	{
		simulation = "particles";
		type = "EMPGL_Refract";
		position[] = {0,0,0};
		intensity = 1;
		interval = "3 * 1";
		lifeTime = 1;
	};
	class EMPGlexpfx
	{
		simulation = "particles";
		type = "EMPGL_CLExp";
		position[] = {0,0,0};
		intensity = 1;
		interval = 3;
		lifeTime = 1;
	};
	class sparks_large
	{
		simulation = "particles";
		type = "EMPGL_sparks_Large";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.75;
	};
	class sparks_small_round
	{
		simulation = "particles";
		type = "EMPGL_SparksSmallRound";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.75;
	};
};

/*class Extended_PreInit_EventHandlers
{
	class RB205_T7ION_WeaponsScript_PreInit
	{
		init="call compile preprocessFileLineNumbers '\RB205_weapons\T7ION\data\scripts\XEH_preInit.sqf'";
	};
};*/
class Extended_PreInit_EventHandlers
{
    class RB205_T7ION_PreInit
    {
        init="call compile preprocessFileLineNumbers '\RB205_weapons\T7ION\data\scripts\XEH_preInit.sqf'";
    };
};
class Extended_PostInit_EventHandlers
{
	class knd_postinit
	{
		init="call compile preprocessFileLineNumbers '\RB205_weapons\T7ION\data\scripts\xeh_postinit.sqf'";
	};
};
class CfgFunctions
{
	class RB205_T7ION
	{
		class Functions
		{
			class onFired
			{
				file="RB205_weapons\T7ION\data\scripts\fn_onFired.sqf";
			};
		};
	};
};