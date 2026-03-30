class RscTitles
{
    titles[] = {"progress_bar_shield"};

    class progress_bar_shield
    {
        idd = -1;
        movingEnable = 1;
        duration = 1e+6; 
        fadeIn = 0;
        fadeOut = 0;
        name = "progress_bar_shield";
        onLoad = "uiNamespace setVariable ['progress_bar_shield', _this select 0]";
        onUnload = "uiNamespace setVariable ['progress_bar_shield', nil]";
        
        class controls
        {
            class RscProgressShield
            {
                idc = 1521;
                type = 8;
                style = 0;
                
                x = "(profilenamespace getvariable [""IGUI_grid_205RB_Z6_Shield_X"",	0.4 * safezoneW + safezoneX])";
                y = "(profilenamespace getvariable [""IGUI_grid_205RB_Z6_Shield_Y"",	0.2 * safezoneH + safezoneY])";
                w = "(profilenamespace getvariable [""IGUI_grid_205RB_Z6_Shield_W"",	0.2 * safezoneW])";        
                h = "(profilenamespace getvariable [""IGUI_grid_205RB_Z6_Shield_H"",	0.03 * safezoneH])";

                
                colorBar[] = {0.3, 0.6, 0.9, 0.8};
                colorFrame[] = {0, 0, 0, 1};
                texture = "#(argb,8,8,3)color(1,1,1,1)";
            };

            class RscProgressShieldText
            {
                idc = 1522;
                type = 0;
                x = "(profilenamespace getvariable [""IGUI_grid_205RB_Z6_Shield_X"",	0.4 * safezoneW + safezoneX])";
                y = "(profilenamespace getvariable [""IGUI_grid_205RB_Z6_Shield_Y"",	0.2 * safezoneH + safezoneY])";
                w = "(profilenamespace getvariable [""IGUI_grid_205RB_Z6_Shield_W"",	0.2 * safezoneW])";        
                h = "(profilenamespace getvariable [""IGUI_grid_205RB_Z6_Shield_H"",	0.03 * safezoneH])";

                text = "";
                colorBackground[] = {0, 0, 0, 0};
                colorText[] = {1, 1, 1, 1};
                font = "PuristaMedium";
                sizeEx = "0.7 * (profilenamespace getvariable [""IGUI_grid_205RB_Z6_Shield_H"",	0.02 * safezoneH])";
                
                shadow = 1;
                style = 0x02; 
            };
        };
    };
};