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
                "RB205_U_crossfire",
                "RB205_V_crossfire"
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
        displayName = "[205] Clone Trooper Helmet (4600)";
        hiddenSelectionsTextures[] =
            {
                "RB205_custom\4600_crossfire\data\H_crossfire.paa",
                "RB205_main\data\default\visor_p2_co.paa"
            };
    };

    class RB205_V_ct;
    class RB205_V_crossfire : RB205_V_ct
    {
        displayName = "[205] Clone Trooper Vest (4600)";
        hiddenSelectionsTextures[] =
            {
                "RB205_custom\4600_crossfire\data\V_crossfire.paa"
            };
    };

    class RB205_U_trooper;
    class ItemInfo;
    class RB205_U_crossfire : RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Uniform (4600)";
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
        displayName = "CLC-4600 Crossfire";
        uniformclass = "RB205_U_crossfire";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
            {
                "RB205_custom\4600_crossfire\data\U_crossfire_upper.paa",
                "RB205_custom\4600_crossfire\data\U_crossfire_lower.paa",
                "RB205_main\data\default\U_undersuit_co.paa"
            };
        LINKED_ITEMS(RB205_H_crossfire, "RB205_V_crossfire", "RB205_NV_rangefinder")
        backpack = "";
    };
};