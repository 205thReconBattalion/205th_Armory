class cfgPatches
{
    class RB205_custom_shadow
    {
        requiredAddons[] =
            {
                "RB205_main",
                "RB205_custom"
            };
        requiredVersion = 1.0;
        weapons[] =
            {
                "RB205_H_shadow",
                "RB205_U_shadow"
            };
        units[] =
            {
                "RB205_clone_shadow"
            };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_ab_corporal;
    class RB205_H_shadow : RB205_H_ab_corporal
    {
        displayName = "[205] Clone Trooper Helmet (1312)";
        hiddenSelectionsTextures[] =
            {
                "RB205_custom\1312_shadow\data\H_shadow.paa",
                "RB205_main\data\airborne\visor_ab_co.paa"
            };
    };

    class RB205_U_corporal;
    class ItemInfo;
    class RB205_U_shadow : RB205_U_corporal
    {
        displayName = "[205] Clone Trooper Uniform (1312)";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_shadow;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_ab_lanceCorporal;
    class RB205_clone_shadow : RB205_clone_ab_lanceCorporal
    {
        displayName = "CLC-1312 Shadow";
        uniformclass = "RB205_U_shadow";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
            {
                "RB205_custom\1312_shadow\data\U_shadow_upper.paa",
                "RB205_custom\1312_shadow\data\U_shadow_lower.paa",
                "RB205_main\data\default\U_undersuit_co.paa"
            };
        LINKED_ITEMS(RB205_H_shadow, "RB205_V_ab_clc", "RB205_NV_chip")
        backpack = "RB205_B_ab";
    };
};