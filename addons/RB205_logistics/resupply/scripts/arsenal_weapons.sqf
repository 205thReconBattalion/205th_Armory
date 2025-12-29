params ["_this"];

[ _this,
	[
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

		"RB205_datapad","3AS_FusionCutter_F","P_StunBaton",
		"3AS_Datapad_Base_Mag","3AS_FusionCutter_Magazine","3AS_FusionCutter_Dewreck_Magazine",
		
		"RB205_thermalDet","RB205_impactGren","RB205_sonicDet","RB205_droidPopper","RB205_smokeWhite","RB205_smokeBlue","RB205_smokeGreen","RB205_smokeRed","RB205_smokeYellow","RB205_smokePurple","RB205_smokeOrange","RB205_lumaWhite","RB205_lumaGreen","RB205_lumaRed","RB205_lumaYellow",
		"ACE_Chemlight_White","Chemlight_blue","Chemlight_green","Chemlight_red","ACE_Chemlight_Orange","Chemlight_yellow","ACE_Chemlight_HiWhite","ACE_Chemlight_HiBlue","ACE_Chemlight_HiGreen","ACE_Chemlight_HiRed","ACE_Chemlight_HiYellow","ACE_Chemlight_UltraHiOrange","ACE_Chemlight_IR",
		"ShieldGrenade_Mag","ShieldGrenadePersonal_Mag","SquadShieldMagazine",
		"GrenadeInsiendPSENG",
		"Aux212_7PrG_Proton_Charge","Aux212_X10_Thermal_Disruptor","Aux212_X3_Thermal_Disruptor","3AS_DetPack","EC01_RemoteMagazine","HX_AT_Mine_Mag","RTX_RemoteMagazine","APERSMineDispenser_Mag","SWLW_clones_spec_breach_mag","ls_mag_breach_remoteCharge","C7_Remote_Mag","C12_Remote_Mag","ls_mag_caltrops_mine","ls_mag_caltrops_dispenser","SWLW_clones_spec_demo_mag","SWLW_DetPack_remote_mag","ls_mag_detPack_remoteCharge","JMSLLTE_Detonitecharge_imp_Mag","JMSLLTE_Detonitecharge_reb_Mag","ls_mag_demo_remoteCharge","IEDLandBig_Remote_Mag","IEDUrbanBig_Remote_Mag","DemoCharge_Remote_Mag","ATMine_Range_Mag","UNSCMine_Range_Mag","M168_Remote_Mag","SatchelCharge_Remote_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSBoundingMine_Range_Mag","M41_IED_C_Remote_Mag","M41_IED_Remote_Mag","M41_IED_B_Remote_Mag","SLAMDirectionalMine_Wire_Mag","APERSTripMine_Wire_Mag","212th_MPC_MK1_F","IEDLandSmall_Remote_Mag","IEDUrbanSmall_Remote_Mag","TrainingMine_Mag","ACE_FlareTripMine_Mag","ACE_FlareTripMine_Mag_Green","ACE_FlareTripMine_Mag_Red","APERSMine_Range_Mag","ACE_APERSMine_ToePopper_Mag"
	]
] call ace_arsenal_fnc_initBox;