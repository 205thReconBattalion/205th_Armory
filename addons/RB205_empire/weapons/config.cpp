class cfgPatches
{
    class RB205_empire_weapons
	{
		requiredAddons[]=
		{
			"RB205_empire"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		weapons[] =
		{
			"RB205_E11",
			"RB205_E11_wScope"
		};
		units[] = {};
	};
};

class cfgWeapons
{
	class 3AS_E11;
	class RB205_E11: 3AS_E11
	{
		displayName = "[205|EMP] E-11 Blaster Rifle";
		magazines[] = {"RB205_E11_mag"};
		magazineWell[] = {};
	};
	class RB205_E11_wScope: RB205_E11
	{
		scopeArsenal = 0;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "3AS_Imp_Optic_E11";
				slot = "CowsSlot";
			};
		};
	};
};

class cfgMagazines
{
	class 3AS_40Rnd_EM40_Mag_Imp;
	class RB205_E11_mag: 3AS_40Rnd_EM40_Mag_Imp
	{
		displayName = "[205|EMP] E-11 Energy Pack (60 Ch.)";
		ammo = "RB205_E11_ammo";
		count = 60;
		lastRoundsTracer = 60;
	};
	
};

class cfgAmmo
{
	class 3AS_EM40_RedPlasma;
	class RB205_E11_ammo: 3AS_EM40_RedPlasma
	{
		hit = 15;
		caliber = 1.95;
	};
};