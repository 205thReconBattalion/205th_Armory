#include "cfgWeapons_baseClasses.hpp"

/*
	DEFAULT HELMETS
*/

class RB205_H_recruit: RB205_H_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Recruit Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\H_recruit_co.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\H_dft.rvmat",
		""
	};
};
class RB205_H_trooper: RB205_H_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\H_enl_co.paa",
		"RB205_main\data\default\visor_p2_co.paa"
	};
};
class RB205_H_corporal: RB205_H_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Helmet (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\H_nco_co.paa",
		"RB205_main\data\default\visor_p2_co.paa"
	};
};
class RB205_H_sergeant: RB205_H_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Helmet (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\H_nco_co.paa",
		"RB205_main\data\default\visor_p2_co.paa"
	};
};
class RB205_H_lieutenant: RB205_H_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Helmet (Lieutenant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\H_nco_co.paa",
		"RB205_main\data\default\visor_p2_co.paa"
	};
};

/*
	AIRBORNE HELMETS
*/

class RB205_H_ab_recruit: RB205_H_ab_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Airborne Recruit Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\H_ab_recruit_co.paa",
		"lsd_armor_bluefor\helmet\gar\airborne\data\visor_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\H_ab.rvmat",
		""
	};
};
class RB205_H_ab_trooper: RB205_H_ab_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Airborne Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\H_ab_enl_co.paa",
		"RB205_main\data\airborne\visor_ab_co.paa"
	};
};
class RB205_H_ab_corporal: RB205_H_ab_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Airborne Trooper Helmet (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\H_ab_nco_co.paa",
		"RB205_main\data\airborne\visor_ab_co.paa"
	};
};
class RB205_H_ab_sergeant: RB205_H_ab_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Airborne Trooper Helmet (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\H_ab_nco_co.paa",
		"RB205_main\data\airborne\visor_ab_co.paa"
	};
};
class RB205_H_ab_lieutenant: RB205_H_ab_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Airborne Trooper Helmet (Lieutenant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\H_ab_nco_co.paa",
		"RB205_main\data\airborne\visor_ab_co.paa"
	};
};

/*
	ARF HELMETS
*/

class RB205_H_arf_recruit: RB205_H_arf_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Recruit Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_recruit_co.paa",
		"",
		"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\H_arf.rvmat",
		"",
		""
	};
};
class RB205_H_arf_trooper: RB205_H_arf_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_enl_co.paa",
		"",
		"RB205_main\data\arf\visor_arf_co.paa"
	};
};
class RB205_H_arf_corporal: RB205_H_arf_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_nco_co.paa",
		"",
		"RB205_main\data\arf\visor_arf_co.paa"
	};
};
class RB205_H_arf_sergeant: RB205_H_arf_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_nco_co.paa",
		"",
		"RB205_main\data\arf\visor_arf_co.paa"
	};
};
class RB205_H_arf_lieutenant: RB205_H_arf_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet (Lieutenant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_nco_co.paa",
		"",
		"RB205_main\data\arf\visor_arf_co.paa"
	};
};

class RB205_H_arfF_trooper: RB205_H_arfF_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_enl_co.paa",
		"RB205_main\data\arf\H_arf_flaps_co.paa",
		"RB205_main\data\arf\visor_arf_co.paa"
	};
};
class RB205_H_arfF_corporal: RB205_H_arfF_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_nco_co.paa",
		"RB205_main\data\arf\H_arf_flaps_co.paa",
		"RB205_main\data\arf\visor_arf_co.paa"
	};
};
class RB205_H_arfF_sergeant: RB205_H_arfF_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_nco_co.paa",
		"RB205_main\data\arf\H_arf_flaps_co.paa",
		"RB205_main\data\arf\visor_arf_co.paa"
	};
};
class RB205_H_arfF_lieutenant: RB205_H_arfF_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet (Lieutenant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_nco_co.paa",
		"RB205_main\data\arf\H_arf_flaps_co.paa",
		"RB205_main\data\arf\visor_arf_co.paa"
	};
};

