class cfgPatches
{
    class RB205_custom_pain
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        author = "205th Recon Battalion";
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_pain",
            "RB205_U_pain"
        };
        units[] =
        {
            "RB205_clone_pain"
        };
        
    };
};    
#include "\RB205_main\macros.hpp" 

class cfgWeapons
{
    class RB205_H_plt_trooper;
    class RB205_H_pain : RB205_H_plt_trooper
    {
        displayName = "[205] Clone Pilot Trooper Helmet [2111]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\2111_pain\data\H_pain.paa",
            "RB205_main\data\pilot\visor_plt_co.paa"
        };
    };
    
    class RB205_U_base;
    class RB205_U_plt_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_pain : RB205_U_plt_trooper
    {
        displayName = "[205] Clone Pilot Trooper Armor [2111]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_pain;	 
        };
    };
};

class cfgVehicles
{
    class RB205_clone_plt_trooper;
    class RB205_clone_pain: RB205_clone_plt_trooper
    {   
        displayName = "CSP-2111 Pain";
        uniformClass = "RB205_U_pain";
        editorSubCategory = "RB205_lore";
        hiddenSelectionsTextures[] = 
        {
            "RB205_custom\2111_pain\data\U_pain_upper.paa",
            "RB205_custom\2111_pain\data\U_pain_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_pain","RB205_V_ct","RB205_NV_chip")
    }; 
};