/*
	HELMETS
*/

class help_helmet_base;
class RB205_helmet_base: help_helmet_base
{
	class ItemInfo;
};
class RB205_H_base: RB205_helmet_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\helmets\icon_H_default.paa";
	model = "\lsd_armor_bluefor\helmet\gar\phase2\lsd_gar_phase2_helmet.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"visor"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\H_dft.rvmat",
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "lsd_armor_bluefor\helmet\gar\phase2\lsd_gar_phase2_helmet.p3d";
		hiddenSelections[] = {"camo1","visor"};
	};
};

class RB205_H_ab_base: RB205_helmet_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\helmets\icon_H_ab.paa";
	model = "\lsd_armor_bluefor\helmet\gar\airborne\lsd_gar_airborne_helmet.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"visor"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\H_ab.rvmat",
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\lsd_armor_bluefor\helmet\gar\airborne\lsd_gar_airborne_helmet.p3d";
		hiddenSelections[] = {"camo1","visor"};
	};
};

class RB205_H_arf_base: RB205_helmet_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\helmets\icon_H_arf.paa";
	model = "\ls_armor_bluefor\helmet\gar\arf\ls_gar_arf_helmet.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"visor"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\H_arf.rvmat",
		"",
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\ls_armor_bluefor\helmet\gar\arf\ls_gar_arf_helmet.p3d";
		hiddenSelections[] = {"camo1","camo2","visor"};
	};
};
class RB205_H_arfF_base: RB205_H_arf_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\helmets\icon_H_arfF.paa";
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\H_arf.rvmat",
		"RB205_main\data\materials\H_arf_flaps.rvmat",
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
	};
};

class RB205_H_plt_base: RB205_helmet_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\helmets\icon_H_plt.paa";
	model = "ls_armor_bluefor\helmet\gar\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"visor"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\H_plt.rvmat",
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
	};
	ace_hearing_lowerVolume = ACE_HEARING_VOLUME_LOWERED;
	class ItemInfo: ItemInfo
	{
		uniformModel = "ls_armor_bluefor\helmet\gar\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
		hiddenSelections[] = {"camo1","visor"};
	};
};

//crewman/ engineer

class RB205_H_snow_base: RB205_helmet_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\helmets\icon_H_snow.paa";
	model = "ls_armor_bluefor\helmet\gar\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d";
	hiddenSelections[] =
	{
		"Camo1"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\H_snow.rvmat"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "ls_armor_bluefor\helmet\gar\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d";
		hiddenSelections[] = {"Camo1"};
	};
};

//hazard

class RB205_H_arc_base: RB205_helmet_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\helmets\icon_H_arc.paa";
	model = "\lsd_armor_bluefor\helmet\gar\arc\lsd_gar_arc_helmet";
	hiddenSelections[] =
	{
		"camo1",
		"visor",
		"illum"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\H_arc.rvmat",
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\lsd_armor_bluefor\helmet\gar\arc\lsd_gar_arc_helmet";
		hiddenSelections[] = {"camo1","visor","illum"};
	};
};

class RB205_H_barc_base: RB205_helmet_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\helmets\icon_H_barc.paa";
	model = "\ls_armor_bluefor\helmet\gar\barc\ls_gar_barc_helmet.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"visor"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\H_barc.rvmat",
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "ls_armor_bluefor\helmet\gar\barc\ls_gar_barc_helmet.p3d";
		hiddenSelections[] = {"camo1","visor"};
	};
};

/*
	UNIFORMS
*/

class help_uniform_base;
class RB205_uniform_base: help_uniform_base
{
	class ItemInfo;
};

class RB205_U_base: RB205_uniform_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\uniforms\icon_U_default.paa";
	model = "\ls_armor_bluefor\uniform\gar\phase2\ls_gar_phase2_uniform_groundholder.p3d";
	class ItemInfo: ItemInfo
	{
		uniformClass = "RB205_clone_base";
        uniformType = "Neopren";
	};
};
class RB205_U_sgt_base: RB205_U_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\uniforms\icon_U_sergeant.paa";
};
class RB205_U_lt_base: RB205_U_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\uniforms\icon_U_lieutenant.paa";
};
class RB205_U_cpt_base: RB205_U_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\uniforms\icon_U_captain.paa";
};
class RB205_U_com_base: RB205_U_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\uniforms\icon_U_commander.paa";
};

/*
	VESTS
*/

/*class V_PlateCarrier1_rgr;
class SWLB_clone_basic_armor: V_PlateCarrier1_rgr
{
	class ItemInfo;
};*/
class help_vest_base;
class RB205_vest_base: help_vest_base
{
	class ItemInfo;
};
class RB205_vest_nco_base: RB205_vest_base
{
	class ItemInfo;
};
class RB205_vest_co_base: RB205_vest_base
{
	class ItemInfo;
};

