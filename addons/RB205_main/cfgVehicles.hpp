#include "cfgVehicles_baseClasses.hpp"

/*
	DEFAULT UNITS
*/

class RB205_clone_recruit: RB205_clone_base
{
	ACCESS_TRUE
	displayName = "(1-CR) Clone Recruit";
	uniformclass = "RB205_U_recruit";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\default\U_recruit_upper_co.paa",
		"RB205_main\data\default\U_recruit_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_recruit,"RB205_V_ct","RB205_NV")
};
class RB205_clone_trooper: RB205_clone_base
{
	ACCESS_TRUE
	displayName = "(2-CT) Clone Trooper";
	uniformclass = "RB205_U_trooper";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\default\U_enl_upper_co.paa",
		"RB205_main\data\default\U_enl_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_trooper,"RB205_V_ct","RB205_NV")
};
class RB205_clone_lanceCorporal: RB205_clone_base
{
	ACCESS_TRUE
	displayName = "(3-CLC) Clone Lance-Corporal";
	uniformclass = "RB205_U_corporal";
	LINKED_ITEMS(RB205_H_corporal,"RB205_V_clc","RB205_NV_rangefinder")
};
class RB205_clone_corporal: RB205_clone_base
{
	ACCESS_TRUE
	displayName = "(4-CP) Clone Corporal";
	uniformclass = "RB205_U_corporal";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\default\U_nco_upper_co.paa",
		"RB205_main\data\default\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_corporal,"RB205_V_cp","RB205_NV_rangefinder")
};
class RB205_clone_sergeant: RB205_clone_base
{
	ACCESS_TRUE
	displayName = "(5-CS) Clone Sergeant";
	uniformclass = "RB205_U_sergeant";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\default\U_nco_upper_co.paa",
		"RB205_main\data\default\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_sergeant,"RB205_V_cs","RB205_NV_rangefinder")
};
class RB205_clone_sergeantMajor: RB205_clone_base
{
	ACCESS_TRUE
	displayName = "(6-CSM) Clone Sergeant-Major";
	uniformclass = "RB205_U_sergeant";
	LINKED_ITEMS(RB205_H_sergeant,"RB205_V_csm","RB205_NV_rangefinder")
	backpack="RB205_B_radio_mini";
};
class RB205_clone_lieutenant: RB205_clone_base
{
	ACCESS_TRUE
	displayName = "(7-CL) Clone Lieutenant";
	uniformclass = "RB205_U_lieutenant";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\default\U_nco_upper_co.paa",
		"RB205_main\data\default\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_lieutenant,"RB205_V_cl","RB205_NV_rangefinder")
	backpack="RB205_B_radio_mini";
};

class RB205_clone_ab_recruit: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(1-CR) Clone Airborne Recruit";
	uniformclass = "RB205_U_recruit";
	LINKED_ITEMS(RB205_H_ab_recruit,"RB205_V_ab_ct","RB205_NV_chip")
};
class RB205_clone_ab_trooper: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(2-CT) Clone Airborne Trooper";
	uniformclass = "RB205_U_trooper";
	LINKED_ITEMS(RB205_H_ab_trooper,"RB205_V_ab_ct","RB205_NV_chip")
};
class RB205_clone_ab_lanceCorporal: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(3-CLC) Clone Airborne Lance-Corporal";
	uniformclass = "RB205_U_corporal";
	LINKED_ITEMS(RB205_H_ab_corporal,"RB205_V_ab_clc","RB205_NV_chip")
};
class RB205_clone_ab_corporal: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(4-CP) Clone Airborne Corporal";
	uniformclass = "RB205_U_corporal";
	LINKED_ITEMS(RB205_H_ab_corporal,"RB205_V_ab_cp","RB205_NV_chip")
};
class RB205_clone_ab_sergeant: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(5-CS) Clone Airborne Sergeant";
	uniformclass = "RB205_U_sergeant";
	LINKED_ITEMS(RB205_H_ab_sergeant,"RB205_V_ab_cs","RB205_NV_chip")
};
class RB205_clone_ab_sergeantMajor: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(6-CSM) Clone Airborne Sergeant-Major";
	uniformclass = "RB205_U_sergeant";
	LINKED_ITEMS(RB205_H_ab_sergeant,"RB205_V_ab_csm","RB205_NV_chip")
	backpack="RB205_B_ab_radio";
};
class RB205_clone_ab_lieutenant: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(7-CL) Clone Airborne Lieutenant";
	uniformclass = "RB205_U_lieutenant";
	LINKED_ITEMS(RB205_H_ab_lieutenant,"RB205_V_ab_cl","RB205_NV_chip")
	backpack="RB205_B_ab_radio";
};

