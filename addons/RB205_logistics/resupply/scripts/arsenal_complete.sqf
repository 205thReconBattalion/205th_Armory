params ["_this"];

[ _this,
	[
		//WEAPONS / ATTACHMENTS / AMMO
		"RB205_DC15A","RB205_DC15A_GL","RB205_DC15LE","RB205_optic_DC15LE","RB205_muzzle_DC15LE",
		"RB205_DC15S","RB205_DC15S_GL",
		"RB205_DC15C","RB205_DC15C_GL","RB205_optic_DC15C",
		"RB205_DC15L","RB205_optic_DC15L","RB205_bipod_DC15L",
		"RB205_Valken38X","RB205_optic_VK38X","RB205_bipod_VK38X",
		"RB205_DC15X","RB205_optic_DC15X","RB205_muzzle_DC15X","RB205_bipod_DC15X",
		"RB205_WestarM5","RB205_optic_WM5",
		"RB205_DC17M",
		"RB205_Z6",
		"RB205_DP23",
		"RB205_BTX42",
		"RB205_T7ION",
		"RB205_MPL57",

		"RB205_RPS6","RB205_RPS6_disposable",
		"RB205_PLX1_F",
		"RB205_Chaingun",

		"RB205_DC17","RB205_DC17_Dual","RB205_DC17_alt",
		
		"RB205_Standard_Energy_Pack","RB205_Heavy_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Experimental_Energy_Pack","RB205_DC17M_Blaster_Mag","RB205_DC17M_Sniper_Mag","RB205_DC17M_AT_Mag","RB205_RapidFire_Energy_Pack","RB205_Scatter_Energy_Pack","RB205_BTX42_mag","RB205_T7ION_mag","JLTS_stun_mag_short","JLTS_stun_mag_long",
		"RB205_MAG_RPS6","RB205_MK39_AA","RB205_chaingun_mag",
		"RB205_Compact_Energy_Pack",		
		"RB205_ugl_he","RB205_ugl_smoke_white","RB205_ugl_smoke_red","RB205_ugl_smoke_green","RB205_ugl_smoke_blue","RB205_ugl_smoke_yellow","RB205_ugl_smoke_orange","RB205_ugl_smoke_purple","RB205_ugl_flare_white","RB205_ugl_flare_red","RB205_ugl_flare_green","RB205_ugl_flare_ir",
		"RB205_ugl_he_3rnd","RB205_ugl_smoke_white_3rnd","RB205_ugl_smoke_red_3rnd","RB205_ugl_smoke_green_3rnd","RB205_ugl_smoke_blue_3rnd","RB205_ugl_smoke_yellow_3rnd","RB205_ugl_smoke_orange_3rnd","RB205_ugl_smoke_purple_3rnd","RB205_ugl_flare_white_3rnd","RB205_ugl_flare_red_3rnd","RB205_ugl_flare_green_3rnd","RB205_ugl_flare_ir_3rnd",
		"RB205_ugl_he_6rnd","RB205_ugl_huntir","RB205_ugl_pike",

		"RB205_datapad","3AS_FusionCutter_F",
		"3AS_FusionCutter_Magazine","3AS_FusionCutter_Dewreck_Magazine","3AS_Datapad_Base_Mag",
		
		//IMPERIAL WEAPONS / ATTACHMENTS / AMMO
		"RB205_DLT19","RB205_DLT19X","RB205_E11","RB205_E11_stock","RB205_E11_gl","RB205_E11D","RB205_EC17","RB205_RK3","RB205_SE14R",
		"3AS_Imp_Optic_1","JMSLLTE_e11_holoSF_Scope","3AS_Imp_Optic_E11","JMSLLTE_ec17_holo_Scope","JMSLLTE_e11_bl_Scope","3AS_Imp_Optic_4","JMSLLTE_e11_holo_Scope","3AS_Imp_Optic_3","3AS_Imp_Optic_DLT19x","3AS_Imp_Optic_2",
		"RB205_Heavy_Energy_Pack_red","RB205_Compact_Energy_Pack_red","RB205_Standard_Energy_Pack_red","RB205_Overcharged_Energy_Pack_red","RB205_Experimental_Energy_Pack_red",
		
		//GRENADES / EXPLOSIVES
		"RB205_thermalDet","RB205_impactGren","RB205_sonicDet","RB205_droidPopper","RB205_smokeWhite","RB205_smokeBlue","RB205_smokeGreen","RB205_smokeRed","RB205_smokeYellow","RB205_smokePurple","RB205_smokeOrange","RB205_lumaWhite","RB205_lumaGreen","RB205_lumaRed","RB205_lumaYellow",
		"ACE_Chemlight_White","Chemlight_blue","Chemlight_green","Chemlight_red","ACE_Chemlight_Orange","Chemlight_yellow","ACE_Chemlight_HiWhite","ACE_Chemlight_HiBlue","ACE_Chemlight_HiGreen","ACE_Chemlight_HiRed","ACE_Chemlight_HiYellow","ACE_Chemlight_UltraHiOrange","ACE_Chemlight_IR",
		"ShieldGrenade_Mag","ShieldGrenadePersonal_Mag","SquadShieldMagazine",
		"GrenadeInsiendPSENG",
		"Aux212_7PrG_Proton_Charge","Aux212_X10_Thermal_Disruptor","Aux212_X3_Thermal_Disruptor","3AS_DetPack","EC01_RemoteMagazine","HX_AT_Mine_Mag","RTX_RemoteMagazine","APERSMineDispenser_Mag","SWLW_clones_spec_breach_mag","ls_mag_breach_remoteCharge","C7_Remote_Mag","C12_Remote_Mag","ls_mag_caltrops_mine","ls_mag_caltrops_dispenser","SWLW_clones_spec_demo_mag","SWLW_DetPack_remote_mag","ls_mag_detPack_remoteCharge","JMSLLTE_Detonitecharge_imp_Mag","JMSLLTE_Detonitecharge_reb_Mag","ls_mag_demo_remoteCharge","IEDLandBig_Remote_Mag","IEDUrbanBig_Remote_Mag","DemoCharge_Remote_Mag","ATMine_Range_Mag","UNSCMine_Range_Mag","M168_Remote_Mag","SatchelCharge_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSBoundingMine_Range_Mag","M41_IED_C_Remote_Mag","M41_IED_Remote_Mag","M41_IED_B_Remote_Mag","SLAMDirectionalMine_Wire_Mag","APERSTripMine_Wire_Mag","212th_MPC_MK1_F","IEDLandSmall_Remote_Mag","IEDUrbanSmall_Remote_Mag","TrainingMine_Mag","ACE_FlareTripMine_Mag","ACE_FlareTripMine_Mag_Green","ACE_FlareTripMine_Mag_Red","APERSMine_Range_Mag","ACE_APERSMine_ToePopper_Mag",

		//REGULAR ARMOR / EQUIPMENT
		"RB205_H_recruit","RB205_H_trooper","RB205_H_corporal","RB205_H_sergeant","RB205_H_lieutenant",
		"RB205_H_ab_recruit","RB205_H_ab_trooper","RB205_H_ab_corporal","RB205_H_ab_sergeant","RB205_H_ab_lieutenant",
		"RB205_H_arf_recruit","RB205_H_arf_trooper","RB205_H_arfF_trooper","RB205_H_arf_corporal","RB205_H_arfF_corporal","RB205_H_arf_sergeant","RB205_H_arfF_sergeant","RB205_H_arf_lieutenant","RB205_H_arfF_lieutenant","RB205_H_arf_trooper_arctic","RB205_H_arf_trooper_desert","RB205_H_arf_trooper_jungle","RB205_H_arf_trooper_woodland",
		"RB205_H_plt_recruit","RB205_H_plt_trooper","RB205_H_plt_corporal","RB205_H_plt_sergeant","RB205_H_plt_lieutenant",
		"RB205_H_crew_trooper","RB205_H_crew_corporal","RB205_H_crew_sergeant","RB205_H_crew_lieutenant",
		"RB205_H_snow_recruit","RB205_H_snow_trooper","RB205_H_snow_corporal","RB205_H_snow_sergeant","RB205_H_snow_lieutenant",
		"RB205_H_hazard_recruit","RB205_H_hazard_trooper","RB205_H_hazard_corporal","RB205_H_hazard_sergeant","RB205_H_hazard_lieutenant",
		"RB205_H_arc_trooper",
		"RB205_H_navy_ensign","RB205_H_navy_officer","RB205_H_navy_pettyOfficer","RB205_H_navy_chiefPettyOfficer","RB205_H_navy_admiral",
		
		"RB205_U_recruit","RB205_U_trooper","RB205_U_corporal","RB205_U_sergeant","RB205_U_lieutenant",
		"RB205_U_arf_trooper","RB205_U_arf_corporal","RB205_U_arf_sergeant","RB205_U_arf_lieutenant","RB205_U_arf_trooper_arctic","RB205_U_arf_trooper_desert","RB205_U_arf_trooper_jungle","RB205_U_arf_trooper_woodland",
		"RB205_U_plt_trooper","RB205_U_plt_corporal","RB205_U_plt_sergeant","RB205_U_plt_lieutenant",
		"RB205_U_snow_recruit","RB205_U_snow_trooper","RB205_U_snow_corporal","RB205_U_snow_sergeant","RB205_U_snow_lieutenant",
		"RB205_U_arc_trooper",
		"RB205_U_navy_ensign","RB205_U_navy_officer","RB205_U_navy_pettyOfficer","RB205_U_navy_chiefPettyOfficer","RB205_U_navy_admiral",

		"RB205_V_ct","RB205_V_clc","RB205_V_cp","RB205_V_cs","RB205_V_csm","RB205_V_cl","RB205_V_medic","RB205_V_grenadier","RB205_V_rebreather",
		"RB205_V_ab_ct","RB205_V_ab_clc","RB205_V_ab_cp","RB205_V_ab_cs","RB205_V_ab_csm","RB205_V_ab_cl","RB205_V_ab_medic","RB205_V_ab_grenadier",
		"RB205_V_arf_ct","RB205_V_arf_clc","RB205_V_arf_cp","RB205_V_arf_cs","RB205_V_arf_csm","RB205_V_arf_cl","RB205_V_arf_medic",
		"RB205_V_plt_ct","RB205_V_plt_clc","RB205_V_plt_cp","RB205_V_plt_cs","RB205_V_plt_csm","RB205_V_plt_cl",
		"RB205_V_snow_ct","RB205_V_snow_clc","RB205_V_snow_cp","RB205_V_snow_cs","RB205_V_snow_csm","RB205_V_snow_cl","RB205_V_snow_medic","RB205_V_snow_grenadier",
		"RB205_V_arc",
		"RB205_V_navy_ensign","RB205_V_navy_officer","RB205_V_navy_pettyOfficer","RB205_V_navy_chiefPettyOfficer","RB205_V_navy_admiral",

		"RB205_B_heavy","RB205_B_medic","RB205_B_radio","RB205_B_rocket","RB205_B_eod","RB205_B_radio_mini","RB205_B_radio_mini_blk",
		"RB205_B_ab","RB205_B_ab_heavy","RB205_B_ab_medic","RB205_B_ab_radio","RB205_B_ab_rocket","RB205_B_ab_eod","RB205_B_ab_camo_arctic","RB205_B_ab_camo_desert","RB205_B_ab_camo_jungle","RB205_B_ab_camo_woodland",
		"RB205_B_arf","RB205_B_arf_arctic","RB205_B_arf_desert","RB205_B_arf_jungle","RB205_B_arf_woodland",
		"RB205_B_snow_heavy","RB205_B_snow_medic","RB205_B_snow_radio","RB205_B_snow_rocket","RB205_B_snow_eod",
		"RB205_B_arc","RB205_B_arc_jetpack",
		"RB205_B_autoTurret","RB205_B_heavyRepeater","RB205_B_prowler","RB205_B_squadShield","RB205_B_mortar",
		"RB205_navy_comlink",

		"RB205_diving_inv","RB205_VIS",

		"RB205_NV","RB205_NV_marksman","RB205_NV_rangefinder","RB205_NV_arf_antenna","RB205_NV_chip","RB205_rebreather",

		"RB205_binocular","RB205_binocular_arf",

		"RB205_arc_bracer",

		//SQUAD ARMOR
		"RB205_U_trooper_zillo","RB205_U_corporal_zillo","RB205_U_sergeant_zillo",
		"RB205_U_trooper_chimaera","RB205_U_corporal_chimaera","RB205_U_sergeant_chimaera",
		"RB205_U_trooper_rancor","RB205_U_corporal_rancor","RB205_U_sergeant_rancor",
		"RB205_U_trooper_wampa","RB205_U_corporal_wampa","RB205_U_sergeant_wampa",
		"RB205_U_arf_trooper_nexu","RB205_U_arf_corporal_nexu","RB205_U_arf_sergeant_nexu",
		"RB205_U_plt_trooper_banshee","RB205_U_plt_corporal_banshee","RB205_U_plt_sergeant_banshee",

		//CUSTOM ARMOR
		"RB205_H_tachanka","RB205_U_tachanka",
		"RB205_H_mando","RB205_U_mando",
		"RB205_H_shadow","RB205_U_shadow",
		"RB205_H_silver","RB205_U_silver",
		"RB205_H_fugger","RB205_U_fugger",
		"RB205_H_akira","RB205_U_akira",
		"RB205_H_lost","RB205_U_lost",
		"RB205_H_lucky","RB205_U_lucky","RB205_V_lucky",
		"RB205_H_pain","RB205_U_pain",
		"RB205_H_fire","RB205_U_fire",
		"RB205_H_tyr","RB205_U_tyr",
		"RB205_H_smoker","RB205_H_ab_smoker","RB205_U_smoker","RB205_V_smoker",
		"RB205_H_zeegers","RB205_U_zeegers",
		"RB205_H_gentleman","RB205_U_gentleman","RB205_V_gentleman",
		"RB205_H_scout","RB205_U_scout",
		"RB205_H_kamaz","RB205_U_kamaz",
		"RB205_H_ark","RB205_U_ark",
		"RB205_H_paso","RB205_U_paso",
		"RB205_H_slow","RB205_H_crew_slow","RB205_U_slow","RB205_V_slow","RB205_VIS_slow",
		"RB205_H_phantom","RB205_U_phantom",
		"RB205_H_lightning","RB205_U_lightning",
		"RB205_H_firefly","RB205_U_firefly",
		"RB205_H_banger","RB205_U_banger",
		"RB205_H_recker","RB205_U_recker",
		"RB205_H_crossfire","RB205_U_crossfire",
		"RB205_H_putzi","RB205_U_putzi","RB205_V_putzi",
		"RB205_H_junior","RB205_U_junior","RB205_V_junior",
		"RB205_H_flank","RB205_U_flank",
		"RB205_H_scythe","RB205_U_scythe","RB205_V_scythe","RB205_scythe_attachments",
		"RB205_H_irwan","RB205_U_irwan",
		"RB205_H_sixes","RB205_U_sixes",
		"RB205_H_doc","RB205_H_doc_damaged","RB205_H_arf_doc","RB205_U_doc","RB205_V_doc","RB205_VIS_doc","RB205_VIS_doc_damaged",
		"RB205_H_norway","RB205_U_norway",
		"RB205_H_jumper","RB205_U_jumper",
		"RB205_H_jay","RB205_U_jay","RB205_V_jay",
		"RB205_H_spark","RB205_H_spark_arf","RB205_U_spark","RB205_U_spark_arf","RB205_V_spark","RB205_V_spark_arf","RB205_B_spark","RB205_B_spark_jetpack","RB205_VIS_spark",
		"RB205_H_unlucky","RB205_U_unlucky",
		"RB205_H_tower","RB205_U_tower","RB205_V_tower",

		//Phase 1 (Unmarked) Armor
		"SW205_H_p1_trooper","SW205_H_p1_sergeant","SW205_H_p1_lieutenant","SW205_H_p1_captain","SW205_H_p1_commander","SW205_H_p1_arf","SW205_H_p1_plt",
		"SW205_U_p1_trooper","SW205_U_p1_sergeant","SW205_U_p1_lieutenant","SW205_U_p1_captain","SW205_U_p1_commander",
		"SW205_B_p1_heavy","SW205_B_p1_medic","SW205_B_p1_rocket","SW205_B_p1_eod","SW205_B_p1_radio","SW205_B_p1_jetpack","SW205_B_p1_jetpack_heavy","SW205_B_p1_jetpack_medic","SW205_B_p1_jetpack_rocket","SW205_B_p1_jetpack_eod","SW205_B_p1_jetpack_radio","SW205_B_p1_arf",

		//Imperial Armor
		"RB205_emp_H_trooper","RB205_emp_H_ab_trooper","RB205_emp_H_scout_trooper","RB205_emp_H_plt_trooper","RB205_emp_H_snow_trooper","RB205_emp_H_tank_trooper","RB205_emp_H_death_trooper",
		"RB205_emp_H_trooper_dirt","RB205_emp_H_trooper_sand","RB205_emp_H_trooper_mud","RB205_emp_H_trooper_shadow","RB205_emp_H_scout_trooper_camo","RB205_emp_H_scout_trooper_mud","RB205_emp_H_scout_trooper_shadow",
		"RB205_emp_H_officer_grey","RB205_emp_H_officer_grey_lowered","RB205_emp_H_officer_green","RB205_emp_H_officer_green_lowered","RB205_emp_H_officer_black","RB205_emp_H_officer_black_lowered","RB205_emp_H_officer_isb_agent","RB205_emp_H_officer_helmet_black","RB205_emp_H_officer_helmet_green",
		
		"RB205_emp_U_trooper","RB205_emp_U_scout_trooper","RB205_emp_U_plt_trooper","RB205_emp_U_snow_trooper","RB205_emp_U_tank_trooper","RB205_emp_U_death_trooper",
		"RB205_emp_U_trooper_dirt","RB205_emp_U_trooper_sand","RB205_emp_U_trooper_mud","RB205_emp_U_trooper_shadow","RB205_emp_U_scout_trooper_camo","RB205_emp_U_scout_trooper_mud","RB205_emp_U_scout_trooper_shadow",
		"RB205_emp_U_officer_grey","RB205_emp_U_officer_green","RB205_emp_U_officer_black","RB205_emp_U_officer_isb","RB205_emp_U_officer_isb_agent","RB205_emp_U_officer_coat_black","RB205_emp_U_officer_coat_grey","RB205_emp_U_officer_coat_green","RB205_emp_U_officer_coat_isb",

		"RB205_emp_V_ct","RB205_emp_V_clc","RB205_emp_V_cp","RB205_emp_V_cs","RB205_emp_V_csm","RB205_emp_V_cl","RB205_emp_V_co","RB205_emp_V_cc",
		"RB205_emp_V_medic","RB205_emp_V_grenadier","RB205_emp_V_rebreather",
		"RB205_emp_V_scout_ct","RB205_emp_V_plt_ct","RB205_emp_V_snow_ct","RB205_emp_V_tank_ct","RB205_emp_V_shadow_ct","RB205_emp_V_death","RB205_emp_V_death_grenadier","RB205_emp_V_death_lead","RB205_emp_V_death_lead2","RB205_emp_V_death_lead3",

		"RB205_emp_V_navy_ensign","RB205_emp_V_navy_lieutenant","RB205_emp_V_navy_seniorLieutenant","RB205_emp_V_navy_captain","RB205_emp_V_navy_admiral","RB205_emp_V_army_sergeantMajor","RB205_emp_V_army_lieutenant","RB205_emp_V_army_captain","RB205_emp_V_army_commander","RB205_emp_V_isb_agent","RB205_emp_V_isb_lieutenant","RB205_emp_V_isb_captain","RB205_emp_V_isb_major","RB205_emp_V_officer_armor_black","RB205_emp_V_officer_armor_green",

		"RB205_B_emp_heavy","RB205_B_emp_medic","RB205_B_emp_rocket","RB205_B_emp_eod","RB205_B_emp_radio",
		"RB205_B_emp_ab","RB205_B_emp_ab_heavy","RB205_B_emp_ab_medic","RB205_B_emp_ab_rocket","RB205_B_emp_ab_eod","RB205_B_emp_ab_radio",
		"RB205_B_emp_snow_heavy","RB205_B_emp_snow_medic","RB205_B_emp_snow_rocket","RB205_B_emp_snow_eod","RB205_B_emp_snow_radio",
		"RB205_B_emp_scout","RB205_B_emp_plt","RB205_B_emp_death",

		"RB205_emp_N_death","RB205_emp_G_stormtooper",

		"RB205_emp_binocular","RB205_emp_binocular_scout",
		
		//MEDICAL
		"ACE_fieldDressing","ACE_packingBandage","ACE_elasticBandage","ACE_quikclot",
		"ACE_salineIV","ACE_salineIV_250","ACE_salineIV_500",
		"ACE_morphine","ACE_epinephrine","ACE_adenosine","ACE_painkillers",
		"ACE_surgicalKit","ACE_personalAidKit","ACE_tourniquet","ACE_splint","ACE_suture","ACE_bodyBag","ACE_bodyBag_blue","ACE_bodyBag_white","rr_stretcher",
		
		//FOOD
		"ACE_Canteen","ACE_Canteen_Half","ACE_Canteen_Empty","ACE_WaterBottle","ACE_WaterBottle_Half","ACE_WaterBottle_Empty",
		"ACE_Humanitarian_Ration","ACE_MRE_BeefStew","ACE_MRE_ChickenTikkaMasala","ACE_MRE_ChickenHerbDumplings","ACE_MRE_CreamChickenSoup","ACE_MRE_CreamTomatoSoup","ACE_MRE_LambCurry","ACE_MRE_MeatballsPasta","ACE_MRE_SteakVegetables","ACE_Banana",

		//EXTERNAL MODS
		"WBK_HeadLampItem_Narrow","WBK_HandFlashlight",
		"jen_jetpacks_example_refuelItemMedium",
		"RB205_accessCard_gar",	"RB205_accessCard_gar_officer","RB205_accessCard_prison",
		"RB205_ballisticShield_item",

		//OTHER
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