class RB205_V_base: RB205_vest_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\vests\icon_V_default.paa";
	model = "\SWLB_clones\SWLB_clone_basic_armor.p3d";
	class ItemInfo: ItemInfo
	{
		uniformModel = "\SWLB_clones\SWLB_clone_basic_armor.p3d";
		hiddenSelections[] = {};
	};
};
class RB205_V_fireTeamLead_base: RB205_vest_nco_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\vests\icon_V_fireTeamLead.paa";
	model = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"holster",
		"pauldron"
	};
	hiddenSelectionsMaterials[]=
	{
		"RB205_main\data\materials\heavy_acc.rvmat",
		"RB205_main\data\materials\heavy_acc.rvmat",
		"RB205_main\data\materials\heavy_acc_holster.rvmat",
		"RB205_main\data\materials\heavy_acc.rvmat"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
		hiddenSelections[] = {"camo1","camo2","holster","pauldron"};
	};
};
class RB205_V_squadLead_base: RB205_vest_nco_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\vests\icon_V_squadLead.paa";
	model = "\SWLB_clones\SWLB_clone_kama_armor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"rank"
	};
	hiddenSelectionsMaterials[]=
	{
		"RB205_main\data\materials\officer_acc.rvmat",
		""
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\SWLB_clones\SWLB_clone_kama_armor.p3d";
		hiddenSelections[] = {"camo1","rank"};
	};
};
class RB205_V_platoonLead_base: RB205_vest_co_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\vests\icon_V_platoonLead.paa";
	model = "\SWLB_clones\SWLB_clone_officer_armor.p3d";
	hiddenSelections[] =
	{
		"camo1"
	};
	hiddenSelectionsMaterials[]=
	{
		"RB205_main\data\materials\officer_acc.rvmat"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\SWLB_clones\SWLB_clone_officer_armor.p3d";
		hiddenSelections[] = {"camo1"};
	};
};
class RB205_V_commander_base: RB205_V_platoonLead_base
{
	ACCESS_FALSE
	//TODO: V_companyLead ???
};

class RB205_V_ab_base: RB205_V_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\vests\icon_V_ab.paa";
	model = "\SWLB_clones\SWLB_clone_airborne_armor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"ammo",
		"pauldron"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\heavy_acc.rvmat",
		"RB205_main\data\materials\officer_acc.rvmat",
		"RB205_main\data\materials\heavy_acc.rvmat",
		""
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\SWLB_clones\SWLB_clone_airborne_armor.p3d";
		hiddenSelections[] = {"camo1","camo2","ammo","pauldron"};
	};
};
class RB205_V_ab_fireTeamLead_base: RB205_V_fireTeamLead_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\vests\icon_V_ab.paa";
	model = "\SWLB_clones\SWLB_clone_medic_armor.p3d";
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"ammo",
		"pauldron"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\heavy_acc.rvmat",
		"RB205_main\data\materials\officer_acc.rvmat",
		"RB205_main\data\materials\heavy_acc.rvmat",
		"RB205_main\data\materials\heavy_acc.rvmat"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\SWLB_clones\SWLB_clone_airborne_armor.p3d";
		hiddenSelections[] = {"camo1","camo2","ammo","pauldron"};
	};
};
class RB205_V_ab_squadLead_base: RB205_V_squadLead_base
{
	ACCESS_FALSE
	model = "\SWLB_clones\SWLB_clone_airborne_armor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"ammo",
		"pauldron"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\heavy_acc.rvmat",
		"RB205_main\data\materials\officer_acc.rvmat",
		"RB205_main\data\materials\heavy_acc.rvmat",
		""
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\SWLB_clones\SWLB_clone_airborne_armor.p3d";
		hiddenSelections[] = {"camo1","camo2","ammo","pauldron"};
	};
};
class RB205_V_ab_platoonLead_base: RB205_V_platoonLead_base
{
	ACCESS_FALSE
	model = "ls_armor_bluefor\vest\gar\airborneOfficer\ls_gar_airborneOfficer_vest.p3d";
	hiddenSelections[] =
	{
		"ammo",
		"camo1",
		"camo2",
		"camo3",
		"pauldron"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\heavy_acc.rvmat",
		"RB205_main\data\materials\heavy_acc.rvmat",
		"RB205_main\data\materials\officer_acc.rvmat",
		"RB205_main\data\materials\officer_acc.rvmat",
		"RB205_main\data\materials\officer_acc.rvmat"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "ls_armor_bluefor\vest\gar\airborneOfficer\ls_gar_airborneOfficer_vest.p3d";
		hiddenSelections[] = {"ammo","camo1","camo2","camo3","pauldron"};
	};
};

class RB205_V_arf_base: RB205_V_base
{
	ACCESS_FALSE
	model = "\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"camo3"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\light_acc.rvmat",
		"RB205_main\data\materials\heavy_acc.rvmat",
		"RB205_main\data\materials\officer_acc.rvmat"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
		hiddenSelections[] = {"camo1","camo2","camo3"};
	};
};

