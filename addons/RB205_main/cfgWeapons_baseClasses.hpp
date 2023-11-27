/*
	HELMETS
*/

class ls_blueforHelmet_base;

class ls_gar_phase2_helmet: ls_blueforHelmet_base
{
	class ItemInfo;
};
class RB205_H_base: ls_gar_phase2_helmet
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\icon_H_default.paa";
	model = "\ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"visor"
	};
	subItems[] = {};
	class ItemInfo: ItemInfo
	{
		mass = MASS_HELMET;
		allowedSlots[] = ALLOWED_SLOTS_HELMET;
		uniformModel = "\ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"camo1","visor"};
		class HitpointsProtectionInfo
		{
			HITPOINTS_HELMET
		};
	};
};

class ls_gar_phase1Arf_helmet: ls_blueforHelmet_base
{
	class ItemInfo;
};
class RB205_H_arf_base: ls_gar_phase1Arf_helmet
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\icon_H_arf.paa";
	model = "\ls_armor_bluefor\helmet\gar\arf\ls_gar_arf_helmet.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"visor"
	};
	subItems[] = {};
	class ItemInfo: ItemInfo
	{
		mass = MASS_HELMET;
		allowedSlots[] = ALLOWED_SLOTS_HELMET;
		uniformModel = "\ls_armor_bluefor\helmet\gar\arf\ls_gar_arf_helmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"camo1","camo2","visor"};
		class HitpointsProtectionInfo
		{
			HITPOINTS_HELMET
		};
	};
};
class RB205_H_arfF_base: RB205_H_arf_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\icon_H_arfF.paa";
};

class lsd_gar_airborne_helmet: ls_blueforHelmet_base
{
	class ItemInfo;
};
class RB205_H_ab_base: lsd_gar_airborne_helmet
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\icon_H_ab.paa";
	model = "\lsd_armor_bluefor\helmet\gar\airborne\lsd_gar_airborne_helmet.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"visor"
	};
	subItems[] = {};
	class ItemInfo: ItemInfo
	{
		mass = MASS_HELMET;
		allowedSlots[] = ALLOWED_SLOTS_HELMET;
		uniformModel = "\lsd_armor_bluefor\helmet\gar\airborne\lsd_gar_airborne_helmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"camo1","visor"};
		class HitpointsProtectionInfo
		{
			HITPOINTS_HELMET
		};
	};
};

class ls_gar_phase2Pilot_helmet: ls_blueforHelmet_base
{
	class ItemInfo;
};
class RB205_H_plt_base: ls_gar_phase2Pilot_helmet
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\icon_H_plt.paa";
	model = "ls_armor_bluefor\helmet\gar\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"visor"
	};
	subItems[] = {};
	class ItemInfo: ItemInfo
	{
		mass = MASS_HELMET;
		allowedSlots[] = ALLOWED_SLOTS_HELMET;
		uniformModel = "ls_armor_bluefor\helmet\gar\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"camo1","visor"};
		class HitpointsProtectionInfo
		{
			HITPOINTS_HELMET
		};
	};
};

class ls_gar_phase2Insulated_helmet: ls_blueforHelmet_base
{
	class ItemInfo;
};
class RB205_H_snow_base: ls_gar_phase2Insulated_helmet
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\icon_H_snow.paa";
	model = "ls_armor_bluefor\helmet\gar\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d";
	hiddenSelections[] =
	{
		"Camo1"
	};
	subItems[] = {};
	class ItemInfo: ItemInfo
	{
		mass = MASS_HELMET;
		allowedSlots[] = ALLOWED_SLOTS_HELMET;
		uniformModel = "ls_armor_bluefor\helmet\gar\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		class HitpointsProtectionInfo
		{
			HITPOINTS_HELMET
		};
	};
};

