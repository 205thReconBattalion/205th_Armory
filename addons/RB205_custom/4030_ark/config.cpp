class cfgPatches
{
    class RB205_custom_ark
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_ark",
            "RB205_U_ark"
        };
        units[] =
        {
            "RB205_clone_ark"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_trooper;
    class RB205_H_ark : RB205_H_trooper
    {
        displayName = "[205] Clone Trooper Helmet [4030]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\4030_ark\data\H_ark.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_ark : RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [4030]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_ark;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_trooper;
    class RB205_clone_ark : RB205_clone_trooper
    {
        displayName = "CSP-4030 Ark";
        uniformclass = "RB205_U_ark";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\4030_ark\data\U_ark_upper.paa",
            "RB205_custom\4030_ark\data\U_ark_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_ark", "RB205_V_ct", "RB205_NV_chip")
    };
};