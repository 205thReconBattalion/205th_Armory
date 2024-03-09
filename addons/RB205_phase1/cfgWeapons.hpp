#include "cfgWeapons_baseClasses.hpp"

class SW205_H_p1_trooper: RB205_H_p1_base
{
	ACCESS_TRUE
	displayName = "[SW] Clone Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_phase1\data\unmarked\H_p1_ct_co.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_phase1\data\materials\H_p1_dft.rvmat",
		"",
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
	};
	class XtdGearInfo
	{
		model = "SW205_H";
		type = "dft";
		rank = "ct";
	};
};
class SW205_H_p1_sergeant: RB205_H_p1_base
{
	ACCESS_TRUE
	displayName = "[SW] Clone Sergeant Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_phase1\data\unmarked\H_p1_cs_co.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_phase1\data\materials\H_p1_dft.rvmat",
		"",
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
	};
	class XtdGearInfo
	{
		model = "SW205_H";
		type = "dft";
		rank = "cs";
	};
};
class SW205_H_p1_lieutenant: RB205_H_p1_base
{
	ACCESS_TRUE
	displayName = "[SW] Clone Lieutenant Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_phase1\data\unmarked\H_p1_cl_co.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_phase1\data\materials\H_p1_dft.rvmat",
		"",
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
	};
	class XtdGearInfo
	{
		model = "SW205_H";
		type = "dft";
		rank = "cl";
	};
};
class SW205_H_p1_captain: RB205_H_p1_base
{
	ACCESS_TRUE
	displayName = "[SW] Clone Captain Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_phase1\data\unmarked\H_p1_co_co.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_phase1\data\materials\H_p1_dft.rvmat",
		"",
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
	};
	class XtdGearInfo
	{
		model = "SW205_H";
		type = "dft";
		rank = "co";
	};
};
class SW205_H_p1_commander: RB205_H_p1_base
{
	ACCESS_TRUE
	displayName = "[SW] Clone Commander Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_phase1\data\unmarked\H_p1_cc_co.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
		"ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_phase1\data\materials\H_p1_dft.rvmat",
		"",
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
	};
	class XtdGearInfo
	{
		model = "SW205_H";
		type = "dft";
		rank = "cc";
	};
};

class RB205_H_arf_base;
class SW205_H_p1_arf: RB205_H_arf_base
{
	ACCESS_TRUE
	displayName = "[SW] Clone ARF Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_phase1\data\unmarked\H_p1_arf_co.paa",
		"",
		"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\H_arf.rvmat",
		"",
		""
	};
	class XtdGearInfo
	{
		model = "SW205_H";
		type = "arf";
		rank = "ct";
	};
};

class SW205_H_p1_plt: RB205_H_p1_plt_base
{
	ACCESS_TRUE
	displayName = "[SW] Clone Pilot Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_phase1\data\unmarked\H_p1_plt_co.paa",
		"RB205_phase1\data\unmarked\H_p1_plt2_co.paa",
		"ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_phase1\data\materials\H_p1_plt.rvmat",
		"RB205_phase1\data\materials\H_p1_plt2.rvmat",
		""
	};
	class XtdGearInfo
	{
		model = "SW205_H";
		type = "plt";
		rank = "ct";
	};
};


class ls_gar_phase2_uniform;
class RB205_U_base: ls_gar_phase2_uniform
{
	class ItemInfo;
}
class SW205_U_p1_trooper: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[SW] Clone Trooper Armor";
	class ItemInfo: ItemInfo
    {
        uniformClass = SW205_clone_p1_trooper;
    };
	class XtdGearInfo
	{
		model = "SW205_U";
		rank = "ct";
	};
};
class RB205_U_sgt_base: RB205_U_base
{
	class ItemInfo;
}
class SW205_U_p1_sergeant: RB205_U_sgt_base
{
	ACCESS_TRUE
	displayName = "[SW] Clone Sergeant Armor";
	class ItemInfo: ItemInfo
    {
        uniformClass = SW205_clone_p1_sergeant;
    };
	class XtdGearInfo
	{
		model = "SW205_U";
		rank = "cs";
	};
};
class RB205_U_lt_base: RB205_U_base
{
	class ItemInfo;
}
class SW205_U_p1_lieutenant: RB205_U_lt_base
{
	ACCESS_TRUE
	displayName = "[SW] Clone Lieutenant Armor";
	class ItemInfo: ItemInfo
    {
        uniformClass = SW205_clone_p1_lieutenant;
    };
	class XtdGearInfo
	{
		model = "SW205_U";
		rank = "cl";
	};
};
class RB205_U_cpt_base: RB205_U_base
{
	class ItemInfo;
}
class SW205_U_p1_captain: RB205_U_cpt_base
{
	ACCESS_TRUE
	displayName = "[SW] Clone Captain Armor";
	class ItemInfo: ItemInfo
    {
        uniformClass = SW205_clone_p1_captain;
    };
	class XtdGearInfo
	{
		model = "SW205_U";
		rank = "co";
	};
};
class RB205_U_com_base: RB205_U_base
{
	class ItemInfo;
}
class SW205_U_p1_commander: RB205_U_com_base
{
	ACCESS_TRUE
	displayName = "[SW] Clone Commander Armor";
	class ItemInfo: ItemInfo
    {
        uniformClass = SW205_clone_p1_commander;
    };
	class XtdGearInfo
	{
		model = "SW205_U";
		rank = "cc";
	};
};