class RB205_H_arf_trooper_arctic: RB205_H_arf_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet <Arctic>";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_arctic_co.paa",
		"",
		"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\H_arf.rvmat",
		"",
		""
	};
};
class RB205_H_arf_trooper_desert: RB205_H_arf_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet <Desert>";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_desert_co.paa",
		"",
		"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\H_arf.rvmat",
		"",
		""
	};
};
class RB205_H_arf_trooper_jungle: RB205_H_arf_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet <Jungle>";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_jungle_co.paa",
		"",
		"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\H_arf.rvmat",
		"",
		""
	};
};
class RB205_H_arf_trooper_woodland: RB205_H_arf_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet <Woodland>";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_woodland_co.paa",
		"",
		"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\H_arf.rvmat",
		"",
		""
	};
};

/*
	PILOT HELMETS
*/

class RB205_H_plt_recruit: RB205_H_plt_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Pilot Recruit Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\pilot\H_plt_recruit_co.paa",
		"ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\H_plt.rvmat",
		""
	};
};
class RB205_H_plt_trooper: RB205_H_plt_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Pilot Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\pilot\H_plt_enl_co.paa",
		"RB205_main\data\pilot\visor_plt_co.paa"
	};
};
class RB205_H_plt_corporal: RB205_H_plt_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Pilot Trooper Helmet (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\pilot\H_plt_nco_co.paa",
		"RB205_main\data\pilot\visor_plt_co.paa"
	};
};
class RB205_H_plt_sergeant: RB205_H_plt_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Pilot Trooper Helmet (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\pilot\H_plt_nco_co.paa",
		"RB205_main\data\pilot\visor_plt_co.paa"
	};
};
class RB205_H_plt_lieutenant: RB205_H_plt_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Pilot Trooper Helmet (Lieutenant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\pilot\H_plt_nco_co.paa",
		"RB205_main\data\pilot\visor_plt_co.paa"
	};
};

/*
	SNOW HELMETS
*/

class RB205_H_snow_recruit: RB205_H_snow_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Recruit Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\snow\H_snow_recruit_co.paa"
	};
};
class RB205_H_snow_trooper: RB205_H_snow_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\snow\H_snow_enl_co.paa"
	};
};
class RB205_H_snow_corporal: RB205_H_snow_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Helmet (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\snow\H_snow_nco_co.paa"
	};
};
class RB205_H_snow_sergeant: RB205_H_snow_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Helmet (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\snow\H_snow_nco_co.paa"
	};
};
class RB205_H_snow_lieutenant: RB205_H_snow_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Helmet (Lieutenant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\snow\H_snow_cl_co.paa"
	};
};

/*
	ARC HELMET
*/

class RB205_H_arc_trooper: RB205_H_arc_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARC Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arc\H_arc_co.paa",
		"RB205_main\data\arc\visor_arc_co.paa",
		"RB205_main\data\arc\H_arc_co.paa"
	};
};

/*
	UNIFORMS
*/

class RB205_U_recruit: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Recruit Armor";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_recruit;
    };
};
class RB205_U_trooper: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Armor";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_trooper;
    };
};
class RB205_U_corporal: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Armor (Corporal)";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_corporal;
    };
};
class RB205_U_sergeant: RB205_U_sgt_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Armor (Sergeant)";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_sergeant;
    };
};
class RB205_U_lieutenant: RB205_U_lt_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Armor (Lieutenant)";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_lieutenant;
    };
};

class RB205_U_arf_trooper: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Armor";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_arf_trooper;
    };
};
class RB205_U_arf_corporal: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Armor (Corporal)";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_arf_corporal;
    };
};
class RB205_U_arf_sergeant: RB205_U_sgt_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Armor (Sergeant)";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_arf_sergeant;
    };
};
class RB205_U_arf_lieutenant: RB205_U_lt_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Armor (Lieutenant)";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_arf_lieutenant;
    };
};

class RB205_U_arf_trooper_arctic: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Armor <Arctic>";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_arf_trooper_arctic;
    };
};
class RB205_U_arf_trooper_desert: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Armor <Desert>";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_arf_trooper_desert;
    };
};
class RB205_U_arf_trooper_jungle: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Armor <Jungle>";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_arf_trooper_jungle;
    };
};
class RB205_U_arf_trooper_woodland: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Armor <Woodland>";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_arf_trooper_woodland;
    };
};

