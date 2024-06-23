#include "cfgVehicles_baseClasses.hpp"

/*
	UNITS
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
	LINKED_ITEMS("RB205_H_recruit","RB205_V_ct","RB205_NV_chip")
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
	LINKED_ITEMS("RB205_H_trooper","RB205_V_ct","RB205_NV_chip")
};
class RB205_clone_lanceCorporal: RB205_clone_base
{
	ACCESS_TRUE
	displayName = "(3-CLC) Clone Lance-Corporal";
	icon = ICON_NCO;
	uniformclass = "RB205_U_corporal";
	LINKED_ITEMS("RB205_H_corporal","RB205_V_clc","RB205_NV_chip")
	identityTypes[] = IDENTITY_TYPES_GLASSES("RB205_VIS");
};
class RB205_clone_corporal: RB205_clone_base
{
	ACCESS_TRUE
	displayName = "(4-CP) Clone Corporal";
	icon = ICON_NCO;
	uniformclass = "RB205_U_corporal";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\default\U_nco_upper_co.paa",
		"RB205_main\data\default\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS("RB205_H_corporal","RB205_V_cp","RB205_NV_chip")
	identityTypes[] = IDENTITY_TYPES_GLASSES("RB205_VIS");
};
class RB205_clone_sergeant: RB205_clone_base
{
	ACCESS_TRUE
	displayName = "(5-CS) Clone Sergeant";
	icon = ICON_NCO;
	uniformclass = "RB205_U_sergeant";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\default\U_nco_upper_co.paa",
		"RB205_main\data\default\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS("RB205_H_sergeant","RB205_V_cs","RB205_NV_chip")
	identityTypes[] = IDENTITY_TYPES_GLASSES("RB205_VIS");
};
class RB205_clone_sergeantMajor: RB205_clone_base
{
	ACCESS_TRUE
	displayName = "(6-CSM) Clone Sergeant-Major";
	icon = ICON_NCO;
	uniformclass = "RB205_U_sergeant";
	LINKED_ITEMS("RB205_H_sergeant","RB205_V_csm","RB205_NV_chip")
	identityTypes[] = IDENTITY_TYPES_GLASSES("RB205_VIS");
	backpack="RB205_B_radio_mini";
};
class RB205_clone_lieutenant: RB205_clone_officer_base
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
	LINKED_ITEMS("RB205_H_lieutenant","RB205_V_cl","RB205_NV_chip")
	identityTypes[] = IDENTITY_TYPES_GLASSES("RB205_VIS");
	backpack="RB205_B_radio_mini";
};
class RB205_clone_captain: RB205_clone_officer_base
{
	ACCESS_FALSE
	displayName = "(8-CO) Clone Captain";
	uniformclass = "RB205_U_lieutenant";
	LINKED_ITEMS("RB205_H_lieutenant","RB205_V_cl","RB205_NV_chip")
	identityTypes[] = IDENTITY_TYPES_GLASSES("RB205_VIS");
	backpack="RB205_B_radio_mini";
};
class RB205_clone_commander: RB205_clone_officer_base
{
	ACCESS_FALSE
	displayName = "(9-CC) Clone Commander";
	uniformclass = "RB205_U_lieutenant";
	LINKED_ITEMS("RB205_H_lieutenant","RB205_V_cl","RB205_NV_chip")
	identityTypes[] = IDENTITY_TYPES_GLASSES("RB205_VIS");
	backpack="RB205_B_radio_mini";
};

class RB205_clone_ab_recruit: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(1-CR) Clone Airborne Recruit";
	uniformclass = "RB205_U_recruit";
	LINKED_ITEMS("RB205_H_ab_recruit","RB205_V_ab_ct","RB205_NV_chip")
};
class RB205_clone_ab_trooper: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(2-CT) Clone Airborne Trooper";
	uniformclass = "RB205_U_trooper";
	LINKED_ITEMS("RB205_H_ab_trooper","RB205_V_ab_ct","RB205_NV_chip")
};
class RB205_clone_ab_lanceCorporal: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(3-CLC) Clone Airborne Lance-Corporal";
	icon = ICON_NCO;
	uniformclass = "RB205_U_corporal";
	LINKED_ITEMS("RB205_H_ab_corporal","RB205_V_ab_clc","RB205_NV_chip")
};
class RB205_clone_ab_corporal: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(4-CP) Clone Airborne Corporal";
	icon = ICON_NCO;
	uniformclass = "RB205_U_corporal";
	LINKED_ITEMS("RB205_H_ab_corporal","RB205_V_ab_cp","RB205_NV_chip")
};
class RB205_clone_ab_sergeant: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(5-CS) Clone Airborne Sergeant";
	icon = ICON_NCO;
	uniformclass = "RB205_U_sergeant";
	LINKED_ITEMS("RB205_H_ab_sergeant","RB205_V_ab_cs","RB205_NV_chip")
};
class RB205_clone_ab_sergeantMajor: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(6-CSM) Clone Airborne Sergeant-Major";
	icon = ICON_NCO;
	uniformclass = "RB205_U_sergeant";
	LINKED_ITEMS("RB205_H_ab_sergeant","RB205_V_ab_csm","RB205_NV_chip")
	backpack = "RB205_B_ab_radio";
};
class RB205_clone_ab_lieutenant: RB205_ab_base
{
	ACCESS_TRUE
	displayName = "(7-CL) Clone Airborne Lieutenant";
	icon = ICON_CO;
	uniformclass = "RB205_U_lieutenant";
	LINKED_ITEMS("RB205_H_ab_lieutenant","RB205_V_ab_cl","RB205_NV_chip")
	backpack = "RB205_B_ab_radio";
};

class RB205_clone_arf_recruit: RB205_arf_base
{
	ACCESS_TRUE
	displayName = "(1-CR) Clone ARF Recruit";
	uniformclass = "RB205_U_recruit";
	LINKED_ITEMS("RB205_H_arf_recruit","RB205_V_arf_ct","RB205_NV_arf_antenna")
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
	LINKED_ITEMS("RB205_H_arf_trooper","RB205_V_arf_ct","RB205_NV_arf_antenna")
};
class RB205_clone_arf_lanceCorporal: RB205_arf_base
{
	ACCESS_TRUE
	displayName = "(3-CLC) Clone ARF Lance-Corporal";
	icon = ICON_NCO;
	uniformclass = "RB205_U_arf_corporal";
	LINKED_ITEMS("RB205_H_arf_corporal","RB205_V_arf_clc","RB205_NV_arf_antenna")
};
class RB205_clone_arf_corporal: RB205_arf_base
{
	ACCESS_TRUE
	displayName = "(4-CP) Clone ARF Corporal";
	icon = ICON_NCO;
	uniformclass = "RB205_U_arf_corporal";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\arf\U_nco_upper_co.paa",
		"RB205_main\data\arf\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS("RB205_H_arf_corporal","RB205_V_arf_cp","RB205_NV_arf_antenna")
};
class RB205_clone_arf_sergeant: RB205_arf_base
{
	ACCESS_TRUE
	displayName = "(5-CS) Clone ARF Sergeant";
	icon = ICON_NCO;
	uniformclass = "RB205_U_arf_sergeant";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\arf\U_nco_upper_co.paa",
		"RB205_main\data\arf\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS("RB205_H_arf_sergeant","RB205_V_arf_cs","RB205_NV_arf_antenna")
};
class RB205_clone_arf_sergeantMajor: RB205_arf_base
{
	ACCESS_TRUE
	displayName = "(6-CSM) Clone ARF Sergeant-Major";
	icon = ICON_NCO;
	uniformclass = "RB205_U_arf_sergeant";
	LINKED_ITEMS("RB205_H_arf_sergeant","RB205_V_arf_csm","RB205_NV_arf_antenna")
};
class RB205_clone_arf_lieutenant: RB205_arf_base
{
	ACCESS_TRUE
	displayName = "(7-CL) Clone ARF Lieutenant";
	icon = ICON_CO;
	uniformclass = "RB205_U_arf_lieutenant";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\arf\U_nco_upper_co.paa",
		"RB205_main\data\arf\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS("RB205_H_arf_lieutenant","RB205_V_arf_cl","RB205_NV_arf_antenna")
};

class RB205_clone_arf_trooper_arctic: RB205_arf_base
{
	ACCESS_TRUE
	displayName = "(2-CT) Clone ARF Trooper <Arctic>";
	uniformclass = "RB205_U_arf_trooper_arctic";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\arf\U_arf_arctic_upper_co.paa",
		"RB205_main\data\arf\U_arf_arctic_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS("RB205_H_arf_trooper_arctic","RB205_V_arf_ct","RB205_NV_arf_antenna")
	backpack = "RB205_B_arf_arctic";
};
class RB205_clone_arf_trooper_desert: RB205_arf_base
{
	ACCESS_TRUE
	displayName = "(2-CT) Clone ARF Trooper <Desert>";
	uniformclass = "RB205_U_arf_trooper_desert";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\arf\U_arf_desert_upper_co.paa",
		"RB205_main\data\arf\U_arf_desert_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS("RB205_H_arf_trooper_desert","RB205_V_arf_ct","RB205_NV_arf_antenna")
	backpack = "RB205_B_arf_desert";
};
class RB205_clone_arf_trooper_jungle: RB205_arf_base
{
	ACCESS_TRUE
	displayName = "(2-CT) Clone ARF Trooper <Jungle>";
	uniformclass = "RB205_U_arf_trooper_jungle";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\arf\U_arf_jungle_upper_co.paa",
		"RB205_main\data\arf\U_arf_jungle_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS("RB205_H_arf_trooper_jungle","RB205_V_arf_ct","RB205_NV_arf_antenna")
	backpack = "RB205_B_arf_jungle";
};
class RB205_clone_arf_trooper_woodland: RB205_arf_base
{
	ACCESS_TRUE
	displayName = "(2-CT) Clone ARF Trooper <Woodland>";
	uniformclass = "RB205_U_arf_trooper_woodland";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\arf\U_arf_woodland_upper_co.paa",
		"RB205_main\data\arf\U_arf_woodland_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS("RB205_H_arf_trooper_woodland","RB205_V_arf_ct","RB205_NV_arf_antenna")
	backpack = "RB205_B_arf_woodland";
};

class RB205_clone_plt_recruit: RB205_plt_base
{
	ACCESS_TRUE
	displayName = "(1-CR) Clone Pilot Recruit";
	uniformclass = "RB205_U_recruit";
	LINKED_ITEMS("RB205_H_plt_recruit","RB205_V_plt_ct","RB205_NV_chip")
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
	LINKED_ITEMS("RB205_H_plt_trooper","RB205_V_plt_ct","RB205_NV_chip")
};
class RB205_clone_plt_lanceCorporal: RB205_plt_base
{
	ACCESS_TRUE
	displayName = "(3-CLC) Clone Pilot Lance-Corporal";
	icon = ICON_NCO;
	uniformclass = "RB205_U_plt_corporal";
	LINKED_ITEMS("RB205_H_plt_corporal","RB205_V_plt_clc","RB205_NV_chip")
};
class RB205_clone_plt_corporal: RB205_plt_base
{
	ACCESS_TRUE
	displayName = "(4-CP) Clone Pilot Corporal";
	icon = ICON_NCO;
	uniformclass = "RB205_U_plt_corporal";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\pilot\U_nco_upper_co.paa",
		"RB205_main\data\pilot\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS("RB205_H_plt_corporal","RB205_V_plt_cp","RB205_NV_chip")
};
class RB205_clone_plt_sergeant: RB205_plt_base
{
	ACCESS_TRUE
	displayName = "(5-CS) Clone Pilot Sergeant";
	icon = ICON_NCO;
	uniformclass = "RB205_U_plt_sergeant";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\pilot\U_nco_upper_co.paa",
		"RB205_main\data\pilot\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS("RB205_H_plt_sergeant","RB205_V_plt_cs","RB205_NV_chip")
};
class RB205_clone_plt_sergeantMajor: RB205_plt_base
{
	ACCESS_TRUE
	displayName = "(6-CSM) Clone Pilot Sergeant-Major";
	icon = ICON_NCO;
	uniformclass = "RB205_U_plt_sergeant";
	LINKED_ITEMS("RB205_H_plt_sergeant","RB205_V_plt_csm","RB205_NV_chip")
};
class RB205_clone_plt_lieutenant: RB205_plt_base
{
	ACCESS_TRUE
	displayName = "(7-CL) Clone Pilot Lieutenant";
	icon = ICON_CO;
	uniformclass = "RB205_U_plt_lieutenant";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\pilot\U_nco_upper_co.paa",
		"RB205_main\data\pilot\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	LINKED_ITEMS("RB205_H_plt_lieutenant","RB205_V_plt_cl","RB205_NV_chip")
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
	LINKED_ITEMS("RB205_H_snow_recruit","RB205_V_snow_ct","RB205_NV_chip")
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
	LINKED_ITEMS("RB205_H_snow_trooper","RB205_V_snow_ct","RB205_NV_chip")
};
class RB205_clone_snow_lanceCorporal: RB205_snow_base
{
	ACCESS_TRUE
	displayName = "(3-CLC) Clone Snow Lance-Corporal";
	icon = ICON_NCO;
	uniformclass = "RB205_U_snow_corporal";
	LINKED_ITEMS("RB205_H_snow_corporal","RB205_V_snow_clc","RB205_NV_chip")
};
class RB205_clone_snow_corporal: RB205_snow_base
{
	ACCESS_TRUE
	displayName = "(4-CP) Clone Snow Corporal";
	icon = ICON_NCO;
	uniformclass = "RB205_U_snow_corporal";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\snow\U_nco_upper_co.paa",
		"RB205_main\data\snow\U_nco_lower_co.paa",
		"RB205_main\data\snow\U_undersuit_co.paa"
	};
	LINKED_ITEMS("RB205_H_snow_corporal","RB205_V_snow_cp","RB205_NV_chip")
};
class RB205_clone_snow_sergeant: RB205_snow_base
{
	ACCESS_TRUE
	displayName = "(5-CS) Clone Snow Sergeant";
	icon = ICON_NCO;
	uniformclass = "RB205_U_snow_sergeant";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\snow\U_nco_upper_co.paa",
		"RB205_main\data\snow\U_nco_lower_co.paa",
		"RB205_main\data\snow\U_undersuit_co.paa"
	};
	LINKED_ITEMS("RB205_H_snow_sergeant","RB205_V_snow_cs","RB205_NV_chip")
};
class RB205_clone_snow_sergeantMajor: RB205_snow_base
{
	ACCESS_TRUE
	displayName = "(6-CSM) Clone Snow Sergeant-Major";
	icon = ICON_NCO;
	uniformclass = "RB205_U_snow_sergeant";
	LINKED_ITEMS("RB205_H_snow_sergeant","RB205_V_snow_csm","RB205_NV_chip")
	backpack = "RB205_B_radio_mini";
};
class RB205_clone_snow_lieutenant: RB205_snow_base
{
	ACCESS_TRUE
	displayName = "(7-CL) Clone Snow Lieutenant";
	icon = ICON_CO;
	uniformclass = "RB205_U_snow_lieutenant";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\snow\U_nco_upper_co.paa",
		"RB205_main\data\snow\U_nco_lower_co.paa",
		"RB205_main\data\snow\U_undersuit_co.paa"
	};
	LINKED_ITEMS("RB205_H_snow_lieutenant","RB205_V_snow_cl","RB205_NV_chip")
	backpack = "RB205_B_radio_mini";
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
	LINKED_ITEMS("RB205_H_arc_trooper","RB205_V_arc","RB205_NV_rangefinder")
	backpack="RB205_B_arc";
};

/*
	UNITS (COMBAT ROLES)
*/

