/*
	UNITS
*/

#define DC17_IN_USE "RB205_DC17_alt"

class lsd_gar_phase2_base;
class ls_gar_phase2_base: lsd_gar_phase2_base
{
	class HitPoints;
};
class RB205_clone_base: ls_gar_phase2_base
{
	ACCESS_FALSE
	uniformClass = "RB205_U_base";
	//ICON_RIFLEMAN
	side=1;
	faction="RB205";
	editorSubCategory = "RB205_1AP";
	identityTypes[]={"LanguageENG_F","SWLB_JH_Head_Hair"};
    nakedUniform = "lsd_gar_bodyGlove_uniform";
	engineer="false";
	canDeactivateMines="false";
	camouflage = 1;
	backpack="";
	weapons[]=
	{
		"RB205_DC15S",
		DC17_IN_USE,
		"RB205_binocular",
		"Throw","Put"
	};
	respawnweapons[]=
	{
		"RB205_DC15S",
		DC17_IN_USE,
		"RB205_binocular",
		"Throw","Put"
	};
	magazines[]=
	{
		"RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack",
		"RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","JLTS_stun_mag_long","JLTS_stun_mag_long",
		"RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
		"RB205_smokeWhite","RB205_smokeWhite"
	};
	respawnmagazines[]=
	{
		"RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack",
		"RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","JLTS_stun_mag_long","JLTS_stun_mag_long",
		"RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
		"RB205_smokeWhite","RB205_smokeWhite"
	};
	items[]=
	{
		"ACE_EntrenchingTool",
		"ACE_Flashlight_XL50",
		"ACE_CableTie","ACE_CableTie","ACE_CableTie",
		"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
		"ACE_Tourniquet","ACE_Tourniquet","ACE_Tourniquet","ACE_Tourniquet",
		"ACE_epinephrin","ACE_epinephrin","ACE_epinephrin",
		"ACE_morphine","ACE_morphine","ACE_morphine"
	};
	respawnitems[]=
	{
		"ACE_EntrenchingTool",
		"ACE_Flashlight_XL50",
		"ACE_CableTie","ACE_CableTie","ACE_CableTie",
		"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
		"ACE_Tourniquet","ACE_Tourniquet","ACE_Tourniquet","ACE_Tourniquet",
		"ACE_epinephrin","ACE_epinephrin","ACE_epinephrin",
		"ACE_morphine","ACE_morphine","ACE_morphine"
	};
	class HitPoints: HitPoints
	{
		class HitFace
		{
			armor=1;
			material=-1;
			name="face_hub";
			passThrough=0.80000001;
			radius=0.079999998;
			explosionShielding=0.1;
			minimalHit=0.0099999998;
		};
		class HitNeck: HitFace
		{
			armor=1;
			material=-1;
			name="neck";
			passThrough=0.80000001;
			radius=0.1;
			explosionShielding=0.5;
			minimalHit=0.0099999998;
		};
		class HitHead: HitNeck
		{
			armor=1;
			material=-1;
			name="head";
			passThrough=0.80000001;
			radius=0.2;
			explosionShielding=0.5;
			minimalHit=0.0099999998;
			depends="HitFace max HitNeck";
		};
		class HitPelvis: HitHead
		{
			armor=8;
			material=-1;
			name="pelvis";
			passThrough=0.80000001;
			radius=0.23999999;
			explosionShielding=3;
			visual="injury_body";
			minimalHit=0.0099999998;
			depends="";
		};
		class HitAbdomen: HitPelvis
		{
			armor=6;
			material=-1;
			name="spine1";
			passThrough=0.80000001;
			radius=0.16;
			explosionShielding=3;
			visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitDiaphragm: HitAbdomen
		{
			armor=6;
			material=-1;
			name="spine2";
			passThrough=0.33000001;
			radius=0.18000001;
			explosionShielding=6;
			visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitChest: HitDiaphragm
		{
			armor=8;
			material=-1;
			name="spine3";
			passThrough=0.33000001;
			radius=0.18000001;
			explosionShielding=6;
			visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitBody: HitChest
		{
			armor=1000;
			material=-1;
			name="body";
			passThrough=1;
			radius=0;
			explosionShielding=6;
			visual="injury_body";
			minimalHit=0.0099999998;
			depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms: HitBody
		{
			armor=6;
			material=-1;
			name="arms";
			passThrough=1;
			radius=0.1;
			explosionShielding=3;
			visual="injury_hands";
			minimalHit=0.0099999998;
			depends="0";
		};
		class HitHands: HitArms
		{
			armor=6;
			material=-1;
			name="hands";
			passThrough=1;
			radius=0.1;
			explosionShielding=1;
			visual="injury_hands";
			minimalHit=0.0099999998;
			depends="HitArms";
		};
		class HitLegs: HitHands
		{
			armor=6;
			material=-1;
			name="legs";
			passThrough=1;
			radius=0.14;
			explosionShielding=3;
			visual="injury_legs";
			minimalHit=0.0099999998;
			depends="0";
		};
		class Incapacitated: HitLegs
		{
			armor=1000;
			material=-1;
			name="body";
			passThrough=1;
			radius=0;
			explosionShielding=3;
			visual="";
			minimalHit=0;
			depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
		};
		class HitLeftArm
		{
			armor=6;
			material=-1;
			name="hand_l";
			passThrough=1;
			radius=0.079999998;
			explosionShielding=3;
			visual="injury_hands";
			minimalHit=0.0099999998;
		};
		class HitRightArm: HitLeftArm
		{
			name="hand_r";
		};
		class HitLeftLeg
		{
			armor=6;
			material=-1;
			name="leg_l";
			passThrough=1;
			radius=0.1;
			explosionShielding=3;
			visual="injury_legs";
			minimalHit=0.0099999998;
		};
		class HitRightLeg: HitLeftLeg
		{
			name="leg_r";
		};
	};
	armor=2;
	armorStructural=4;
	explosionShielding=0.40000001;
	minTotalDamageThreshold=0.001;
	impactDamageMultiplier=0.5;
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\U_upper.rvmat",
		"RB205_main\data\materials\U_lower.rvmat",
		"RB205_main\data\materials\U_undersuit.rvmat"
	};
	/*class Wounds
	{
		tex[]={};
		mat[]=
		{
			"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat",
			"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
			"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
			"MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat",
			"MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
			"MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
			"A3\Characters_F\Common\Data\basicbody.rvmat",
			"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
			"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
			"a3\characters_f\heads\data\hl_white.rvmat",
			"a3\characters_f\heads\data\hl_white_injury.rvmat",
			"a3\characters_f\heads\data\hl_white_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
		};
	};*/
};
class RB205_ab_base: RB205_clone_base
{
	ACCESS_FALSE
	editorSubCategory = "RB205_1AP";
	backpack="RB205_B_ab";
	weapons[]=
	{
		"RB205_DC15C",
		DC17_IN_USE,
		"RB205_binocular",
		"Throw","Put"
	};
	respawnweapons[]=
	{
		"RB205_DC15C",
		DC17_IN_USE,
		"RB205_binocular",
		"Throw","Put"
	};
};
class RB205_arf_base: RB205_clone_base
{
	ACCESS_FALSE
	editorSubCategory = "RB205_70MRP";
	canDeactivateMines="true";
	camouflage = 0.6;
	backpack="RB205_B_arf";
	weapons[]=
	{
		"RB205_DC15S",
		DC17_IN_USE,
		"RB205_binocular_arf",
		"Throw","Put"
	};
	respawnweapons[]=
	{
		"RB205_DC15S",
		DC17_IN_USE,
		"RB205_binocular_arf",
		"Throw","Put"
	};
};
class RB205_plt_base: RB205_clone_base
{
	ACCESS_FALSE
	editorSubCategory = "RB205_35HSP";
	engineer="true";
	backpack="RB205_B_radio_mini";
	weapons[]=
	{
		DC17_IN_USE,
		"Throw","Put"
	};
	respawnweapons[]=
	{
		DC17_IN_USE,
		"Throw","Put"
	};
	magazines[]=
	{
		"RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack",
		"JLTS_stun_mag_long","JLTS_stun_mag_long",
		"RB205_smokeBlue","RB205_smokeBlue"
	};
	respawnmagazines[]=
	{
		"RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack",
		"JLTS_stun_mag_long","JLTS_stun_mag_long",
		"RB205_smokeBlue","RB205_smokeBlue"
	};
};
class RB205_snow_base: RB205_clone_base
{
	ACCESS_FALSE
	model="\armor_unit\21\21.p3d";
	hiddenSelections[]=
	{
		"Camo1",
		"Camo2",
		"CamoB"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\U_snow_upper.rvmat",
		"RB205_main\data\materials\U_snow_lower.rvmat",
		"RB205_main\data\materials\U_snow_undersuit.rvmat"
	};
	backpack="";
	weapons[]=
	{
		"RB205_DC15A",
		DC17_IN_USE,
		"RB205_binocular",
		"Throw","Put"
	};
	respawnweapons[]=
	{
		"RB205_DC15A",
		DC17_IN_USE,
		"RB205_binocular",
		"Throw","Put"
	};
};
class RB205_arc_base: RB205_clone_base
{
	ACCESS_FALSE
	engineer="true";
	canDeactivateMines="true";
	camouflage = 0.6;
	backpack="RB205_B_arc";
	weapons[]=
	{
		"RB205_WestarM5",
		DC17_IN_USE,
		"RB205_binocular_arf",
		"Throw","Put"
	};
	respawnweapons[]=
	{
		"RB205_WestarM5",
		DC17_IN_USE,
		"RB205_binocular_arf",
		"Throw","Put"
	};
	magazines[]=
	{
		"RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack",
		"3AS_6Rnd_HE_Grenade_shell","3AS_6Rnd_HE_Grenade_shell","3AS_6Rnd_HE_Grenade_shell",
		"RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","JLTS_stun_mag_long","JLTS_stun_mag_long",
		"RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
		"RB205_sonicDet","RB205_sonicDet",
		"RB205_smokeWhite","RB205_smokeWhite"
	};
	respawnmagazines[]=
	{
		"RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack",
		"3AS_6Rnd_HE_Grenade_shell","3AS_6Rnd_HE_Grenade_shell","3AS_6Rnd_HE_Grenade_shell",
		"RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","JLTS_stun_mag_long","JLTS_stun_mag_long",
		"RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
		"RB205_sonicDet","RB205_sonicDet",
		"RB205_smokeWhite","RB205_smokeWhite"
	};
};



/*
	BACKPACKS
*/

/*class ls_gar_standard_backpack;
class RB205_B_base: ls_gar_standard_backpack
{
	ACCESS_FALSE
	picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
	model = "ls_equipment_bluefor\backpack\gar\backpack\ls_gar_standard_backpack.p3d";
	hiddenselectionstextures[]=
	{
		"205th_main\data\B_trooper.paa",
		"205th_main\data\B_cover.paa"
	};
};*/

class JLTS_Clone_jumppack_JT12;
class RB205_B_ab_base: JLTS_Clone_jumppack_JT12
{
	ACCESS_FALSE
	author = "205th Recon Battalion";
	descriptionShort = "";
	picture = "\RB205_main\data\ui\backpacks\icon_B_ab.paa";
	model = "\MRC\JLTS\characters\CloneArmor2\CloneJumppackJT12.p3d";
	hiddenSelections[] =
	{
		"camo1"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\B_ab.rvmat"
	};
	JLTS_isJumppack = 0;
	RD501_jumppack_is_jumppack = 0;
	tas_is_jetpack = 1; //3AS
	JET_EMERGENCY
};

class SWLB_CEE_Recon_RTO_Backpack;
class RB205_B_arf_base: SWLB_CEE_Recon_RTO_Backpack
{
	ACCESS_FALSE
	author = "205th Recon Battalion";
	descriptionShort = "";
	picture = "\RB205_main\data\ui\backpacks\icon_B_arf.paa";
	model = "\SWLB_CEE\data\SWLB_CEE_Recon_RTO_Backpack.p3d";
	hiddenSelections[] =
	{
		"Accumulator",
		"Camo1",
		"Camo2",
		"Camo3",
		"Main"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\B_radio_mini_acc.rvmat",
		"",
		"",
		"RB205_main\data\materials\light_acc.rvmat",
		"RB205_main\data\materials\B_radio_mini.rvmat"
	};
	maximumLoad = INV_BACK_ARF;
	TFAR_RADIO_SMALL
};
class RB205_B_arf_camo_base: RB205_B_arf_base
{
	ACCESS_FALSE
	model = "\SWLB_equipment\backpacks\SWLB_clone_RTO_mini_backpack.p3d";
	hiddenSelections[] =
	{
		"main",
		"accumulator"
	};
};

class LST_21_BackPack;
class RB205_B_snow_base: LST_21_BackPack
{
	ACCESS_FALSE
	author = "205th Recon Battalion";
	descriptionShort = "";
	picture = "\RB205_main\data\ui\backpacks\icon_B_snow.paa";
	model = "\armor_unit\21\BackPack_21.p3d";
	hiddenSelections[] =
	{
		"backpack",
		"cloth"
	};
	hiddenSelectionsMaterials[]=
	{
		"RB205_main\data\materials\B_snow.rvmat",
		"RB205_main\data\materials\B_snow_cloth.rvmat"
	};
	tf_hasLRradio = 0;
};