class RB205_U_plt_trooper: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Pilot Trooper Armor";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_plt_trooper;
    };
};
class RB205_U_plt_corporal: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Pilot Trooper Armor (Corporal)";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_plt_corporal;
    };
};
class RB205_U_plt_sergeant: RB205_U_sgt_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Pilot Trooper Armor (Sergeant)";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_plt_sergeant;
    };
};
class RB205_U_plt_lieutenant: RB205_U_lt_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Pilot Trooper Armor (Lieutenant)";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_plt_lieutenant;
    };
};

class RB205_U_snow_recruit: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Recruit Armor";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_snow_recruit;
    };
};
class RB205_U_snow_trooper: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Armor";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_snow_trooper;
    };
};
class RB205_U_snow_corporal: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Armor (Corporal)";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_snow_corporal;
    };
};
class RB205_U_snow_sergeant: RB205_U_sgt_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Armor (Sergeant)";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_snow_sergeant;
    };
};
class RB205_U_snow_lieutenant: RB205_U_lt_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Armor (Lieutenant)";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_snow_lieutenant;
    };
};

class RB205_U_arc_trooper: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARC Trooper Armor";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_arc_trooper;
    };
};

/*
	VESTS
*/

class RB205_V_ct: RB205_V_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Vest";
};
class RB205_V_clc: RB205_V_fireTeamLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Vest (Lance Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\V_clc_co.paa",
		"",
		"RB205_main\data\default\V_clc_co.paa",
		"RB205_main\data\default\V_clc_co.paa"
	};
};
class RB205_V_cp: RB205_V_fireTeamLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Vest (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\V_cp_co.paa",
		"",
		"RB205_main\data\default\V_cp_co.paa",
		"RB205_main\data\default\V_cp_co.paa"
	};
};
class RB205_V_cs: RB205_V_squadLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Vest (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\V_cs_co.paa",
		""
	};
};
class RB205_V_csm: RB205_V_platoonLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Vest (Sergeant-Major)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\V_csm_co.paa"
	};
};
class RB205_V_cl: RB205_V_platoonLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Vest (Lieutenant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\V_cl_co.paa"
	};
};

class RB205_V_medic: RB205_V_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Vest <Medic>";
	picture = "\RB205_main\data\ui\vests\icon_V_medic.paa";
	model = "\SWLB_clones\SWLB_clone_medic_armor.p3d";
	hiddenSelections[] =
	{
		"camo1"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\heavy_acc.rvmat"
	};
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\V_medic_co.paa"
	};
	class ItemInfo: ItemInfo
	{
		containerClass = INV_VEST_MEDIC;
		uniformModel = "\SWLB_clones\SWLB_clone_medic_armor.p3d";
		hiddenSelections[] = {"camo1"};
	};
};
class RB205_V_grenadier: RB205_V_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Vest <Grenadier>";
	picture = "\RB205_main\data\ui\vests\icon_V_grenadier.paa";
	model = "\SWLB_clones\SWLB_clone_grenadier_armor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\light_acc.rvmat",
		"RB205_main\data\materials\heavy_acc.rvmat"
	};
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\V_light_co.paa",
		"RB205_main\data\default\V_heavy_co.paa"
	};
	class ItemInfo: ItemInfo
	{
		containerClass = INV_VEST_GRENADIER;
		uniformModel = "\SWLB_clones\SWLB_clone_grenadier_armor.p3d";
		hiddenSelections[] = {"camo1","camo2"};
	};
};
class RB205_V_rebreather: RB205_V_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Vest <Rebreather>";
	picture = "\A3\characters_f\Data\UI\icon_V_RebreatherB_CA.paa";//TODO
	model = "\SWLB_CEE\data\SWLB_CEE_Lightweight_Rebreather.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"camo3"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\H_plt.rvmat",
		"RB205_main\data\materials\officer_acc.rvmat",
		"RB205_main\data\materials\heavy_acc.rvmat"
	};
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\V_rebreather1_co.paa",
		"RB205_main\data\default\V_rebreather2_co.paa",
		"RB205_main\data\default\V_heavy_co.paa"
	};
	class ItemInfo: ItemInfo
	{
		containerClass = INV_VEST_MEDIC; //TODO ???
		uniformModel = "\SWLB_CEE\data\SWLB_CEE_Lightweight_Rebreather.p3d";
		hiddenSelections[] = {"camo1","camo2","camo3"};
        vestType = "Rebreather";
	};
};

