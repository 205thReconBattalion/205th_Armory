class cfgPatches
{
    class RB205_custom_norway
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_norway",
            "RB205_U_norway",
            "RB205_V_norway"
        };
        units[] =
        {
            "RB205_clone_norway",
            "RB205_B_norway"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_arc_trooper;
    class RB205_H_norway : RB205_H_arc_trooper
    {
        displayName = "[205] Clone ARC Trooper Helmet [7300]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\7300_norway\data\H_norway.paa",
            "RB205_main\data\arc\visor_arc_co.paa",
            "RB205_custom\7300_norway\data\H_norway.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_arc_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_norway : RB205_U_arc_trooper
    {
        displayName = "[205] Clone ARC Trooper Armor [7300]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_norway;
        };
    };

    class RB205_V_arc;
    class RB205_V_norway : RB205_V_arc
    {
        displayName = "[205] Clone ARC Trooper Vest [7300]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\7300_norway\data\V_arc_norway.paa",
            "RB205_custom\7300_norway\data\V_norway.paa"
        };
    };
};

class cfgVehicles
{
    class RB205_clone_arc_trooper;
    class RB205_clone_norway : RB205_clone_arc_trooper
    {
        displayName = "ARC-7300 Norway";
        uniformclass = "RB205_U_norway";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\7300_norway\data\U_norway_upper.paa",
            "RB205_custom\7300_norway\data\U_norway_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_norway", "RB205_V_norway", "RB205_NV_rangefinder")
        backpack = "RB205_B_norway";
    };

    class RB205_B_arc_jetpack;
    class RB205_B_norway: RB205_B_arc_jetpack
    {
        displayName = "[205] Clone ARC Trooper Jetpack [7300]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\7300_norway\data\B_norway_jetpack.paa"
        };
    };
};