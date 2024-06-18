class cfgPatches
{
    class RB205_specialUnits
	{
		requiredAddons[]=
		{
			"RB205_main"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_clone_trooper_medic",
			"RB205_clone_trooper_grenadier",
			"RB205_clone_trooper_heavy",
			"RB205_clone_trooper_marksman",
			"RB205_clone_trooper_rto",

			"RB205_clone_ab_trooper_medic",
			"RB205_clone_ab_trooper_rto",

			"RB205_clone_arf_trooper_medic",
			"RB205_clone_arf_trooper_sniper",

			"Rb205_clone_snow_trooper_medic",
			"Rb205_clone_snow_trooper_rto"
		};
	};
};

#include "\RB205_core\macros.hpp"
#include "\RB205_main\macros.hpp"

class cfgVehicles
{
	class RB205_clone_trooper;
	class RB205_clone_trooper_medic: RB205_clone_trooper
	{
		ACCESS_TRUE
		displayName = "Clone Trooper <Medic>";
		uniformclass = "RB205_U_trooper";
		LINKED_ITEMS(RB205_H_trooper,"RB205_V_medic","RB205_NV_chip")
		backpack = "RB205_B_medic";
	};
	class RB205_clone_trooper_grenadier: RB205_clone_trooper
	{
		ACCESS_TRUE
		displayName = "Clone Trooper <Grenadier>";
		uniformclass = "RB205_U_trooper";
		LINKED_ITEMS(RB205_H_trooper,"RB205_V_grenadier","RB205_NV_chip")
		weapons[]=
		{
			"RB205_DC15A_GL",
			DC17_IN_USE,
			"RB205_binocular",
			"Throw","Put"
		};
		respawnweapons[]=
		{
			"RB205_DC15A_GL",
			DC17_IN_USE,
			"RB205_binocular",
			"Throw","Put"
		};
		magazines[]=
		{
			"RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack",
			"RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","JLTS_stun_mag_long","JLTS_stun_mag_long",
			"3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeRed_Grenade_shell",
			"RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
			"RB205_smokeWhite","RB205_smokeWhite"
		};
		respawnmagazines[]=
		{
			"RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack","RB205_Standard_Energy_Pack",
			"RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","JLTS_stun_mag_long","JLTS_stun_mag_long",
			"3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeRed_Grenade_shell",
			"RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
			"RB205_smokeWhite","RB205_smokeWhite"
		};
	};
	class RB205_clone_trooper_heavy: RB205_clone_trooper
	{
		ACCESS_TRUE
		displayName = "Clone Trooper <Heavy>";
		uniformclass = "RB205_U_trooper";
		LINKED_ITEMS(RB205_H_trooper,"RB205_V_ct","RB205_NV_chip")
		backpack = "RB205_B_heavy";
		weapons[]=
		{
			"RB205_Z6",
			DC17_IN_USE,
			"RB205_binocular",
			"Throw","Put"
		};
		respawnweapons[]=
		{
			"RB205_Z6",
			DC17_IN_USE,
			"RB205_binocular",
			"Throw","Put"
		};
		magazines[]=
		{
			"RB205_RapidFire_Energy_Pack","RB205_RapidFire_Energy_Pack","RB205_RapidFire_Energy_Pack","RB205_RapidFire_Energy_Pack","RB205_RapidFire_Energy_Pack","RB205_RapidFire_Energy_Pack","RB205_RapidFire_Energy_Pack","RB205_RapidFire_Energy_Pack",
			"RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","JLTS_stun_mag_long","JLTS_stun_mag_long",
			"RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
			"RB205_smokeWhite","RB205_smokeWhite"
		};
		respawnmagazines[]=
		{
			"RB205_RapidFire_Energy_Pack","RB205_RapidFire_Energy_Pack","RB205_RapidFire_Energy_Pack","RB205_RapidFire_Energy_Pack","RB205_RapidFire_Energy_Pack","RB205_RapidFire_Energy_Pack","RB205_RapidFire_Energy_Pack","RB205_RapidFire_Energy_Pack",
			"RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","JLTS_stun_mag_long","JLTS_stun_mag_long",
			"RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
			"RB205_smokeWhite","RB205_smokeWhite"
		};
	};
	class RB205_clone_trooper_marksman: RB205_clone_trooper
	{
		ACCESS_TRUE
		displayName = "Clone Trooper <Marksman>";
		uniformclass = "RB205_U_trooper";
		LINKED_ITEMS(RB205_H_trooper,"RB205_V_ct","RB205_NV_marksman")
		weapons[]=
		{
			"RB205_Valken38X",
			DC17_IN_USE,
			"RB205_binocular",
			"Throw","Put"
		};
		respawnweapons[]=
		{
			"RB205_Valken38X",
			DC17_IN_USE,
			"RB205_binocular",
			"Throw","Put"
		};
		magazines[]=
		{
			"RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack",
			"RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","JLTS_stun_mag_long","JLTS_stun_mag_long",
			"RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
			"RB205_smokeWhite","RB205_smokeWhite"
		};
		respawnmagazines[]=
		{
			"RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack",
			"RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","JLTS_stun_mag_long","JLTS_stun_mag_long",
			"RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
			"RB205_smokeWhite","RB205_smokeWhite"
		};
	};
	class RB205_clone_trooper_rto: RB205_clone_trooper
	{
		ACCESS_TRUE
		displayName = "Clone Trooper <RTO>";
		uniformclass = "RB205_U_trooper";
		backpack = "RB205_B_radio";
	};