class RB205_V_ab_ct: RB205_V_ab_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Airborne Trooper Vest";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\V_ab_accessories_co.paa",
		"RB205_main\data\airborne\V_ab_ct_co.paa",
		"RB205_main\data\airborne\V_ab_accessories_co.paa"
	};
};
class RB205_V_ab_clc: RB205_V_ab_fireTeamLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Airborne Trooper Vest (Lance Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\V_ab_clc_co.paa",
		"RB205_main\data\airborne\V_ab_ct_co.paa",
		"RB205_main\data\airborne\V_ab_clc_co.paa",
		"RB205_main\data\airborne\V_ab_clc_co.paa"
	};
};
class RB205_V_ab_cp: RB205_V_ab_fireTeamLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Airborne Trooper Vest (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\V_ab_cp_co.paa",
		"RB205_main\data\airborne\V_ab_ct_co.paa",
		"RB205_main\data\airborne\V_ab_cp_co.paa",
		"RB205_main\data\airborne\V_ab_cp_co.paa"
	};
};
class RB205_V_ab_cs: RB205_V_ab_squadLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Airborne Trooper Vest (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\V_ab_accessories_co.paa",
		"RB205_main\data\airborne\V_ab_cs_co.paa",
		"RB205_main\data\airborne\V_ab_accessories_co.paa"
	};
};
class RB205_V_ab_csm: RB205_V_ab_platoonLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Airborne Trooper Vest (Sergeant-Major)";
	hiddenSelectionsTextures[]=
	{
		"RB205_main\data\airborne\V_ab_accessories_co.paa",
		"RB205_main\data\airborne\V_ab_accessories_co.paa",
		"RB205_main\data\airborne\V_ab_csm_co.paa",
		"RB205_main\data\airborne\V_ab_csm_co.paa",
		"RB205_main\data\airborne\V_ab_csm_co.paa"
	};
};
class RB205_V_ab_cl: RB205_V_ab_platoonLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Airborne Trooper Vest (Lieutenant)";
	hiddenSelectionsTextures[]=
	{
		"RB205_main\data\airborne\V_ab_accessories_co.paa",
		"RB205_main\data\airborne\V_ab_accessories_co.paa",
		"RB205_main\data\airborne\V_ab_cl_co.paa",
		"RB205_main\data\airborne\V_ab_cl_co.paa",
		"RB205_main\data\airborne\V_ab_cl_co.paa"
	};
};

class RB205_V_ab_medic: RB205_V_ab_ct
{
	ACCESS_TRUE
	displayName = "[205] Clone Airborne Trooper Vest <Medic>";
	picture = "\RB205_main\data\ui\vests\icon_V_ab_medic.paa";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\V_ab_medic_co.paa",
		"RB205_main\data\airborne\V_ab_ct_co.paa",
		"RB205_main\data\airborne\V_ab_medic_co.paa"
	};
	class ItemInfo: ItemInfo
	{
		containerClass = INV_VEST_MEDIC;
	};
};
class RB205_V_ab_grenadier: RB205_V_ab_ct
{
	ACCESS_TRUE
	displayName = "[205] Clone Airborne Trooper Vest <Grenadier>";
	picture = "\RB205_main\data\ui\vests\icon_V_ab_grenadier.paa";
	class ItemInfo: ItemInfo
	{
		containerClass = INV_VEST_GRENADIER;
	};
};

class RB205_V_arf_ct: RB205_V_arf_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Vest";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\V_arf_light_co.paa",
		"RB205_main\data\arf\V_arf_heavy_co.paa",
		"RB205_main\data\arf\V_arf_ct_co.paa"
	};
};
class RB205_V_arf_clc: RB205_V_fireTeamLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Vest (Lance Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\V_arf_clc_co.paa",
		"",
		"RB205_main\data\arf\V_arf_clc_co.paa",
		"RB205_main\data\arf\V_arf_clc_co.paa"
	};
};
class RB205_V_arf_cp: RB205_V_fireTeamLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Vest (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\V_arf_cp_co.paa",
		"",
		"RB205_main\data\arf\V_arf_cp_co.paa",
		"RB205_main\data\arf\V_arf_cp_co.paa"
	};
};
class RB205_V_arf_cs: RB205_V_squadLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Vest (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\V_arf_cs_co.paa",
		""
	};
};
class RB205_V_arf_csm: RB205_V_platoonLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Vest (Sergeant-Major)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\V_arf_csm_co.paa"
	};
};
class RB205_V_arf_cl: RB205_V_platoonLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Vest (Lieutenant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\V_arf_cl_co.paa"
	};
};

