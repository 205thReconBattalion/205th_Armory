/*
	UNITS
*/

class RB205_unit_base;
class RB205_clone_base: RB205_unit_base
{
	ACCESS_FALSE
	uniformClass = "RB205_U_base";
	side = 1;
	faction = "RB205";
	editorSubCategory = "RB205_1AP";
	identityTypes[] = IDENTITY_TYPES;
    nakedUniform = "lsd_gar_bodyGlove_uniform";
	//Inventory:
	backpack = "";
	weapons[] =
	{
		"RB205_DC15S",
		"RB205_DC17_alt",
		"RB205_binocular",
		"Throw","Put"
	};
	respawnweapons[] =
	{
		"RB205_DC15S",
		"RB205_DC17_alt",
		"RB205_binocular",
		"Throw","Put"
	};
	magazines[] =
	{
		"RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack",
		"RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","JLTS_stun_mag_long","JLTS_stun_mag_long",
		"RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
		"RB205_smokeWhite","RB205_smokeWhite"
	};
	respawnmagazines[] =
	{
		"RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack",
		"RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","JLTS_stun_mag_long","JLTS_stun_mag_long",
		"RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
		"RB205_smokeWhite","RB205_smokeWhite"
	};
	items[] =
	{
		"ACE_EntrenchingTool",
		"ACE_Flashlight_XL50",
		"ACE_CableTie","ACE_CableTie","ACE_CableTie",
		"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
		"ACE_Tourniquet","ACE_Tourniquet","ACE_Tourniquet","ACE_Tourniquet",
		"ACE_painkillers","ACE_painkillers"
	};
	respawnitems[] =
	{
		"ACE_EntrenchingTool",
		"ACE_Flashlight_XL50",
		"ACE_CableTie","ACE_CableTie","ACE_CableTie",
		"ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
		"ACE_Tourniquet","ACE_Tourniquet","ACE_Tourniquet","ACE_Tourniquet",
		"ACE_painkillers","ACE_painkillers"
	};
	//Model Values:
	model = "ls_armor_bluefor\uniform\gar\phase2\ls_gar_phase2_uniform.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"undersuit",
		"insignia"
	};
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
	backpack = "RB205_B_ab";
	weapons[] =
	{
		"RB205_DC15C",
		"RB205_DC17_alt",
		"RB205_binocular",
		"Throw","Put"
	};
	respawnweapons[] =
	{
		"RB205_DC15C",
		"RB205_DC17_alt",
		"RB205_binocular",
		"Throw","Put"
	};
};
class RB205_arf_base: RB205_clone_base
{
	ACCESS_FALSE
	editorSubCategory = "RB205_70MRP";
	canDeactivateMines = "true";
	camouflage = CAMOUFLAGE_SCOUT;
	//Inventory:
	backpack = "RB205_B_arf";
	weapons[] =
	{
		"RB205_DC15S",
		"RB205_DC17_alt",
		"RB205_binocular_arf",
		"Throw","Put"
	};
	respawnweapons[] =
	{
		"RB205_DC15S",
		"RB205_DC17_alt",
		"RB205_binocular_arf",
		"Throw","Put"
	};
};
class RB205_plt_base: RB205_clone_base
{
	ACCESS_FALSE
	editorSubCategory = "RB205_35HSP";
	engineer = "true";
	//Iventory:
	backpack = "RB205_B_radio_mini";
	weapons[]=
	{
		"RB205_DC17_alt",
		"Throw","Put"
	};
	respawnweapons[]=
	{
		"RB205_DC17_alt",
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
	//Inventory:
	backpack = "";
	weapons[] =
	{
		"RB205_DC15A",
		"RB205_DC17_alt",
		"RB205_binocular",
		"Throw","Put"
	};
	respawnweapons[] =
	{
		"RB205_DC15A",
		"RB205_DC17_alt",
		"RB205_binocular",
		"Throw","Put"
	};
	//Model Values:
	model="\LFP_marine\armor.p3d";
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
};
class RB205_arc_base: RB205_clone_base
{
	ACCESS_FALSE
	engineer = "true";
	canDeactivateMines = "true";
	camouflage = CAMOUFLAGE_SCOUT;
	//Inventory:
	backpack = "RB205_B_arc";
	weapons[] =
	{
		"RB205_WestarM5",
		"RB205_DC17_alt",
		"RB205_binocular_arf",
		"Throw","Put"
	};
	respawnweapons[] =
	{
		"RB205_WestarM5",
		"RB205_DC17_alt",
		"RB205_binocular_arf",
		"Throw","Put"
	};
	magazines[] =
	{
		"RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack","RB205_Experimental_Energy_Pack",
		"3AS_6Rnd_HE_Grenade_shell","3AS_6Rnd_HE_Grenade_shell","3AS_6Rnd_HE_Grenade_shell",
		"RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","JLTS_stun_mag_long","JLTS_stun_mag_long",
		"RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
		"RB205_sonicDet","RB205_sonicDet",
		"RB205_smokeWhite","RB205_smokeWhite"
	};
	respawnmagazines[] =
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
class RB205_backpack_base;

class RB205_B_ab_base: RB205_backpack_base
{
	ACCESS_FALSE
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
	mass = MASS_BACKPACK;
	maximumload = INV_BACK_NONE;
	JETPACK_TRUE
};

class SWLB_CEE_Recon_RTO_Backpack;
class RB205_B_arf_base: RB205_backpack_base
{
	ACCESS_FALSE
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
	mass = MASS_BACKPACK_SMALL;
	maximumload = INV_BACK_SCOUT;
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

class ls_gar_standard_backpack;
class RB205_B_snow_base: RB205_backpack_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\backpacks\icon_B_snow.paa";
	model = "\LFP_marine\backpack.p3d";
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
	mass = MASS_BACKPACK;
	maximumload = INV_BACK;
	tf_hasLRradio = 0;
};

class RB205_B_arc_base: RB205_backpack_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\backpacks\icon_B_arc.paa";
	model = "\SWLB_equipment\backpacks\SWLB_clone_arc_backpack.p3d";
	hiddenSelections[] =
	{
		"camo1"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\B_arc.rvmat"
	};
	mass = MASS_BACKPACK;
	maximumload = INV_BACK_SOF;
	TFAR_RADIO
	ace_logistics_wirecutter_hasWirecutter = 1;
	ace_trenches_entrenchingTool = 1;
};