class cfgPatches
{
    class RB205_logistics_slots_navy
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
	SLOT_EMP(RB205_emp_navy_captain, 			"(4-0-A) Navy Cpt.")
	SLOT_EMP(RB205_emp_navy_seniorLieutenant, 	"(4-0-B) Navy Sr. Lt.")
	SLOT_EMP(RB205_emp_navy_lieutenant, 		"(4-0-C) Navy Lt.")
	SLOT_EMP(RB205_emp_navy_juniorLieutenant, 	"(4-0-D) Navy Jr Lt.")
	SLOT_EMP(RB205_emp_navy_ensign, 			"(4-0-E) Navy Ens.")
};