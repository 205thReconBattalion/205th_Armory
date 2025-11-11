class cfgPatches
{
    class RB205_custom_lost
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_lost",
            "RB205_U_lost"
        };
        units[]	=
        {
            "RB205_clone_lost"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_ab_trooper;
    class RB205_H_lost: RB205_H_ab_trooper
    {
        displayName = "[205] Clone Airborne Trooper Helmet [2004]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\2004_lost\data\H_lost.paa",
            "RB205_main\data\airborne\visor_ab_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_lost: RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [2004]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_lost;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_ab_trooper;
    class RB205_clone_lost: RB205_clone_ab_trooper
    {
        displayName = "CT-2004 Lost";
        uniformclass = "RB205_U_lost";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\2004_lost\data\U_lost_upper.paa",
            "RB205_custom\2004_lost\data\U_lost_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_lost","RB205_V_ab_ct","RB205_NV_chip")
    };
};