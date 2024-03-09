class ls_blueforHelmet_base;
class ls_gar_phase1_helmet: ls_blueforHelmet_base
{
	class ItemInfo;
};
class RB205_H_p1_base: ls_gar_phase1_helmet
{
	ACCESS_FALSE
	author = "205th Recon Battalion";
	descriptionShort = "";
	picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase1_helmet_ca.paa";
	model = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"visor",
		"illum"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_phase1\data\materials\H_p1_dft.rvmat",
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
	};
	ace_hearing_protection = ACE_HEARING_PROTECTION;
	ace_hearing_lowerVolume = ACE_HEARING_LOWER_VOLUME_DEFAULT;
	subItems[] = {};
	identityTypes[] = {"LanguageENG_F","SWLB_JH_Head_Hair"};
	class ItemInfo: ItemInfo
	{
		mass = MASS_HELMET;
		allowedSlots[] = ALLOWED_SLOTS_HELMET;
		uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"camo1","visor","illum"};
		class HitpointsProtectionInfo
		{
			HITPOINTS_HELMET
		};
	};
};

class ls_gar_phase1Pilot_helmet: ls_blueforHelmet_base
{
	class ItemInfo;
};
class RB205_H_p1_plt_base: ls_gar_phase1Pilot_helmet
{
	ACCESS_FALSE
	author = "205th Recon Battalion";
	descriptionShort = "";
	picture = "\ls_data\icons\LS_logo_ca.paa";
	model = "ls_armor_bluefor\helmet\gar\phase1Pilot\ls_gar_phase1Pilot_helmet.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"visor"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_phase1\data\materials\H_p1_plt.rvmat",
		"RB205_phase1\data\materials\H_p1_plt2.rvmat",
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
	};
	ace_hearing_protection = ACE_HEARING_PROTECTION;
	ace_hearing_lowerVolume = ACE_HEARING_LOWER_VOLUME_PILOT;
	subItems[] = {};
	identityTypes[] = {"LanguageENG_F","SWLB_JH_Head_Hair"};
	class ItemInfo: ItemInfo
	{
		mass = MASS_HELMET;
		allowedSlots[] = ALLOWED_SLOTS_HELMET;
		uniformModel = "ls_armor_bluefor\helmet\gar\phase1Pilot\ls_gar_phase1Pilot_helmet.p3d";
		modelSides[] = {6};
		hiddenSelections[] = {"camo1","camo2","visor"};
		class HitpointsProtectionInfo
		{
			HITPOINTS_HELMET
		};
	};
};