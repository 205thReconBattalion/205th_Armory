class cfgPatches
{
    class RB205_custom_recker
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_recker",
            "RB205_U_recker"
        };
        units[]	=
        {
            "RB205_clone_recker"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_plt_trooper;
    class RB205_H_recker: RB205_H_plt_trooper
    {
        displayName = "[205] Clone Pilot Trooper Helmet [4562]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\4562_recker\data\H_recker.paa",
            "RB205_main\data\pilot\visor_plt_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_plt_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_recker: RB205_U_plt_trooper
    {
        displayName = "[205] Clone Pilot Trooper Armor [4562]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_recker;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_plt_trooper;
    class RB205_clone_recker: RB205_clone_plt_trooper
    {
        displayName = "CSP-4562 Recker";
        uniformclass = "RB205_U_recker";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\4562_recker\data\U_recker_upper.paa",
            "RB205_custom\4562_recker\data\U_recker_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_recker","RB205_V_ct","RB205_NV_chip")
    };
};