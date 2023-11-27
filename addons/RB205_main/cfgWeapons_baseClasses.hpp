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