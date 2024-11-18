class cfgPatches
{
    class RB205_custom_lightning
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_lightning",
            "RB205_U_lightning"
        };
        units[]	=
        {
            "RB205_clone_lightning"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_ab_trooper;
    class RB205_H_lightning: RB205_H_ab_trooper
    {
        displayName = "[205] Clone Airborne Trooper Helmet [3697]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\3697_lightning\data\H_lightning.paa",
            "RB205_main\data\airborne\visor_ab_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_lightning: RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [3697]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_lightning;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_ab_trooper;
    class RB205_clone_lightning: RB205_clone_ab_trooper
    {
        displayName = "CSP-3697 Lightning";
        uniformclass = "RB205_U_lightning";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\3697_lightning\data\U_lightning_upper.paa",
            "RB205_custom\3697_lightning\data\U_lightning_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_lightning","RB205_V_ab_ct", "RB205_NV_chip")
    };
};