class RB205_T7ION_RscChargeSegment
{
	type = 0;
	style = 48;

	x = "0.5 - 0.06 * safezoneH * pixelW / pixelH";
	y = "0.5 - 0.06 * safezoneH";
	w = "0.12 * safezoneH * pixelW / pixelH";
	h = "0.12 * safezoneH";

	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {1, 1, 1, 0.28};
	font = "PuristaMedium";
	sizeEx = 0.02;
	shadow = 0;
};

class RscTitles
{
	class RB205_T7ION_chargeRing
	{
		idd = -1;
		movingEnable = 0;
		duration = 1e+6;
		fadeIn = 0;
		fadeOut = 0;
		name = "RB205_T7ION_chargeRing";
		onLoad = "uiNamespace setVariable ['RB205_T7ION_chargeRing', _this select 0]";
		onUnload = "uiNamespace setVariable ['RB205_T7ION_chargeRing', nil]";

		class controls
		{
			class Segment0: RB205_T7ION_RscChargeSegment
			{
				idc = 20510;
				text = "\RB205_weapons\T7ION\data\ui\charge_seg_0_ca.paa";
			};
			class Segment1: RB205_T7ION_RscChargeSegment
			{
				idc = 20511;
				text = "\RB205_weapons\T7ION\data\ui\charge_seg_1_ca.paa";
			};
			class Segment2: RB205_T7ION_RscChargeSegment
			{
				idc = 20512;
				text = "\RB205_weapons\T7ION\data\ui\charge_seg_2_ca.paa";
			};
			class Segment3: RB205_T7ION_RscChargeSegment
			{
				idc = 20513;
				text = "\RB205_weapons\T7ION\data\ui\charge_seg_3_ca.paa";
			};
			class Segment4: RB205_T7ION_RscChargeSegment
			{
				idc = 20514;
				text = "\RB205_weapons\T7ION\data\ui\charge_seg_4_ca.paa";
			};
			class Segment5: RB205_T7ION_RscChargeSegment
			{
				idc = 20515;
				text = "\RB205_weapons\T7ION\data\ui\charge_seg_5_ca.paa";
			};
			class Segment6: RB205_T7ION_RscChargeSegment
			{
				idc = 20516;
				text = "\RB205_weapons\T7ION\data\ui\charge_seg_6_ca.paa";
			};
			class Segment7: RB205_T7ION_RscChargeSegment
			{
				idc = 20517;
				text = "\RB205_weapons\T7ION\data\ui\charge_seg_7_ca.paa";
			};
		};
	};
};
