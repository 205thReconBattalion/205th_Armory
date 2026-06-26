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
            x = BACKGROUND_X
            y = BACKGROUND_Y
            w = BACKGROUND_W
            h = BACKGROUND_H
            colorBackground[] = {0,0,0,0.8};
        };
    };

    class controls
    {
        class VehicleSelectComboBox : VehicleSpawnerModule_RscCombo
        {
            idc = 205521;
            x = BACKGROUND_X;
            y = BACKGROUND_Y;
            w = BACKGROUND_W;
            h = COMBOBOX_H;
            onLBSelChanged = "_this call RB205_vehicleSetSpawnerModule_fnc_limitVehiclesVehicleSelected;";
        };
        class VehicleSpawnCountTitleText : VehicleSpawnerModule_RscText
        {
            idc = 205525;
            x = BACKGROUND_X;
            y = BACKGROUND_Y + COMBOBOX_H;
            w = SPAWNCOUNTTITLE_W;
            h = 0.04 * BACKGROUND_H;
            text = "Anzahl Spawns: ";
        };
        class VehicleSpawnCountText : VehicleSpawnerModule_RscEdit
        {
            idc = 205524;
            x = BACKGROUND_X + SPAWNCOUNTTITLE_W;
            y = BACKGROUND_Y + COMBOBOX_H;
            w = 0.2 * BACKGROUND_W;
            h = 0.04 * BACKGROUND_H;
        };

        

        class OkButton: VehicleSpawnerModule_RscButton
        {
            idc = 205522;
            text = "Ok";
            x = 0.4 * safezoneW + safezoneX;
            y = 0.8 * safezoneH + safezoneY;
            w = 0.055 * safezoneW;
            h = 0.04 * safezoneH;
            action = "[] call RB205_vehicleSetSpawnerModule_fnc_changeVehicleSpawnCountHashMap";
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