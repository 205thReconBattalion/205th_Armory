class cfgPatches
{
    class RB205_custom_akira
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_plt_akira",
            "RB205_U_plt_akira"
        };
        units[]	=
        {
            "RB205_clone_plt_akira"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_plt_corporal;
    class RB205_H_plt_akira: RB205_H_plt_corporal
    {
        displayName = "[205] Clone Pilot Trooper Helmet [1972]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\1972_akira\data\H_akira.paa",
            "RB205_main\data\pilot\visor_plt_co.paa"
        };
    };

    class RB205_U_plt_corporal;
    class ItemInfo;
    class RB205_U_plt_akira: RB205_U_plt_corporal
    {
        displayName = "[205] Clone Pilot Trooper Armor [1972]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_plt_akira;
        };
    };
};

class cfgVehicles
{
class RB205_clone_plt_corporal;
class RB205_clone_plt_akira: RB205_clone_plt_corporal
{
    displayName = "CP-1972 Akira";
    uniformclass = "RB205_U_plt_akira";
    editorSubCategory = "RB205_lore";
    hiddenselectionsTextures[] =
        {
        "RB205_custom\1972_akira\data\U_akira_upper.paa",
        "RB205_custom\1972_akira\data\U_akira_lower.paa",
        "RB205_main\data\default\U_undersuit_co.paa"
        };
    LINKED_ITEMS("RB205_H_plt_akira","RB205_V_plt_cp","RB205_NV_chip")
};
};