class RB205_clone_trooper_aa: RB205_clone_trooper
{
	ACCESS_TRUE
	displayName = "Clone Trooper <AA>";
	icon = ICON_ROCKET;
	backpack = "RB205_B_rocket_predef_aa";
	weapons[] =
	{
		"RB205_DC15S",
		"RB205_PLX1_F",
		"RB205_DC17_alt",
		"RB205_binocular",
		"Throw","Put"
	};
	respawnweapons[] =
	{
		"RB205_DC15S",
		"RB205_PLX1_F",
		"RB205_DC17_alt",
		"RB205_binocular",
		"Throw","Put"
	};
	magazines[] =
	{
		ADD_INVENTORY_MAG_RIFLEMAN,
		"RB205_MK39_AA"
	};
	respawnmagazines[] =
	{
		ADD_INVENTORY_MAG_RIFLEMAN,
		"RB205_MK39_AA"
	};
};
class RB205_clone_trooper_at: RB205_clone_trooper
{
	ACCESS_TRUE
	displayName = "Clone Trooper <AT>";
	icon = ICON_ROCKET;
	backpack = "RB205_B_rocket_predef_at";
	weapons[] =
	{
		"RB205_DC15S",
		"RB205_RPS6",
		"RB205_DC17_alt",
		"RB205_binocular",
		"Throw","Put"
	};
	respawnweapons[] =
	{
		"RB205_DC15S",
		"RB205_RPS6",
		"RB205_DC17_alt",
		"RB205_binocular",
		"Throw","Put"
	};
	magazines[] =
	{
		ADD_INVENTORY_MAG_RIFLEMAN,
		"RB205_MAG_RPS6"
	};
	respawnmagazines[] =
	{
		ADD_INVENTORY_MAG_RIFLEMAN,
		"RB205_MAG_RPS6"
	};
};
class RB205_clone_trooper_eod: RB205_clone_trooper
{
	ACCESS_TRUE
	displayName = "Clone Trooper <EOD>";
	icon = ICON_EOD;
	backpack = "RB205_B_eod";
};
class RB205_clone_trooper_grenadier: RB205_clone_trooper
{
	ACCESS_TRUE
	displayName = "Clone Trooper <Grenadier>";
	LINKED_ITEMS("RB205_H_trooper","RB205_V_grenadier","RB205_NV_chip")
	weapons[] =
	{
		"RB205_DC15A_GL",
		"RB205_DC17_alt",,
		"RB205_binocular",
		"Throw","Put"
	};
	respawnweapons[] =
	{
		"RB205_DC15A_GL",
		"RB205_DC17_alt",,
		"RB205_binocular",
		"Throw","Put"
	};
	magazines[] =
	{
		ADD_INVENTORY_MAG_GRENADIER
	};
	respawnmagazines[] =
	{
		ADD_INVENTORY_MAG_GRENADIER
	};
};
class RB205_clone_trooper_heavy: RB205_clone_trooper
{
	ACCESS_TRUE
	displayName = "Clone Trooper <Heavy>";
	icon = ICON_HEAVY;
	backpack = "RB205_B_heavy";
	weapons[] =
	{
		"RB205_Z6",
		"RB205_DC17_alt",,
		"RB205_binocular",
		"Throw","Put"
	};
	respawnweapons[] =
	{
		"RB205_Z6",
		"RB205_DC17_alt",,
		"RB205_binocular",
		"Throw","Put"
	};
	magazines[] =
	{
		ADD_INVENTORY_MAG_HEAVY
	};
	respawnmagazines[] =
	{
		ADD_INVENTORY_MAG_HEAVY
	};
};
class RB205_clone_trooper_marksman: RB205_clone_trooper
{
	ACCESS_TRUE
	displayName = "Clone Trooper <Marksman>";
	LINKED_ITEMS("RB205_H_trooper","RB205_V_ct","RB205_NV_marksman")
	weapons[] =
	{
		"RB205_Valken38X",
		"RB205_DC17_alt",,
		"RB205_binocular",
		"Throw","Put"
	};
	respawnweapons[] =
	{
		"RB205_Valken38X",
		"RB205_DC17_alt",,
		"RB205_binocular",
		"Throw","Put"
	};
	magazines[] =
	{
		ADD_INVENTORY_MAG_MARKSMAN
	};
	respawnmagazines[] =
	{
		ADD_INVENTORY_MAG_MARKSMAN
	};
};
class RB205_clone_trooper_medic: RB205_clone_trooper
{
	ACCESS_TRUE
	displayName = "Clone Trooper <Medic>";
	icon = ICON_MEDIC;
	LINKED_ITEMS("RB205_H_trooper","RB205_V_medic","RB205_NV_chip")
	backpack = "RB205_B_medic";
};
class RB205_clone_trooper_rto: RB205_clone_trooper
{
	ACCESS_TRUE
	displayName = "Clone Trooper <RTO>";
	backpack = "RB205_B_radio";
};