class RB205_V_snow_base: RB205_V_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\vests\icon_V_snow.paa";
	model = "\LFP_marine\vest.p3d";
	hiddenSelections[] =
	{
		"Camo1"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\V_snow.rvmat"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\LFP_marine\vest.p3d";
		hiddenSelections[] = {"Camo1"};
	};
};
class RB205_V_snow_fireTeamLead_base: RB205_V_fireTeamLead_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\vests\icon_V_snow.paa";
	model = "\LFP_marine\vest.p3d";
	hiddenSelections[] =
	{
		"Camo1"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\V_snow.rvmat"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\LFP_marine\vest.p3d";
		hiddenSelections[] = {"Camo1"};
	};
};
class RB205_V_snow_squadLead_base: RB205_V_squadLead_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\vests\icon_V_snow.paa";
	model = "\LFP_marine\vest.p3d";
	hiddenSelections[] =
	{
		"Camo1"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\V_snow.rvmat"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\LFP_marine\vest.p3d";
		hiddenSelections[] = {"Camo1"};
	};
};
class RB205_V_snow_platoonLead_base: RB205_V_platoonLead_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\vests\icon_V_snow.paa";
	model = "\LFP_marine\vest.p3d";
	hiddenSelections[] =
	{
		"Camo1"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\V_snow.rvmat"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\LFP_marine\vest.p3d";
		hiddenSelections[] = {"Camo1"};
	};
};

class RB205_V_arc_base: RB205_vest_co_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\vests\icon_V_arc.paa";
	model = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\V_arc.rvmat",
		"RB205_main\data\materials\officer_acc.rvmat"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
		hiddenSelections[] = {"camo1","camo2"};
        vestType = "Rebreather";
	};
};

/*
	NIGHTVISION GOGGLES
*/

class help_nvg_base;
class RB205_nvg_base: help_nvg_base
{
	class ItemInfo;
};
class RB205_nvg_ti_base: RB205_nvg_base
{
	class ItemInfo;
};

class RB205_NV_visor_base: RB205_nvg_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\other\icon_NV.paa";
	model = "\lsd_equipment_bluefor\accessories\gar\visor\lsd_gar_visor_nvg_on.p3d";
	modelOptics = MODEL_OPTICS_NV_VISOR;
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\NV_dft.rvmat"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\lsd_equipment_bluefor\accessories\gar\visor\lsd_gar_visor_nvg_on.p3d";
		modelOff = "\lsd_equipment_bluefor\accessories\gar\visor\lsd_gar_visor_nvg_off.p3d";
		hiddenSelections[] = {"camo1","camo2"};
	};
};
class RB205_NV_visor2_base: RB205_nvg_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\other\icon_NV_marksman.paa";
	model = "\lsd_equipment_bluefor\accessories\gar\visor\lsd_gar_visor_nvg_on.p3d";
	modelOptics = MODEL_OPTICS_NV_VISOR;
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\NV_dft.rvmat"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\lsd_equipment_bluefor\accessories\gar\visor\lsd_gar_visor_nvg_on.p3d";
		modelOff = "\lsd_equipment_bluefor\accessories\gar\visor\lsd_gar_visor_nvg_on.p3d";
		hiddenSelections[] = {"camo1","camo2"};
	};
};
class RB205_NV_rangefinder_base: RB205_nvg_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\other\icon_NV_rangefinder.paa";
	model = "\lsd_equipment_bluefor\accessories\gar\lsd_gar_rangefinder_nvg_on.p3d";
	modelOptics = MODEL_OPTICS_RANGEFINDER;
	hiddenSelections[] =
	{
		"camo1"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\NV_dft.rvmat"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\lsd_equipment_bluefor\accessories\gar\rangefinder\lsd_gar_rangefinder_nvg_on.p3d";
		modelOff = "\lsd_equipment_bluefor\accessories\gar\rangefinder\lsd_gar_rangefinder_nvg_off.p3d";
		hiddenSelections[] = {"camo1"};
	};
};
class RB205_NV_arf_antenna_base: RB205_nvg_ti_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\other\icon_NV_arf.paa";
	model = "\SWLB_equipment\facewears\helmet_ARF_antenna.p3d";
	modelOptics = MODEL_OPTICS;
	hiddenSelections[] = {};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\SWLB_equipment\facewears\helmet_ARF_antenna.p3d";
		modelOff = "\SWLB_equipment\facewears\helmet_ARF_antenna.p3d";
		hiddenSelections[] = {};
	};
};
class RB205_NV_chip_base: RB205_nvg_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\other\icon_NV_chip.paa";
	model = "3AS\3AS_props\intel\model\datachip.p3d";
	modelOptics = MODEL_OPTICS;
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
		modelOff = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
		hiddenSelections[] = {};
	};
};