class CfgPatches
{
    class RB205_vehicleSetSpawnerModule
    {
        requiredAddons[] = {"A3_Modules_F"};
        units[] = {"RB205_Module_SetVehicleSpawnerInit"};
        weapons[] = {};
    };
};

class CfgFunctions
{
    class RB205_vehicleSetSpawnerModule
    {
        class Modules
        {
            file = "\RB205_modules\vehicleSpawner\functions";
            class moduleSetVehicleSpawnerInit {};
        };
    };
};

class CfgFactionClasses
{
    class NO_CATEGORY;

    class RB205_Modules: NO_CATEGORY
    {
        displayName = "205th Fahrzeugspawner";
    };
};

class CfgVehicles
{
    class Logic;
    class Module_F: Logic
    {
        class AttributesBase;
        class ModuleDescription;
    };

    class RB205_Module_SetVehicleSpawnerInit: Module_F
    {
        scope = 2;
        scopeCurator = 0;
        displayName = "Erstellen Fahrzeugspawner";
        category = "RB205_Modules";

        function = "RB205_vehicleSetSpawnerModule_fnc_moduleSetVehicleSpawnerInit";
        functionPriority = 1;

        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;

        canSetArea = 0;

        class Attributes: AttributesBase
        {
            class UnarmoredVehicleBool
            {
                property = "RB205_Module_SetVehicleSpawnerInit_UnarmoredVehicleBool";
                displayName = "Ungepanzerte Fahrzeuge";
                control = "Checkbox";
                expression = "_this setVariable ['RB205_UnarmoredVehicleBool', _value, true];";
                defaultValue = "false";
                typeName = "BOOL";
            };
            class ArmoredVehicleBool
            {
                property = "RB205_Module_SetVehicleSpawnerInit_ArmoredVehicleBool";
                displayName = "Gepanzerte Fahrzeuge";
                control = "Checkbox";
                expression = "_this setVariable ['RB205_ArmoredVehicleBool', _value, true];";
                defaultValue = "false";
                typeName = "BOOL";
            };
            class NavalVehicleBool
            {
                property = "RB205_Module_SetVehicleSpawnerInit_NavalVehicleBool";
                displayName = "Marine Fahrzeuge";
                control = "Checkbox";
                expression = "_this setVariable ['RB205_NavalVehicleBool', _value, true];";
                defaultValue = "false";
                typeName = "BOOL";
            };
            class AirTransportVehicleBool
            {
                property = "RB205_Module_SetVehicleSpawnerInit_AirTransportVehicleBool";
                displayName = "Luftransport Fahrzeuge";
                control = "Checkbox";
                expression = "_this setVariable ['RB205_AirTransportVehicleBool', _value, true];";
                defaultValue = "false";
                typeName = "BOOL";
            };
            class AirFighterVehicleBool
            {
                property = "RB205_Module_SetVehicleSpawnerInit_AirFighterVehicleBool";
                displayName = "Luftkampf Fahrzeuge";
                control = "Checkbox";
                expression = "_this setVariable ['RB205_AirFighterVehicleBool', _value, true];";
                defaultValue = "false";
                typeName = "BOOL";
            };            
            class VehicleSpawnerVariableName
            {
                property = "RB205_Module_SetVehicleSpawnerInit_VehicleSpawnerVariableName";
                displayName = "Spawnflächen Variablen Name";
                control = "EditCode";
                expression = "_this setVariable ['RB205_VehicleSpawnerVariableName', _value, true];";
                defaultValue = """""";
                typeName = "STRING";
            };

            class ModuleDescription: ModuleDescription {};
        };

        class ModuleDescription: ModuleDescription
        {
            description = "Legt fest welche Fahrzeugspawner durch das Modul gesetzt werden.";
            sync[] = {};
        };
    };
};