class RB205_clone_ab_trooper_eod: RB205_clone_ab_trooper
{
	ACCESS_TRUE
	displayName = "Clone Airborne Trooper <EOD>";
	icon = ICON_EOD;
	backpack = "RB205_B_ab_eod";
};
class RB205_clone_ab_trooper_grenadier: RB205_clone_ab_trooper
{
	ACCESS_TRUE
	displayName = "Clone Airborne Trooper <Grenadier>";
	LINKED_ITEMS("RB205_H_ab_trooper","RB205_V_ab_grenadier","RB205_NV_chip")
	weapons[] =
	{
		"RB205_DC15C_GL",
		"RB205_DC17_alt",,
		"RB205_binocular",
		"Throw","Put"
	};
	respawnweapons[] =
	{
		"RB205_DC15C_GL",
		"RB205_DC17_alt",,
		"RB205_binocular",
		"Throw","Put"
	};
	magazines[] =
	{
		ADD_INVENTORY_MAG_GRENADIER
	};
	respawnmagazines[] =
	{
		ADD_INVENTORY_MAG_GRENADIER
	};
};
class RB205_clone_ab_trooper_heavy: RB205_clone_ab_trooper
{
	ACCESS_TRUE
	displayName = "Clone Airborne Trooper <Heavy>";
	icon = ICON_HEAVY;
	backpack = "RB205_B_ab_heavy";
	weapons[] =
	{
		"RB205_DC15L",
		"RB205_DC17_alt",,
		"RB205_binocular",
		"Throw","Put"
	};
	respawnweapons[] =
	{
		"RB205_DC15L",
		"RB205_DC17_alt",,
		"RB205_binocular",
		"Throw","Put"
	};
	magazines[] =
	{
		ADD_INVENTORY_MAG,
		ENUM_8("RB205_Heavy_Energy_Pack")
	};
	respawnmagazines[] =
	{
		ADD_INVENTORY_MAG,
		ENUM_8("RB205_Heavy_Energy_Pack")
	};
};
class RB205_clone_ab_trooper_marksman: RB205_clone_ab_trooper
{
	ACCESS_TRUE
	displayName = "Clone Airborne Trooper <Marksman>";
	weapons[] =
	{
		"RB205_Valken38X",
		"RB205_DC17_alt",,
		"RB205_binocular",
		"Throw","Put"
	};
	respawnweapons[] =
	{
		"RB205_Valken38X",
		"RB205_DC17_alt",,
		"RB205_binocular",
		"Throw","Put"
	};
	magazines[] =
	{
		ADD_INVENTORY_MAG_MARKSMAN
	};
	respawnmagazines[] =
	{
		ADD_INVENTORY_MAG_MARKSMAN
	};
};
class RB205_clone_ab_trooper_medic: RB205_clone_ab_trooper
{
	ACCESS_TRUE
	displayName = "Clone Airborne Trooper <Medic>";
	icon = ICON_MEDIC;
	LINKED_ITEMS("RB205_H_ab_trooper","RB205_V_ab_medic","RB205_NV_chip")
	backpack = "RB205_B_ab_medic";
};
class RB205_clone_ab_trooper_rto: RB205_clone_ab_trooper
{
	ACCESS_TRUE
	displayName = "Clone Airborne Trooper <RTO>";
	backpack = "RB205_B_ab_radio";
};

