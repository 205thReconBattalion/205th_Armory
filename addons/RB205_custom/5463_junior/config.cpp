class cfgPatches
{
class RB205_custom_junior
{
    requiredAddons[] =
    {
        "RB205_main",
        "RB205_custom"
    };
    requiredVersion = 1.0;
    weapons[] =
    {
        "RB205_H_junior",
        "RB205_U_junior"
    };
    units[]	=
    {
        "RB205_clone_junior"
    };
};
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
class RB205_H_arf_trooper;
class RB205_H_junior: RB205_H_arf_trooper
{
    displayName = "[205] Clone Trooper ARF Helmet (5463)";
    hiddenSelectionsTextures[] =
    {
        "RB205_custom\5463_junior\data\H_junior.paa",
        "",
        "RB205_main\data\arf\visor_arf_co.paa"
    };
};

class RB205_U_arf_trooper;
class ItemInfo;
class RB205_U_junior: RB205_U_arf_trooper
{
    displayName = "[205] Clone Trooper ARF Uniform (5463)";
    class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_junior;
    };
};
};

class cfgVehicles
{
class RB205_clone_arf_trooper;
class RB205_clone_junior: RB205_clone_arf_trooper
{
    displayName = "CP-5463 junior";
    uniformclass = "RB205_U_junior";
    editorSubCategory = "RB205_lore";
    hiddenselectionsTextures[] =
    {
        "RB205_custom\5463_junior\data\U_junior_upper.paa",
        "RB205_custom\5463_junior\data\U_junior_lower.paa",
        "RB205_main\data\default\U_undersuit_co.paa"
    };
    LINKED_ITEMS("RB205_H_junior","RB205_V_arf_cp","RB205_NV_arf_antenna")
    backpack = "RB205_B_arf";
};
};