class cfgPatches
{
    class RB205_main
	{
		requiredAddons[]=
		{
			"ls_armor_bluefor"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion"
		weapons[] =
		{
			"RB205_H_recruit",
			"RB205_H_trooper",
			"RB205_H_corporal",
			"RB205_H_sergeant",
			"RB205_H_lieutenant",
			"RB205_H_ab_recruit",
			"RB205_H_ab_trooper",
			"RB205_H_ab_corporal",
			"RB205_H_ab_sergeant",
			"RB205_H_ab_lieutenant",
			"RB205_H_arf_recruit",
			"RB205_H_arf_trooper",
			"RB205_H_arf_corporal",
			"RB205_H_arf_sergeant",
			"RB205_H_arf_lieutenant",
			"RB205_H_arfF_recruit",
			"RB205_H_arfF_trooper",
			"RB205_H_arfF_corporal",
			"RB205_H_arfF_sergeant",
			"RB205_H_arfF_lieutenant",
			"RB205_H_plt_recruit",
			"RB205_H_plt_trooper",
			"RB205_H_plt_corporal",
			"RB205_H_plt_sergeant",
			"RB205_H_plt_lieutenant"
		};
		units[] =
		{
			
		};
	};
};

#include "macros.hpp"
#include "HitpointsProtectionInfo.hpp"

class cfgWeapons
{
	#include "cfgWeapons.hpp"
};

class cfgVehicles
{
	#include "cfgVehicles.hpp"
};