class RB205_clone_arf_trooper_medic: RB205_clone_arf_trooper
{
	ACCESS_TRUE
	displayName = "Clone ARF Trooper <Medic>";
	icon = ICON_MEDIC;
	LINKED_ITEMS("RB205_H_arf_trooper","RB205_V_arf_medic","RB205_NV_arf_antenna")
	backpack = "RB205_B_medic";
};
class RB205_clone_arf_trooper_sniper: RB205_clone_arf_trooper
{
	ACCESS_TRUE
	displayName = "Clone ARF Trooper <Sniper>";
	weapons[]=
	{
		"RB205_DC15X",
		"RB205_DC17_alt",,
		"RB205_binocular_arf",
		"Throw","Put"
	};
	respawnweapons[]=
	{
		"RB205_DC15X",
		"RB205_DC17_alt",,
		"RB205_binocular_arf",
		"Throw","Put"
	};
	magazines[]=
	{
		ADD_INVENTORY_MAG,
		ENUM_8("RB205_Overcharged_Energy_Pack")
	};
	respawnmagazines[]=
	{
		ADD_INVENTORY_MAG,
		ENUM_8("RB205_Overcharged_Energy_Pack")
	};
};

class RB205_clone_snow_trooper_aa: RB205_clone_snow_trooper
{
	ACCESS_TRUE
	displayName = "Clone Snow Trooper <AA>";
	icon = ICON_ROCKET;
	backpack = "RB205_B_snow_rocket_predef_aa";
	weapons[] =
	{
		"RB205_DC15A",
		"RB205_PLX1_F",
		"RB205_DC17_alt",
		"RB205_binocular",
		"Throw","Put"
	};
	respawnweapons[] =
	{
		"RB205_DC15A",
		"RB205_PLX1_F",
		"RB205_DC17_alt",
		"RB205_binocular",
		"Throw","Put"
	};
	magazines[] =
	{
		ADD_INVENTORY_MAG_RIFLEMAN,
		"RB205_MK39_AA"
	};
	respawnmagazines[] =
	{
		ADD_INVENTORY_MAG_RIFLEMAN,
		"RB205_MK39_AA"
	};
};
class RB205_clone_snow_trooper_at: RB205_clone_snow_trooper
{
	ACCESS_TRUE
	displayName = "Clone Snow Trooper <AT>";
	icon = ICON_ROCKET;
	backpack = "RB205_B_snow_rocket_predef_at";
	weapons[] =
	{
		"RB205_DC15A",
		"RB205_RPS6",
		"RB205_DC17_alt",
		"RB205_binocular",
		"Throw","Put"
	};
	respawnweapons[] =
	{
		"RB205_DC15A",
		"RB205_RPS6",
		"RB205_DC17_alt",
		"RB205_binocular",
		"Throw","Put"
	};
	magazines[] =
	{
		ADD_INVENTORY_MAG_RIFLEMAN,
		"RB205_MAG_RPS6"
	};
	respawnmagazines[] =
	{
		ADD_INVENTORY_MAG_RIFLEMAN,
		"RB205_MAG_RPS6"
	};
};
class RB205_clone_snow_trooper_eod: RB205_clone_snow_trooper
{
	ACCESS_TRUE
	displayName = "Clone Snow Trooper <EOD>";
	icon = ICON_EOD;
	backpack = "RB205_B_snow_eod";
};
class RB205_clone_snow_trooper_grenadier: RB205_clone_snow_trooper
{
	ACCESS_TRUE
	displayName = "Clone Snow Trooper <Grenadier>";
	LINKED_ITEMS("RB205_H_snow_trooper","RB205_V_snow_grenadier","RB205_NV_chip")
	weapons[] =
	{
		"RB205_DC15A_GL",
		"RB205_DC17_alt",,
		"RB205_binocular",
		"Throw","Put"
	};
	respawnweapons[] =
	{
		"RB205_DC15A_GL",
		"RB205_DC17_alt",,
		"RB205_binocular",
		"Throw","Put"
	};
	magazines[] =
	{
		ADD_INVENTORY_MAG_GRENADIER
	};
	respawnmagazines[] =
	{
		ADD_INVENTORY_MAG_GRENADIER
	};
};
class RB205_clone_snow_trooper_heavy: RB205_clone_snow_trooper
{
	ACCESS_TRUE
	displayName = "Clone Snow Trooper <Heavy>";
	icon = ICON_HEAVY;
	backpack = "RB205_B_snow_heavy";
	weapons[] =
	{
		"RB205_Z6",
		"RB205_DC17_alt",,
		"RB205_binocular",
		"Throw","Put"
	};
	respawnweapons[] =
	{
		"RB205_Z6",
		"RB205_DC17_alt",,
		"RB205_binocular",
		"Throw","Put"
	};
	magazines[] =
	{
		ADD_INVENTORY_MAG_HEAVY
	};
	respawnmagazines[] =
	{
		ADD_INVENTORY_MAG_HEAVY
	};
};
class RB205_clone_snow_trooper_marksman: RB205_clone_snow_trooper
{
	ACCESS_TRUE
	displayName = "Clone Snow Trooper <Marksman>";
	weapons[] =
	{
		"RB205_Valken38X",
		"RB205_DC17_alt",,
		"RB205_binocular",
		"Throw","Put"
	};
	respawnweapons[] =
	{
		"RB205_Valken38X",
		"RB205_DC17_alt",,
		"RB205_binocular",
		"Throw","Put"
	};
	magazines[] =
	{
		ADD_INVENTORY_MAG_MARKSMAN
	};
	respawnmagazines[] =
	{
		ADD_INVENTORY_MAG_MARKSMAN
	};
};
class RB205_clone_snow_trooper_medic: RB205_clone_snow_trooper
{
	ACCESS_TRUE
	displayName = "Clone Snow Trooper <Medic>";
	icon = ICON_MEDIC;
	LINKED_ITEMS("RB205_H_snow_trooper","RB205_V_snow_medic","RB205_NV_chip")
	backpack = "RB205_B_snow_medic";
};
class RB205_clone_snow_trooper_rto: RB205_clone_snow_trooper
{
	ACCESS_TRUE
	displayName = "Clone Snow Trooper <RTO>";
	backpack = "RB205_B_snow_radio";
};

