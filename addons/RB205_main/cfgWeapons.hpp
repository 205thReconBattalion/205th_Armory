class ls_blueforHelmet_base;
class ls_gar_phase2_helmet: ls_blueforHelmet_base
{
	class ItemInfo;
};

class RB205_H_recruit: ls_gar_phase2_helmet
{
	ACCESS_TRUE
	displayName = "[205] Clone Recruit Helmet";
	picture = "\RB205_main\data\ui\icon_H_p2.paa";
	model = "\ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"visor"
	};
	hiddenSelectionsTextures[] =
	{
		"\RB205_main\data\H_recruit.paa",
		"\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
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