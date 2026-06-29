class CfgPatches
{
    class RB205_vehicleSetSpawnerModule
    {
        requiredAddons[] = {
            "A3_Modules_F",
            "RB205_spawnerDialog"
        };
        units[] = 
        {
            "RB205_Module_SetVehicleSpawnerInit",
            "RB205_Module_SetVehicleMaxSpawns"
        };
        weapons[] = {};
    };
};

class CfgFunctions
{
    class RB205_vehicleSetSpawnerModule
    {
        class vehicleSpawner
        {
            file = "\RB205_modules\vehicleSpawner\functions";
            class moduleSetVehicleSpawnerInit {};
            class moduleSetVehicleMaxSpawns{};
            class limitVehiclesVehicleSelected{};
            class openDialog{};
            class createVehicleSpawnHashMap{};
            class changeVehicleSpawnCountHashMap{};
            class triggerfunction{};
            
        };
    };
};

class CfgFactionClasses
{
    class NO_CATEGORY;

    class RB205_FahrzeugModules: NO_CATEGORY
    {
        displayName = "205th Fahrzeugspawner";
    };
};

class Extended_PostInit_EventHandlers
{
	class RB205_Modules_vehicleSpawner_PostInit
	{
		init="call compile preprocessFileLineNumbers '\RB205_modules\vehicleSpawner\functions\XEH_postInit.sqf'";
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

    class RB205_Eden_Module : Module_F
    {
        scope = 2;
        scopeCurator = 1;
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 0;
        is3DEN = 0;
        canSetArea = 0;
    };

    class RB205_Module_SetVehicleSpawnerInit: RB205_Eden_Module
    {
        displayName = "Erstellen Fahrzeugspawner";
        category = "RB205_FahrzeugModules";
        function = "RB205_vehicleSetSpawnerModule_fnc_triggerfunction";

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
            class UtilityVehicleBool
            {
                property = "RB205_Module_SetVehicleSpawnerInit_UtilityVehicleBool";
                displayName = "Utility";
                control = "Checkbox";
                expression = "_this setVariable ['RB205_UtilityVehicleBool', _value, true];";
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


    class RB205_Module_SetVehicleMaxSpawns: RB205_Eden_Module
    {
        displayName = "Fahrzeuge begrenzen";
        category = "RB205_FahrzeugModules";
        function = "RB205_vehicleSetSpawnerModule_fnc_moduleSetVehicleMaxSpawns";

