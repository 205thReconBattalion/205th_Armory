class cfgPatches 
{ 
    class RB205_custom_smoker 
    { 
        requiredAddons[] = 
        { 
            "RB205_main", 
            "RB205_custom" 
        }; 
        requiredVersion = 1.0; 
        weapons[] = 
        { 
            "RB205_H_smoker", 
            "RB205_H_ab_smoker",
            "RB205_U_smoker", 
            "RB205_V_smoker" 
        }; 
        units[] = 
        { 
            "RB205_clone_smoker" 
        }; 
    }; 
}; 
 
#include "\RB205_main\macros.hpp" 
 
class cfgWeapons 
{ 
    class RB205_H_arc_trooper; 
    class RB205_H_smoker : RB205_H_arc_trooper 
    { 
        displayName = "[205] Clone ARC Trooper Helmet [2288]"; 
        hiddenSelectionsTextures[] = 
        { 
            "RB205_custom\2288_smoker\data\H_smoker.paa", 
            "RB205_main\data\arc\visor_arc_co.paa" 
        };
    }; 

    class RB205_H_ab_trooper; 
    class RB205_H_ab_smoker : RB205_H_ab_trooper 
    { 
        displayName = "[205] Clone Airborne Trooper Helmet [2288]"; 
        hiddenSelectionsTextures[] = 
        { 
            "RB205_custom\2288_smoker\data\H_smoker_airborne.paa",
            "RB205_main\data\airborne\visor_ab_co.paa"
        };
    };
 
    class RB205_U_base;
    class RB205_U_arc_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_smoker : RB205_U_arc_trooper 
    { 
        displayName = "[205] Clone ARC Trooper Armor [2288]"; 
        class ItemInfo : ItemInfo 
        { 
            uniformClass = RB205_clone_smoker; 
        };
    }; 
 
    class RB205_V_arc; 
    class RB205_V_smoker : RB205_V_arc 
    { 
        displayName = "[205] Clone ARC Trooper Vest [2288]"; 
        hiddenSelectionsTextures[] = 
        { 
            "RB205_custom\2288_smoker\data\V_arc_smoker.paa", 
            "RB205_custom\2288_smoker\data\V_smoker.paa" 
        };
    }; 
}; 
 
class cfgVehicles 
{ 
    class RB205_clone_arc_trooper; 
    class RB205_clone_smoker : RB205_clone_arc_trooper 
    { 
        displayName = "ARC-2288 Smoker"; 
        uniformclass = "RB205_U_smoker"; 
        editorSubCategory = "RB205_lore"; 
        hiddenselectionsTextures[] = 
        { 
            "RB205_custom\2288_smoker\data\U_smoker_upper.paa", 
            "RB205_custom\2288_smoker\data\U_smoker_lower.paa", 
            "RB205_main\data\default\U_undersuit_co.paa" 
        }; 
        LINKED_ITEMS("RB205_H_smoker", "RB205_V_smoker", "RB205_NV_rangefinder") 
        backpack = "RB205_B_arc_jetpack";
    }; 
};