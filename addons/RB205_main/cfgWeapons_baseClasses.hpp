/*
	HELMETS
*/

#define HITPOINTS_HELMET \
class Head \
{ \
	hitpointName = "HitHead"; \
	armor = 10; \
	passThrough = 0.5; \
}; \
class Face \
{ \
	hitpointName = "HitFace"; \
	armor = 8; \
	passThrough = 0.5; \
};

class ls_blueforHelmet_base;
class lsd_blueforHelmet_base;

class lsd_gar_phase2_helmet: lsd_blueforHelmet_base
{
	class ItemInfo;
};
class RB205_H_base: lsd_gar_phase2_helmet
{
	ACCESS_FALSE
	author = "205th Recon Battalion";
	descriptionShort = "";
	picture = "\RB205_main\data\ui\helmets\icon_H_default.paa";
	model = "\lsd_armor_bluefor\helmet\gar\phase2\lsd_gar_phase2_helmet.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"visor"
	};
	ace_hearing_protection = ACE_HEARING_PROTECTION;
	ace_hearing_lowerVolume = ACE_HEARING_LOWER_VOLUME_DEFAULT;
	subItems[] = {};
	class ItemInfo: ItemInfo
	{
		mass = MASS_HELMET;
		allowedSlots[] = ALLOWED_SLOTS_HELMET;
		uniformModel = "lsd_armor_bluefor\helmet\gar\phase2\lsd_gar_phase2_helmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"camo1","visor"};
		class HitpointsProtectionInfo
		{
			HITPOINTS_HELMET
		};
	};
};

class lsd_gar_airborne_helmet: ls_blueforHelmet_base
{
	class ItemInfo;
};
class RB205_H_ab_base: lsd_gar_airborne_helmet
{
	ACCESS_FALSE
	author = "205th Recon Battalion";
	descriptionShort = "";
	picture = "\RB205_main\data\ui\helmets\icon_H_ab.paa";
	model = "\lsd_armor_bluefor\helmet\gar\airborne\lsd_gar_airborne_helmet.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"visor"
	};
	ace_hearing_protection = ACE_HEARING_PROTECTION;
	ace_hearing_lowerVolume = ACE_HEARING_LOWER_VOLUME_DEFAULT;
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

class ls_gar_phase1Arf_helmet: ls_blueforHelmet_base
{
	class ItemInfo;
};
class RB205_H_arf_base: ls_gar_phase1Arf_helmet
{
	ACCESS_FALSE
	author = "205th Recon Battalion";
	descriptionShort = "";
	picture = "\RB205_main\data\ui\helmets\icon_H_arf.paa";
	model = "\ls_armor_bluefor\helmet\gar\arf\ls_gar_arf_helmet.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"visor"
	};
	ace_hearing_protection = ACE_HEARING_PROTECTION;
	ace_hearing_lowerVolume = ACE_HEARING_LOWER_VOLUME_DEFAULT;
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
	author = "205th Recon Battalion";
	descriptionShort = "";
	picture = "\RB205_main\data\ui\helmets\icon_H_arfF.paa";
};

class ls_gar_phase2Pilot_helmet: ls_blueforHelmet_base
{
	class ItemInfo;
};
class RB205_H_plt_base: ls_gar_phase2Pilot_helmet
{
	ACCESS_FALSE
	author = "205th Recon Battalion";
	descriptionShort = "";
	picture = "\RB205_main\data\ui\helmets\icon_H_plt.paa";
	model = "ls_armor_bluefor\helmet\gar\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"visor"
	};
	ace_hearing_protection = ACE_HEARING_PROTECTION;
	ace_hearing_lowerVolume = ACE_HEARING_LOWER_VOLUME_PILOT;
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
	author = "205th Recon Battalion";
	descriptionShort = "";
	picture = "\RB205_main\data\ui\helmets\icon_H_snow.paa";
	model = "ls_armor_bluefor\helmet\gar\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d";
	hiddenSelections[] =
	{
		"Camo1"
	};
	ace_hearing_protection = ACE_HEARING_PROTECTION;
	ace_hearing_lowerVolume = ACE_HEARING_LOWER_VOLUME_DEFAULT;
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

