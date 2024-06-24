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
	editorSubCategory = "RB205_cloneTrooper";
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
		ADD_INVENTORY_MAG_RIFLEMAN
	};
	respawnmagazines[] =
	{
		ADD_INVENTORY_MAG_RIFLEMAN
	};
	items[] =
	{
		"ACE_EntrenchingTool",
		"ACE_Flashlight_XL50",
		ENUM_3("ACE_CableTie"),
		ENUM_25("ACE_packingBandage"),
		ENUM_4("ACE_Tourniquet"),
		"JLTS_ids_gar_army"
	};
	respawnitems[] =
	{
		"ACE_EntrenchingTool",
		"ACE_Flashlight_XL50",
		ENUM_3("ACE_CableTie"),
		ENUM_25("ACE_packingBandage"),
		ENUM_4("ACE_Tourniquet"),
		"JLTS_ids_gar_army"
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
	editorSubCategory = "RB205_cloneAirborneTrooper";
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
	editorSubCategory = "RB205_cloneArfTrooper";
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
	editorSubCategory = "RB205_clonePilotTrooper";
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
		ENUM_5("RB205_Compact_Energy_Pack"),
		ENUM_2("RB205_smokeBlue"),
		ENUM_2("ACE_painkillers")
	};
	respawnmagazines[]=
	{
		ENUM_5("RB205_Compact_Energy_Pack"),
		ENUM_2("RB205_smokeBlue"),
		ENUM_2("ACE_painkillers")
	};
};
class RB205_snow_base: RB205_clone_base
{
	ACCESS_FALSE
	editorSubCategory = "RB205_cloneSnowTrooper";
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
	editorSubCategory = "RB205_cloneTrooper";
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
		ADD_INVENTORY_MAG,
		ENUM_8("RB205_Experimental_Energy_Pack"),
		ENUM_3("3AS_6Rnd_HE_Grenade_shell"),
		ENUM_2("RB205_sonicDet")
	};
	respawnmagazines[] =
	{
		ADD_INVENTORY_MAG,
		ENUM_8("RB205_Experimental_Energy_Pack"),
		ENUM_3("3AS_6Rnd_HE_Grenade_shell"),
		ENUM_2("RB205_sonicDet")
	};
};

class RB205_clone_nco_base: RB205_clone_base
{
	ACCESS_FALSE
	icon = ICON_NCO;
};
class RB205_clone_co_base: RB205_clone_base
{
	ACCESS_FALSE
	icon = ICON_CO;
	camouflage = CAMOUFLAGE_SCOUT;
};

class RB205_ab_nco_base: RB205_ab_base
{
	ACCESS_FALSE
	icon = ICON_NCO;
};
class RB205_ab_co_base: RB205_ab_base
{
	ACCESS_FALSE
	icon = ICON_CO;
	camouflage = CAMOUFLAGE_SCOUT;
};

class RB205_arf_nco_base: RB205_arf_base
{
	ACCESS_FALSE
	icon = ICON_NCO;
};
class RB205_arf_co_base: RB205_arf_base
{
	ACCESS_FALSE
	icon = ICON_CO;
	camouflage = CAMOUFLAGE_SCOUT;
};

class RB205_plt_nco_base: RB205_plt_base
{
	ACCESS_FALSE
	icon = ICON_NCO;
};
class RB205_plt_co_base: RB205_plt_base
{
	ACCESS_FALSE
	icon = ICON_CO;
	camouflage = CAMOUFLAGE_SCOUT;
};

class RB205_snow_nco_base: RB205_snow_base
{
	ACCESS_FALSE
	icon = ICON_NCO;
};
class RB205_snow_co_base: RB205_snow_base
{
	ACCESS_FALSE
	icon = ICON_CO;
	camouflage = CAMOUFLAGE_SCOUT;
};

/*
	BACKPACKS
*/

class RB205_backpack_base;

class RB205_B_heavy_base: RB205_backpack_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\backpacks\icon_B_heavy.paa";
	model = "ls_equipment_bluefor\backpack\gar\backpack\ls_gar_standard_backpack.p3d";
	hiddenselections[] =
	{
		"backpack",
		"cover"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\B_dft.rvmat",
		"RB205_main\data\materials\B_cover.rvmat"
	};
	mass = MASS_BACKPACK;
	maximumload = INV_BACK;
};
class RB205_B_medic_base: RB205_backpack_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\backpacks\icon_B_medic.paa";
	model = "ls_equipment_bluefor\backpack\gar\backpack\ls_gar_medic_backpack.p3d";
	hiddenselections[] =
	{
		"backpack",
		"cover",
		"medic1",
		"medic2"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\B_dft.rvmat",
		"RB205_main\data\materials\B_cover.rvmat",
		"RB205_main\data\materials\B_medic1.rvmat",
		"RB205_main\data\materials\B_medic2.rvmat"
	};
	mass = MASS_BACKPACK;
	maximumload = INV_BACK_MEDIC;
};
class RB205_B_rocket_base: RB205_backpack_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\backpacks\icon_B_rocket.paa";
	model = "ls_equipment_bluefor\backpack\gar\backpack\ls_gar_rocket_backpack.p3d";
	hiddenselections[] =
	{
		"backpack",
		"holder",
		"rocket",
		"light",
		"pouches"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\B_dft.rvmat",
		"RB205_main\data\materials\B_rocket_holder.rvmat",
		"RB205_main\data\materials\B_rocket.rvmat",
		"RB205_main\data\materials\B_rocket_light.rvmat",
		""
	};
	mass = MASS_BACKPACK;
	maximumload = INV_BACK_ROCKET;
};
class RB205_B_eod_base: RB205_backpack_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\backpacks\icon_B_eod.paa";
	model = "ls_equipment_bluefor\backpack\gar\heavyBackpack\ls_gar_heavy_backpack.p3d";
	hiddenselections[] =
	{
		"backpack",
		"cover",
		"pouches",
		"tube"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\B_dft.rvmat",
		"RB205_main\data\materials\B_cover.rvmat",
		"RB205_main\data\materials\B_pouches.rvmat"
	};
	mass = MASS_BACKPACK;
	maximumload = INV_BACK_EOD;
};
class RB205_B_radio_base: RB205_backpack_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\backpacks\icon_B_radio.paa";
	model = "ls_equipment_bluefor\backpack\gar\backpack\ls_gar_radio_backpack.p3d";
	hiddenselections[] =
	{
		"backpack",
		"radio",
		"screen"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\B_dft.rvmat",
		"RB205_main\data\materials\B_radio.rvmat",
		"RB205_main\data\materials\B_screen.rvmat"
	};
	mass = MASS_BACKPACK;
	maximumload = INV_BACK_RADIO;
	TFAR_RADIO
};
class RB205_B_radio_mini_base: RB205_backpack_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\backpacks\icon_B_radio_mini.paa";
	model = "\SWLB_equipment\backpacks\SWLB_clone_RTO_mini_backpack.p3d";
	hiddenSelections[] =
	{
		"main",
		"accumulator"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\B_radio_mini.rvmat",
		"RB205_main\data\materials\B_radio_mini_acc.rvmat"
	};
	mass = MASS_BACKPACK_SMALL;
	maximumload = INV_BACK_NONE;
	TFAR_RADIO_SMALL
};

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