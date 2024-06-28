class cfgPatches
{
    class RB205_custom_fugger
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_fugger",
            "RB205_U_fugger"
        };
        units[] =
        {
            "RB205_clone_fugger"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_ab_trooper;
    class RB205_H_fugger: RB205_H_ab_trooper
    {
        displayName = "[205] Clone Airborne Trooper Helmet [1618]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\1618_fugger\data\H_fugger.paa",
            "RB205_main\data\airborne\visor_ab_co.paa"
        };
    };

    class RB205_U_trooper;
    class ItemInfo;
    class RB205_U_fugger: RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [1618]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_fugger;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_ab_trooper;
    class RB205_clone_fugger: RB205_clone_ab_trooper
    {
        displayName = "CST-1618 Fugger";
        uniformclass = "RB205_U_fugger";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\1618_fugger\data\U_fugger_upper.paa",
            "RB205_custom\1618_fugger\data\U_fugger_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_fugger", "RB205_V_ab_ct", "RB205_NV_chip")
    };
};