class cfgPatches
{
    class RB205_custom_silver
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_silver",
            "RB205_U_silver"
        };
        units[]	=
        {
            "RB205_clone_silver"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_ab_trooper;
    class RB205_H_silver: RB205_H_ab_trooper
    {
        displayName = "[205] Clone Airborne Trooper Helmet [1504]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\1504_silver\data\H_silver.paa",
            "RB205_main\data\airborne\visor_ab_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_silver: RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [1504]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_silver;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_ab_trooper;
    class RB205_clone_silver: RB205_clone_ab_trooper
    {
        displayName = "CT-1504 Silver";
        uniformclass = "RB205_U_silver";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\1504_silver\data\U_silver_upper.paa",
            "RB205_custom\1504_silver\data\U_silver_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_silver","RB205_V_ab_ct","RB205_NV_chip")
    };
};