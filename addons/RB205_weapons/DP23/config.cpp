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

class CfgWeapons
{
	class JLTS_DP23;
	class RB205_DP23: JLTS_DP23
	{
		displayName = "$STR_205_DP23_DisplayName";
		displayNameShort = "$STR_205_DP23_DisplayNameShort";
		descriptionShort = "";
		magazines[] =
		{
			"RB205_Scatter_Energy_Pack"
		};
		baseWeapon = "RB205_DP23";
	};
};