/*
	BACKPACKS
*/

class RB205_B_heavy: RB205_B_heavy_base
{
	ACCESS_TRUE
	displayname = "[205] Clone Trooper Backpack <Heavy>";
	hiddenselectionstextures[] =
	{
		"RB205_main\data\default\B_default_co.paa",
		"RB205_main\data\default\B_cover_co.paa"
	};
};
class RB205_B_medic: RB205_B_medic_base
{
	ACCESS_TRUE
	displayname = "[205] Clone Trooper Backpack <Medic>";
	hiddenselectionstextures[] =
	{
		"RB205_main\data\default\B_medic_co.paa",
		"RB205_main\data\default\B_cover_co.paa",
		"RB205_main\data\default\B_medic_bacta_co.paa",
		"RB205_main\data\default\B_medic_bacta_co.paa"
	};
};
class RB205_B_rocket: RB205_B_rocket_base
{
	ACCESS_TRUE
	displayname = "[205] Clone Trooper Backpack <AT/AA>";	
	hiddenselectionstextures[] =
	{
		"RB205_main\data\default\B_default_co.paa",
		"RB205_main\data\default\B_rocket_holder_co.paa",
		"RB205_main\data\default\B_rocket_co.paa",
		"RB205_main\data\default\B_rocket_light_co.paa",
		""
	};
};
class RB205_B_eod: RB205_B_eod_base
{
	ACCESS_TRUE
	displayname = "[205] Clone Trooper Backpack <EOD>";
	hiddenselectionstextures[] =
	{
		"RB205_main\data\default\B_eod_co.paa",
		"RB205_main\data\default\B_cover_co.paa",
		"RB205_main\data\default\B_pouches_co.paa"
	};
};
class RB205_B_radio: RB205_B_radio_base
{
	ACCESS_TRUE
	displayname = "[205] Clone Trooper Backpack <RTO>";
	hiddenselectionstextures[] =
	{
		"RB205_main\data\default\B_default_co.paa",
		"RB205_main\data\default\B_radio_co.paa",
		"RB205_main\data\default\B_radio_screen_co.paa"
	};
};
class RB205_B_radio_mini: RB205_B_radio_mini_base
{
	ACCESS_TRUE
	displayname = "[205] Clone Trooper Radio Transmitter";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\B_radio_mini_co.paa",
		"RB205_main\data\default\B_radio_mini_acc_co.paa"
	};
};
class RB205_B_radio_mini_blk: RB205_B_radio_mini_base
{
	ACCESS_TRUE
	displayname = "[205] Clone Trooper Radio Transmitter (Black)";
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
	picture = "\RB205_main\data\ui\backpacks\icon_B_ab.paa";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\B_ab_jetpack_co.paa"
	};
};
class RB205_B_ab_heavy: RB205_B_ab_base
{
	ACCESS_TRUE
	displayname = "[205] Clone Airborne Trooper Jetpack <Heavy>";
	picture = "\RB205_main\data\ui\backpacks\icon_B_ab_heavy.paa";
	maximumload = INV_BACK;
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\B_ab_jetpack_co.paa"
	};
};
class RB205_B_ab_medic: RB205_B_ab_base
{
	ACCESS_TRUE
	displayname = "[205] Clone Airborne Trooper Jetpack <Medic>";
	picture = "\RB205_main\data\ui\backpacks\icon_B_ab_medic.paa";
	maximumload = INV_BACK_MEDIC;
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\B_ab_jetpack_medic_co.paa"
	};
};
class RB205_B_ab_rocket: RB205_B_ab_base
{
	ACCESS_TRUE
	displayname = "[205] Clone Airborne Trooper Jetpack <AT/AA>";
	picture = "\RB205_main\data\ui\backpacks\icon_B_ab_rocket.paa";
	maximumload = INV_BACK_ROCKET;
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\B_ab_jetpack_co.paa"
	};
};
class RB205_B_ab_eod: RB205_B_ab_base
{
	ACCESS_TRUE
	displayname = "[205] Clone Airborne Trooper Jetpack <EOD>";
	picture = "\RB205_main\data\ui\backpacks\icon_B_ab_eod.paa";
	maximumload = INV_BACK_EOD;
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\B_ab_jetpack_eod_co.paa"
	};
};
class RB205_B_ab_radio: RB205_B_ab_base
{
	ACCESS_TRUE
	displayname = "[205] Clone Airborne Trooper Jetpack <RTO>";
	picture = "\RB205_main\data\ui\backpacks\icon_B_ab_radio.paa";
	maximumload = INV_BACK_RADIO;
	TFAR_RADIO
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\B_ab_jetpack_co.paa"
	};
};

