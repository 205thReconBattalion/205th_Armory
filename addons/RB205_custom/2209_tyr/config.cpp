class cfgPatches
{
    class RB205_custom_tyr
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_tyr",
            "RB205_U_tyr"
        };
        units[] =
        {
            "RB205_clone_tyr"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_trooper;
    class RB205_H_tyr : RB205_H_trooper
    {
        displayName = "[205] Clone Trooper Helmet [2209]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\2209_tyr\data\H_tyr.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_tyr : RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [2209]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_tyr;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_trooper;
    class RB205_clone_tyr : RB205_clone_trooper
    {
        displayName = "CSP-2209 Tyr";
        uniformclass = "RB205_U_tyr";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\2209_tyr\data\U_tyr_upper.paa",
            "RB205_custom\2209_tyr\data\U_tyr_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_tyr", "RB205_V_ct", "RB205_NV_chip")
    };
};