class RB205_V_arf_medic: RB205_V_medic
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Vest <Medic>";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\V_arf_medic_co.paa"
	};
};

class RB205_V_plt_ct: RB205_V_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Pilot Trooper Vest";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\pilot\V_plt_light_co.paa",
		"RB205_main\data\pilot\V_plt_heavy_co.paa",
		"RB205_main\data\pilot\V_plt_ct_co.paa"
	};
};
class RB205_V_plt_clc: RB205_V_fireTeamLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Pilot Trooper Vest (Lance Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\pilot\V_plt_clc_co.paa",
		"",
		"RB205_main\data\pilot\V_plt_clc_co.paa",
		"RB205_main\data\pilot\V_plt_clc_co.paa"
	};
};
class RB205_V_plt_cp: RB205_V_fireTeamLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Pilot Trooper Vest (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\pilot\V_plt_cp_co.paa",
		"",
		"RB205_main\data\pilot\V_plt_cp_co.paa",
		"RB205_main\data\pilot\V_plt_cp_co.paa"
	};
};
class RB205_V_plt_cs: RB205_V_squadLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Pilot Trooper Vest (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\pilot\V_plt_cs_co.paa",
		""
	};
};
class RB205_V_plt_csm: RB205_V_platoonLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Pilot Trooper Vest (Sergeant-Major)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\pilot\V_plt_csm_co.paa"
	};
};
class RB205_V_plt_cl: RB205_V_platoonLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Pilot Trooper Vest (Lieutenant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\pilot\V_plt_cl_co.paa"
	};
};

class RB205_V_snow_ct: RB205_V_snow_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Vest";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\snow\V_snow_ct_co.paa"
	};
};
class RB205_V_snow_clc: RB205_V_snow_fireTeamLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Vest (Lance Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\snow\V_snow_clc_co.paa"
	};
};
class RB205_V_snow_cp: RB205_V_snow_fireTeamLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Vest (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\snow\V_snow_cp_co.paa"
	};
};
class RB205_V_snow_cs: RB205_V_snow_squadLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Vest (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\snow\V_snow_cs_co.paa"
	};
};
class RB205_V_snow_csm: RB205_V_snow_platoonLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Vest (Sergeant-Major)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\snow\V_snow_csm_co.paa"
	};
};
class RB205_V_snow_cl: RB205_V_snow_platoonLead_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Vest (Lieutenant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\snow\V_snow_cl_co.paa"
	};
};

class RB205_V_snow_medic: RB205_V_snow_ct
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Vest <Medic>";
	picture = "\RB205_main\data\ui\vests\icon_V_snow_medic.paa";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\snow\V_snow_medic_co.paa"
	};
	class ItemInfo: ItemInfo
	{
		containerClass = INV_VEST_MEDIC;
	};
};
class RB205_V_snow_grenadier: RB205_V_snow_ct
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Vest <Grenadier>";
	picture = "\RB205_main\data\ui\vests\icon_V_snow_grenadier.paa";
	class ItemInfo: ItemInfo
	{
		containerClass = INV_VEST_GRENADIER;
	};
};

class RB205_V_arc: RB205_V_arc_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARC Trooper Vest";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arc\V_arc_accessories_co.paa",
		"RB205_main\data\arc\V_arc_co.paa"
	};
};

/*
	NIGHTVISION GOGGLES
*/

class RB205_NV: RB205_NV_visor_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper NV Visor";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\NV_default_co.paa"
	};
};

class RB205_NV_marksman: RB205_NV_visor2_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper NV Visor <Marksman>";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\NV_default_co.paa"
	};
};

class RB205_NV_rangefinder: RB205_NV_rangefinder_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Rangefinder";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\NV_default_co.paa"
	};
};

class RB205_NV_arf_antenna: RB205_NV_arf_antenna_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Antenna";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\NV_arf_co.paa"
	};
};

class RB205_NV_chip: RB205_NV_chip_base
{
	ACCESS_TRUE
	displayName = "[205] Integrated Nightvision";
};