class RB205_B_arf: RB205_B_arf_base
{
	ACCESS_TRUE
	displayname = "[205] Clone ARF Trooper Backpack";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\B_arf_acc_co.paa",
		"",
		"",
		"RB205_main\data\arf\B_arf2_co.paa",
		"RB205_main\data\arf\B_arf_co.paa"
	};
};
class RB205_B_arf_arctic: RB205_B_arf_camo_base
{
	ACCESS_TRUE
	displayname = "[205] Clone ARF Trooper Backpack <Arctic>";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\B_arf_arctic_co.paa",
		"RB205_main\data\arf\B_arf_acc_camo_co.paa"
	};
};
class RB205_B_arf_desert: RB205_B_arf_camo_base
{
	ACCESS_TRUE
	displayname = "[205] Clone ARF Trooper Backpack <Desert>";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\B_arf_desert_co.paa",
		"RB205_main\data\arf\B_arf_acc_camo_co.paa"
	};
};
class RB205_B_arf_jungle: RB205_B_arf_camo_base
{
	ACCESS_TRUE
	displayname = "[205] Clone ARF Trooper Backpack <Jungle>";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\B_arf_jungle_co.paa",
		"RB205_main\data\arf\B_arf_acc_camo_co.paa"
	};
};
class RB205_B_arf_woodland: RB205_B_arf_camo_base
{
	ACCESS_TRUE
	displayname = "[205] Clone ARF Trooper Backpack <Woodland>";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\B_arf_woodland_co.paa",
		"RB205_main\data\arf\B_arf_acc_camo_co.paa"
	};
};

