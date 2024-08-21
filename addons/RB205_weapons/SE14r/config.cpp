class cfgPatches
{
    class RB205_weapons_se14r
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
			"RB205_SE14R"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class cfgWeapons
{
	class 3AS_SE14R;
	class RB205_SE14R: 3AS_SE14R
	{
		displayName = "$STR_205_SE14R_DisplayName";
		displayNameShort = "$STR_205_SE14R_DisplayNameShort";
		descriptionShort = "Blasterpistole des Imperium<br />Freigegeben für: Alle";
		mass = MASS_WP_PISTOL;
		magazines[] =
		{
			"RB205_Compact_Energy_Pack_red"
		};
		magazineWell[] = {};
	};
};