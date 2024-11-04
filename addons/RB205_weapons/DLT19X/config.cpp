class cfgPatches
{
    class RB205_weapons_dlt19x
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
			"RB205_DLT19X",
			"RB205_DLT19X_wScope"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class cfgWeapons
{
	class 3AS_DLT19X_Base_F;
	class 3AS_DLT19X: 3AS_DLT19X_Base_F
	{
		class Single;
	};
	class RB205_DLT19X: 3AS_DLT19X
	{
		displayName = "$STR_205_DLT19X_DisplayName";
		displayNameShort = "$STR_205_DLT19X_DisplayNameShort";
		descriptionShort = "Scharfschützengewehr des Imperium<br />Freigegeben für: Marksman";
		mass = MASS_WP_RIFLE;
		magazines[] =
		{
			"RB205_Overcharged_Energy_Pack_red"
		};
		cursor = "RB205_CH_sniper";
		magazineWell[] = {};
		modes[] = {"Single"};
		class Single: Single
		{
			dispersion = 0;
		};
	};
	class RB205_DLT19X_wScope: RB205_DLT19X
	{
		scopeArsenal = 0;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "3AS_Imp_Optic_DLT19x";
				slot = "CowsSlot";
			};
		};
	};
};