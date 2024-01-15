class cfgPatches
{
    class RB205_custom_gentleman
    {
        requiredAddons[] =
            {
                "RB205_main",
                "RB205_custom"
            };
        requiredVersion = 1.0;
        weapons[] =
            {
                "RB205_H_arc_gentleman",
                "RB205_U_gentleman",
                "RB205_V_arc_gentleman"
            };
        units[] =
            {
                "RB205_clone_gentleman"
            };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_arc_trooper;
    class RB205_H_arc_gentleman : RB205_H_arc_trooper
    {
        displayName = "[205] Clone ARC Trooper Helmet [2441]";
        hiddenSelectionsTextures[] =
            {
                "RB205_custom\2441_gentleman\data\H_gentleman.paa",
                "RB205_main\data\arc\visor_arc_co.paa"
            };
    };

    class RB205_U_arc_trooper;
    class ItemInfo;
    class RB205_U_gentleman : RB205_U_arc_trooper
    {
        displayName = "[205] Clone ARC Trooper Armor [2441]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_gentleman;
        };
    };

    class RB205_V_arc;
    class RB205_V_arc_gentleman : RB205_V_arc
    {
        displayName = "[205] Clone ARC Trooper Vest [2441]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\2441_gentleman\data\V_arc_gentleman.paa",
            "RB205_custom\2441_gentleman\data\V_gentleman.paa"

        };
    };
};

class cfgVehicles
{
    class RB205_clone_arc_trooper;
    class RB205_clone_gentleman : RB205_clone_arc_trooper
    {
        displayName = "ARC-2441 Gentleman";
        uniformclass = "RB205_U_gentleman";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
            {
                "RB205_custom\2441_gentleman\data\U_gentleman_upper.paa",
                "RB205_custom\2441_gentleman\data\U_gentleman_lower.paa",
                "RB205_main\data\default\U_undersuit_co.paa"
            };
        LINKED_ITEMS("RB205_H_arc_gentleman", "RB205_V_arc_gentleman", "RB205_NV_rangefinder")
        backpack = "";
    };
};