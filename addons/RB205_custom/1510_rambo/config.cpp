class cfgPatches
{
    class RB205_custom_rambo
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_rambo",
            "RB205_U_rambo"
        };
        units[] =
        {
            "RB205_clone_rambo"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_ab_trooper;
    class RB205_H_rambo : RB205_H_ab_trooper
    {
        displayName = "[205] Clone Airborne Trooper Helmet [1510]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\1510_rambo\data\H_rambo.paa",
            "RB205_main\data\airborne\visor_ab_co.paa"
        };
        class XtdGearInfo
        {
            model = "RB205_H_custom";
            id = "1510";
            var = "dft";
        };
    };

    class RB205_U_trooper;
    class ItemInfo;
    class RB205_U_rambo : RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [1510]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_rambo;
        };
        class XtdGearInfo
        {
            model = "RB205_U_custom";
            id = "1510";
            var = "dft";
        };
    };
};

class cfgVehicles
{
    class RB205_clone_ab_trooper;
    class RB205_clone_rambo : RB205_clone_ab_trooper
    {
        displayName = "CSP-1510 Rambo";
        uniformclass = "RB205_U_rambo";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\1510_rambo\data\U_rambo_upper.paa",
            "RB205_custom\1510_rambo\data\U_rambo_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_rambo", "RB205_V_ab_ct", "RB205_NV_chip")
    };
};