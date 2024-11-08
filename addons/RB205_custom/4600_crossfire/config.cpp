class cfgPatches
{
    class RB205_custom_crossfire
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_crossfire",
            "RB205_U_crossfire"
        };
        units[] =
        {
            "RB205_clone_crossfire"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_trooper;
    class RB205_H_crossfire : RB205_H_trooper
    {
        displayName = "[205] Clone Trooper Helmet [4600]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\4600_crossfire\data\H_crossfire.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_crossfire : RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [4600]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_crossfire;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_trooper;
    class RB205_clone_crossfire : RB205_clone_trooper
    {
        displayName = "CSP-4600 Crossfire";
        uniformclass = "RB205_U_crossfire";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\4600_crossfire\data\U_crossfire_upper.paa",
            "RB205_custom\4600_crossfire\data\U_crossfire_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_crossfire", "RB205_V_ct", "RB205_NV_chip")
    };
};