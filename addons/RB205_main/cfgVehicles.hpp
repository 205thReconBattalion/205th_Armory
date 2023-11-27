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