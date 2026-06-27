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
            x = BACKGROUND_X;
            y = BACKGROUND_Y;
            w = BACKGROUND_W;
            h = BACKGROUND_H;
            colorBackground[] = {0,0,0,0.8};
        };
    };

    class controls
    {
        class VehicleSelectListBox : VehicleSpawnerModule_RscListNBox
        {
            idc = 205521;
            x = BACKGROUND_X;
            y = BACKGROUND_Y;
            w = BACKGROUND_W;
            h = LISTBOX_H;
            columns[] = {-1,0.87};
            onLBSelChanged = "_this call RB205_vehicleSetSpawnerModule_fnc_limitVehiclesVehicleSelected;";
        };
        class VehicleSpawnCountTitleText : VehicleSpawnerModule_RscText
        {
            idc = 205525;
            x = BACKGROUND_X;
            y = BACKGROUND_Y + LISTBOX_H + 0.05;
            w = SPAWNCOUNTTITLE_W;
            h = EDIT_H;
            text = "Anzahl Spawns: ";
        };
        class VehicleSpawnCountText : VehicleSpawnerModule_RscEdit
        {
            idc = 205524;
            x = BACKGROUND_X + SPAWNCOUNTTITLE_W;
            y = BACKGROUND_Y + LISTBOX_H + 0.05;
            w = 0.2 * BACKGROUND_W;
            h = EDIT_H;
        };

        

        class ChangeButton: VehicleSpawnerModule_RscButton
        {
            idc = 205522;
            text = "Wert Ändern";
            x = BACKGROUND_X;
            y = BACKGROUND_Y + BACKGROUND_H;
            w = BUTTON_W;
            h = BUTTON_H;
            action = "[] call RB205_vehicleSetSpawnerModule_fnc_changeVehicleSpawnCountHashMap";
        };

        class CloseButton: VehicleSpawnerModule_RscButton
        {
            idc = 205523;
            text = "Schließen";
            x = BACKGROUND_X + BACKGROUND_W - BUTTON_W;
            y = BACKGROUND_Y + BACKGROUND_H;
            w = BUTTON_W;
            h = BUTTON_H;

            action = "closeDialog 0;";
        };
        
    };
};
