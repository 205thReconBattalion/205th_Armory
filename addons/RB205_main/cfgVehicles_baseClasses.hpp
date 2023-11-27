/*
	UNITS
*/

class ls_gar_phase2_base;
class RB205_clone_base: ls_gar_phase2_base
{
	ACCESS_FALSE
	uniformClass = "RB205_U_base";
	//ICON_RIFLEMAN
	side=1;
	faction="RB205";
	identityTypes[]={"LanguageENG_F","SWLB_JH_Head_Hair"};
	engineer="false";
	canDeactivateMines="false";
	camouflage = 1;
	backpack="";
	//+Inventory
};
/*class RB205_ab_base: RB205_U_base
{
	ACCESS_FALSE
	backpack="";
	//+Inventory
};*/
/*class RB205_arf_base: RB205_clone_base
{
	ACCESS_FALSE
	camouflage = 0.6;
	backpack="";
	//+Inventory
};*/
/*class RB205_plt_base: RB205_U_base
{
	ACCESS_FALSE
	backpack="";
	//+Inventory
};
class RB205_snow_base: RB205_U_base
{
	ACCESS_FALSE
	backpack="";
	//+Inventory
};
class RB205_arc_base: RB205_U_base
{
	ACCESS_FALSE
	backpack="";
	//+Inventory
};*/





//DEFAULT
//ENL - SWLB_clone_basic_armor
//FT Lead - SWLB_clone_recon_nco_armor
//SQ Lead - SWLB_clone_kama_armor
//PT Lead - SWLB_clone_officer_armor

//AIRBORNE
//ENL - SWLB_clone_airborne_armor
//FT Lead - SWLB_clone_airborne_nco_armor
//SQ Lead - SWLB_clone_airborne_nco_armor
//PT Lead - ls_gar_airborneOfficer_vest

//ARF - SWLB_CEE_ARF_Vest

//PLT - lsd_gar_clone_vest

//SNOW - LST_VestV2_21

//ARC - SWLB_clone_arc_armor

//Medic - SWLB_clone_medic_armor
//Scuba - SWLB_CEE_Lightweight_Rebreather
//Greandier - SWLB_clone_grenadier_armor