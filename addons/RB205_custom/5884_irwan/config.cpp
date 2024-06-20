class cfgPatches
{
    class RB205_custom_irwan
    {
        requiredAddons[] = 
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_irwan",
            "RB205_U_irwan"
        };
        units[] =
        {
            "RB205_clone_irwan"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_trooper;
    class RB205_H_irwan : RB205_H_trooper
    {
        displayName = "[205] Clone Trooper Helmet [5884]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\5884_irwan\data\H_irwan.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
        class XtdGearInfo
        {
            model = "RB205_H_custom";
            id = "5884";
            var = "dft";
        };
    };

    class RB205_U_base;
    class RB205_U_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_irwan : RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [5884]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_irwan;
        };
        class XtdGearInfo
        {
            model = "RB205_U_custom";
            id = "5884";
            var = "dft";
        };
    };
};

class cfgVehicles
{
    class RB205_clone_trooper;
    class RB205_clone_irwan : RB205_clone_trooper
    {
        displayName = "CTF-5884 Irwan";
        uniformClass = "RB205_U_irwan";
        editorSubCategory = "RB205_lore";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\5884_irwan\data\U_irwan_upper.paa",
            "RB205_custom\5884_irwan\data\U_irwan_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_irwan", "RB205_V_ct", "RB205_NV_chip")
    };
};