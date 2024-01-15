class cfgPatches
{
    class RB205_custom_paso
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_paso",
            "RB205_U_paso"
        };
        units[]	=
        {
            "RB205_clone_paso"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_plt_trooper;
    class RB205_H_paso: RB205_H_plt_trooper
    {
        displayName = "[205] Clone Pilot Trooper Helmet [3234]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\3234_paso\data\H_paso.paa",
            "RB205_main\data\pilot\visor_plt_co.paa"
        };
    };

    class RB205_U_plt_trooper;
    class ItemInfo;
    class RB205_U_paso: RB205_U_plt_trooper
    {
        displayName = "[205] Clone Pilot Trooper Armor [3234]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_plt_paso;
        };
    };
};

class cfgVehicles
{
class RB205_clone_plt_trooper;
class RB205_clone_paso: RB205_clone_plt_trooper
{
    displayName = "CSP-3234 Paso";
    uniformclass = "RB205_U_plt_paso";
    editorSubCategory = "RB205_lore";
    hiddenselectionsTextures[] =
        {
        "RB205_custom\3234_paso\data\U_paso_upper.paa",
        "RB205_custom\3234_paso\data\U_paso_lower.paa",
        "RB205_main\data\default\U_undersuit_co.paa"
        };
    LINKED_ITEMS("RB205_H_plt_paso","RB205_V_plt_ct","RB205_NV_chip")
};
};