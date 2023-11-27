class cfgPatches
{
    class RB205_main
	{
		requiredAddons[]=
		{
			"ls_armor_bluefor",
			"lsd_armor_bluefor"
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
			"RB205_H_plt_lieutenant",
			"RB205_H_snow_recruit",
			"RB205_H_snow_trooper",
			"RB205_H_snow_corporal",
			"RB205_H_snow_sergeant",
			"RB205_H_snow_lieutenant",
			"RB205_H_arc_trooper",

			"RB205_U_recruit",
			"RB205_U_trooper",
			"RB205_U_corporal",
			"RB205_U_sergeant",
			"RB205_U_lieutenant"
		};
		units[] =
		{
			"RB205_clone_recruit",
			"RB205_clone_trooper",
			"RB205_clone_corporal",
			"RB205_clone_sergeant",
			"RB205_clone_lieutenant"
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

class CfgFactionClasses
{
	class RB205
	{
		displayName = "205th Recon Battalion";
		ACCESS_TRUE
	};
};
class CfgEditorSubcategories
{
	class RB205_1AP
	{
		displayName = "1st Attack Platoon";
		ACCESS_TRUE
	};
	class RB205_70MRP
	{
		displayName = "70th Mobile Response Platoon";
		ACCESS_TRUE
	};
	class RB205_35HSP
	{
		displayName = "35th Heavy Support Platoon";
		ACCESS_TRUE
	};
};