        class Attributes: AttributesBase
        {
            class RB205_BARC_MaxSpawns
            {
                property = "RB205_BARC_VehicleMaxSpawns";
                displayName = "BARC";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_BARC_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_BARC_Sidecar_MaxSpawns
            {
                property = "RB205_BARC_SIDECAR_VehicleMaxSpawns";
                displayName = "BARC Sidecar";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_BARC_SIDECAR_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_BARC_Stretcher_MaxSpawns
            {
                property = "RB205_BARC_STRETCHER_VehicleMaxSpawns";
                displayName = "BARC Stretcher";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_BARC_STRETCHER_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_WH_MaxSpawns
            {
                property = "RB205_WH_VehicleMaxSpawns";
                displayName = "Warthog";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_WH_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_WH_TT_MaxSpawns
            {
                property = "RB205_WH_TT_VehicleMaxSpawns";
                displayName = "Warthog TT";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_WH_TT_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_WH_Repair_MaxSpawns
            {
                property = "RB205_WH_REPAIR_VehicleMaxSpawns";
                displayName = "Warthog Repair";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_WH_REPAIR_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_WH_MG_MaxSpawns
            {
                property = "RB205_WH_MG_VehicleMaxSpawns";
                displayName = "Warthog MG";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_WH_MG_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_WH_AT_MaxSpawns
            {
                property = "RB205_WH_AT_VehicleMaxSpawns";
                displayName = "Warthog AT";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_WH_AT_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_WH_AA_MaxSpawns
            {
                property = "RB205_WH_AA_VehicleMaxSpawns";
                displayName = "Warthog AA";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_WH_AA_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_Truck_Transport_MaxSpawns
            {
                property = "RB205_TRUCK_TRANSPORT_VehicleMaxSpawns";
                displayName = "Truck Transport";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_TRUCK_TRANSPORT_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_Truck_Transport_Covered_MaxSpawns
            {
                property = "RB205_TRUCK_TRANSPORT_COVERED_VehicleMaxSpawns";
                displayName = "Truck Transport Covered";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_TRUCK_TRANSPORT_COVERED_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_Truck_Repair_MaxSpawns
            {
                property = "RB205_TRUCK_REPAIR_VehicleMaxSpawns";
                displayName = "Truck Repair";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_TRUCK_REPAIR_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_Truck_Fuel_MaxSpawns
            {
                property = "RB205_TRUCK_FUEL_VehicleMaxSpawns";
                displayName = "Truck Fuel";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_TRUCK_FUEL_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_Truck_Ammo_MaxSpawns
            {
                property = "RB205_TRUCK_AMMO_VehicleMaxSpawns";
                displayName = "Truck Ammo";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_TRUCK_AMMO_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_Truck_Device_MaxSpawns
            {
                property = "RB205_TRUCK_DEVICE_VehicleMaxSpawns";
                displayName = "Truck Device";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_TRUCK_DEVICE_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_Swamp_MaxSpawns
            {
                property = "RB205_SWAMP_VehicleMaxSpawns";
                displayName = "Swamp";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_SWAMP_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_Swamp_Transport_MaxSpawns
            {
                property = "RB205_SWAMP_TRANSPORT_VehicleMaxSpawns";
                displayName = "Swamp Transport";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_SWAMP_TRANSPORT_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_Bantha_Assault_MaxSpawns
            {
                property = "RB205_BANTHA_ASSAULT_VehicleMaxSpawns";
                displayName = "Bantha Assault";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_BANTHA_ASSAULT_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_Bantha_Cargo_MaxSpawns
            {
                property = "RB205_BANTHA_CARGO_VehicleMaxSpawns";
                displayName = "Bantha Cargo";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_BANTHA_CARGO_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_Bantha_Unarmed_MaxSpawns
            {
                property = "RB205_BANTHA_UNARMED_VehicleMaxSpawns";
                displayName = "Bantha Unarmed";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_BANTHA_UNARMED_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_Bantha_MaxSpawns
            {
                property = "RB205_BANTHA_VehicleMaxSpawns";
                displayName = "Bantha";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_BANTHA_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };
            class RB205_Bantha_AA_MaxSpawns
            {
                property = "RB205_BANTHA_AA_VehicleMaxSpawns";
                displayName = "Bantha AA";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_BANTHA_AA_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_Bantha_Mortar_MaxSpawns
            {
                property = "RB205_BANTHA_MORTAR_VehicleMaxSpawns";
                displayName = "Bantha Mortar";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_BANTHA_MORTAR_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_Bantha_Service_MaxSpawns
            {
                property = "RB205_BANTHA_SERVICE_VehicleMaxSpawns";
                displayName = "Bantha Service";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_BANTHA_SERVICE_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_PX10_MaxSpawns
            {
                property = "RB205_PX10_VehicleMaxSpawns";
                displayName = "PX-10";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_PX10_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_PX10_Service_MaxSpawns
            {
                property = "RB205_PX10_SERVICE_VehicleMaxSpawns";
                displayName = "PX-10 Service";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_PX10_SERVICE_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_TX130_MaxSpawns
            {
                property = "RB205_TX130_VehicleMaxSpawns";
                displayName = "TX-130";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_TX130_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_TX130_GL_MaxSpawns
            {
                property = "RB205_TX130_GL_VehicleMaxSpawns";
                displayName = "TX-130 GL";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_TX130_GL_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_TX130_Recon_MaxSpawns
            {
                property = "RB205_TX130_RECON_VehicleMaxSpawns";
                displayName = "TX-130 Recon";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_TX130_RECON_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_TX130_Super_MaxSpawns
            {
                property = "RB205_TX130_SUPER_VehicleMaxSpawns";
                displayName = "TX-130 Super";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_TX130_SUPER_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_ATTE_MaxSpawns
            {
                property = "RB205_ATTE_VehicleMaxSpawns";
                displayName = "AT-TE";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_ATTE_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_ATAP_MaxSpawns
            {
                property = "RB205_ATAP_VehicleMaxSpawns";
                displayName = "AT-AP";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_ATAP_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_UTAT_MaxSpawns
            {
                property = "RB205_UTAT_VehicleMaxSpawns";
                displayName = "UT-AT";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_UTAT_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_Juggernaut_MaxSpawns
            {
                property = "RB205_JUGGERNAUT_VehicleMaxSpawns";
                displayName = "Juggernaut";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_JUGGERNAUT_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_RX200_MaxSpawns
            {
                property = "RB205_RX200_VehicleMaxSpawns";
                displayName = "RX-200";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_RX200_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_AV7_MaxSpawns
            {
                property = "RB205_AV7_VehicleMaxSpawns";
                displayName = "AV-7";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_AV7_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_WaterGlider_MG_MaxSpawns
            {
                property = "RB205_WATERGLIDER_MG_VehicleMaxSpawns";
                displayName = "Water Glider MG";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_WATERGLIDER_MG_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_WaterGlider_AT_MaxSpawns
            {
                property = "RB205_WATERGLIDER_AT_VehicleMaxSpawns";
                displayName = "Water Glider AT";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_WATERGLIDER_AT_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_WaterGlider_AA_MaxSpawns
            {
                property = "RB205_WATERGLIDER_AA_VehicleMaxSpawns";
                displayName = "Water Glider AA";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_WATERGLIDER_AA_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_SDV_MaxSpawns
            {
                property = "RB205_SDV_VehicleMaxSpawns";
                displayName = "SDV";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_SDV_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_LAAT_MaxSpawns
            {
                property = "RB205_LAAT_VehicleMaxSpawns";
                displayName = "LAAT";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_LAAT_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_LAAT_Lights_MaxSpawns
            {
                property = "RB205_LAAT_LIGHTS_VehicleMaxSpawns";
                displayName = "LAAT Lights";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_LAAT_LIGHTS_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_LAAT_Turrets_MaxSpawns
            {
                property = "RB205_LAAT_TURRETS_VehicleMaxSpawns";
                displayName = "LAAT Turrets";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_LAAT_TURRETS_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_LAATC_MaxSpawns
            {
                property = "RB205_LAATC_VehicleMaxSpawns";
                displayName = "LAAT/C";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_LAATC_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_LAATLE_MaxSpawns
            {
                property = "RB205_LAATLE_VehicleMaxSpawns";
                displayName = "LAAT/LE";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_LAATLE_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_LAS_MaxSpawns
            {
                property = "RB205_LAS_VehicleMaxSpawns";
                displayName = "LAS";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_LAS_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_LAS_Turrets_MaxSpawns
            {
                property = "RB205_LAS_TURRETS_VehicleMaxSpawns";
                displayName = "LAS Turrets";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_LAS_TURRETS_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_NuClass_MaxSpawns
            {
                property = "RB205_NUCLASS_VehicleMaxSpawns";
                displayName = "Nu-Class";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_NUCLASS_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_RhoClass_MaxSpawns
            {
                property = "RB205_RHOCLASS_VehicleMaxSpawns";
                displayName = "Rho-Class";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_RHOCLASS_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_VWing_MaxSpawns
            {
                property = "RB205_VWING_VehicleMaxSpawns";
                displayName = "V-Wing";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_VWING_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_Z95_MaxSpawns
            {
                property = "RB205_Z95_VehicleMaxSpawns";
                displayName = "Z-95";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_Z95_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_ARC170_MaxSpawns
            {
                property = "RB205_ARC170_VehicleMaxSpawns";
                displayName = "ARC-170";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_ARC170_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_YWing_MaxSpawns
            {
                property = "RB205_YWING_VehicleMaxSpawns";
                displayName = "Y-Wing";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_YWING_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };
            class RB205_Keeradak_MaxSpawns
            {
                property = "RB205_KEERADAK_VehicleMaxSpawns";
                displayName = "Keeradak";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_KEERADAK_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_RhoClass_Crate_Barracks_MaxSpawns
            {
                property = "RB205_RHOCLASS_CRATE_BARRACKS_VehicleMaxSpawns";
                displayName = "Rho-Class Crate Barracks";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_RHOCLASS_CRATE_BARRACKS_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_RhoClass_Crate_Medical_MaxSpawns
            {
                property = "RB205_RHOCLASS_CRATE_MEDICAL_VehicleMaxSpawns";
                displayName = "Rho-Class Crate Medical";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_RHOCLASS_CRATE_MEDICAL_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_RhoClass_Crate_Transport_MaxSpawns
            {
                property = "RB205_RHOCLASS_CRATE_TRANSPORT_VehicleMaxSpawns";
                displayName = "Rho-Class Crate Transport";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_RHOCLASS_CRATE_TRANSPORT_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class RB205_FCC_MaxSpawns
            {
                property = "RB205_FCC_VehicleMaxSpawns";
                displayName = "FCC";
                control = "Edit";
                typeName = "NUMBER";
                expression = "_this setVariable ['RB205_FCC_VehicleMaxSpawns', _value, true];";
                defaultValue = "-1";
            };

            class ModuleDescriptionMaxSpawns: ModuleDescription {};
        };

        class ModuleDescription: ModuleDescription
        {
            description = "Legt fest welche Fahrzeugspawner durch das Modul gesetzt werden.";
            sync[] = {};
        };

        class ModuleDescriptionMaxSpawns: ModuleDescription
        {
            description = "Legt fest wie viele Fahrzeuge einer Art gespawnt werden können. '-1' stellt hierbei keine begrenzung dar.";
            sync[] = {};
        };
    };

};


#include "UIElements\defines.hpp"
#include "UIElements\dialog.hpp"