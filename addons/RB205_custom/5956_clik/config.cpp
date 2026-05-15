class cfgPatches
{
    class RB205_custom_clik
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_clik",
            "RB205_U_clik"
        };
        units[] =
        {
            "RB205_clone_clik"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_trooper;
    class RB205_H_clik : RB205_H_trooper
    {
        displayName = "[205] Clone Trooper Helmet [5956]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\5956_clik\data\H_clik.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_clik : RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [5956]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_clik;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_trooper;
    class RB205_clone_clik : RB205_clone_trooper
    {
        displayName = "CT-5956 Clik";
        uniformclass = "RB205_U_clik";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\5956_clik\data\U_clik_upper.paa",
            "RB205_custom\5956_clik\data\U_clik_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_clik", "RB205_V_ct", "RB205_NV_chip")
    };
};