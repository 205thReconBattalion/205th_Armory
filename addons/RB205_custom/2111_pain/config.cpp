class cfgPatches
{
    class RB205_custom_pain
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {

        };
        units[] =
        {

        };
        
    }
    #include "\RB205_main\macros.hpp" 

    class cfgWeapons
    {
        class RB205_H_trooper;
        class RB205_H_pain : RB205_H_trooper
        {
            displayName = "[205] Clone Trooper Helmet [2111]";
            hiddenSelectionsTextures[] =
            {
                "RB205_custom\2111_pain\data\H_pain.paa"
            }
        }
        
    }   
};