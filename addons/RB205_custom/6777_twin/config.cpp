class cfgPatches
{
    class RB205_custom_twin
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_twin",
            "RB205_U_twin"
        };
        units[] =
        {
            "RB205_clone_twin"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_plt_trooper;
    class RB205_H_twin : RB205_H_plt_trooper
    {
        displayName = "[205] Clone Pilot Trooper Helmet [6777]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\6777_twin\data\H_twin.paa",
            "RB205_main\data\pilot\visor_plt_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_twin : RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [6777]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_twin;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_plt_trooper;
    class RB205_clone_twin : RB205_clone_plt_trooper
    {
        displayName = "CT-6777 Twin";
        uniformclass = "RB205_U_twin";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\6777_twin\data\U_twin_upper.paa",
            "RB205_custom\6777_twin\data\U_twin_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_twin", "RB205_V_plt_ct", "RB205_NV_chip")
    };
};