class RB205_B_snow_heavy: RB205_B_snow_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Backpack <Heavy>";
	picture = "\RB205_main\data\ui\backpacks\icon_B_snow_heavy.paa";
	maximumLoad = INV_BACK;
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
	picture = "\RB205_main\data\ui\backpacks\icon_B_snow_medic.paa";
	maximumLoad = INV_BACK_MEDIC;
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
	picture = "\RB205_main\data\ui\backpacks\icon_B_snow_rocket.paa";
	maximumLoad = INV_BACK_ROCKET;
};
class RB205_B_snow_eod: RB205_B_snow_heavy
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Backpack <EOD>";
	picture = "\RB205_main\data\ui\backpacks\icon_B_snow_eod.paa";
	maximumLoad = INV_BACK_EOD;
};
class RB205_B_snow_radio: RB205_B_snow_heavy
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Backpack <RTO>";
	picture = "\RB205_main\data\ui\backpacks\icon_B_snow_radio.paa";
	maximumLoad = INV_BACK_RADIO;
	TFAR_RADIO
};

class RB205_B_arc: RB205_B_arc_base
{
	ACCESS_TRUE
	displayname = "[205] Clone ARC Trooper Backpack";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arc\B_arc_co.paa"
	};
};
class RB205_B_arc_jetpack: RB205_B_ab_base
{
	ACCESS_TRUE
	displayname = "[205] Clone ARC Trooper Jetpack";
	maximumload = INV_BACK_SOF;
	TFAR_RADIO
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\B_ab_jetpack_co.paa"
	};
};

