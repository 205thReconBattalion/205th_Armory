class cfgPatches
{
    class RB205_weapons_dlt19
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
			"RB205_DLT19"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class cfgWeapons
{
	class Rifle_Base_F;
	class 3AS_DLT19_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class 3AS_DLT19: 3AS_DLT19_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
		};
	};
	class RB205_DLT19: 3AS_DLT19
	{
		displayName = "$STR_205_DLT19_DisplayName";
		displayNameShort = "$STR_205_DLT19_DisplayNameShort";
		descriptionShort = "Blastergewehr des Imperium<br />Freigegeben für: Heavy";
		mass = MASS_WP_RIFLE;
		magazines[] =
		{
			"RB205_Heavy_Energy_Pack_red"
		};
		magazineWell[] = {};
		modes[] = {"FullAuto","Single"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[]  =
				{
					"3AS_Imp_Optic_1",
					"3AS_Imp_Optic_2"
				};
			};
		};
	};
};