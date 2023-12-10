#include "cfgVehicles_baseClasses.hpp"

/*
	DEFAULT UNITS
*/

class RB205_clone_recruit: RB205_clone_base
{
	ACCESS_TRUE
	displayName = "(CR) Clone Recruit";
	uniformclass = "RB205_U_recruit";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\default\U_recruit_upper_co.paa",
		"RB205_main\data\default\U_recruit_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	editorSubCategory = "RB205_1AP";
	LINKED_ITEMS(RB205_H_recruit,"RB205_V_ct","JLTS_NVG_droid_chip_1")
};
class RB205_clone_trooper: RB205_clone_base
{
	ACCESS_TRUE
	displayName = "(CT) Clone Trooper";
	uniformclass = "RB205_U_trooper";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\default\U_enl_upper_co.paa",
		"RB205_main\data\default\U_enl_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_trooper,"RB205_V_ct","JLTS_NVG_droid_chip_1")
};
class RB205_clone_lanceCorporal: RB205_clone_base
{
	ACCESS_TRUE
	displayName = "(CLC) Clone Lance-Corporal";
	uniformclass = "RB205_U_corporal";
	LINKED_ITEMS(RB205_H_corporal,"RB205_V_clc","JLTS_NVG_droid_chip_1")
};
class RB205_clone_corporal: RB205_clone_base
{
	ACCESS_TRUE
	displayName = "(CP) Clone Corporal";
	uniformclass = "RB205_U_corporal";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\default\U_nco_upper_co.paa",
		"RB205_main\data\default\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_corporal,"RB205_V_cp","JLTS_NVG_droid_chip_1")
};
class RB205_clone_sergeant: RB205_clone_base
{
	ACCESS_TRUE
	displayName = "(CS) Clone Sergeant";
	uniformclass = "RB205_U_sergeant";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\default\U_nco_upper_co.paa",
		"RB205_main\data\default\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_sergeant,"RB205_V_cs","JLTS_NVG_droid_chip_1")
};
class RB205_clone_sergeantMajor: RB205_clone_base
{
	ACCESS_TRUE
	displayName = "(CSM) Clone Sergeant-Major";
	uniformclass = "RB205_U_sergeant";
	LINKED_ITEMS(RB205_H_sergeant,"RB205_V_csm","JLTS_NVG_droid_chip_1")
};
class RB205_clone_lieutenant: RB205_clone_base
{
	ACCESS_TRUE
	displayName = "(CL) Clone Lieutenant";
	uniformclass = "RB205_U_lieutenant";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\default\U_nco_upper_co.paa",
		"RB205_main\data\default\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_lieutenant,"RB205_V_cl","JLTS_NVG_droid_chip_1")
};

class RB205_clone_ab_recruit: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(CR) Clone Airborne Recruit";
	uniformclass = "RB205_U_recruit";
	LINKED_ITEMS(RB205_H_ab_recruit,"RB205_V_ct","JLTS_NVG_droid_chip_1")
};
class RB205_clone_ab_trooper: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(CT) Clone Airborne Trooper";
	uniformclass = "RB205_U_trooper";
	LINKED_ITEMS(RB205_H_ab_trooper,"RB205_V_ct","JLTS_NVG_droid_chip_1")
};
class RB205_clone_ab_lanceCorporal: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(CLC) Clone Airborne Lance-Corporal";
	uniformclass = "RB205_U_corporal";
	LINKED_ITEMS(RB205_H_ab_corporal,"RB205_V_clc","JLTS_NVG_droid_chip_1")
};
class RB205_clone_ab_corporal: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(CP) Clone Airborne Corporal";
	uniformclass = "RB205_U_corporal";
	LINKED_ITEMS(RB205_H_ab_corporal,"RB205_V_cp","JLTS_NVG_droid_chip_1")
};
class RB205_clone_ab_sergeant: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(CS) Clone Airborne Sergeant";
	uniformclass = "RB205_U_sergeant";
	LINKED_ITEMS(RB205_H_ab_sergeant,"RB205_V_cs","JLTS_NVG_droid_chip_1")
};
class RB205_clone_ab_sergeantMajor: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(CSM) Clone Airborne Sergeant-Major";
	uniformclass = "RB205_U_sergeant";
	LINKED_ITEMS(RB205_H_ab_sergeant,"RB205_V_csm","JLTS_NVG_droid_chip_1")
};
class RB205_clone_ab_lieutenant: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(CL) Clone Airborne Lieutenant";
	uniformclass = "RB205_U_lieutenant";
	LINKED_ITEMS(RB205_H_ab_lieutenant,"RB205_V_cl","JLTS_NVG_droid_chip_1")
};

