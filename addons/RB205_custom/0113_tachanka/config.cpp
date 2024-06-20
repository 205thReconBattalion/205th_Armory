class cfgPatches
{
    class RB205_custom_tachanka
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_tachanka",
            "RB205_U_tachanka"
        };
        units[]	=
        {
            "RB205_clone_tachanka"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_trooper;
    class RB205_H_tachanka: RB205_H_trooper
    {
        displayName = "[205] Clone Trooper Helmet [0113]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\0113_tachanka\data\H_tachanka.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
        class XtdGearInfo
        {
            model = "RB205_H_custom";
            id = "0113";
            var = "dft";
        };
    };

    class RB205_U_base;
    class RB205_U_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_tachanka: RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [0113]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_tachanka;
        };
        class XtdGearInfo
        {
            model = "RB205_U_custom";
            id = "0113";
            var = "dft";
        };
    };
};

class cfgVehicles
{
    class RB205_clone_trooper;
    class RB205_clone_tachanka: RB205_clone_trooper
    {
        displayName = "CSP-0113 Tachanka";
        uniformclass = "RB205_U_tachanka";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\0113_tachanka\data\U_tachanka_upper.paa",
            "RB205_custom\0113_tachanka\data\U_tachanka_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_tachanka","RB205_V_ct","RB205_NV_chip")
    };
};