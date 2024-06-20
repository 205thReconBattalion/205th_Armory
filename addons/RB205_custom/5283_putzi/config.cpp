class cfgPatches
{
    class RB205_custom_putzi
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_putzi",
            "RB205_U_putzi",
            "RB205_V_putzi"
        };
        units[] =
        {
            "RB205_clone_putzi"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_ab_trooper;
    class RB205_H_putzi : RB205_H_ab_trooper
    {
        displayName = "[205] Clone Airborne Trooper Helmet [5283]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\5283_putzi\data\H_putzi.paa",
            "RB205_main\data\airborne\visor_ab_co.paa"
        };
        class XtdGearInfo
        {
            model = "RB205_H_custom";
            id = "5283";
            var = "dft";
        };
    };

    class RB205_U_sgt_base;
    class RB205_U_sergeant: RB205_U_sgt_base
    {
        class ItemInfo;
    };
    class RB205_U_putzi : RB205_U_sergeant
    {
        displayName = "[205] Clone Trooper Armor [5283]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_putzi;
        };
        class XtdGearInfo
        {
            model = "RB205_U_custom";
            id = "5283";
            var = "dft";
        };
    };

    class RB205_V_ab_cs;
    class RB205_V_putzi: RB205_V_ab_cs
    {
        displayName = "[205] Clone Airborne Trooper Vest (Sergeant)";
        hiddenSelectionsTextures[] =
        {
            "RB205_main\data\airborne\V_ab_accessories_co.paa",
            "RB205_main\data\airborne\V_ab_cs_co.paa",
            "RB205_main\data\airborne\V_ab_accessories_co.paa"
        };
    };
};

class cfgVehicles
{
    class RB205_clone_ab_trooper;
    class RB205_clone_putzi : RB205_clone_ab_trooper
    {
        displayName = "CS-5283 Putzi";
        uniformclass = "RB205_U_putzi";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\5283_putzi\data\U_putzi_upper.paa",
            "RB205_custom\5283_putzi\data\U_putzi_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_putzi", "RB205_V_putzi", "RB205_NV_chip")
    };
};