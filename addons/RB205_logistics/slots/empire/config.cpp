class cfgPatches
{
    class RB205_logistics_slots_empire
	{
		requiredAddons[]=
		{
			"RB205_logistics_slots",
			"RB205_empire"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] = {};
		units[] = {};
	};
};

#include "\RB205_logistics\slots\macros.hpp"

class cfgVehicles
{
	SLOT_EMP(RB205_emp_commander, 		"(0-0) Commander")

	SLOT_EMP(RB205_emp_captain, 		"(1-0) Captain")
	SLOT_EMP(RB205_emp_lieutenant, 		"(1-0) Lieutenant")
	SLOT_EMP(RB205_emp_sergeantMajor, 	"(1-0) Sergeant-Major")

	SLOT_EMP(RB205_emp_sergeant, 		"(1-1-A) Sergeant")
	SLOT_EMP(RB205_emp_corporal, 		"(1-1-B) Corporal")
	SLOT_EMP(RB205_emp_lanceCorporal, 	"(1-1-C) Lance Corporal")
	SLOT_EMP(RB205_emp_trooper, 		"(1-1-D) Trooper")
	
	SLOT_EMP(RB205_emp_ab_sergeant, 	"(1-2-A) Sergeant")
	SLOT_EMP(RB205_emp_ab_corporal, 	"(1-2-B) Corporal")
	SLOT_EMP(RB205_emp_ab_lanceCorporal,"(1-2-C) Lance Corporal")
	SLOT_EMP(RB205_emp_ab_trooper, 		"(1-2-D) Trooper")

	SLOT_EMP(RB205_emp_scout_sergeant, 		"(2-1-A) Sergeant")
	SLOT_EMP(RB205_emp_scout_corporal, 		"(2-1-B) Corporal")
	SLOT_EMP(RB205_emp_scout_lanceCorporal, "(2-1-C) Lance Corporal")
	SLOT_EMP(RB205_emp_scout_trooper, 		"(2-1-D) Trooper")
	
	SLOT_EMP(RB205_emp_plt_trooper, 	"(3-1) Trooper")

	SLOT_EMP(RB205_emp_navy_captain, 			"(4-0-A) Navy Cpt.")
	SLOT_EMP(RB205_emp_navy_seniorLieutenant, 	"(4-0-B) Navy Sr. Lt.")
	SLOT_EMP(RB205_emp_navy_lieutenant, 		"(4-0-C) Navy Lt.")
	SLOT_EMP(RB205_emp_navy_ensign, 			"(4-0-D) Navy Ens.")
	SLOT_EMP(RB205_emp_navy_officer_coat2, 		"(4-1-A) Navy Cpt. (Coat)")
	SLOT_EMP(RB205_emp_navy_officer_coat, 		"(4-1-B) Navy Sr. Lt. (Coat)")

	SLOT_EMP(RB205_emp_army_commander, 		"(5-0-A) Army Cmdr.")
	SLOT_EMP(RB205_emp_army_captain, 		"(5-0-B) Army Cpt.")
	SLOT_EMP(RB205_emp_army_lieutenant, 	"(5-0-C) Army Lt.")
	SLOT_EMP(RB205_emp_army_sergeantMajor, 	"(5-0-D) Army Sgt. Mjr.")
	SLOT_EMP(RB205_emp_army_officer_coat, 	"(5-1-A) Army Cmdr. (Coat)")

	SLOT_EMP(RB205_emp_isb_major, 		"(6-0-A) ISB Mjr.")
	SLOT_EMP(RB205_emp_isb_captain, 	"(6-0-B) ISB Cpt.")
	SLOT_EMP(RB205_emp_isb_lieutenant, 	"(6-0-C) ISB Lt.")
	SLOT_EMP(RB205_emp_isb_agent, 		"(6-0-D) ISB Agent")
	SLOT_EMP(RB205_emp_isb_officer_coat,"(6-1-A) ISB Mjr. (Coat)")
};