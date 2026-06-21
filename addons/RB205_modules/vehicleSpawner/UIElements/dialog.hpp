class RB205_limitVehicleSpawnsDialog
{
    idd = 205520;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground
    {

        class BackgroundSelection: VehicleSpawnerModule_RscText
        {
            idc = -1;
            x = 0.4 * safezoneW + safezoneX;
            y = 0.2 * safezoneH + safezoneY;
            w = 0.20 * safezoneW;
            h = 0.60 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
    };

    class controls
    {
        class VehicleSelectComboBox : VehicleSpawnerModule_RscCombo
        {
            idc = 205521;
            x = 0.4 * safezoneW + safezoneX;
            y = 0.2 * safezoneH + safezoneY;
            w = 0.12;
            h = 0.035;
            onLBSelChanged = "_this call RB205_vehicleSetSpawnerModule_fnc_limitVehiclesVehicleSelected";
        };

        

        class SpawnButton: VehicleSpawnerModule_RscButton
        {
            idc = 205522;
            text = "Ok";
            x = 0.4 * safezoneW + safezoneX;
            y = 0.8 * safezoneH + safezoneY;
            w = 0.055 * safezoneW;
            h = 0.04 * safezoneH;
            //TODO
            action = "[] call RB205_spawnerDialog_fnc_onBtnClickSpawn";
        };

        class CloseButton: VehicleSpawnerModule_RscButton
        {
            idc = 205523;
            text = "Schließen";
            x = 0.46 * safezoneW + safezoneX;
            y = 0.8 * safezoneH + safezoneY;
            w = 0.055 * safezoneW;
            h = 0.04 * safezoneH;

            action = "closeDialog 0;";
        };
        
    };
};