class ls_gar_standard_backpack;
class RB205_B_heavy: ls_gar_standard_backpack
{
	ACCESS_TRUE
	author = "205th Recon Battalion";
	displayname = "[205] Clone Trooper Backpack <Heavy>";
	descriptionShort = "";
	maximumload = INV_BACK;
	picture = "\RB205_main\data\ui\backpacks\icon_B_heavy.paa";
	hiddenselectionstextures[] =
	{
		"RB205_main\data\default\B_default_co.paa",
		"RB205_main\data\default\B_cover_co.paa"
	};
};
class ls_gar_medic_backpack;
class RB205_B_medic: ls_gar_medic_backpack
{
	ACCESS_TRUE
	author = "205th Recon Battalion";
	displayname = "[205] Clone Trooper Backpack <Medic>";
	descriptionShort = "";
	maximumload = INV_BACK_MEDIC;
	picture = "\RB205_main\data\ui\backpacks\icon_B_medic.paa";
	hiddenselectionstextures[] =
	{
		"RB205_main\data\default\B_medic_co.paa",
		"RB205_main\data\default\B_cover_co.paa",
		"RB205_main\data\default\B_medic_bacta_co.paa",
		"RB205_main\data\default\B_medic_bacta_co.paa"
	};
};
class ls_gar_rocket_backpack;
class RB205_B_rocket: ls_gar_rocket_backpack
{
	ACCESS_TRUE
	author = "205th Recon Battalion";
	displayname = "[205] Clone Trooper Backpack <AT/AA>";
	descriptionShort = "";
	maximumload = INV_BACK_ROCKET;
	picture = "\RB205_main\data\ui\backpacks\icon_B_rocket.paa";
	hiddenselectionstextures[] =
	{
		"RB205_main\data\default\B_default_co.paa",
		"RB205_main\data\default\B_rocket_holder_co.paa",
		"RB205_main\data\default\B_rocket_co.paa",
		"RB205_main\data\default\B_rocket_light_co.paa",
		""
	};
};
class RB205_B_eod: ls_gar_standard_backpack
{
	ACCESS_TRUE
	author = "205th Recon Battalion";
	displayname = "[205] Clone Trooper Backpack <EOD>";
	descriptionShort = "";
	maximumload = INV_BACK_EOD;
	picture = "\RB205_main\data\ui\backpacks\icon_B_eod.paa";
	hiddenselectionstextures[] =
	{
		"RB205_main\data\default\B_eod_co.paa",
		"RB205_main\data\default\B_cover_co.paa"
	};
};
class ls_gar_radio_backpack;
class RB205_B_radio: ls_gar_radio_backpack
{
	ACCESS_TRUE
	author = "205th Recon Battalion";
	displayname = "[205] Clone Trooper Backpack <RTO>";
	descriptionShort = "";
	maximumload = INV_BACK_RADIO;
	picture = "\RB205_main\data\ui\backpacks\icon_B_radio.paa";
	TFAR_RADIO
	hiddenselectionstextures[] =
	{
		"RB205_main\data\default\B_default_co.paa",
		"RB205_main\data\default\B_radio_co.paa",
		"RB205_main\data\default\B_radio_screen_co.paa"
	};
};
class SWLB_clone_RTO_mini_backpack;
class RB205_B_radio_mini: SWLB_clone_RTO_mini_backpack
{
	ACCESS_TRUE
	author = "205th Recon Battalion";
	displayname = "[205] Clone Trooper Radio Transmitter";
	descriptionShort = "";
	maximumload = INV_BACK_NONE;
	TFAR_RADIO_SMALL
	picture = "\RB205_main\data\ui\backpacks\icon_B_radio_mini.paa";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\B_radio_mini_co.paa",
		"RB205_main\data\default\B_radio_mini_acc_co.paa"
	};
};
class RB205_B_radio_mini_blk: RB205_B_radio_mini
{
	ACCESS_TRUE
	author = "205th Recon Battalion";
	displayname = "[205] Clone Trooper Radio Transmitter (Black)";
	descriptionShort = "";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\B_radio_mini_blk_co.paa",
		"RB205_main\data\default\B_radio_mini_acc_blk_co.paa"
	};
};

