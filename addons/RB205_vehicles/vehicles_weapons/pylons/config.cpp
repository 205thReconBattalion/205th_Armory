class cfgPatches
{
    class RB205_vehicles_weapons_pylons
	{
		requiredAddons[]=
		{
			"A3_Weapons_F_Jets",
			"3AS_VehicleWeapons"
		};
		requiredVersion = 1.0;
    	author = "205th Recon Battalion";
		units[] = {};
		weapons[]=
		{
			"RB205_BIM9X_weapon",
			"RB205_AMRAAM_weapon"
		};
		magazines[]=
		{
			"RB205_BIM9X_missile",
			"RB205_BIM9X_missilePylon_3rnd",

			"RB205_AMRAAM_missile",
			"RB205_AMRAAM_missilePylon",
			"RB205_AMRAAM_missilePylon_2rnd"
		};
		ammo[]=
		{
			"RB205_BIM9X_ammo",
			"RB205_AMRAAM_ammo"
		};
	};
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"