class cfgPatches
{
    class RB205_custom_lemon
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_lemon",
            "RB205_U_lemon"
        };
        units[]	=
        {
            "RB205_clone_lemon"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_trooper;
    class RB205_H_lemon: RB205_H_trooper
    {
        displayName = "[205] Clone Trooper Helmet [1202]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\1202_lemon\data\H_lemon.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_lemon: RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [1202]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_lemon;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_trooper;
    class RB205_clone_lemon: RB205_clone_trooper
    {
        displayName = "CT-1202 Lemon";
        uniformclass = "RB205_U_lemon";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\1202_lemon\data\U_lemon_upper.paa",
            "RB205_custom\1202_lemon\data\U_lemon_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_lemon","RB205_V_ct","RB205_NV_chip")
    };
};