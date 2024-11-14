params ["_this"];

[ _this,
	[
		"RB205_diving_inv",
		"RB205_NV","RB205_NV_marksman","RB205_NV_rangefinder","RB205_NV_arf_antenna","RB205_NV_chip","RB205_rebreather",
		"RB205_binocular","RB205_binocular_arf",
		"RB205_B_autoTurret","RB205_B_heavyRepeater","RB205_B_prowler","RB205_B_squadShield","RB205_B_mortar",

		"WBK_HeadLampItem_Narrow","WBK_HandFlashlight",
		"jen_jetpacks_example_refuelItemMedium",
		"knd_repulsor","knd_camoNetArid","knd_camoNetLush","knd_camoNetAlpine",
		"tfd_ls1","tfd_pager1",

		"ItemMap",
		"ItemGPS","B_UavTerminal",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch","ACE_Altimeter","ChemicalDetector_01_watch_F",

		"ACE_EarPlugs","ACE_EntrenchingTool","ACE_Fortify","ACE_wirecutter","ACE_CableTie","ACE_Flashlight_XL50","ACE_Flashlight_KSF1","ACE_Flashlight_MX991","ACE_IR_Strobe_Item","ACE_Chemlight_Shield","ACE_DefusalKit","ACE_Clacker","ACE_M26_Clacker","ACE_HuntIR_monitor","ACE_MapTools","ACE_PlottingBoard","ACE_SpottingScope","ACE_Tripod","ACE_Sandbag_empty","ACE_microDAGR","ACE_UAVBattery","ACE_RangeTable_82mm",
		"ACE_SpraypaintBlack","ACE_SpraypaintWhite","ACE_SpraypaintRed","ACE_SpraypaintGreen","ACE_SpraypaintBlue","ACE_SpraypaintYellow",
		"ace_marker_flags_white","ace_marker_flags_black","ace_marker_flags_red","ace_marker_flags_green","ace_marker_flags_blue","ace_marker_flags_yellow","ace_marker_flags_orange","ace_marker_flags_purple",
		"ACE_rope3","ACE_rope6","ACE_rope12","ACE_rope15","ACE_rope18","ACE_rope27","ACE_rope36",
		
		"JLTS_repairkit_weapon_mini","JLTS_repairkit_weapon","JLTS_riot_shield_item","JLTS_MSE6_manual","JLTS_MSE6_toolkit","JLTS_droidCaller","JLTS_scanner_police",
		"JLTS_ids_gar_army","JLTS_ids_gar_medical","JLTS_ids_gar_navy","JLTS_ids_police","JLTS_ids_license_weapon_primary","JLTS_ids_license_weapon_secondary","JLTS_ids_license_driver_large","JLTS_ids_license_driver_medium","JLTS_ids_license_driver_small",

		"RB205_prowler_item",

		"MineDetector","ToolKit","Laserbatteries"
	]
] call ace_arsenal_fnc_initBox;