class cfgPatches
{
	class RB205_weapons_z6
	{
		requiredAddons[]=
		{
			"RB205_weapons",
			"JLTS_weapons_Z6"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_Z6"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class WeaponSlotsInfo;
class CowsSlot;
class PointerSlot;
class MuzzleSlot;

class CfgWeapons
{
	class LMG_Mk200_F;
	class JLTS_Z6: LMG_Mk200_F
	{
		class manual;
	};
	class RB205_Z6: JLTS_Z6
	{
		baseWeapon = "RB205_Z6";
		author = "205th Recon Battalion";
		displayName = "$STR_205_Z6_DisplayName";
		displayNameShort = "$STR_205_Z6_DisplayNameShort";
		descriptionShort = "Rotationsblaster der GAR<br />Freigegeben für: Heavy";
		picture = "\RB205_weapons\data\ui\z6.paa";
		cursor = "RB205_CH_default";
		mass = MASS_WP_HEAVY;
		magazines[] =
		{
			"RB205_RapidFire_Energy_Pack"
		};
		magazineWell[] = {};
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
		class manual: manual
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					"RB205_Z6_Shot_SoundSet"
				};
			};
			dispersion = DISPERSION_Z6;
		};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_Z6_fried";
	};
	FRIED_WEAPON(RB205_Z6,"\RB205_weapons\data\ui\z6_fried.paa")
};

class cfgSoundShaders
{
	class RB205_Z6_SoundShader_Close
	{
		samples[] =
		{
			
			{
				"RB205_weapons\Z6\sounds\Z6_Close.wss",
				1
			}
		};
		volume = 0.44668359;
		range = 5;
	};
	class RB205_Z6_SoundShader_Close2
	{
		samples[] =
		{
			
			{
				"RB205_weapons\Z6\sounds\Z6_Close.wss",
				1
			}
		};
		volume = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class RB205_Z6_SoundShader_Medium
	{
		samples[] =
		{
			
			{
				"RB205_weapons\Z6\sounds\Z6_Medium.wss",
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
	class RB205_Z6_SoundShader_Far
	{
		samples[]=
		{
			
			{
				"RB205_weapons\Z6\sounds\Z6_Far.wss",
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
	class RB205_Z6_Shot_SoundSet
	{
		soundShaders[] =
		{
			"RB205_Z6_SoundShader_Close",
			"RB205_Z6_SoundShader_Close2",
			"RB205_Z6_SoundShader_Medium",
			"RB205_Z6_SoundShader_Far"
		};
		volumeFactor = 1;
		frequencyRandomizer = 0.75;
		frequencyRandomizermin = 0.25;
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