class RB205_spawnVehicleDialog
{
    idd = 205500;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground
    {

        class BackgroundSelection: VehicleSpawner_RscText
        {
            idc = -1;
            x = 0.2 * safezoneW + safezoneX;
            y = 0.2 * safezoneH + safezoneY;
            w = 0.30 * safezoneW;
            h = 0.60 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };

        class BackgroundVehicleInfo: VehicleSpawner_RscText
        {
            idc = -1;
            x = 0.5 * safezoneW + safezoneX;
            y = 0.2 * safezoneH + safezoneY;
            w = 0.30 * safezoneW;
            h = 0.60 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };

        class BackgroundTitelBar: VehicleSpawner_RscText
        {
            idc = -1;
            x = 0.2 * safezoneW + safezoneX;
            y = 0.18 * safezoneH + safezoneY;
            w = 0.6 * safezoneW;
            h = 0.02 * safezoneH;
            colorBackground[] = {0.4157,0.0588,0.0588,0.8};
        };


    };

    class controls
    {
        class ConfirmButton: VehicleSpawner_RscButton
        {
            idc = 205502;
            text = "Spawnen";
            x = 0.2 * safezoneW + safezoneX;
            y = 0.8 * safezoneH + safezoneY;
            w = 0.11 * safezoneW;
            h = 0.04 * safezoneH;

            action = "";
        };

        class CloseButton: VehicleSpawner_RscButton
        {
            idc = 205503;
            text = "Schließen";
            x = 0.313 * safezoneW + safezoneX;
            y = 0.8 * safezoneH + safezoneY;
            w = 0.11 * safezoneW;
            h = 0.04 * safezoneH;

            action = "closeDialog 0;";
        };
        class VehicleSelection : VehicleSpawner_RscListNBox
        {
            idc = 205504;
            x = 0.21 * safezoneW + safezoneX;
            y = 0.22 * safezoneH + safezoneY;
            w = 0.28 * safezoneW;
            h = 0.58 * safezoneH;
            
	        columns[] = {-0.01,0.75,0.88,0.95};

            onLBSelChanged = "_this call RB205_spawnerDialog_fnc_onVehicleSelected";
        };
        class InfoGroup
        {
            idc = 205510;
            type = CT_CONTROLS_GROUP;
            style = 0;

            x = 0.51 * safezoneW + safezoneX;
            y = 0.21 * safezoneH + safezoneY;
            w = 0.28 * safezoneW;
            h = 0.58 * safezoneH;

            class VScrollbar
            {
                width = 0.015;
                color[] = {1,1,1,1};
                autoScrollEnabled = 0;
            };

            class HScrollbar
            {
                height = 0;
            };

            class Controls
            {
                class VehicleInfoText
                {
                    idc = 205505;
                    type = CT_STRUCTURED_TEXT;
                    style = ST_MULTI;
                    text = "";

                    size = 0.035;
                    colorText[] = {1,1,1,1};

                    x = 0;
                    y = 0;
                    w = 0.28 * safezoneW;
                    h = 0.58 * safezoneH;

                    colorBackground[] = {0,0,0,0.7};

                    class Attributes
                    {
                        font = "PuristaMedium";
                        color = "#FFFFFF";
                        align = "left";
                        valign = "top";
                        shadow = 0;
                    };
                    class VScrollbar
                    {
                        width = 0.021;
                        autoScrollEnabled = 1;
                    };
                };
            };
        };

        class TitelName: VehicleSpawner_RscText
        {
            idc = 205506;
            text = "Fahrzeug";
            x = 0.215 * safezoneW + safezoneX;
            y = 0.2 * safezoneH + safezoneY;
            w = 0.08 * safezoneW;
            h = 0.02 * safezoneH;
            colorBackground[] = {0,0,0,0};
        };
        class TitelSeats: VehicleSpawner_RscText
        {
            idc = 205507;
            text = "Seats";
            x = 0.405 * safezoneW + safezoneX;
            y = 0.2 * safezoneH + safezoneY;
            w = 0.05 * safezoneW;
            h = 0.02 * safezoneH;
            colorBackground[] = {0,0,0,0};
        };
        class TitelCargo: VehicleSpawner_RscText
        {
            idc = 205508;
            text = "Cargo";
            x = 0.44 * safezoneW + safezoneX;
            y = 0.2 * safezoneH + safezoneY;
            w = 0.05 * safezoneW;
            h = 0.02 * safezoneH;
            colorBackground[] = {0,0,0,0};
        };
        class Titel: VehicleSpawner_RscText
        {
            idc = 205509;
            text = "205th Recon Battalion";
            x = 0.45 * safezoneW + safezoneX;
            y = 0.18 * safezoneH + safezoneY;
            w = 0.1 * safezoneW;
            h = 0.02 * safezoneH;
            colorBackground[] = {0,0,0,0};
        };
    };
};