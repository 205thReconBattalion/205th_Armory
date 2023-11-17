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
class RB205_H_trooper: RB205_H_recruit
{
	displayName = "[205] Clone Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"\RB205_main\data\H_enlisted.paa",
		"\RB205_main\data\visor_p2.paa"
	};
};
class RB205_H_corporal: RB205_H_trooper
{
	displayName = "[205] Clone Trooper Helmet (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"\RB205_main\data\H_nco.paa",
		"\RB205_main\data\visor_p2.paa"
	};
};
class RB205_H_sergeant: RB205_H_corporal
{
	displayName = "[205] Clone Trooper Helmet (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"\RB205_main\data\H_nco.paa",
		"\RB205_main\data\visor_p2.paa"
	};
};
class RB205_H_lieutenant: RB205_H_sergeant
{
	displayName = "[205] Clone Trooper Helmet (Lieutenant)";
	hiddenSelectionsTextures[] =
	{
		"\RB205_main\data\H_nco.paa",
		"\RB205_main\data\visor_p2.paa"
	};
};