/*
	UNITS
*/

#define DC17_IN_USE "RB205_DC17_alt"

class ls_gar_phase2_base;
class RB205_clone_base: ls_gar_phase2_base
{
	ACCESS_FALSE
	uniformClass = "RB205_U_base";
	//ICON_RIFLEMAN
	side=1;
	faction="RB205";
	editorSubCategory = "RB205_1AP";
	identityTypes[]={"LanguageENG_F","SWLB_JH_Head_Hair"};
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
	JLTS_isJumppack = 0;
	RD501_jumppack_is_jumppack = 0;
	tas_is_jetpack = 1; //3AS
	JET_EMERGENCY
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
};