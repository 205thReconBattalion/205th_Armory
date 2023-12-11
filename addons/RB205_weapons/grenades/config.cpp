class cfgPatches
{
	class RB205_weapons_grenades
	{
		requiredAddons[] =
		{
			"A3_Weapons_F",
			"3AS_Equipment",
			"ace_grenades",
			"JLTS_weapons_Grenades"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] = {};
		magazines[] =
		{
			"RB205_thermalDet",
			"RB205_impactGren",
			"RB205_smokeWhite",
			"RB205_smokeBlue",
			"RB205_smokeGreen",
			"RB205_smokeRed",
			"RB205_sonicDet",
			"RB205_droidPopper"
		};
		ammo[] =
		{
			"RB205_droidPopper_ammo",
			"RB205_impact_ammo"
		};
	};
};

#define MASS_EXP	mass = 10;
#define MASS_SMK	mass = 3;
#define MASS_LUM	mass = 3;
#define MASS_SON	mass = 10;
#define MASS_EMP	mass = 10;
#define MASS_SNW	mass = 1;

class CfgAmmo
{
	class JLTS_grenade_emp_ammo;
	class RB205_droidPopper_ammo: JLTS_grenade_emp_ammo
	{
		JLTS_isEMPAmmo = 1;
		indirectHitRange = 10;
		explosionTime = 0;
	};
	
	class 3AS_Detonator_1RND;
	class RB205_impact_ammo: 3AS_Detonator_1RND
	{
		explosionTime = 0;
	};
};

class CfgMagazines
{
	class 3AS_ThermalDetonator;

	class 3AS_SmokeWhite;
	class 3AS_SmokeBlue;
	class 3AS_SmokeGreen;
	class 3AS_SmokeRed;
	
	class ACE_M84;
	class HandGrenade;


	class RB205_thermalDet: 3AS_ThermalDetonator
	{
		displayName = "$STR_205_ThermalDetonator_DisplayName";
		displayNameShort = "$STR_205_ThermalDetonator_DisplayNameShort";
		descriptionShort = "Wirkung: Explosiv<br />Radius: 6 Meter";
		picture = "\RB205_weapons\grenades\data\thermalDet.paa";
		MASS_EXP
        author = "205th Recon Battalion";
	};
	class RB205_impactGren: 3AS_ThermalDetonator
	{
		displayName = "$STR_205_ImpactGrenade_DisplayName";
		displayNameShort = "$STR_205_ImpactGrenade_DisplayNameShort";
		descriptionShort = "Wirkung: Explosiv (bei Kontakt)<br />Radius: 6 Meter";
		picture = "\RB205_weapons\grenades\data\impactGren.paa";
		ammo = "RB205_impact_ammo";
		MASS_EXP
        author = "205th Recon Battalion";
	};
	class RB205_smokeWhite: 3AS_SmokeWhite
	{
		displayName = "$STR_205_SmokeW_DisplayName";
		displayNameShort = "$STR_205_SmokeW_DisplayNameShort";
		descriptionShort = "Wirkung: Rauch<br />Farbe: Weiß<br />Dauer: 3 Minuten";
		picture = "\RB205_weapons\grenades\data\smokeW.paa";
		MASS_SMK
        author = "205th Recon Battalion";
	};
	class RB205_smokeBlue: 3AS_SmokeBlue
	{
		displayName = "$STR_205_SmokeB_DisplayName";
		displayNameShort = "$STR_205_SmokeB_DisplayNameShort";
		descriptionShort = "Wirkung: Rauch<br />Farbe: Blau<br />Dauer: 3 Minuten";
		picture = "\RB205_weapons\grenades\data\smokeB.paa";
		MASS_SMK
        author = "205th Recon Battalion";
	};
	class RB205_smokeGreen: 3AS_SmokeGreen
	{
		displayName = "$STR_205_SmokeG_DisplayName";
		displayNameShort = "$STR_205_SmokeG_DisplayNameShort";
		descriptionShort = "Wirkung: Rauch<br />Farbe: Grün<br />Dauer: 3 Minuten";
		picture = "\RB205_weapons\grenades\data\smokeG.paa";
		MASS_SMK
        author = "205th Recon Battalion";
	};
	class RB205_smokeRed: 3AS_SmokeRed
	{
		displayName = "$STR_SmokeR_DisplayName";
		displayNameShort = "$STR_205_SmokeR_DisplayNameShort";
		descriptionShort = "Wirkung: Rauch<br />Farbe: Rot<br />Dauer: 3 Minuten";
		picture = "\RB205_weapons\grenades\data\smokeR.paa";
		MASS_SMK
        author = "205th Recon Battalion";
	};
	class RB205_sonicDet: ACE_M84
	{
		displayName = "$STR_205_SonicDetonator_DisplayName";
		displayNameShort = "$STR_205_SonicDetonator_DisplayNameShort";
		descriptionShort = "Wirkung: Schock<br />(Nur freigegeben für ARC Soldaten)";
		picture = "\RB205_weapons\grenades\data\sonicDet.paa";
		model = "\ls_weapons\grenades\thermalDet\ls_grenade_thermalDet";
		modelSpecial = "";
		MASS_SON
        author = "205th Recon Battalion";
	};
	class JLTS_grenade_emp_mag;
	class RB205_droidPopper: JLTS_grenade_emp_mag
	{
		displayName = "$STR_205_DroidPopper_DisplayName";
		displayNameShort = "$STR_205_DroidPopper_DisplayNameShort";
		descriptionShort = "Wirkung: EMP<br />Radius: 10 Meter<br />(Nur freigegeben für ARC Soldaten)";
		ammo = "RB205_droidPopper_ammo";
		MASS_EMP
        author = "205th Recon Battalion";
	};
};

class CfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[] +=
		{
			"RB205_thermalDet_muzzle",
			"RB205_impactGren_muzzle",
			"RB205_smokeWhite_muzzle",
			"RB205_smokeBlue_muzzle",
			"RB205_smokeGreen_muzzle",
			"RB205_smokeRed_muzzle",
			"RB205_sonicDet_muzzle",
			"RB205_droidPopper_muzzle"
		};
		class ThrowMuzzle;
		class RB205_thermalDet_muzzle: ThrowMuzzle
		{
			magazines[] =
			{
				"RB205_thermalDet"
			};
		};
		class RB205_impactGren_muzzle: ThrowMuzzle
		{
			magazines[] =
			{
				"RB205_impactGren"
			};
		};
		class RB205_smokeWhite_muzzle: ThrowMuzzle
		{
			magazines[] =
			{
				"RB205_smokeWhite"
			};
		};
		class RB205_smokeBlue_muzzle: ThrowMuzzle
		{
			magazines[] =
			{
				"RB205_smokeBlue"
			};
		};
		class RB205_smokeGreen_muzzle: ThrowMuzzle
		{
			magazines[] =
			{
				"RB205_smokeGreen"
			};
		};
		class RB205_smokeRed_muzzle: ThrowMuzzle
		{
			magazines[] =
			{
				"RB205_smokeRed"
			};
		};
		class RB205_sonicDet_muzzle: ThrowMuzzle
		{
			magazines[] =
			{
				"RB205_sonicDet"
			};
		};
		class RB205_droidPopper_muzzle: ThrowMuzzle
		{
			magazines[] =
			{
				"RB205_droidPopper"
			};
		};
	};
};