class RB205_clone_arf_recruit: RB205_arf_base
{
	ACCESS_TRUE
	displayName = "(1-CR) Clone ARF Recruit";
	uniformclass = "RB205_U_recruit";
	LINKED_ITEMS(RB205_H_arf_recruit,"RB205_V_arf_ct","RB205_NV_arf_antenna")
};
class RB205_clone_arf_trooper: RB205_arf_base
{
	ACCESS_TRUE
	displayName = "(2-CT) Clone ARF Trooper";
	uniformclass = "RB205_U_arf_trooper";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\arf\U_enl_upper_co.paa",
		"RB205_main\data\arf\U_enl_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_arf_trooper,"RB205_V_arf_ct","RB205_NV_arf_antenna")
};
class RB205_clone_arf_lanceCorporal: RB205_arf_base
{
	ACCESS_TRUE
	displayName = "(3-CLC) Clone ARF Lance-Corporal";
	uniformclass = "RB205_U_arf_corporal";
	LINKED_ITEMS(RB205_H_arf_corporal,"RB205_V_arf_clc","RB205_NV_arf_antenna")
};
class RB205_clone_arf_corporal: RB205_arf_base
{
	ACCESS_TRUE
	displayName = "(4-CP) Clone ARF Corporal";
	uniformclass = "RB205_U_arf_corporal";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\arf\U_nco_upper_co.paa",
		"RB205_main\data\arf\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_arf_corporal,"RB205_V_arf_cp","RB205_NV_arf_antenna")
};
class RB205_clone_arf_sergeant: RB205_arf_base
{
	ACCESS_TRUE
	displayName = "(5-CS) Clone ARF Sergeant";
	uniformclass = "RB205_U_arf_sergeant";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\arf\U_nco_upper_co.paa",
		"RB205_main\data\arf\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_arf_sergeant,"RB205_V_arf_cs","RB205_NV_arf_antenna")
};
class RB205_clone_arf_sergeantMajor: RB205_arf_base
{
	ACCESS_TRUE
	displayName = "(6-CSM) Clone ARF Sergeant-Major";
	uniformclass = "RB205_U_arf_sergeant";
	LINKED_ITEMS(RB205_H_arf_sergeant,"RB205_V_arf_csm","RB205_NV_arf_antenna")
	backpack="RB205_B_radio_mini";
};
class RB205_clone_arf_lieutenant: RB205_arf_base
{
	ACCESS_TRUE
	displayName = "(7-CL) Clone ARF Lieutenant";
	uniformclass = "RB205_U_arf_lieutenant";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\arf\U_nco_upper_co.paa",
		"RB205_main\data\arf\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_arf_lieutenant,"RB205_V_arf_cl","RB205_NV_arf_antenna")
	backpack="RB205_B_radio_mini";
};

class RB205_clone_plt_recruit: RB205_plt_base
{
	ACCESS_TRUE
	displayName = "(1-CR) Clone Pilot Recruit";
	uniformclass = "RB205_U_recruit";
	LINKED_ITEMS(RB205_H_plt_recruit,"RB205_V_plt_ct","RB205_NV_chip")
};
class RB205_clone_plt_trooper: RB205_plt_base
{
	ACCESS_TRUE
	displayName = "(2-CT) Clone Pilot Trooper";
	uniformclass = "RB205_U_plt_trooper";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\pilot\U_enl_upper_co.paa",
		"RB205_main\data\pilot\U_enl_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_plt_trooper,"RB205_V_plt_ct","RB205_NV_chip")
};
class RB205_clone_plt_lanceCorporal: RB205_plt_base
{
	ACCESS_TRUE
	displayName = "(3-CLC) Clone Pilot Lance-Corporal";
	uniformclass = "RB205_U_plt_corporal";
	LINKED_ITEMS(RB205_H_plt_corporal,"RB205_V_plt_clc","RB205_NV_chip")
};
class RB205_clone_plt_corporal: RB205_plt_base
{
	ACCESS_TRUE
	displayName = "(4-CP) Clone Pilot Corporal";
	uniformclass = "RB205_U_plt_corporal";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\pilot\U_nco_upper_co.paa",
		"RB205_main\data\pilot\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_plt_corporal,"RB205_V_plt_cp","RB205_NV_chip")
};
class RB205_clone_plt_sergeant: RB205_plt_base
{
	ACCESS_TRUE
	displayName = "(5-CS) Clone Pilot Sergeant";
	uniformclass = "RB205_U_plt_sergeant";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\pilot\U_nco_upper_co.paa",
		"RB205_main\data\pilot\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_plt_sergeant,"RB205_V_plt_cs","RB205_NV_chip")
};
class RB205_clone_plt_sergeantMajor: RB205_plt_base
{
	ACCESS_TRUE
	displayName = "(6-CSM) Clone Pilot Sergeant-Major";
	uniformclass = "RB205_U_plt_sergeant";
	LINKED_ITEMS(RB205_H_plt_sergeant,"RB205_V_plt_csm","RB205_NV_chip")
};
class RB205_clone_plt_lieutenant: RB205_plt_base
{
	ACCESS_TRUE
	displayName = "(7-CL) Clone Pilot Lieutenant";
	uniformclass = "RB205_U_plt_lieutenant";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\pilot\U_nco_upper_co.paa",
		"RB205_main\data\pilot\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_plt_lieutenant,"RB205_V_plt_cl","RB205_NV_chip")
};

