class cfgPatches
{
    class RB205_custom_banger
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_banger",
            "RB205_U_banger"
        };
        units[]	=
        {
            "RB205_clone_banger"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_trooper;
    class RB205_H_banger: RB205_H_trooper
    {
        displayName = "[205] Clone Trooper Helmet [4137]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\4137_banger\data\H_banger.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
        class XtdGearInfo
        {
            model = "RB205_H_custom";
            id = "4137";
            var = "dft";
        };
    };

    class RB205_U_trooper;
    class ItemInfo;
    class RB205_U_banger: RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [4137]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_banger;
        };
        class XtdGearInfo
        {
            model = "RB205_U_custom";
            id = "4137";
            var = "dft";
        };
    };
};

class cfgVehicles
{
class RB205_clone_trooper;
class RB205_clone_banger: RB205_clone_trooper
{
    displayName = "CST-4137 Banger";
    uniformclass = "RB205_U_banger";
    editorSubCategory = "RB205_lore";
    hiddenselectionsTextures[] =
    {
        "RB205_custom\4137_banger\data\U_banger_upper.paa",
        "RB205_custom\4137_banger\data\U_banger_lower.paa",
        "RB205_main\data\default\U_undersuit_co.paa"
    };
    LINKED_ITEMS("RB205_H_banger","RB205_V_medic","RB205_NV_chip")
    backpack = "RB205_B_medic";
};
};