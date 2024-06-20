class cfgPatches
{
    class RB205_custom_akira
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_akira",
            "RB205_U_akira"
        };
        units[]	=
        {
            "RB205_clone_akira"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_plt_trooper;
    class RB205_H_akira: RB205_H_plt_trooper
    {
        displayName = "[205] Clone Pilot Trooper Helmet [1972]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\1972_akira\data\H_akira.paa",
            "RB205_main\data\pilot\visor_plt_co.paa"
        };
        class XtdGearInfo
        {
            model = "RB205_H_custom";
            id = "1972";
            var = "dft";
        };
    };

    class RB205_U_base;
    class RB205_U_plt_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_akira: RB205_U_plt_trooper
    {
        displayName = "[205] Clone Pilot Trooper Armor [1972]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_akira;
        };
        class XtdGearInfo
        {
            model = "RB205_U_custom";
            id = "1972";
            var = "dft";
        };
    };
};

class cfgVehicles
{
    class RB205_clone_plt_trooper;
    class RB205_clone_akira: RB205_clone_plt_trooper
    {
        displayName = "CSP-1972 Akira";
        uniformclass = "RB205_U_akira";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\1972_akira\data\U_akira_upper.paa",
            "RB205_custom\1972_akira\data\U_akira_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_akira","RB205_V_ct","RB205_NV_chip")
    };
};