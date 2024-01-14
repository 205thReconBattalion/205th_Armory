class cfgPatches
{
	class RB205_custom_doc
	{
		requiredAddons[] =
		{
			"RB205_main"
		};
		requiredVersion = 1.0;
		weapons[] =
        {
            "RB205_H_doc",
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
		displayName = "[205] Clone Trooper Helmet (7005)";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\7005_doc\data\H_doc.paa",
		    "RB205_main\data\default\visor_p2_co.paa"
        };
	};

    class RB205_H_arf_lieutenant;
    class RB205_H_arf_doc: RB205_H_arf_lieutenant
	{
		displayName = "[205] Clone ARF Trooper Helmet (7005)";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\7005_doc\data\H_doc_arf.paa",
            "",
		    "RB205_main\data\arf\visor_arf_co.paa"
        };
	};

    class RB205_V_cl;
    class RB205_V_doc: RB205_V_cl
    {
        displayName = "[205] Clone Trooper Vest (7005)";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\7005_doc\data\V_doc.paa"
        };
    };

    class RB205_U_lieutenant;
    class ItemInfo;
    class RB205_U_doc: RB205_U_lieutenant
    {
        displayName = "[205] Clone Trooper Uniform (7005)";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_doc;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_lieutenant;
    class RB205_clone_doc: RB205_clone_lieutenant
    {
        displayName = "CO-7005 Doc";
        uniformclass = "RB205_U_doc";
	    editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\7005_doc\data\U_doc_upper.paa",
            "RB205_custom\7005_doc\data\U_doc_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS(RB205_H_doc,"RB205_V_doc","RB205_NV_rangefinder")
	    backpack = "RB205_B_radio_mini";
    };
};