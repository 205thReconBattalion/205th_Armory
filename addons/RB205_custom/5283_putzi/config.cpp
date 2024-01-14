class cfgPatches
{
    class RB205_custom_putzi
    {
        requiredAddons[] =
            {
                "RB205_main",
                "RB205_custom"
            };
        requiredVersion = 1.0;
        weapons[] =
            {
                "RB205_H_putzi",
                "RB205_U_putzi"
            };
        units[] =
            {
                "RB205_clone_putzi"
            };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_ab_trooper;
    class RB205_H_putzi : RB205_H_ab_trooper
    {
        displayName = "[205] Clone Trooper Helmet (5283)";
        hiddenSelectionsTextures[] =
            {
                "RB205_custom\5283_putzi\data\H_putzi.paa",
                "RB205_main\data\default\visor_p2_co.paa"
            };
    };

    class RB205_U_trooper;
    class ItemInfo;
    class RB205_U_putzi : RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Uniform (5283)";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_putzi;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_ab_trooper;
    class RB205_clone_putzi : RB205_clone_ab_trooper
    {
        displayName = "CSP-5283 putzi";
        uniformclass = "RB205_U_putzi";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
            {
                "RB205_custom\5283_putzi\data\U_putzi_upper.paa",
                "RB205_custom\5283_putzi\data\U_putzi_lower.paa",
                "RB205_main\data\default\U_undersuit_co.paa"
            };
        LINKED_ITEMS(RB205_H_putzi, "RB205_NV_rangefinder")
        backpack = "";
    };
};