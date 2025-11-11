class cfgPatches
{
    class RB205_custom_scout
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_scout",
            "RB205_U_scout"
        };
        units[] =
        {
            "RB205_clone_scout"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_arf_trooper;
    class RB205_H_scout : RB205_H_arf_trooper
    {
        displayName = "[205] Clone Trooper Helmet [2574]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\2574_scout\data\H_scout.paa",
            "",
            "RB205_main\data\arf\visor_arf_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_scout : RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [2574]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_scout;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_trooper;
    class RB205_clone_scout : RB205_clone_trooper
    {
        displayName = "CT-2574 Scout";
        uniformclass = "RB205_U_scout";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\2574_scout\data\U_scout_upper.paa",
            "RB205_custom\2574_scout\data\U_scout_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_scout", "RB205_V_arf_ct", "RB205_NV_arf_antenna")
    };
};