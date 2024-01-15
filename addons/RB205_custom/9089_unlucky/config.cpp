class cfgPatches
{
    class RB205_custom_unlucky
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_unlucky",
            "RB205_U_unlucky"
        };
        units[]	=
        {
            "RB205_clone_unlucky"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_trooper;
    class RB205_H_unlucky: RB205_H_trooper
    {
        displayName = "[205] Clone Trooper Helmet [9089]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\9089_unlucky\data\H_unlucky.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
    };

    class RB205_U_trooper;
    class ItemInfo;
    class RB205_U_unlucky: RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [9089]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_unlucky;
        };
    };
};

class cfgVehicles
{
class RB205_clone_trooper;
class RB205_clone_unlucky: RB205_clone_trooper
{
    displayName = "CSP-9089 Unlucky";
    uniformclass = "RB205_U_unlucky";
    editorSubCategory = "RB205_lore";
    hiddenselectionsTextures[] =
    {
        "RB205_custom\9089_unlucky\data\U_unlucky_upper.paa",
        "RB205_custom\9089_unlucky\data\U_unlucky_lower.paa",
        "RB205_main\data\default\U_undersuit_co.paa"
    };
    LINKED_ITEMS("RB205_H_unlucky","RB205_V_medic","RB205_NV")
    backpack = "RB205_B_medic";
};
};