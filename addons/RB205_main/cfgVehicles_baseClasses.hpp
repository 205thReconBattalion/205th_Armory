/*
	UNITS
*/

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
	//+Inventory
};
class RB205_ab_base: RB205_clone_base
{
	ACCESS_FALSE
	editorSubCategory = "RB205_1AP";
	engineer="true";
	backpack="";
	//+Inventory
};
/*class RB205_arf_base: RB205_clone_base
{
	ACCESS_FALSE
	canDeactivateMines="true";
	camouflage = 0.6;
	backpack="";
	//+Inventory
};*/
/*class RB205_plt_base: RB205_clone_base
{
	ACCESS_FALSE
	engineer="true";
	backpack="";
	//+Inventory
};
class RB205_snow_base: RB205_clone_base
{
	ACCESS_FALSE
	backpack="";
	//+Inventory
};
class RB205_arc_base: RB205_clone_base
{
	ACCESS_FALSE
	engineer="true";
	canDeactivateMines="true";
	camouflage = 0.6;
	backpack="";
	//+Inventory
};*/



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