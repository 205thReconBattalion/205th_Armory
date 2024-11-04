class cfgPatches
{
    class RB205_weapons_ec17
	{
		requiredAddons[]=
		{
			"RB205_weapons",
			"JMSLLTE_rk3"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {};
		weapons[] =
		{
			"RB205_EC17",
			"RB205_EC17_wScope"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class cfgWeapons
{
	class JMSLLTE_BlasterPistol_Base;
	class JMSLLTE_ec17pistol: JMSLLTE_BlasterPistol_Base
	{
		class Single;
	};
	class RB205_EC17: JMSLLTE_ec17pistol
	{
		displayName = "$STR_205_EC17_DisplayName";
		displayNameShort = "$STR_205_EC17_DisplayNameShort";
		descriptionShort = "Blasterpistole des Imperium<br />Freigegeben für: Scout";
		mass = MASS_WP_PISTOL;
		magazines[] =
		{
			"RB205_Compact_Energy_Pack_red"
		};
		cursor = "RB205_CH_sidearm";
		magazineWell[] = {};
		class Single: Single
		{
			dispersion = 0;
		};
	};
	class RB205_EC17_wScope: RB205_EC17
	{
		scopeArsenal = 0;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "JMSLLTE_ec17_holo_Scope";
				slot = "CowsSlot";
			};
		};
	};
};