class cfgPatches
{
	class RB205_weapons_dc17
	{
		requiredAddons[] =
		{
			"RB205_weapons",
			"3AS_Weapons_Republic_DC17S",
			"SWLW_clones_pistols_DC17",
			"JLTS_weapons_DC17SA"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_DC17",
			"RB205_DC17_Dual",
			"RB205_DC17_alt",
			"RB205_DC17_shield"
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
	class JLTS_stun_muzzle;
	class 3AS_DC17S_Base_F;
	class 3AS_DC17S_F: 3AS_DC17S_Base_F
	{
		class Single;
	};
	class RB205_DC17: 3AS_DC17S_F
	{
		baseWeapon = "RB205_DC17";
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC17_DisplayName";
		displayNameShort = "$STR_205_DC17_DisplayNameShort";
		descriptionShort = "Blasterpistole der GAR<br />Freigegeben für: Alle";
		cursor = "RB205_CH_sidearm";
		mass = MASS_WP_PISTOL;
		magazines[] =
		{
			"RB205_Compact_Energy_Pack"
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
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_DC17_Shot_SoundSet" };
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_DC17_Shot_SoundSet" };
			};
			dispersion = DISPERSION_DC17;
		};
		muzzles[] =
		{
			"this",
			"Stun"
		};
		class Stun: JLTS_stun_muzzle {};
		JLTS_canHaveShield = 1;
		JLTS_shieldedWeapon = "RB205_DC17_shield";
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC17_fried";
	};
	FRIED_WEAPON_SECONDARY(RB205_DC17,"\RB205_weapons\data\ui\dc17_fried.paa")

	class RB205_DC17_Dual: RB205_DC17
	{
		baseWeapon = "RB205_DC17_Dual";
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC17_DUAL_DisplayName";
		displayNameShort = "$STR_205_DC17_DisplayNameShort";
		descriptionShort = "Blasterpistolen der GAR<br />Freigegeben für: ARC, CS+";
		cursor = "RB205_CH_sidearm_dual";
		mass = MASS_WP_PISTOL;
		model = "\3AS\3AS_Weapons\Republic\DC17S\3AS_DC17S_Dual_F.p3d";
		reloadAction = "ls_dualPistol_reload";
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"3AS\3AS_Weapons\Republic\DC17S\Data\Anim\DC17S_Dual_Handanim.rtm"
		};
		JLTS_canHaveShield = 0;
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC17_Dual_fried";
	};
	FRIED_WEAPON_SECONDARY(RB205_DC17_Dual,"\RB205_weapons\data\ui\dc17_dual_fried.paa")

	class Pistol_Base_F;
	class SWLW_DC17: Pistol_Base_F
	{
		class Single;
	};
	class RB205_DC17_alt: SWLW_DC17
	{
		baseWeapon = "RB205_DC17_alt";
		author = "205th Recon Battalion";
		displayName = "$STR_205_DC17_ALT_DisplayName";
		displayNameShort = "$STR_205_DC17_DisplayNameShort";
		descriptionShort = "Blasterpistole der GAR<br />Freigegeben für: Alle";
		picture = "\3AS\3AS_Weapons\Republic\DC17S\Data\UI\3as_dc17s.paa";
		cursor = "RB205_CH_sidearm";
		mass = MASS_WP_PISTOL;
		magazines[] =
		{
			"RB205_Compact_Energy_Pack"
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
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_DC17_Shot_SoundSet" };
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = { "RB205_DC17_Shot_SoundSet" };
			};
			dispersion = 0;
		};
		muzzles[] =
		{
			"this",
			"Stun"
		};
		class Stun: JLTS_stun_muzzle {};
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC17_alt_fried";
	};
	FRIED_WEAPON_SECONDARY(RB205_DC17_alt,"\RB205_weapons\data\ui\dc17_fried.paa")

	class RB205_DC17_shield: RB205_DC17
	{
		scope = 1;
		baseWeapon = "RB205_DC17_shield";
		displayName = "$STR_205_DC17_shield_DisplayName";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_shielded.p3d";
		hiddenSelections[] = {"camo1","illum"};
		hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DC17SA\data\DC17SA_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\DC17SA\anims\DC17SA_shielded_handanim.rtm"};
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
		JLTS_baseWeapon = "RB205_DC17";
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 0;
		JLTS_friedItem = "RB205_DC17_shield_fried";
	};
	FRIED_WEAPON_SECONDARY(RB205_DC17_shield,"\RB205_weapons\data\ui\dc17_fried.paa")
};

class cfgSoundShaders
{
	class RB205_DC17_SoundShader_Close
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC17\sounds\DC17_Close.wss",
				1
			}
		};
		volume = 0.44668359;
		range = 5;
	};
	class RB205_DC17_SoundShader_Close2
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC17\sounds\DC17_Close.wss",
				1
			}
		};
		volume = 1.1;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class RB205_DC17_SoundShader_Medium
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC17\sounds\DC17_Medium.wss",
				1
			}
		};
		volume = 0.79432821;
		range = 1800;
		rangeCurve[] =
		{
			{0,0.2},{50,1},
			{300,0},{1800,0}
		};
	};
	class RB205_DC17_SoundShader_Far
	{
		samples[] =
		{
			
			{
				"RB205_weapons\DC17\sounds\DC17_Far.wss",
				1
			}
		};
		volume = 1;
		range = 4000;
		rangeCurve[] =
		{
			{0,0},	{50,0},
			{300,1},{4000,1}
		};
	};
};
class cfgSoundSets
{
	class RB205_DC17_Shot_SoundSet
	{
		soundShaders[] =
		{
			"RB205_DC17_SoundShader_Close",
			"RB205_DC17_SoundShader_Close2",
			"RB205_DC17_SoundShader_Medium",
			"RB205_DC17_SoundShader_Far"
		};
		volumeFactor = 1;
		frequencyRandomizer = 0.5;
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