	class RB205_clone_ab_trooper;
	class RB205_clone_ab_trooper_medic: RB205_clone_ab_trooper
	{
		ACCESS_TRUE
		displayName = "Clone Airborne Trooper <Medic>";
		uniformclass = "RB205_U_trooper";
		LINKED_ITEMS(RB205_H_ab_trooper,"RB205_V_ab_medic","RB205_NV_chip")
		backpack = "RB205_B_ab_medic";
	};
	class RB205_clone_ab_trooper_rto: RB205_clone_ab_trooper
	{
		ACCESS_TRUE
		displayName = "Clone Airborne Trooper <RTO>";
		uniformclass = "RB205_U_trooper";
		LINKED_ITEMS(RB205_H_ab_trooper,"RB205_V_ab_ct","RB205_NV_chip")
		backpack = "RB205_B_ab_radio";
	};

	class RB205_clone_arf_trooper;
	class RB205_clone_arf_trooper_medic: RB205_clone_arf_trooper
	{
		ACCESS_TRUE
		displayName = "Clone ARF Trooper <Medic>";
		uniformclass = "RB205_U_arf_trooper";
		LINKED_ITEMS(RB205_H_arf_trooper,"RB205_V_arf_medic","RB205_NV_arf_antenna")
		backpack = "RB205_B_medic";
	};
	class RB205_clone_arf_trooper_sniper: RB205_clone_arf_trooper
	{
		ACCESS_TRUE
		displayName = "Clone ARF Trooper <Sniper>";
		uniformclass = "RB205_U_arf_trooper";
		weapons[]=
		{
			"RB205_DC15X",
			DC17_IN_USE,
			"RB205_binocular_arf",
			"Throw","Put"
		};
		respawnweapons[]=
		{
			"RB205_DC15X",
			DC17_IN_USE,
			"RB205_binocular_arf",
			"Throw","Put"
		};
		magazines[]=
		{
			"RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack",
			"RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","JLTS_stun_mag_long","JLTS_stun_mag_long",
			"RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
			"RB205_smokeWhite","RB205_smokeWhite"
		};
		respawnmagazines[]=
		{
			"RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack","RB205_Overcharged_Energy_Pack",
			"RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","RB205_Compact_Energy_Pack","JLTS_stun_mag_long","JLTS_stun_mag_long",
			"RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
			"RB205_smokeWhite","RB205_smokeWhite"
		};
	};
	
	class RB205_clone_snow_trooper;
	class Rb205_clone_snow_trooper_medic: RB205_clone_snow_trooper
	{
		ACCESS_TRUE
		displayName = "Clone Snow Trooper <Medic>";
		uniformclass = "RB205_U_snow_trooper";
		LINKED_ITEMS(RB205_H_snow_trooper,"RB205_V_snow_medic","RB205_NV_chip")
		backpack = "RB205_B_snow_medic";
	};
	class Rb205_clone_snow_trooper_rto: RB205_clone_snow_trooper
	{
		ACCESS_TRUE
		displayName = "Clone Snow Trooper <RTO>";
		uniformclass = "RB205_U_snow_trooper";
		LINKED_ITEMS(RB205_H_snow_trooper,"RB205_V_snow_ct","RB205_NV_chip")
		backpack = "RB205_B_snow_radio";
	};
};