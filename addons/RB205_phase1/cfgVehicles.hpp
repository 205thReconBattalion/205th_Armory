#include "cfgVehicles_baseClasses.hpp"

class SW205_clone_p1_trooper: RB205_clone_p1_base
{
	ACCESS_TRUE
	displayName = "Clone Trooper";
	uniformclass = "SW205_U_p1_trooper";
	editorSubCategory = "SW205_P1";
	hiddenselectionsTextures[] =
	{
		"RB205_phase1\data\unmarked\U_p1_ct_upper_co.paa",
		"RB205_phase1\data\unmarked\U_p1_ct_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(SW205_H_p1_trooper,"RB205_V_ct","RB205_NV_chip")
	identityTypes[] = {"LanguageENG_F","SWLB_JH_Head_Hair"};
};
class SW205_clone_p1_sergeant: RB205_clone_p1_base
{
	ACCESS_TRUE
	displayName = "Clone Sergeant";
	uniformclass = "SW205_U_p1_sergeant";
	editorSubCategory = "SW205_P1";
	hiddenselectionsTextures[] =
	{
		"RB205_phase1\data\unmarked\U_p1_cs_upper_co.paa",
		"RB205_phase1\data\unmarked\U_p1_ct_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(SW205_H_p1_sergeant,"RB205_V_ct","RB205_NV_chip")
	identityTypes[] = {"LanguageENG_F","SWLB_JH_Head_Hair"};
};
class SW205_clone_p1_lieutenant: RB205_clone_p1_base
{
	ACCESS_TRUE
	displayName = "Clone Lieutenant";
	uniformclass = "SW205_U_p1_lieutenant";
	editorSubCategory = "SW205_P1";
	hiddenselectionsTextures[] =
	{
		"RB205_phase1\data\unmarked\U_p1_cl_upper_co.paa",
		"RB205_phase1\data\unmarked\U_p1_ct_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(SW205_H_p1_lieutenant,"RB205_V_ct","RB205_NV_chip")
	identityTypes[] = {"LanguageENG_F","SWLB_JH_Head_Hair"};
};
class SW205_clone_p1_captain: RB205_clone_p1_base
{
	ACCESS_TRUE
	displayName = "Clone Captain";
	uniformclass = "SW205_U_p1_captain";
	editorSubCategory = "SW205_P1";
	hiddenselectionsTextures[] =
	{
		"RB205_phase1\data\unmarked\U_p1_co_upper_co.paa",
		"RB205_phase1\data\unmarked\U_p1_ct_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(SW205_H_p1_captain,"RB205_V_ct","RB205_NV_chip")
	identityTypes[] = {"LanguageENG_F","SWLB_JH_Head_Hair"};
};
class SW205_clone_p1_commander: RB205_clone_p1_base
{
	ACCESS_TRUE
	displayName = "Clone Commander";
	uniformclass = "SW205_U_p1_commander";
	editorSubCategory = "SW205_P1";
	hiddenselectionsTextures[] =
	{
		"RB205_phase1\data\unmarked\U_p1_cc_upper_co.paa",
		"RB205_phase1\data\unmarked\U_p1_ct_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(SW205_H_p1_commander,"RB205_V_ct","RB205_NV_chip")
	identityTypes[] = {"LanguageENG_F","SWLB_JH_Head_Hair"};
};

class RB205_arf_base;
class SW205_clone_p1_arf: RB205_arf_base
{
	ACCESS_TRUE
	displayName = "Clone ARF Trooper";
	uniformclass = "SW205_U_p1_trooper";
	editorSubCategory = "SW205_P1";
	LINKED_ITEMS(SW205_H_p1_arf,"RB205_V_arf_ct","RB205_NV_chip")
	identityTypes[] = {"LanguageENG_F","SWLB_JH_Head_Hair"};
	backpack = "SW205_B_p1_arf";
};
class RB205_plt_base;
class SW205_clone_p1_plt: RB205_plt_base
{
	ACCESS_TRUE
	displayName = "Clone Pilot Trooper";
	uniformclass = "SW205_U_p1_trooper";
	editorSubCategory = "SW205_P1";
	LINKED_ITEMS(SW205_H_p1_plt,"RB205_V_plt_ct","RB205_NV_chip")
	identityTypes[] = {"LanguageENG_F","SWLB_JH_Head_Hair"};
};



class RB205_B_heavy;
class SW205_B_p1_heavy: RB205_B_heavy
{
	displayname = "[SW] Clone Trooper Backpack <Heavy>";
	hiddenselectionstextures[] =
	{
		"RB205_phase1\data\unmarked\B_p1.paa",
		"RB205_main\data\default\B_cover_co.paa"
	};
	class XtdGearInfo
	{
		model = "SW205_B";
		type = "dft";
		special = "heavy";
	};
};
class RB205_B_medic;
class SW205_B_p1_medic: RB205_B_medic
{
	displayname = "[SW] Clone Trooper Backpack <Medic>";
	hiddenselectionstextures[] =
	{
		"RB205_phase1\data\unmarked\B_p1_medic.paa",
		"RB205_main\data\default\B_cover_co.paa",
		"RB205_main\data\default\B_medic_bacta_co.paa",
		"RB205_main\data\default\B_medic_bacta_co.paa"
	};
	class XtdGearInfo
	{
		model = "SW205_B";
		type = "dft";
		special = "medic";
	};
};
class RB205_B_rocket;
class SW205_B_p1_rocket: RB205_B_rocket
{
	displayname = "[SW] Clone Trooper Backpack <AT/AA>";
	hiddenselectionstextures[] =
	{
		"RB205_phase1\data\unmarked\B_p1.paa",
		"RB205_main\data\default\B_rocket_holder_co.paa",
		"RB205_main\data\default\B_rocket_co.paa",
		"RB205_main\data\default\B_rocket_light_co.paa",
		""
	};
	class XtdGearInfo
	{
		model = "SW205_B";
		type = "dft";
		special = "rocket";
	};
};
class RB205_B_eod;
class SW205_B_p1_eod: RB205_B_eod
{
	displayname = "[SW] Clone Trooper Backpack <EOD>";
	hiddenselectionstextures[] =
	{
		"RB205_phase1\data\unmarked\B_p1_eod.paa",
		"RB205_main\data\default\B_cover_co.paa",
		"RB205_main\data\default\B_pouches_co.paa"
	};
	class XtdGearInfo
	{
		model = "SW205_B";
		type = "dft";
		special = "eod";
	};
};
class RB205_B_radio;
class SW205_B_p1_radio: RB205_B_radio
{
	displayname = "[SW] Clone Trooper Backpack <RTO>";
	hiddenselectionstextures[] =
	{
		"RB205_phase1\data\unmarked\B_p1.paa",
		"RB205_main\data\default\B_radio_co.paa",
		"RB205_main\data\default\B_radio_screen_co.paa"
	};
	class XtdGearInfo
	{
		model = "SW205_B";
		type = "dft";
		special = "radio";
	};
};

class RB205_B_ab;
class SW205_B_p1_jetpack: RB205_B_ab
{
	displayname = "[SW] Clone Trooper Jetpack";
	hiddenSelectionsTextures[] =
	{
		"RB205_phase1\data\unmarked\B_p1_jetpack.paa"
	};
	class XtdGearInfo
	{
		model = "SW205_B";
		type = "jetpack";
		special = "default";
	};
};
class RB205_B_ab_heavy;
class SW205_B_p1_jetpack_heavy: RB205_B_ab_heavy
{
	displayname = "[SW] Clone Trooper Jetpack <Heavy>";
	hiddenSelectionsTextures[] =
	{
		"RB205_phase1\data\unmarked\B_p1_jetpack.paa"
	};
	class XtdGearInfo
	{
		model = "SW205_B";
		type = "jetpack";
		special = "heavy";
	};
};
class RB205_B_ab_medic;
class SW205_B_p1_jetpack_medic: RB205_B_ab_medic
{
	displayname = "[SW] Clone Trooper Jetpack <Medic>";
	hiddenSelectionsTextures[] =
	{
		"RB205_phase1\data\unmarked\B_p1_jetpack_medic.paa"
	};
	class XtdGearInfo
	{
		model = "SW205_B";
		type = "jetpack";
		special = "medic";
	};
};
class RB205_B_ab_rocket;
class SW205_B_p1_jetpack_rocket: RB205_B_ab_rocket
{
	displayname = "[SW] Clone Trooper Jetpack <AT/AA>";
	hiddenSelectionsTextures[] =
	{
		"RB205_phase1\data\unmarked\B_p1_jetpack.paa"
	};
	class XtdGearInfo
	{
		model = "SW205_B";
		type = "jetpack";
		special = "rocket";
	};
};
class RB205_B_ab_eod;
class SW205_B_p1_jetpack_eod: RB205_B_ab_eod
{
	displayname = "[SW] Clone Trooper Jetpack <EOD>";
	hiddenSelectionsTextures[] =
	{
		"RB205_phase1\data\unmarked\B_p1_jetpack_eod.paa"
	};
	class XtdGearInfo
	{
		model = "SW205_B";
		type = "jetpack";
		special = "eod";
	};
};
class RB205_B_ab_radio;
class SW205_B_p1_jetpack_radio: RB205_B_ab_radio
{
	displayname = "[SW] Clone Trooper Jetpack <RTO>";
	hiddenSelectionsTextures[] =
	{
		"RB205_phase1\data\unmarked\B_p1_jetpack.paa"
	};
	class XtdGearInfo
	{
		model = "SW205_B";
		type = "jetpack";
		special = "radio";
	};
};

class RB205_B_arf;
class SW205_B_p1_arf: RB205_B_arf
{
	displayname = "[SW] Clone ARF Trooper Backpack";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\B_radio_mini_acc_co.paa",
		"",
		"",
		"RB205_main\data\arf\B_arf2_co.paa",
		"RB205_main\data\default\B_radio_mini_co.paa"
	};
	class XtdGearInfo
	{
		model = "SW205_B";
		type = "arf";
		special = "default";
	};
};