class lsd_gar_arc_helmet: lsd_blueforHelmet_base
{
	class ItemInfo;
};
class RB205_H_arc_base: lsd_gar_arc_helmet
{
	ACCESS_FALSE
	author = "205th Recon Battalion";
	descriptionShort = "";
	picture = "\RB205_main\data\ui\helmets\icon_H_arc.paa";
	model = "\lsd_armor_bluefor\helmet\gar\arc\lsd_gar_arc_helmet";
	hiddenSelections[] =
	{
		"camo1",
		"visor",
		"illum"
	};
	ace_hearing_protection = ACE_HEARING_PROTECTION;
	ace_hearing_lowerVolume = ACE_HEARING_LOWER_VOLUME_DEFAULT;
	subItems[] = {};
	class ItemInfo: ItemInfo
	{
		mass = MASS_HELMET;
		allowedSlots[] = ALLOWED_SLOTS_HELMET;
		uniformModel = "\lsd_armor_bluefor\helmet\gar\arc\lsd_gar_arc_helmet";
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
	author = "205th Recon Battalion";
	descriptionShort = "";
	picture = "\RB205_main\data\ui\uniforms\icon_U_default.paa";
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

class V_PlateCarrier1_rgr;
class SWLB_clone_basic_armor: V_PlateCarrier1_rgr
{
	class ItemInfo;
};
class RB205_V_base: SWLB_clone_basic_armor
{
	ACCESS_FALSE
	author = "205th Recon Battalion";
	descriptionShort = "";
	picture = "\RB205_main\data\ui\vests\icon_V_default.paa";
	model = "\SWLB_clones\SWLB_clone_basic_armor.p3d";
	class ItemInfo: ItemInfo
	{
		mass = MASS_VEST_ENL;
		containerClass = INV_VEST_ENL;
		uniformModel = "\SWLB_clones\SWLB_clone_basic_armor.p3d";
		hiddenSelections[] = {};
		class HitpointsProtectionInfo
		{
			
		};
	};
};
class RB205_V_fireTeamLead_base: RB205_V_base
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
	class ItemInfo: ItemInfo
	{
		mass = MASS_VEST_NCO;
		containerClass = INV_VEST_NCO;
		uniformModel = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
		hiddenSelections[] = {"camo1","camo2","holster","pauldron"};
		class HitpointsProtectionInfo
		{
			
		};
	};
};
class RB205_V_squadLead_base: RB205_V_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\vests\icon_V_squadLead.paa";
	model = "\SWLB_clones\SWLB_clone_kama_armor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"rank"
	};
	class ItemInfo: ItemInfo
	{
		mass = MASS_VEST_NCO;
		containerClass = INV_VEST_NCO;
		uniformModel = "\SWLB_clones\SWLB_clone_kama_armor.p3d";
		hiddenSelections[] = {"camo1","rank"};
		class HitpointsProtectionInfo
		{
			class Legs
			{
				hitpointName="HitLegs";
				armor=6;
				passThrough=0.30000001;
			};
		};
	};
};
class RB205_V_platoonLead_base: RB205_V_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\vests\icon_V_platoonLead.paa";
	model = "\SWLB_clones\SWLB_clone_officer_armor.p3d";
	hiddenSelections[] =
	{
		"camo1"
	};
	class ItemInfo: ItemInfo
	{
		mass = MASS_VEST_CO;
		containerClass = INV_VEST_CO;
		uniformModel = "\SWLB_clones\SWLB_clone_officer_armor.p3d";
		hiddenSelections[] = {"camo1"};
		class HitpointsProtectionInfo
		{
			class Chest
			{
				HitpointName="HitChest";
				armor=10;
				PassThrough=0.30000001;
			};
			class Arms
			{
				hitpointName="HitArms";
				armor=4;
				passThrough=0.30000001;
			};
			class Legs
			{
				hitpointName="HitLegs";
				armor=6;
				passThrough=0.30000001;
			};
		};
	};
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
	model = "\armor_unit\21\21st_Vest_V2.p3d";
	hiddenSelections[] =
	{
		"Camo1"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\armor_unit\21\21st_Vest_V2.p3d";
		hiddenSelections[] = {"Camo1"};
        vestType = "Rebreather";
	};
};
class RB205_V_snow_fireTeamLead_base: RB205_V_fireTeamLead_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\vests\icon_V_snow.paa";
	model = "\armor_unit\21\21st_Vest_V2.p3d";
	hiddenSelections[] =
	{
		"Camo1"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\armor_unit\21\21st_Vest_V2.p3d";
		hiddenSelections[] = {"Camo1"};
        vestType = "Rebreather";
	};
};
class RB205_V_snow_squadLead_base: RB205_V_squadLead_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\vests\icon_V_snow.paa";
	model = "\armor_unit\21\21st_Vest_V2.p3d";
	hiddenSelections[] =
	{
		"Camo1"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\armor_unit\21\21st_Vest_V2.p3d";
		hiddenSelections[] = {"Camo1"};
        vestType = "Rebreather";
	};
};
class RB205_V_snow_platoonLead_base: RB205_V_platoonLead_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\vests\icon_V_snow.paa";
	model = "\armor_unit\21\21st_Vest_V2.p3d";
	hiddenSelections[] =
	{
		"Camo1"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\armor_unit\21\21st_Vest_V2.p3d";
		hiddenSelections[] = {"Camo1"};
        vestType = "Rebreather";
	};
};

class RB205_V_arc_base: RB205_V_base
{
	ACCESS_FALSE
	picture = "\RB205_main\data\ui\vests\icon_V_arc.paa";
	model = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
		hiddenSelections[] = {"camo1","camo2"};
        vestType = "Rebreather";
		class HitpointsProtectionInfo
		{
			class Chest
			{
				HitpointName="HitChest";
				armor=30;
				PassThrough=0.30000001;
			};
			class Arms
			{
				hitpointName="HitArms";
				armor=6;
				passThrough=0.30000001;
			};
			class Legs
			{
				hitpointName="HitLegs";
				armor=6;
				passThrough=0.30000001;
			};
		};
	};
};
