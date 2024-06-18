class cfgPatches
{
    class RB205_main
	{
		requiredAddons[]=
		{
			/*"ls_armor_bluefor",
			"ls_equipment_bluefor",
			"lsd_armor_bluefor",
			"lsd_equipment_bluefor",
			"SWLB_equipment_backpacks",
			"JLTS_core",
			"JLTS_characters_CloneArmor2",
			"JLTS_jumppacks",
			//"LS_Armor" //by Last Force Project*/

			"lsd_armor_bluefor",
			"ls_armor_bluefor",
			"SWLB_clones",
			"SWLB_CEE",
			"lsd_equipment_bluefor",
			"3AS_Intel"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =
		{
			"RB205_H_recruit",
			"RB205_H_trooper",
			"RB205_H_corporal",
			"RB205_H_sergeant",
			"RB205_H_lieutenant",

			"RB205_H_ab_recruit",
			"RB205_H_ab_trooper",
			"RB205_H_ab_corporal",
			"RB205_H_ab_sergeant",
			"RB205_H_ab_lieutenant",

			"RB205_H_arf_recruit",
			"RB205_H_arf_trooper",
			"RB205_H_arf_corporal",
			"RB205_H_arf_sergeant",
			"RB205_H_arf_lieutenant",

			"RB205_H_arfF_trooper",
			"RB205_H_arfF_corporal",
			"RB205_H_arfF_sergeant",
			"RB205_H_arfF_lieutenant",
			
			"RB205_H_arf_trooper_arctic",
			"RB205_H_arf_trooper_desert",
			"RB205_H_arf_trooper_jungle",
			"RB205_H_arf_trooper_woodland",

			"RB205_H_plt_recruit",
			"RB205_H_plt_trooper",
			"RB205_H_plt_corporal",
			"RB205_H_plt_sergeant",
			"RB205_H_plt_lieutenant",

			"RB205_H_snow_recruit",
			"RB205_H_snow_trooper",
			"RB205_H_snow_corporal",
			"RB205_H_snow_sergeant",
			"RB205_H_snow_lieutenant",
			
			"RB205_H_arc_trooper",

			"RB205_U_recruit",
			"RB205_U_trooper",
			"RB205_U_corporal",
			"RB205_U_sergeant",
			"RB205_U_lieutenant",
			
			"RB205_U_arf_trooper",
			"RB205_U_arf_corporal",
			"RB205_U_arf_sergeant",
			"RB205_U_arf_lieutenant",

			"RB205_U_arf_trooper_arctic",
			"RB205_U_arf_trooper_desert",
			"RB205_U_arf_trooper_jungle",
			"RB205_U_arf_trooper_woodland",
			
			"RB205_U_plt_trooper",
			"RB205_U_plt_corporal",
			"RB205_U_plt_sergeant",
			"RB205_U_plt_lieutenant",
			
			"RB205_U_snow_recruit",
			"RB205_U_snow_trooper",
			"RB205_U_snow_corporal",
			"RB205_U_snow_sergeant",
			"RB205_U_snow_lieutenant",

			"RB205_U_arc_trooper",
			
			"RB205_V_ct",
			"RB205_V_clc",
			"RB205_V_cp",
			"RB205_V_cs",
			"RB205_V_csm",
			"RB205_V_cl",
			"RB205_V_medic",
			"RB205_V_grenadier",
			"RB205_V_rebreather",

			"RB205_V_ab_ct",
			"RB205_V_ab_clc",
			"RB205_V_ab_cp",
			"RB205_V_ab_cs",
			"RB205_V_ab_csm",
			"RB205_V_ab_cl",
			"RB205_V_ab_medic",
			"RB205_V_ab_grenadier",

			"RB205_V_arf_ct",
			"RB205_V_arf_clc",
			"RB205_V_arf_cp",
			"RB205_V_arf_cs",
			"RB205_V_arf_csm",
			"RB205_V_arf_cl",
			"RB205_V_arf_medic",

			"RB205_V_plt_ct",
			"RB205_V_plt_clc",
			"RB205_V_plt_cp",
			"RB205_V_plt_cs",
			"RB205_V_plt_csm",
			"RB205_V_plt_cl",

			"RB205_V_snow_ct",
			"RB205_V_snow_clc",
			"RB205_V_snow_cp",
			"RB205_V_snow_cs",
			"RB205_V_snow_csm",
			"RB205_V_snow_cl",
			"RB205_V_snow_medic",
			"RB205_V_snow_grenadier",

			"RB205_V_arc",

			"RB205_NV",
			"RB205_NV_marksman",
			"RB205_NV_rangefinder",
			"RB205_NV_arf_antenna",
			"RB205_NV_chip"
		};
		units[] =
		{
			"RB205_clone_recruit",
			"RB205_clone_trooper",
			"RB205_clone_lanceCorporal",
			"RB205_clone_corporal",
			"RB205_clone_sergeant",
			"RB205_clone_sergeantMajor",
			"RB205_clone_lieutenant",

			"RB205_clone_ab_recruit",
			"RB205_clone_ab_trooper",
			"RB205_clone_ab_lanceCorporal",
			"RB205_clone_ab_corporal",
			"RB205_clone_ab_sergeant",
			"RB205_clone_ab_sergeantMajor",
			"RB205_clone_ab_lieutenant",

			"RB205_clone_arf_recruit",
			"RB205_clone_arf_trooper",
			"RB205_clone_arf_lanceCorporal",
			"RB205_clone_arf_corporal",
			"RB205_clone_arf_sergeant",
			"RB205_clone_arf_sergeantMajor",
			"RB205_clone_arf_lieutenant",

			"RB205_clone_arf_trooper_arctic",
			"RB205_clone_arf_trooper_desert",
			"RB205_clone_arf_trooper_jungle",
			"RB205_clone_arf_trooper_woodland",

			"RB205_clone_plt_recruit",
			"RB205_clone_plt_trooper",
			"RB205_clone_plt_lanceCorporal",
			"RB205_clone_plt_corporal",
			"RB205_clone_plt_sergeant",
			"RB205_clone_plt_sergeantMajor",
			"RB205_clone_plt_lieutenant",

			"RB205_clone_snow_recruit",
			"RB205_clone_snow_trooper",
			"RB205_clone_snow_lanceCorporal",
			"RB205_clone_snow_corporal",
			"RB205_clone_snow_sergeant",
			"RB205_clone_snow_sergeantMajor",
			"RB205_clone_snow_lieutenant",

			"RB205_clone_arc_trooper",

			"RB205_B_heavy",
			"RB205_B_medic",
			"RB205_B_rocket",
			"RB205_B_eod",
			"RB205_B_radio",
			"RB205_B_radio_mini",
			"RB205_B_radio_mini_blk",

			"RB205_B_ab",
			"RB205_B_ab_heavy",
			"RB205_B_ab_medic",
			"RB205_B_ab_rocket",
			"RB205_B_ab_eod",
			"RB205_B_ab_radio",

			"RB205_B_arf",

			"RB205_B_arf_arctic",
			"RB205_B_arf_desert",
			"RB205_B_arf_jungle",
			"RB205_B_arf_woodland",

			"RB205_B_snow_heavy",
			"RB205_B_snow_medic",
			"RB205_B_snow_rocket",
			"RB205_B_snow_eod",
			"RB205_B_snow_radio",

			"RB205_B_arc",
			"RB205_B_arc_jetpack"
		};
	};
};

#include "\RB205_core\macros.hpp"
#include "macros.hpp"

class cfgWeapons
{
	#include "cfgWeapons.hpp"
};
class cfgVehicles
{
	#include "cfgVehicles.hpp"
};
class CfgGlasses
{
	#include "cfgGlasses.hpp"
};
#include "XtdGearModels.hpp"

class CfgFactionClasses
{
	class RB205
	{
		displayName = "205th Recon Battalion";
		ACCESS_TRUE
	};
};
class CfgEditorSubcategories
{
	class RB205_1AP
	{
		displayName = "1st Attack Platoon";
		ACCESS_TRUE
	};
	class RB205_70MRP
	{
		displayName = "70th Mobile Response Platoon";
		ACCESS_TRUE
	};
	class RB205_35HSP
	{
		displayName = "35th Heavy Support Platoon";
		ACCESS_TRUE
	};
};