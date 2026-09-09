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
            columns[] = {0,0.87};
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




#define RB205_IDD_ALLOWED_CATEGORIES     205550
#define RB205_IDC_UNARMORED_CHECKBOX     205551
#define RB205_IDC_ARMORED_CHECKBOX       205552
#define RB205_IDC_AIR_TRANSPORT_CHECKBOX 205553
#define RB205_IDC_AIR_FIGHTER_CHECKBOX   205554
#define RB205_IDC_NAVAL_CHECKBOX         205555
#define RB205_IDC_UTILITY_CHECKBOX       205556

class RscCheckbox;

class RB205_vehicleSelctorDialog
{
    idd = RB205_IDD_ALLOWED_CATEGORIES;
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "uiNamespace setVariable ['RB205_vehicleSelctorDialog', _this select 0]";
    onUnload = "uiNamespace setVariable ['RB205_vehicleSelctorDialog', nil]";

    class controlsBackground
    {
        class Background: VehicleSpawnerModule_RscText
        {
            x = BACKGROUND_X; y = BACKGROUND_Y;
            w = BACKGROUND_W; h = 0.36 * safezoneH;
            colorBackground[] = {0,0,0,0.85};
        };
        class Title: VehicleSpawnerModule_RscText
        {
            x = BACKGROUND_X + 0.01 * safezoneW;
            y = BACKGROUND_Y + 0.01 * safezoneH;
            w = BACKGROUND_W - 0.02 * safezoneW;
            h = 0.04 * safezoneH;
            text = "Fahrzeugspawnertyp auswählen";
            style = ST_CENTER;
        };
    };

    class controls
    {
        class UnarmoredLabel: VehicleSpawnerModule_RscText
        {
            idc = 205531;
            text = "Ungepanzert";
            x = BACKGROUND_X + 0.02 * safezoneW;
            y = BACKGROUND_Y + 0.060 * safezoneH;
            w = 0.12 * safezoneW;
            h = 0.035 * safezoneH;
        };
        class UnarmoredCheckbox: RscCheckbox
        {
            idc = RB205_IDC_UNARMORED_CHECKBOX;
            x = BACKGROUND_X + BACKGROUND_W - 0.045 * safezoneW;
            y = BACKGROUND_Y + 0.060 * safezoneH;
            w = 0.025 * safezoneW;
            h = 0.035 * safezoneH;
        };

        class ArmoredLabel: VehicleSpawnerModule_RscText
        {
            idc = 205533;
            text = "Gepanzert";
            x = BACKGROUND_X + 0.02 * safezoneW;
            y = BACKGROUND_Y + 0.100 * safezoneH;
            w = 0.12 * safezoneW;
            h = 0.035 * safezoneH;
        };
        class ArmoredCheckbox: RscCheckbox
        {
            idc = RB205_IDC_ARMORED_CHECKBOX;
            x = BACKGROUND_X + BACKGROUND_W - 0.045 * safezoneW;
            y = BACKGROUND_Y + 0.100 * safezoneH;
            w = 0.025 * safezoneW;
            h = 0.035 * safezoneH;
        };

        class AirTransportLabel: VehicleSpawnerModule_RscText
        {
            idc = 205535;
            text = "Lufttransport";
            x = BACKGROUND_X + 0.02 * safezoneW;
            y = BACKGROUND_Y + 0.140 * safezoneH;
            w = 0.12 * safezoneW;
            h = 0.035 * safezoneH;
        };
        class AirTransportCheckbox: RscCheckbox
        {
            idc = RB205_IDC_AIR_TRANSPORT_CHECKBOX;
            x = BACKGROUND_X + BACKGROUND_W - 0.045 * safezoneW;
            y = BACKGROUND_Y + 0.140 * safezoneH;
            w = 0.025 * safezoneW;
            h = 0.035 * safezoneH;
        };

        class AirFighterLabel: VehicleSpawnerModule_RscText
        {
            idc = 205537;
            text = "Sternenjäger";
            x = BACKGROUND_X + 0.02 * safezoneW;
            y = BACKGROUND_Y + 0.180 * safezoneH;
            w = 0.12 * safezoneW;
            h = 0.035 * safezoneH;
        };
        class AirFighterCheckbox: RscCheckbox
        {
            idc = RB205_IDC_AIR_FIGHTER_CHECKBOX;
            x = BACKGROUND_X + BACKGROUND_W - 0.045 * safezoneW;
            y = BACKGROUND_Y + 0.180 * safezoneH;
            w = 0.025 * safezoneW;
            h = 0.035 * safezoneH;
        };

        class NavalLabel: VehicleSpawnerModule_RscText
        {
            idc = 205539;
            text = "Wasser";
            x = BACKGROUND_X + 0.02 * safezoneW;
            y = BACKGROUND_Y + 0.220 * safezoneH;
            w = 0.12 * safezoneW;
            h = 0.035 * safezoneH;
        };
        class NavalCheckbox: RscCheckbox
        {
            idc = RB205_IDC_NAVAL_CHECKBOX;
            x = BACKGROUND_X + BACKGROUND_W - 0.045 * safezoneW;
            y = BACKGROUND_Y + 0.220 * safezoneH;
            w = 0.025 * safezoneW;
            h = 0.035 * safezoneH;
        };

        class UtilityLabel: VehicleSpawnerModule_RscText
        {
            idc = 205541;
            text = "Stationär (Utility)";
            x = BACKGROUND_X + 0.02 * safezoneW;
            y = BACKGROUND_Y + 0.260 * safezoneH;
            w = 0.12 * safezoneW;
            h = 0.035 * safezoneH;
        };
        class UtilityCheckbox: RscCheckbox
        {
            idc = RB205_IDC_UTILITY_CHECKBOX;
            x = BACKGROUND_X + BACKGROUND_W - 0.045 * safezoneW;
            y = BACKGROUND_Y + 0.260 * safezoneH;
            w = 0.025 * safezoneW;
            h = 0.035 * safezoneH;
        };

        class OkayButton: VehicleSpawnerModule_RscButton
        {
            idc = 205543; text = "Okay";
            x = BACKGROUND_X + 0.02 * safezoneW;
            y = BACKGROUND_Y + 0.310 * safezoneH;
            w = BUTTON_W; h = BUTTON_H;
            action = "[] call RB205_vehicleSetSpawnerModule_fnc_zeusModuleSelectSpawnTypesDialog";
        };
        class CancelButton: VehicleSpawnerModule_RscButton
        {
            idc = 205544; text = "Abbrechen";
            x = BACKGROUND_X + BACKGROUND_W - BUTTON_W - 0.02 * safezoneW;
            y = BACKGROUND_Y + 0.310 * safezoneH;
            w = BUTTON_W; h = BUTTON_H;
            action = "closeDialog 2;";
        };
    };
};