/*
	BACKPACKS (PRE-DEFINED / FILLED)
*/

#define HIDE_BACKPACK_PREDEF \
	scope = 1; \
	scopeArsenal = 0;

class RB205_B_rocket_predef_aa: RB205_B_rocket
{
	HIDE_BACKPACK_PREDEF
	class TransportMagazines
	{
		MAG_XX(RB205_MK39_AA, 4);
	};
};
class RB205_B_rocket_predef_at: RB205_B_rocket
{
	HIDE_BACKPACK_PREDEF
	class TransportMagazines
	{
		MAG_XX(RB205_MAG_RPS6, 4);
	};
};
class RB205_B_ab_rocket_predef_aa: RB205_B_ab_rocket
{
	HIDE_BACKPACK_PREDEF
	class TransportMagazines
	{
		MAG_XX(RB205_MK39_AA, 4);
	};
};
class RB205_B_ab_rocket_predef_at: RB205_B_ab_rocket
{
	HIDE_BACKPACK_PREDEF
	class TransportMagazines
	{
		MAG_XX(RB205_MAG_RPS6, 4);
	};
};class RB205_B_snow_rocket_predef_aa: RB205_B_snow_rocket
{
	HIDE_BACKPACK_PREDEF
	class TransportMagazines
	{
		MAG_XX(RB205_MK39_AA, 4);
	};
};
class RB205_B_snow_rocket_predef_at: RB205_B_snow_rocket
{
	HIDE_BACKPACK_PREDEF
	class TransportMagazines
	{
		MAG_XX(RB205_MAG_RPS6, 4);
	};
};