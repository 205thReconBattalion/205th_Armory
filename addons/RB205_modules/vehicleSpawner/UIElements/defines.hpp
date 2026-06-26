#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_STRUCTURED_TEXT  13
#define CT_ListNBox         102
#define CT_CONTROLS_GROUP   15
#define CT_COMBO            4

#define ST_LEFT             0
#define ST_CENTER           2
#define ST_MULTI            0x10

#define BACKGROUND_X 		0.4 * safezoneW + safezoneX
#define BACKGROUND_Y		0.2 * safezoneH + safezoneY
#define BACKGROUND_W		0.20 * safezoneW
#define BACKGROUND_H		0.60 * safezoneH

#define COMBOBOX_H			0.04 * BACKGROUND_H
#define SPAWNCOUNTTITLE_W	0.4 * BACKGROUND_W





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

class VehicleSpawnerModule_RscCombo
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = CT_COMBO;
	colorSelect[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,1};
	colorScrollbar[] = {1,0,0,1};
	colorDisabled[] = {1,1,1,0.25};
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	colorTextRight[] = {1,1,1,1};
	colorSelectRight[] = {0,0,0,1};
	colorSelect2Right[] = {0,0,0,1};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	soundSelect[] =
	{
		"\A3\ui_f\data\sound\RscCombo\soundSelect",
		0.1,
		1
	};
	soundExpand[] =
	{
		"\A3\ui_f\data\sound\RscCombo\soundExpand",
		0.1,
		1
	};
	soundCollapse[] =
	{
		"\A3\ui_f\data\sound\RscCombo\soundCollapse",
		0.1,
		1
	};
	maxHistoryDelay = 1;
	class ComboScrollBar
    {
        color[] = {1,1,1,1};
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
	style = ST_MULTI + ST_NO_RECT;
	font = "RobotoCondensed";
	sizeEx = 0.035;
	shadow = 0;
	colorSelectBackground[] = {1,1,1,0.7};
	arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
	arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
	wholeHeight = 0.45;
	colorActive[] = {1,0,0,1};
};