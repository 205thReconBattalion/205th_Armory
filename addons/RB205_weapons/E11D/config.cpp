class cfgPatches
{
    class RB205_weapons_e11d
	{
		requiredAddons[]=
		{
			"RB205_weapons",
			"JMSLLTE_e11d"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {};
		weapons[] =
		{
			"RB205_E11D"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class cfgWeapons
{
	class JMSLLTE_BlasterRifle_Base;
	class JMSLLTE_e11d: JMSLLTE_BlasterRifle_Base
	{
		class Single;
		class FullAuto;
	};
	class RB205_E11D: JMSLLTE_e11d
	{
		displayName = "$STR_205_E11D_DisplayName";
		displayNameShort = "$STR_205_E11D_DisplayNameShort";
		descriptionShort = "Blasterkarabiner des Imperium";
		mass = MASS_WP_CARBINE;
		magazines[] =
		{
			"RB205_Experimental_Energy_Pack_red"
		};
		magazineWell[] = {};
		modes[] = {"FullAuto","Single"};
		class Single: Single
		{
			dispersion = 0;
		};
		class FullAuto: FullAuto
		{
			dispersion = 0;
		};
	};
};