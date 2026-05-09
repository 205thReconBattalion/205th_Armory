class RscTitles
{
    titles[] = {"idcardInteractive"};

    class idcardInteractive
    {
        idd = -1;
        movingEnable = 1;
        duration = 20; 
        fadeIn = 0;
        fadeOut = 0;
        name = "idcardInteractive";
        onLoad = "uiNamespace setVariable ['idcardInteractive', _this select 0]";
        onUnload = "uiNamespace setVariable ['idcardInteractive', nil]";
        
        class controls
        {
            //Define
            class RscText
            {                
                idc = -1;
                type = 0;
                x = 0.77 * safezoneW + safezoneX;
                y = 0.54 * safezoneH + safezoneY;
                w = 0.2 * safezoneW;        
                h = 0.03 * safezoneH;

                text = "";
                colorBackground[] = {0, 0, 0, 0};
                colorText[] = {0.73, 0.96, 0.98, 0.6};
                font = "ls_aurebesh";
                sizeEx = 0.7 * 0.03 * safezoneH;
                
                shadow = 1;
                style = 0x00; 
            }
            class NamingText : RscText
            {
                idc = -1;
                x = 0.7 * safezoneW + safezoneX;
                y = 0.4 * safezoneH + safezoneY;
                w = 0.2 * safezoneW;        
                h = 0.03 * safezoneH;

                text = "";
                font = "ls_aurebesh";
                sizeEx = 0.7 * 0.03 * safezoneH;
                
                shadow = 1;
                style = 0x00; 
            };
            class VariableText : RscText
            {
                idc = -1;
                x = 0.7 * safezoneW + safezoneX;
                y = 0.4 * safezoneH + safezoneY;
                w = 0.2 * safezoneW;        
                h = 0.03 * safezoneH;

                text = "";
                font = "JLTS_republic";
                sizeEx = 0.7 * 0.03 * safezoneH;
                
                shadow = 1;
                style = 0x00; 
            };

        //Controls
            class RscPicture
            {
                deletable = 0;
                fade = 0;
                access = 0;
                type = CT_STATIC;
                idc = 205007;
                style = 48;
                colorBackground[] = { 0, 0, 0, 0 };
                colorText[] = { 1, 1, 1, 1 };
                font = "JLTS_republic";
                sizeEx = 0;
                lineSpacing = 0;
                text = "";
                fixedWidth = 0;
                shadow = 0;
                x = 0.77 * safezoneW + safezoneX;
                y = 0.2 * safezoneH + safezoneY;
                h = 0.7 * safezoneH;
                w = 0.3 * safezoneH;
                tooltipColorText[] = { 1, 1, 1, 1 };
                tooltipColorBox[] = { 1, 1, 1, 1 };
                tooltipColorShade[] = { 0, 0, 0, 0.65 };
            };
            class nameText : NamingText
            {
                idc = 205008;
                x = 0.78 * safezoneW + safezoneX;
                y = 0.275 * safezoneH + safezoneY;
                w = 0.2 * safezoneW;        
                h = 0.03 * safezoneH;
                text = "Name:";
            };
            class idText : NamingText
            {
                idc = 205009;
                x = 0.78 * safezoneW + safezoneX;
                y = 0.305 * safezoneH + safezoneY;
                w = 0.2 * safezoneW;        
                h = 0.03 * safezoneH;
                text = "ID:";
            };
            class rankText : NamingText
            {
                idc = 205010;
                x = 0.78 * safezoneW + safezoneX;
                y = 0.335 * safezoneH + safezoneY;
                w = 0.2 * safezoneW;        
                h = 0.03 * safezoneH;
                text = "Rank:";

            };
            class squadText : NamingText
            {
                idc = 205011;
                x = 0.78 * safezoneW + safezoneX;
                y = 0.48 * safezoneH + safezoneY;
                w = 0.2 * safezoneW;        
                h = 0.03 * safezoneH;
                text = "Squad:";
            };
            class battalionText : NamingText
            {
                idc = 205012;
                x = 0.78 * safezoneW + safezoneX;
                y = 0.51 * safezoneH + safezoneY;
                w = 0.2 * safezoneW;        
                h = 0.03 * safezoneH;
                text = "Unit:";
            };
            class homeWorldText : NamingText
            {
                idc = 205014;
                x = 0.78 * safezoneW + safezoneX;
                y = 0.365 * safezoneH + safezoneY;
                w = 0.2 * safezoneW;        
                h = 0.03 * safezoneH;
                text = "Planet:";
            };
            class variableNameText : VariableText
            {
                idc = 205001;
                x = 0.85 * safezoneW + safezoneX;
                y = 0.275 * safezoneH + safezoneY;
                w = 0.2 * safezoneW;        
                h = 0.03 * safezoneH;
                text = "";
            };
            class variableIdText : VariableText
            {
                idc = 205002;
                x = 0.85 * safezoneW + safezoneX;
                y = 0.305 * safezoneH + safezoneY;
                w = 0.2 * safezoneW;        
                h = 0.03 * safezoneH;
                text = "";
            };
            class variableRankText : VariableText
            {
                idc = 205003;
                x = 0.85 * safezoneW + safezoneX;
                y = 0.335 * safezoneH + safezoneY;
                w = 0.2 * safezoneW;        
                h = 0.03 * safezoneH;
                text = "";
            };
            class variableHomeWorldText : VariableText
            {
                idc = 205015;
                x = 0.85 * safezoneW + safezoneX;
                y = 0.365 * safezoneH + safezoneY;
                w = 0.2 * safezoneW;        
                h = 0.03 * safezoneH;
                text = "";
            };
            class variableSquadText : VariableText
            {
                idc = 205004;
                x = 0.85 * safezoneW + safezoneX;
                y = 0.48 * safezoneH + safezoneY;
                w = 0.2 * safezoneW;        
                h = 0.03 * safezoneH;
                text = "";
            };
            class variableBattalionText : VariableText
            {
                idc = 205005;
                x = 0.85 * safezoneW + safezoneX;
                y = 0.51 * safezoneH + safezoneY;
                w = 0.2 * safezoneW;        
                h = 0.03 * safezoneH;
                text = "";
            };
            class variableTitleText : VariableText
            {
                idc = 205006;
                x = 0.78 * safezoneW + safezoneX;
                y = 0.222 * safezoneH + safezoneY;
                w = 0.2 * safezoneW;        
                h = 0.03 * safezoneH;
                sizeEx = 0.7 * 0.05 * safezoneH;
                text = "";
            };
            class variableLicensesText
            {
                idc = 205013;
                type = 13;
                style = 0;
                x = 0.78 * safezoneW + safezoneX;
                y = 0.48 * safezoneH + safezoneY;
                w = 0.2 * safezoneW;
                h = 0.15 * safezoneH;
                text = "";
                size = 0.03;
                colorBackground[] = {0,0,0,0};
                shadow = 0;

                class Attributes
                {
                    font = "JLTS_republic";
                    color = "";
                    align = "left";
                    valign = "top";
                    shadow = 0;
                };
            };
            class licencesPermitsText : NamingText
            {
                idc = 205016;
                x = 0.78 * safezoneW + safezoneX;
                y = 0.45 * safezoneH + safezoneY;
                w = 0.2 * safezoneW;        
                h = 0.03 * safezoneH;
                text = "";
            };
        };
    };
};