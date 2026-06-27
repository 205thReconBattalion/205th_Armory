#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_LISTBOX          5
#define CT_STRUCTURED_TEXT  13
#define CT_LISTNBOX         102
#define CT_CONTROLS_GROUP   15
#define CT_COMBO            4

#define ST_LEFT             0
#define ST_CENTER           2
#define ST_MULTI            0x10

#define BACKGROUND_X 		0.4 * safezoneW + safezoneX
#define BACKGROUND_Y		0.2 * safezoneH + safezoneY
#define BACKGROUND_W		0.20 * safezoneW
#define BACKGROUND_H		0.60 * safezoneH

#define LISTBOX_H			0.9 * BACKGROUND_H
#define EDIT_H  			0.04 * BACKGROUND_H
#define SPAWNCOUNTTITLE_W	0.4 * BACKGROUND_W
#define BUTTON_W            0.055 * safezoneW
#define BUTTON_H            0.04 * safezoneH




class VehicleSpawnerModule_RscText
{
    type = CT_STATIC;
    idc = -1;
    style = ST_LEFT;
    align = "left";
    text = "";
    font = "PuristaBold";
    sizeEx = 0.035;
    colorText[] = {1,1,1,1};
    colorBackground[] = {0,0,0,0};
};

class VehicleSpawnerModule_RscEdit
{
    type = CT_EDIT;
    idc = -1;
    style = ST_LEFT;
    align = "left";
    text = "";
    font = "PuristaBold";
    sizeEx = 0.035;
    colorText[] = {1,1,1,1};
    colorBackground[] = {0,0,0,0};
};



class VehicleSpawnerModule_RscButton
{
    type = CT_BUTTON;
    idc = -1;
    style = ST_CENTER;
    text = "";
    font = "PuristaMedium";
    sizeEx = 0.035;
    colorText[] = {1,1,1,1};
    colorBackground[] = {0.15,0.15,0.15,1};
    colorBackgroundActive[] = {0.25,0.25,0.25,1};
    colorFocused[] = {0.25,0.25,0.25,1};
    colorDisabled[] = {0.5,0.5,0.5,1};
    colorBackgroundDisabled[] = {0.1,0.1,0.1,1};
    colorShadow[] = {0,0,0,0};
    colorBorder[] = {0,0,0,1};
    offsetX = 0;
    offsetY = 0;
    offsetPressedX = 0.002;
    offsetPressedY = 0.002;
    borderSize = 0;
    soundEnter[] = {"",0.1,1};
    soundPush[] = {"",0.1,1};
    soundClick[] = {"",0.1,1};
    soundEscape[] = {"",0.1,1};
};

class VehicleSpawnerModule_RscListNBox
{
    access = 0;
    type = CT_LISTNBOX;
    style = 0;

    font = "RobotoCondensed";
    sizeEx = 0.04;
    rowHeight = 0;

    shadow = 0;

    colorText[] = {1,1,1,1};
    colorDisabled[] = {1,1,1,0.25};
    colorBackground[] = {0,0,0,1};

    colorSelect[] = {1,1,1,1};
    colorSelect2[] = {1,1,1,1};
    colorSelectBackground[] = {0.95,0.95,0.95,0.5};
    colorSelectBackground2[] = {1,1,1,0};

    colorScrollbar[] = {0.95,0.95,0.95,1};

    colorPicture[] = {1,1,1,1};
    colorPictureSelected[] = {1,1,1,1};
    colorPictureDisabled[] = {1,1,1,0.25};

    maxHistoryDelay = 1;

    period = 1.2;

    soundSelect[] =
    {
        "",
        0.1,
        1
    };

    autoScrollSpeed = -1;
    autoScrollDelay = 5;
    autoScrollRewind = 0;

    arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
    arrowFull = "#(argb,8,8,3)color(1,1,1,1)";

    class ListScrollBar
    {
        color[] = {1,1,1,0.6};
        colorActive[] = {1,1,1,1};
        colorDisabled[] = {1,1,1,0.3};

        thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
        arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
        arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
        border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";

        shadow = 0;
        scrollSpeed = 0.06;

        width = 0;
        height = 0;

        autoScrollEnabled = 0;
        autoScrollSpeed = -1;
        autoScrollDelay = 5;
        autoScrollRewind = 0;
    };
};
