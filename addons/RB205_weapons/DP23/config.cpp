class cfgPatches
{
	class RB205_weapons_dp23
	{
		requiredAddons[] =
		{
			"RB205_weapons",
			"JLTS_weapons_DP23"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_DP23"
		};
	};
};

#include "\RB205_weapons\emp_compat.hpp"

class CfgWeapons
{
	class JLTS_DP23;
	class RB205_DP23: JLTS_DP23
	{
		displayName = "$STR_205_DP23_DisplayName";
		displayNameShort = "$STR_205_DP23_DisplayNameShort";
		descriptionShort = "Freigegeben für: 1-3 'Rancor'";
		magazines[] =
		{
			"RB205_Scatter_Energy_Pack"
		};
		baseWeapon = "RB205_DP23";
        author = "205th Recon Battalion";
	};
	//FRIED_WEAPON(RB205_DP23,"\RB205_weapons\data\ui\dp23_fried.paa")
};