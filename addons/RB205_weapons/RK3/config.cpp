class cfgPatches
{
    class RB205_weapons_rk3
	{
		requiredAddons[]=
		{
			"RB205_weapons",
			"3AS_Weapons_Imperial"
		};
		requiredVersion = 1.0;
		units[] = {};
		weapons[] =
		{
			"RB205_RK3"
		};
	};
};

class cfgWeapons
{
	class 3AS_RK3;
	class RB205_RK3: 3AS_RK3
	{
		displayName = "$STR_205_RK3_DisplayName";
		displayNameShort = "$STR_205_RK3_DisplayNameShort";
		descriptionShort = "Blasterpistole des Imperium<br />Freigegeben für: Alle";
		magazines[] =
		{
			"RB205_Compact_Energy_Pack_red"
		};
		magazineWell[] = {};
	};
};