class cfgPatches
{
	class RB205_custom_doc
	{
		requiredAddons[] =
		{
			"RB205_main",
            "RB205_custom"
		};
		requiredVersion = 1.0;
		weapons[] =
        {
            "RB205_H_doc",
            "RB205_H_doc_damaged",
            "RB205_H_arf_doc",
            "RB205_U_doc",
            "RB205_V_doc"
        };
		units[]	=
        {
            "RB205_clone_doc"
        };
	};
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_lieutenant;
	class RB205_H_doc: RB205_H_lieutenant
	{
		displayName = "[205] Clone Trooper Helmet [7005]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\7005_doc\data\H_doc.paa",
		    "RB205_main\data\default\visor_p2_co.paa"
        };
	};
	class RB205_H_doc_damaged: RB205_H_lieutenant
	{
		displayName = "[205] Clone Trooper Helmet [7005] (Damaged)";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\7005_doc\data\H_doc_damaged.paa",
		    "RB205_main\data\default\visor_p2_co.paa"
        };
	};
    class RB205_H_arf_lieutenant;
    class RB205_H_arf_doc: RB205_H_arf_lieutenant
	{
		displayName = "[205] Clone ARF Trooper Helmet [7005]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\7005_doc\data\H_doc_arf.paa",
            "",
		    "RB205_main\data\arf\visor_arf_co.paa"
        };
	};

    class RB205_U_base;
    class RB205_U_cpt_base: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_doc: RB205_U_cpt_base
    {
        ACCESS_TRUE
        displayName = "[205] Clone Trooper Armor [7005]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_doc;
        };
    };
    class RB205_vest_co_base;
    class RB205_V_platoonLead_base: RB205_vest_co_base
    {
        class ItemInfo;
    };
    class RB205_V_doc: RB205_V_platoonLead_base
    {
        ACCESS_TRUE
        displayName = "[205] Clone Trooper Vest [7005]";
        model = "\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
        hiddenSelections[] =
        {
            "camo1",
            "camo2"
        };
        hiddenSelectionsMaterials[]=
        {
            "RB205_main\data\materials\heavy_acc.rvmat",
            "RB205_main\data\materials\officer_acc.rvmat"
        };
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\7005_doc\data\V_doc_accessories.paa",
            "RB205_custom\7005_doc\data\V_doc.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones\SWLB_clone_recon_officer_armor.p3d";
            hiddenSelections[] = {"camo1","camo2"};
        };
    };
};

class cfgVehicles
{
    class RB205_clone_captain;
    class RB205_clone_doc: RB205_clone_captain
    {
        ACCESS_TRUE
        displayName = "CO-7005 Doc";
        uniformclass = "RB205_U_doc";
        model = "ls_armor_bluefor\uniform\gar\marshalCommander\ls_gar_marshalCommander_uniform.p3d";
	    editorSubCategory = "RB205_lore";
        hiddenselectionsMaterials[] =
        {
            "RB205_main\data\materials\U_upper2.rvmat",
            "RB205_main\data\materials\U_lower.rvmat",
            "RB205_main\data\materials\U_undersuit.rvmat"
        };
        hiddenselectionsTextures[] =
        {
            "RB205_custom\7005_doc\data\U_doc_upper.paa",
            "RB205_custom\7005_doc\data\U_doc_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_doc","RB205_V_doc","RB205_NV_chip")
        identityTypes[] = IDENTITY_TYPES_GLASSES("RB205_VIS_doc");
    };
};

class CfgGlasses
{
    class RB205_VIS;
    class RB205_VIS_doc: RB205_VIS
    {
        displayName = "[205] Clone Visor [7005]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\7005_doc\data\VIS_doc.paa",
            "",
            ""
        };
        identityTypes[] = { "RB205_VIS_doc",1 };
    };
    class RB205_VIS_doc_damaged: RB205_VIS
    {
        displayName = "[205] Clone Visor [7005] (Damaged)";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\7005_doc\data\VIS_doc_damaged.paa",
            "",
            ""
        };
        identityTypes[] = { "RB205_VIS_doc_damaged",1 };
    };
};