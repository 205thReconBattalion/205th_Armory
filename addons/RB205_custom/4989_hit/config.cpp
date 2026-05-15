class cfgPatches
{
    class RB205_custom_hit
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_hit",
            "RB205_U_hit"
        };
        units[] =
        {
            "RB205_clone_hit"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_trooper;
    class RB205_H_hit : RB205_H_trooper
    {
        displayName = "[205] Clone Trooper Helmet [4989]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\4989_hit\data\H_hit.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_hit : RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [4989]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_hit;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_trooper;
    class RB205_clone_hit : RB205_clone_trooper
    {
        displayName = "CT-4989 Hit";
        uniformclass = "RB205_U_hit";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\4989_hit\data\U_hit_upper.paa",
            "RB205_custom\4989_hit\data\U_hit_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_hit", "RB205_V_ct", "RB205_NV_chip")
    };
};