params ["_this"];

[_this,
	[
		//WEAPONS / ATTACHMENTS / AMMO
		"RB205_DC15A","RB205_DC15A_GL","RB205_DC15C","RB205_DC15C_GL","RB205_DC15L","RB205_DC15S","RB205_DC15X","RB205_DC17M","RB205_DP23","RB205_Valken38X","RB205_WestarM5","RB205_Z6","RB205_BTX42","JLTS_DC15S","twc_2inch_bag","RB205_PLX1_F","RB205_RPS6","RB205_RPS6_disposable","RB205_DC17","RB205_DC17_alt","RB205_DC17_Dual","JLTS_DC17SA","UNSC_Knife","UNSC_Knife_reversed","ACE_Flashlight_Maglite_ML300L","hgun_esd_01_F","ACE_VMM3",
		"3AS_optic_holo_DC15S","3AS_Optic_Scope_WestarM5","SEA_Optic_Holo_Two_Red","SEA_Optic_Holo_Two_Blue","SEA_Optic_Holo_Two_Green","SEA_Optic_Holo_One_Green","JLTS_DC15X_scope","SEA_Optic_Holo_One_Red","3AS_optic_acog_DC15C","3AS_optic_reflex_DC15C","RB205_Optic_DC15L","SEA_Optic_Holo_One_Blue","RB205_attachment_scope_DC17M_sniper","SEA_Optic_Holo_One_Yellow","RB205_Optic_VK38X","SEA_Optic_Holo_Two_Yellow","OPTRE_M7_Laser","acc_pointer_IR","OPTRE_BMR_Laser","JLTS_DC17SA_flashlight","acc_flashlight","ACE_DBAL_A3_Green","acc_flashlight_pistol","OPTRE_M45_Flashlight","OPTRE_M7_Flashlight","OPTRE_M6C_Laser","OPTRE_M6G_Flashlight","OPTRE_M12_Laser","ACE_DBAL_A3_Red","ACE_SPIR","ACE_acc_pointer_green","RB205_DC15X_Suppressor","RB205_attachment_DC17M_blaster","RB205_attachment_DC17M_at","RB205_attachment_DC17M_sniper","3AS_Bipod_VK38X_f","3AS_Bipod_DC15L_f","muzzle_antenna_03_f","muzzle_antenna_01_f","muzzle_antenna_02_f",
		"RB205_Scatter_Energy_Pack","JLTS_DC15A_mag","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","RB205_Overcharged_Energy_Pack","JLTS_stun_mag_short","RB205_Standard_Energy_Pack","3Rnd_SmokeRed_Grenade_shell","ACE_40mm_Flare_red","RB205_RapidFire_Energy_Pack","ACE_40mm_Flare_white","RB205_DC17M_AT_Mag","RB205_BTX42_mag","3AS_6Rnd_HE_Grenade_shell","JLTS_DC15S_mag","twc_2inch_he_1rnd","3Rnd_HE_Grenade_shell","RB205_Compact_Energy_Pack","3Rnd_SmokePurple_Grenade_shell","RB205_Heavy_Energy_Pack","RB205_Experimental_Energy_Pack","JLTS_stun_mag_long","RB205_DC17M_Sniper_Mag","3Rnd_SmokeYellow_Grenade_shell","RB205_MK39_AA","ACE_40mm_Flare_green","JLTS_DC17SA_mag","RB205_MAG_RPS6","3Rnd_Smoke_Grenade_shell","ACE_HuntIR_M203","3Rnd_SmokeOrange_Grenade_shell","RB205_DC17M_Blaster_Mag","WBK_Cybercrystal",
		
		//IMPERIAL WEAPONS / ATTACHMENTS / AMMO
		"RB205_DLT19","RB205_DLT19X","RB205_E11","RB205_E11_stock","RB205_E11_gl","RB205_E11D","RB205_EC17","RB205_RK3","RB205_SE14R",
		"3AS_Imp_Optic_1","JMSLLTE_e11_holoSF_Scope","3AS_Imp_Optic_E11","JMSLLTE_ec17_holo_Scope","JMSLLTE_e11_bl_Scope","3AS_Imp_Optic_4","JMSLLTE_e11_holo_Scope","3AS_Imp_Optic_3","3AS_Imp_Optic_DLT19x","3AS_Imp_Optic_2",
		"RB205_Heavy_Energy_Pack_red","RB205_Compact_Energy_Pack_red","RB205_Standard_Energy_Pack_red","RB205_Overcharged_Energy_Pack_red","RB205_Experimental_Energy_Pack_red",
		
		//GRENADES / EXPLOSIVES
		"RB205_thermalDet","RB205_impactGren","RB205_sonicDet","RB205_droidPopper","RB205_smokeWhite","RB205_smokeBlue","RB205_smokeGreen","RB205_smokeRed","RB205_smokeYellow","RB205_smokePurple","RB205_smokeOrange",
		"ACE_Chemlight_White","Chemlight_blue","Chemlight_green","Chemlight_red","ACE_Chemlight_Orange","Chemlight_yellow","ACE_Chemlight_HiWhite","ACE_Chemlight_HiBlue","ACE_Chemlight_HiGreen","ACE_Chemlight_HiRed","ACE_Chemlight_HiYellow","ACE_Chemlight_UltraHiOrange","ACE_Chemlight_IR",
		"ShieldGrenade_Mag","ShieldGrenadePersonal_Mag","SquadShieldMagazine",
		"APERSMine_Range_Mag","ACE_FlareTripMine_Mag","TrainingMine_Mag","IEDUrbanSmall_Remote_Mag","IEDLandSmall_Remote_Mag","APERSTripMine_Wire_Mag","SLAMDirectionalMine_Wire_Mag","M41_IED_B_Remote_Mag","M41_IED_Remote_Mag","M41_IED_C_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSBoundingMine_Range_Mag","SatchelCharge_Remote_Mag","M168_Remote_Mag","UNSCMine_Range_Mag","ATMine_Range_Mag","DemoCharge_Remote_Mag","IEDUrbanBig_Remote_Mag","IEDLandBig_Remote_Mag","JLTS_explosive_emp_50_mag","JLTS_explosive_emp_20_mag","JLTS_explosive_emp_10_mag","ls_mag_demo_remoteCharge","JMSLLTE_Detonitecharge_imp_Mag","ls_mag_detPack_remoteCharge","SWLW_DetPack_remote_mag","SWLW_clones_spec_demo_mag","LFP_mine_ap_Mag","LFP_mine_at_Mag","ls_mag_caltrops_dispenser","ls_mag_caltrops_mine","C12_Remote_Mag","C7_Remote_Mag","SWLW_clones_spec_breach_mag","ls_mag_breach_remoteCharge","APERSMineDispenser_Mag","RTX_RemoteMagazine","HX_AT_Mine_Mag","EC01_RemoteMagazine","3AS_DetPack","Aux212_X3_Thermal_Disruptor","Aux212_X10_Thermal_Disruptor","Aux212_7PrG_Proton_Charge","knd_ATMine_Mag","knd_ClassC_Plant_Mag","knd_ClassB_Plant_Mag","knd_ClassA_Plant_Mag","knd_BoundingMines_Mag","knd_Daisy_Mag","knd_Claymore_Mag","knd_Breacher_Mag","LFP_type_A_Remote_Mag","LFP_type_B_Remote_Mag","LFP_type_C_Remote_Mag","212th_MPC_MK1_F",

		//REGULAR ARMOR / EQUIPMENT
		"RB205_H_recruit","RB205_H_trooper","RB205_H_corporal","RB205_H_sergeant","RB205_H_lieutenant",
		"RB205_H_ab_recruit","RB205_H_ab_trooper","RB205_H_ab_corporal","RB205_H_ab_sergeant","RB205_H_ab_lieutenant",
		"RB205_H_arf_recruit","RB205_H_arf_trooper","RB205_H_arfF_trooper","RB205_H_arf_corporal","RB205_H_arfF_corporal","RB205_H_arf_sergeant","RB205_H_arfF_sergeant","RB205_H_arf_lieutenant","RB205_H_arfF_lieutenant","RB205_H_arf_trooper_arctic","RB205_H_arf_trooper_desert","RB205_H_arf_trooper_jungle","RB205_H_arf_trooper_woodland",
		"RB205_H_plt_recruit","RB205_H_plt_trooper","RB205_H_plt_corporal","RB205_H_plt_sergeant","RB205_H_plt_lieutenant",
		"RB205_H_snow_recruit","RB205_H_snow_trooper","RB205_H_snow_corporal","RB205_H_snow_sergeant","RB205_H_snow_lieutenant",
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
		"RB205_B_ab","RB205_B_ab_heavy","RB205_B_ab_medic","RB205_B_ab_radio","RB205_B_ab_rocket","RB205_B_ab_eod",
		"RB205_B_arf","RB205_B_arf_arctic","RB205_B_arf_desert","RB205_B_arf_jungle","RB205_B_arf_woodland",
		"RB205_B_snow_heavy","RB205_B_snow_medic","RB205_B_snow_radio","RB205_B_snow_rocket","RB205_B_snow_eod",
		"RB205_B_arc","RB205_B_arc_jetpack",
		"RB205_B_autoTurret","RB205_B_heavyRepeater","RB205_B_prowler","RB205_B_squadShield",
		"RB205_navy_comlink",

		"RB205_diving_inv","RB205_VIS",

		"RB205_NV","RB205_NV_marksman","RB205_NV_rangefinder","RB205_NV_arf_antenna","RB205_NV_chip",

		"RB205_binocular","RB205_binocular_arf",

		"RB205_arc_bracer",

		//SQUAD ARMOR
		"RB205_U_trooper_zillo","RB205_U_corporal_zillo","RB205_U_sergeant_zillo",
		"RB205_U_trooper_chimaera","RB205_U_corporal_chimaera","RB205_U_sergeant_chimaera",
		"RB205_U_trooper_rancor","RB205_U_corporal_rancor","RB205_U_sergeant_rancor",
		"RB205_U_arf_trooper_krayt","RB205_U_arf_corporal_krayt","RB205_U_arf_sergeant_krayt",
		"RB205_U_plt_trooper_raven","RB205_U_plt_corporal_raven","RB205_U_plt_sergeant_raven",

		//CUSTOM ARMOR
		"RB205_H_tachanka","RB205_U_tachanka",
		"RB205_H_mando","RB205_U_mando",
		"RB205_H_shadow","RB205_U_shadow",
		"RB205_H_rambo","RB205_U_rambo",
		"RB205_H_fugger","RB205_U_fugger",
		"RB205_H_akira","RB205_U_akira",
		"RB205_H_lucky","RB205_U_lucky","RB205_V_lucky",
		"RB205_H_pain","RB205_U_pain",
		"RB205_H_fire","RB205_U_fire",
		"RB205_H_tyr","RB205_U_tyr",
		"RB205_H_smoker","RB205_H_ab_smoker","RB205_U_smoker","RB205_V_smoker",
		"RB205_H_zeegers","RB205_U_zeegers",
		"RB205_H_arc_gentleman","RB205_U_gentleman","RB205_V_gentleman",
		"RB205_H_kamaz","RB205_U_kamaz",
		"RB205_H_ark","RB205_U_ark",
		"RB205_H_paso","RB205_U_paso",
		"RB205_H_slow","RB205_U_slow","RB205_V_slow",
		"RB205_H_phantom","RB205_U_phantom",
		"RB205_H_lightning","RB205_U_lightning","RB205_V_lightning",
		"RB205_H_firefly","RB205_U_firefly",
		"RB205_H_banger","RB205_U_banger",
		"RB205_H_crossfire","RB205_U_crossfire",
		"RB205_H_putzi","RB205_U_putzi","RB205_V_putzi",
		"RB205_H_junior","RB205_U_junior",
		"RB205_H_flank","RB205_U_flank",
		"RB205_H_scythe","RB205_U_scythe","RB205_V_scythe","RB205_scythe_attachments",
		"RB205_H_irwan","RB205_U_irwan",
		"RB205_H_sixes","RB205_U_sixes",
		"RB205_H_doc","RB205_H_doc_damaged","RB205_H_arf_doc","RB205_U_doc","RB205_V_doc","RB205_VIS_doc","RB205_VIS_doc_damaged",
		"RB205_H_norway","RB205_U_norway",
		"RB205_H_jumper","RB205_U_jumper","RB205_V_jumper",
		"RB205_H_spark","RB205_H_arf_spark","RB205_U_spark","RB205_V_spark","RB205_B_spark","RB205_B_spark_jetpack","RB205_VIS_spark",
		"RB205_H_unlucky","RB205_U_unlucky",

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

		"RB205_emp_N_death",

		"RB205_emp_binocular","RB205_emp_binocular_scout",
		
		//MEDICAL
		"ACE_fieldDressing","ACE_packingBandage","ACE_elasticBandage","ACE_quikclot",
		"ACE_salineIV","ACE_salineIV_250","ACE_salineIV_500",
		"ACE_bloodIV","ACE_bloodIV_250","ACE_bloodIV_500",
		"ACE_plasmaIV","ACE_plasmaIV_250","ACE_plasmaIV_500",
		"ACE_morphine","ACE_epinephrine","ACE_adenosine","ACE_painkillers",
		"ACE_surgicalKit","ACE_personalAidKit","ACE_tourniquet","ACE_splint","ACE_suture","ACE_bodyBag","ACE_bodyBag_blue","ACE_bodyBag_white",
		
		//FOOD
		"ACE_Canteen","ACE_Canteen_Half","ACE_Canteen_Empty","ACE_WaterBottle","ACE_WaterBottle_Half","ACE_WaterBottle_Empty",
		"ACE_Humanitarian_Ration","ACE_MRE_BeefStew","ACE_MRE_ChickenTikkaMasala","ACE_MRE_ChickenHerbDumplings","ACE_MRE_CreamChickenSoup","ACE_MRE_CreamTomatoSoup","ACE_MRE_LambCurry","ACE_MRE_MeatballsPasta","ACE_MRE_SteakVegetables","ACE_Banana",

		//OTHER
		"ItemMap","ItemCompass","JLTS_clone_comlink","ACE_Altimeter","ChemicalDetector_01_watch_F","ItemWatch","B_UavTerminal","ItemGPS","JLTS_ids_license_driver_large","JLTS_ids_license_driver_medium","JLTS_ids_license_driver_small","JLTS_ids_license_weapon_secondary","JLTS_ids_license_weapon_primary","JLTS_ids_gar_army","JLTS_ids_gar_medical","JLTS_ids_gar_navy","ACE_Chemlight_Shield","ACE_DefusalKit","ACE_EarPlugs","ACE_EntrenchingTool","ACE_Fortify","ACE_Flashlight_MX991","ACE_HuntIR_monitor","ACE_IR_Strobe_Item","ACE_Flashlight_KSF1","ACE_M26_Clacker","ACE_Clacker","ACE_Flashlight_XL50","ACE_MapTools","ace_marker_flags_black","ace_marker_flags_blue","ace_marker_flags_green","ace_marker_flags_orange","ace_marker_flags_red","ace_marker_flags_purple","ace_marker_flags_white","ace_marker_flags_yellow","ACE_microDAGR","ACE_PlottingBoard","ACE_rope12","ACE_rope15","ACE_rope18","ACE_rope27","ACE_rope3","ACE_rope36","ACE_rope6","ACE_Sandbag_empty","ACE_SpottingScope","ACE_SpraypaintBlack","ACE_SpraypaintBlue","ACE_SpraypaintRed","ACE_SpraypaintWhite","ACE_SpraypaintYellow","ACE_Tripod","ACE_UAVBattery","ACE_wirecutter","ACE_CableTie","JLTS_droidCaller","JLTS_riot_shield_item","MineDetector","JLTS_MSE6_toolkit","JLTS_MSE6_manual","JLTS_scanner_police","RB205_prowler_item","ACE_SpraypaintGreen","ToolKit","JLTS_repairkit_weapon_mini","JLTS_repairkit_weapon","JLTS_ids_police","acc_esd_01_flashlight","Laserbatteries","sps_black_hornet_01_Static_F","crowsew_ctrack","crowsew_tfar_icom"
	]
] call ace_arsenal_fnc_initBox;