class RB205_B_ab: RB205_B_ab_base
{
	ACCESS_TRUE
	displayname = "[205] Clone Airborne Trooper Jetpack";
	maximumload = INV_BACK_NONE;
	picture = "\RB205_main\data\ui\backpacks\icon_B_ab.paa";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\B_ab_jetpack_co.paa"
	};
};
class RB205_B_ab_heavy: RB205_B_ab
{
	ACCESS_TRUE
	displayname = "[205] Clone Airborne Trooper Jetpack <Heavy>";
	maximumload = INV_BACK;
	picture = "\RB205_main\data\ui\backpacks\icon_B_ab_heavy.paa";
};
class RB205_B_ab_medic: RB205_B_ab
{
	ACCESS_TRUE
	displayname = "[205] Clone Airborne Trooper Jetpack <Medic>";
	maximumload = INV_BACK_MEDIC;
	picture = "\RB205_main\data\ui\backpacks\icon_B_ab_medic.paa";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\B_ab_jetpack_medic_co.paa"
	};
};
class RB205_B_ab_rocket: RB205_B_ab
{
	ACCESS_TRUE
	displayname = "[205] Clone Airborne Trooper Jetpack <AT/AA>";
	maximumload = INV_BACK_ROCKET;
	picture = "\RB205_main\data\ui\backpacks\icon_B_ab_rocket.paa";
};
class RB205_B_ab_eod: RB205_B_ab
{
	ACCESS_TRUE
	displayname = "[205] Clone Airborne Trooper Jetpack <EOD>";
	maximumload = INV_BACK_EOD;
	picture = "\RB205_main\data\ui\backpacks\icon_B_ab_eod.paa";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\B_ab_jetpack_eod_co.paa"
	};
};
class RB205_B_ab_radio: RB205_B_ab
{
	ACCESS_TRUE
	displayname = "[205] Clone Airborne Trooper Jetpack <RTO>";
	maximumload = INV_BACK_RADIO;
	picture = "\RB205_main\data\ui\backpacks\icon_B_ab_radio.paa";
	TFAR_RADIO
};

class SWLB_clone_bag;
class RB205_B_arf: SWLB_clone_bag
{
	ACCESS_TRUE
	author = "205th Recon Battalion";
	displayname = "[205] Clone ARF Trooper Backpack";
	descriptionShort = "";
	maximumLoad = INV_BACK_ARF;
	TFAR_RADIO_SMALL
	picture = "\RB205_main\data\ui\backpacks\icon_B_arf.paa";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\B_arf_co.paa",
		"RB205_main\data\arf\B_arf_co.paa"
	};
};

class RB205_B_snow_heavy: RB205_B_snow_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Backpack <Heavy>";
	maximumLoad = INV_BACK;
	picture = "\RB205_main\data\ui\backpacks\icon_B_snow_heavy.paa";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\snow\B_snow_co.paa",
		"RB205_main\data\snow\B_snow_co.paa"
	};
};
class RB205_B_snow_medic: RB205_B_snow_heavy
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Backpack <Medic>";
	maximumLoad = INV_BACK_MEDIC;
	picture = "\RB205_main\data\ui\backpacks\icon_B_snow_medic.paa";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\snow\B_snow_medic_co.paa",
		"RB205_main\data\snow\B_snow_medic_co.paa"
	};
};
class RB205_B_snow_rocket: RB205_B_snow_heavy
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Backpack <AT/AA>";
	maximumLoad = INV_BACK_ROCKET;
	picture = "\RB205_main\data\ui\backpacks\icon_B_snow_rocket.paa";
};
class RB205_B_snow_eod: RB205_B_snow_heavy
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Backpack <EOD>";
	maximumLoad = INV_BACK_EOD;
	picture = "\RB205_main\data\ui\backpacks\icon_B_snow_eod.paa";
};
class RB205_B_snow_radio: RB205_B_snow_heavy
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Backpack <RTO>";
	maximumLoad = INV_BACK_RADIO;
	picture = "\RB205_main\data\ui\backpacks\icon_B_snow_radio.paa";
};

class SWLB_clone_arc_backpack;
class RB205_B_arc: SWLB_clone_arc_backpack
{
	ACCESS_TRUE
	author = "205th Recon Battalion";
	displayname = "[205] Clone ARC Trooper Backpack";
	descriptionShort = "";
	maximumload = INV_BACK_ARC;
	TFAR_RADIO
	picture = "\RB205_main\data\ui\backpacks\icon_B_arc.paa";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arc\B_arc_co.paa"
	};
};
class RB205_B_arc_jetpack: RB205_B_ab_base
{
	ACCESS_TRUE
	displayname = "[205] Clone ARC Trooper Jetpack";
	maximumload = INV_BACK_ARC;
	TFAR_RADIO
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\B_ab_jetpack_co.paa"
	};
};