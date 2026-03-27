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
            "RB205_U_putzi",
            "RB205_V_putzi"
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
    class RB205_H_arc_trooper;
    class RB205_H_putzi : RB205_H_arc_trooper
    {
        displayName = "[205] Clone ARC Trooper Helmet [5283]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\5283_putzi\data\H_putzi.paa",
            "RB205_main\data\arc\visor_arc_co.paa",
            "RB205_custom\5283_putzi\data\H_putzi.paa"
        };
    };

    class RB205_U_sgt_base;
    class RB205_U_arc_trooper: RB205_U_sgt_base
    {
        class ItemInfo;
    };
    class RB205_U_putzi : RB205_U_arc_trooper
    {
        displayName = "[205] Clone ARC Trooper Armor [5283]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_putzi;
        };
    };

    class RB205_V_arc;
    class RB205_V_putzi: RB205_V_arc
    {
        displayName = "[205] Clone ARC Trooper Vest [5283]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\5283_putzi\data\V_arc_putzi.paa",
            "RB205_custom\5283_putzi\data\V_putzi.paa",
        };
    };
};

class cfgVehicles
{
    class RB205_clone_arc_trooper;
    class RB205_clone_putzi : RB205_clone_arc_trooper
    {
        displayName = "ARC-5283 Putzi";
        uniformclass = "RB205_U_putzi";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\5283_putzi\data\U_putzi_upper.paa",
            "RB205_custom\5283_putzi\data\U_putzi_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_putzi", "RB205_V_putzi", "RB205_NV_rangefinder")
    };
};