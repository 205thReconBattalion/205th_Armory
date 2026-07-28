class CfgPatches
{
    class RB205_modules
    {
        units[] = {};
        weapons[] = {};

        requiredVersion = 0.1;

        requiredAddons[] =
        {
            "cba_main",
            "zen_custom_modules",
            "RB205_notification"
        };
    };
};

class Extended_PostInit_EventHandlers
{
    class RB205_modules_PostInit
    {
        init = "call compile preprocessFileLineNumbers '\RB205_modules\notification\functions\XEH_postInit.sqf'";
    };
};
