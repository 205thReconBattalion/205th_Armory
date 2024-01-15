class cfgPatches
{
    class RB205_custom_fire
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_fire",
            "RB205_U_fire"
        };
        units[]	=
        {
            "RB205_clone_fire"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_trooper;
    class RB205_H_fire: RB205_H_trooper
    {
        displayName = "[205] Clone Trooper Helmet [2187]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\2187_fire\data\H_fire.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
    };

    class RB205_U_trooper;
    class ItemInfo;
    class RB205_U_fire: RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [2187]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_fire;
        };
    };
};

class cfgVehicles
{
class RB205_clone_trooper;
class RB205_clone_fire: RB205_clone_trooper
{
    displayName = "CSP-2187 Fire";
    uniformclass = "RB205_U_fire";
    editorSubCategory = "RB205_lore";
    hiddenselectionsTextures[] =
        {
        "RB205_custom\2187_fire\data\U_fire_upper.paa",
        "RB205_custom\2187_fire\data\U_fire_lower.paa",
        "RB205_main\data\default\U_undersuit_co.paa"
        };
    LINKED_ITEMS("RB205_H_fire","RB205_V_ct","RB205_NV_chip")
    backpack = "RB205_B_radio";
};
};