class RB205_clone_snow_recruit: RB205_snow_base
{
	ACCESS_TRUE
	displayName = "(1-CR) Clone Snow Recruit";
	uniformclass = "RB205_U_snow_recruit";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\snow\U_recruit_upper_co.paa",
		"RB205_main\data\snow\U_recruit_lower_co.paa",
		"RB205_main\data\snow\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_snow_recruit,"RB205_V_snow_ct","RB205_NV_chip")
};
class RB205_clone_snow_trooper: RB205_snow_base
{
	ACCESS_TRUE
	displayName = "(2-CT) Clone Snow Trooper";
	uniformclass = "RB205_U_snow_trooper";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\snow\U_enl_upper_co.paa",
		"RB205_main\data\snow\U_enl_lower_co.paa",
		"RB205_main\data\snow\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_snow_trooper,"RB205_V_snow_ct","RB205_NV_chip")
};
class RB205_clone_snow_lanceCorporal: RB205_snow_base
{
	ACCESS_TRUE
	displayName = "(3-CLC) Clone Snow Lance-Corporal";
	uniformclass = "RB205_U_snow_corporal";
	LINKED_ITEMS(RB205_H_snow_corporal,"RB205_V_snow_clc","RB205_NV_chip")
};
class RB205_clone_snow_corporal: RB205_snow_base
{
	ACCESS_TRUE
	displayName = "(4-CP) Clone Snow Corporal";
	uniformclass = "RB205_U_snow_corporal";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\snow\U_nco_upper_co.paa",
		"RB205_main\data\snow\U_nco_lower_co.paa",
		"RB205_main\data\snow\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_snow_corporal,"RB205_V_snow_cp","RB205_NV_chip")
};
class RB205_clone_snow_sergeant: RB205_snow_base
{
	ACCESS_TRUE
	displayName = "(5-CS) Clone Snow Sergeant";
	uniformclass = "RB205_U_snow_sergeant";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\snow\U_nco_upper_co.paa",
		"RB205_main\data\snow\U_nco_lower_co.paa",
		"RB205_main\data\snow\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_snow_sergeant,"RB205_V_snow_cs","RB205_NV_chip")
};
class RB205_clone_snow_sergeantMajor: RB205_snow_base
{
	ACCESS_TRUE
	displayName = "(6-CSM) Clone Snow Sergeant-Major";
	uniformclass = "RB205_U_snow_sergeant";
	LINKED_ITEMS(RB205_H_snow_sergeant,"RB205_V_snow_csm","RB205_NV_chip")
	backpack="RB205_B_radio_mini";
};
class RB205_clone_snow_lieutenant: RB205_snow_base
{
	ACCESS_TRUE
	displayName = "(7-CL) Clone Snow Lieutenant";
	uniformclass = "RB205_U_snow_lieutenant";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\snow\U_nco_upper_co.paa",
		"RB205_main\data\snow\U_nco_lower_co.paa",
		"RB205_main\data\snow\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_snow_lieutenant,"RB205_V_snow_cl","RB205_NV_chip")
	backpack="RB205_B_radio_mini";
};

class RB205_clone_arc_trooper: RB205_arc_base
{
	ACCESS_TRUE
	displayName = "(ARC) Clone ARC Trooper";
	uniformclass = "RB205_U_arc_trooper";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\default\U_enl_upper_co.paa",
		"RB205_main\data\default\U_enl_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS(RB205_H_arc_trooper,"RB205_V_arc","RB205_NV_rangefinder")
	backpack="RB205_B_arc";
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
class ls_gar_heavy_backpack;
class RB205_B_eod: ls_gar_heavy_backpack
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
		"RB205_main\data\default\B_cover_co.paa",
		"RB205_main\data\default\B_pouches_co.paa"
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