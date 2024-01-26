class cfgPatches
{
    class RB205_custom_mando
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_mando",
            "RB205_U_mando"
        };
        units[] =
        {
            "RB205_clone_mando"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_corporal;
    class RB205_H_mando : RB205_H_corporal
    {
        displayName = "[205] Clone Trooper Helmet [0955]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\0955_mando\data\H_mando.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
        class XtdGearInfo
        {
            model = "RB205_H_custom";
            id = "0955";
            var = "dft";
        };
    };

    class RB205_U_corporal;
    class ItemInfo;
    class RB205_U_mando : RB205_U_corporal
    {
        displayName = "[205] Clone Trooper Armor [0955]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_mando;
        };
        class XtdGearInfo
        {
            model = "RB205_U_custom";
            id = "0955";
            var = "dft";
        };
    };
};

class cfgVehicles
{
    class RB205_clone_lanceCorporal;
    class RB205_clone_mando : RB205_clone_lanceCorporal
    {
        displayName = "CLC-0955 Mando";
        uniformclass = "RB205_U_mando";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\0955_mando\data\U_mando_upper.paa",
            "RB205_custom\0955_mando\data\U_mando_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS(RB205_H_mando, "RB205_V_clc", "RB205_NV_rangefinder")
	    identityTypes[] = {"LanguageENG_F","SWLB_JH_Head_Hair"};
    };
};