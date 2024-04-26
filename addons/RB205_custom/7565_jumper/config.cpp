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
    class RB205_H_arf_sergeant;
    class RB205_H_jumper: RB205_H_arf_sergeant
    {
        displayName = "[205] Clone ARF Trooper Helmet [7565]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\7565_jumper\data\H_jumper.paa",
            "RB205_main\data\arf\H_arf_flaps_co.paa",
            "RB205_main\data\arf\visor_arf_co.paa"
        };
        class XtdGearInfo
        {
            model = "RB205_H_custom";
            id = "7565";
            var = "dft";
        };
    };

    class RB205_U_arf_sergeant;
    class ItemInfo;
    class RB205_U_jumper: RB205_U_arf_sergeant
    {
        displayName = "[205] Clone ARF Trooper Armor [7565]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_jumper;
        };
        class XtdGearInfo
        {
            model = "RB205_U_custom";
            id = "7565";
            var = "dft";
        };
    };

    class RB205_V_arf_cs;
    class RB205_V_jumper: RB205_V_arf_cs
    {
        displayName = "[205] Clone Trooper Vest [7565]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\7565_jumper\data\V_jumper.paa",
            ""
        };
        class XtdGearInfo
        {
            model = "RB205_V_custom";
            id = "7565";
            var = "dft";
        };
    };
};

class cfgVehicles
{
    class RB205_clone_arf_sergeant;
    class RB205_clone_jumper: RB205_clone_arf_sergeant
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
        LINKED_ITEMS("RB205_H_jumper","RB205_V_jumper","RB205_NV_arf_antenna")
    };
};