params ["_this"];

[ _this,
	[
		"ACE_fieldDressing","ACE_packingBandage","ACE_elasticBandage","ACE_quikclot",
		"ACE_salineIV","ACE_salineIV_250","ACE_salineIV_500",
		"ACE_morphine","ACE_epinephrine","ACE_adenosine","ACE_painkillers",
		"ACE_surgicalKit","ACE_personalAidKit","ACE_tourniquet","ACE_splint","ACE_suture","ACE_bodyBag","ACE_bodyBag_blue","ACE_bodyBag_white","rr_stretcher",
		"ACE_CableTie"
	]
] call ace_arsenal_fnc_initBox;