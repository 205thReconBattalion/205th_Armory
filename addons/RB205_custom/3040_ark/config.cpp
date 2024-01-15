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
        displayName = "[205] Clone Trooper Helmet [3040]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\3040_ark\data\H_ark.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
    };

    class RB205_U_trooper;
    class ItemInfo;
    class RB205_U_ark : RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [3040]";
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
        displayName = "CSP-3040 Ark";
        uniformclass = "RB205_U_ark";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\3040_ark\data\U_ark_upper.paa",
            "RB205_custom\3040_ark\data\U_ark_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS(RB205_H_ark, "RB205_V_ct", "RB205_NV_chip")
    };
};