class ls_gar_arc_helmet: ls_blueforHelmet_base
{
	class ItemInfo;
};
class RB205_H_arc_base: ls_gar_arc_helmet
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\icon_H_arc.paa";
	model = "\ls_armor_bluefor\helmet\gar\arc\ls_gar_arc_helmet.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"visor",
		"illum"
	};
	subItems[] = {};
	class ItemInfo: ItemInfo
	{
		mass = MASS_HELMET;
		allowedSlots[] = ALLOWED_SLOTS_HELMET;
		uniformModel = "\ls_armor_bluefor\helmet\gar\arc\ls_gar_arc_helmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"camo1","visor","illum"};
		class HitpointsProtectionInfo
		{
			HITPOINTS_HELMET
		};
	};
};

/*
	UNIFORMS
*/

class ls_blueforUniform_base;

class ls_gar_phase2_uniform: ls_blueforUniform_base
{
	class ItemInfo;
};
class RB205_U_base: ls_gar_phase2_uniform
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\icon_U_default.paa";
	model = "\ls_armor_bluefor\uniform\gar\phase2\ls_gar_phase2_uniform_groundholder.p3d";
	class ItemInfo: ItemInfo
	{
		mass = MASS_UNIFORM;
		containerClass = INV_UNIFORM;
		uniformClass = "RB205_clone_base";
		uniformModel = "-";
        uniformType = "Neopren";
	};
};

/*

*/

class V_PlateCarrier1_rgr;

class SWLB_clone_basic_armor: V_PlateCarrier1_rgr
{
	class ItemInfo;
};
class RB205_V_base: SWLB_clone_basic_armor
{
	picture = "\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
	model = "\SWLB_clones\SWLB_clone_basic_armor.p3d";
	class ItemInfo: ItemInfo
	{
		mass = MASS_VEST_ENL;
		containerClass = INV_VEST_ENL;
		uniformModel = "\SWLB_clones\SWLB_clone_basic_armor.p3d";
		hiddenSelections[] = {};
		class HitpointsProtectionInfo
		{
			HITPOINTS_VEST_ENLISTED
		};
	};
};

class SWLB_clone_recon_armor: SWLB_clone_basic_armor
{
	class ItemInfo;
};
class RB205_V_fireTeamLead_base: SWLB_clone_recon_armor
{
	picture = "\SWLB_clones\data\ui\icon_SWLB_clone_recon_armor_ca.paa";
	model = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
	class ItemInfo: ItemInfo
	{
		mass = MASS_VEST_NCO;
		containerClass = INV_VEST_NCO;
		uniformModel = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
		hiddenSelections[] = {"camo1","camo2","holster","pauldron"};
		class HitpointsProtectionInfo
		{
			HITPOINTS_VEST_FIRETEAMLEAD
		};
	};
};

class SWLB_clone_kama_armor: SWLB_clone_basic_armor
{
	class ItemInfo;
};
class RB205_V_squadLead_base: SWLB_clone_kama_armor
{
	picture = "\SWLB_clones\data\ui\icon_SWLB_clone_kama_armor_ca.paa";
	model = "\SWLB_clones\SWLB_clone_kama_armor.p3d";
	class ItemInfo: ItemInfo
	{
		mass = MASS_VEST_NCO;
		containerClass = INV_VEST_NCO;
		uniformModel = "\SWLB_clones\SWLB_clone_kama_armor.p3d";
		hiddenSelections[] = {"camo1","rank"};
		class HitpointsProtectionInfo
		{
			HITPOINTS_VEST_SQUADLEAD
		};
	};
};

class SWLB_clone_officer_armor: SWLB_clone_basic_armor
{
	class ItemInfo;
};
class RB205_V_platoonLead_base: SWLB_clone_officer_armor
{
	picture = "\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";
	model = "\SWLB_clones\SWLB_clone_officer_armor.p3d";
	class ItemInfo: ItemInfo
	{
		mass = MASS_VEST_CO;
		containerClass = INV_VEST_CO;
		uniformModel = "\SWLB_clones\SWLB_clone_officer_armor.p3d";
		hiddenSelections[] = {"camo1"};
		class HitpointsProtectionInfo
		{
			HITPOINTS_VEST_PLATOONLEAD
		};
	};
};