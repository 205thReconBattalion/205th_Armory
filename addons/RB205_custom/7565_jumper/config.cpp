class cfgPatches
{
class RB205_custom_jumper
{
    requiredAddons[] =
    {
        "RB205_main",
        "RB205_custom"
    };
    requiredVersion = 1.0;
    weapons[] =
    {
        "RB205_H_jumper",
        "RB205_U_jumper"
    };
    units[]	=
    {
        "RB205_clone_jumper"
    };
};
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
class RB205_H_arf_trooper;
class RB205_H_jumper: RB205_H_arf_trooper
{
    displayName = "[205] Clone Trooper ARF Helmet (7565)";
    hiddenSelectionsTextures[] =
    {
        "RB205_custom\7565_jumper\data\H_jumper.paa",
        "\RB205_main\data\arf\H_arf_flaps_co.paa",
        "RB205_main\data\default\visor_p2_co.paa"
    };
};

class RB205_U_arf_trooper;
class ItemInfo;
class RB205_U_jumper: RB205_U_arf_trooper
{
    displayName = "[205] Clone Trooper ARF Uniform (7565)";
    class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_jumper;
    };
};
};

class cfgVehicles
{
class RB205_clone_arf_trooper;
class RB205_clone_jumper: RB205_clone_arf_trooper
{
    displayName = "CSP-7565 Jumper";
    uniformclass = "RB205_U_jumper";
    editorSubCategory = "RB205_lore";
    hiddenselectionsTextures[] =
    {
        "RB205_custom\7565_jumper\data\U_jumper_upper.paa",
        "RB205_custom\7565_jumper\data\U_jumper_lower.paa",
        "RB205_main\data\default\U_undersuit_co.paa"
    };
    LINKED_ITEMS("RB205_H_jumper","RB205_V_arf_ct","RB205_NV_arf_antenna")
    backpack = "RB205_B_arf";
};
};