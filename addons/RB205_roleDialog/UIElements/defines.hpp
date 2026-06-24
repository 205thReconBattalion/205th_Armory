#define CT_SHORTCUTBUTTON   16
#define ST_CENTER           2

#define HINTERGRUND_X       0.35 * safezoneW + safezoneX
#define HINTERGRUND_Y       0.20 * safezoneH + safezoneY
#define HINTERGRUND_W       0.30 * safezoneW
#define HINTERGRUND_H       0.60 * safezoneH

#define BUTTON_W            0.05 * safezoneW
#define BUTTON_H            0.075 * safezoneH

#define SPALTE_EINS         HINTERGRUND_X + 0.02 * safezoneW
#define SPALTE_ZWEI         HINTERGRUND_X + 0.09 * safezoneW
#define SPALTE_DREI         HINTERGRUND_X + 0.16 * safezoneW
#define SPALTE_VIER         HINTERGRUND_X + 0.23 * safezoneW

#define ZEILE_EINS          HINTERGRUND_Y + 0.08 * safezoneH
#define ZEILE_ZWEI          HINTERGRUND_Y + 0.19 * safezoneH
#define ZEILE_DREI          HINTERGRUND_Y + 0.30 * safezoneH





class RB205RoleDialog_RscButton
{
    idc = -1;
    type = CT_SHORTCUTBUTTON;
    style = 0;

    text = "";
    action = "";

    color[] = {1,1,1,1};
    color2[] = {1,1,1,1};
    colorDisabled[] = {0.5,0.5,0.5,0.5};
    colorFocused[] = {0,0,0,0};

    colorBackground[] = {1,1,1,0.85};
    colorBackground2[] = {0.55,0.08,0.08,1};
    colorBackgroundFocused[] = {0,0,0,0};

    autoAdjustTexture = true;

    textureNoShortcut = "";

    onMouseEnter = "_this select 0 ctrlSetBackgroundColor  [0.4157,0.0588,0.0588,0.85]; (_this select 0) ctrlCommit 0.1;";
    onMouseExit = "_this select 0 ctrlSetBackgroundColor  [1,1,1,0.85]; (_this select 0) ctrlCommit 0.1;";

    class HitZone
    {
        left = 0;
        top = 0;
        right = 0;
        bottom = 0;
    };

    class ShortcutPos
    {
        left = 0;
        top = 0;
        w = 1;
        h = 1;
    };

    class TextPos
    {
        left = 0;
        top = 0;
        right = 0;
        bottom = 0;
    };

    period = 0;
    periodFocus = 0;
    periodOver = 0;

    font = "PuristaMedium";
    size = 0;
    sizeEx = 0;

    soundEnter[] = {"",0.09,1};
    soundPush[] = {"",0.09,1};
    soundClick[] = {"",0.09,1};
    soundEscape[] = {"",0.09,1};
};



class RB205RoleDialog_RscPicture
{
    access = 0;
    type = 0;
    idc = -1;

    style = 48;

    font = "PuristaMedium";
    sizeEx = 0;

    colorBackground[] = {0,0,0,0};
    colorText[] = {1,1,1,1};

    lineSpacing = 0;
    fixedWidth = 0;

    shadow = 0;

    text = "";
};

