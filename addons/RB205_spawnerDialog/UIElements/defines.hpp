#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_STRUCTURED_TEXT  13
#define CT_ListNBox         102
#define CT_CONTROLS_GROUP   15

#define ST_LEFT             0
#define ST_CENTER           2
#define ST_MULTI            0x10



class VehicleSpawner_RscText
{
    type = CT_STATIC;
    idc = -1;
    style = ST_CENTER;
    align = "center";
    text = "";
    font = "PuristaBold";
    sizeEx = 0.035;
    colorText[] = {1,1,1,1};
    colorBackground[] = {0,0,0,0};
};

class VehicleSpawner_RscButton
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

class VehicleSpawner_RscEdit
{
    type = CT_EDIT;
    idc = -1;
    style = ST_LEFT;
    text = "";
    font = "PuristaMedium";
    sizeEx = 0.035;
    colorText[] = {1,1,1,1};
    colorBackground[] = {0.05,0.05,0.05,1};
    colorSelection[] = {0.3,0.3,0.3,1};
    autocomplete = "";
};

class VehicleSpawner_RscListNBox
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = CT_ListNBox;
	rowHeight = 0;
	colorText[] = {1,1,1,1};
	colorScrollbar[] = {0.95,0.95,0.95,1};
	colorSelect[] = {1,1,1,1};
	colorSelect2[] = {1,1,1,1};
	colorSelectBackground[] = {0.95,0.95,0.95,1};
	colorSelectBackground2[] = {1,1,1,0.5};
	colorBackground[] = {0,0,0,1};
	maxHistoryDelay = 1;
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
	drawSideArrows = 0;
	columns[] = {-0.01,0.2,0.4};
	idcLeft = -1;
	idcRight = -1;
	style = ST_MULTI;
	shadow = 0;
	font = "RobotoCondensed";
	sizeEx = 0.04;
	color[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {1,1,1,0.25};
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,1};
	period = 1.2;
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.3;
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