class cfgPatches
{
	class RB205_custom_lucky
	{
		requiredAddons[] =
		{
			"RB205_main",
            "RB205_custom"
		};
		requiredVersion = 1.0;
		weapons[] =
        {
            "RB205_H_lucky",
            "RB205_H_plt_lucky",
            "RB205_U_lucky",
            "RB205_V_lucky",
            "RB205_VIS_lucky"
        };
		units[]	=
        {
            "RB205_clone_lucky"
        };
	};
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_lieutenant;
	class RB205_H_lucky: RB205_H_lieutenant
	{
		displayName = "[205] Clone Trooper Helmet [2058]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\2058_lucky\data\H_lucky.paa",
		    "RB205_main\data\default\visor_p2_co.paa"
        };
        class XtdGearInfo
        {
            model = "RB205_H_custom";
            id = "2058";
            var = "dft";
        };
	};
    class RB205_H_plt_lieutenant;
	class RB205_H_plt_lucky: RB205_H_plt_lieutenant
	{
		displayName = "[205] Clone Pilot Trooper Helmet [2058]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\2058_lucky\data\H_lucky_plt.paa",
		    "RB205_main\data\pilot\visor_plt_co.paa"
        };
        class XtdGearInfo
        {
            model = "RB205_H_custom";
            id = "2058";
            var = "var1";
        };
	};

    class RB205_U_lieutenant;
    class ItemInfo;
    class RB205_U_lucky: RB205_U_lieutenant
    {
        displayName = "[205] Clone Trooper Armor [2058]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_lucky;
        };
        class XtdGearInfo
        {
            model = "RB205_U_custom";
            id = "2058";
            var = "dft";
        };
    };

    class RB205_V_cl;
    class RB205_V_lucky: RB205_V_cl
    {
        displayName = "[205] Clone Trooper Vest [2058]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\2058_lucky\data\V_lucky.paa"
        };
        class XtdGearInfo
        {
            model = "RB205_V_custom";
            id = "2058";
            var = "dft";
        };
    };
};

class cfgVehicles
{
    class RB205_clone_lieutenant;
    class RB205_clone_lucky: RB205_clone_lieutenant
    {
        displayName = "CL-2058 Lucky";
        uniformclass = "RB205_U_lucky";
	    editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\2058_lucky\data\U_lucky_upper.paa",
            "RB205_custom\2058_lucky\data\U_lucky_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS(RB205_H_lucky,"RB205_V_lucky","RB205_NV_chip")
	    backpack = "RB205_B_radio_mini_blk";
        identityTypes[]={"LanguageENG_F","SWLB_JH_Head_Hair","RB205_VIS_lucky"};
    };
};

class CfgGlasses
{
    class RB205_VIS;
    class RB205_VIS_lucky: RB205_VIS
    {
        displayName = "[205] Clone Visor [2058]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\2058_lucky\data\VIS_lucky.paa",
            "",
            ""
        };
        identityTypes[] = { "RB205_VIS_lucky",1 };
        /*class XtdGearInfo
        {
            model = "RB205_G_custom";
            type = "2058";
            var = "dft";
        };*/
    };
};