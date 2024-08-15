class cfgPatches
{
	class RB205_weapons_grenades
	{
		requiredAddons[] =
		{
			"A3_Weapons_F",
			"3AS_Equipment",
			"3AS_Weapons",
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
			"RB205_smokeYellow",
			"RB205_smokePurple",
			"RB205_smokeOrange",
			"RB205_sonicDet",
			"RB205_droidPopper",

			"RB205_ugl_smoke_white",
			"RB205_ugl_smoke_blue",
			"RB205_ugl_smoke_green",
			"RB205_ugl_smoke_red",
			"RB205_ugl_smoke_yellow",
			"RB205_ugl_smoke_purple",
			"RB205_ugl_smoke_orange",
			"RB205_ugl_smoke_white_3rnd",
			"RB205_ugl_smoke_blue_3rnd",
			"RB205_ugl_smoke_green_3rnd",
			"RB205_ugl_smoke_red_3rnd",
			"RB205_ugl_smoke_yellow_3rnd",
			"RB205_ugl_smoke_purple_3rnd",
			"RB205_ugl_smoke_orange_3rnd",

			"RB205_ugl_flare_white",
			"RB205_ugl_flare_green",
			"RB205_ugl_flare_red",
			"RB205_ugl_flare_ir",
			"RB205_ugl_flare_white_3rnd",
			"RB205_ugl_flare_green_3rnd",
			"RB205_ugl_flare_red_3rnd",
			"RB205_ugl_flare_ir_3rnd",

			"RB205_ugl_he",
			"RB205_ugl_he_3rnd",
			"RB205_ugl_he_6rnd",

			"RB205_ugl_huntir"
		};
		ammo[] =
		{
			"RB205_droidPopper_ammo",
			"RB205_impact_ammo",
			"RB205_smokeShellWhite",

			"RB205_UGL_smokeShellWhite",
			"RB205_UGL_smokeShellBlue",
			"RB205_UGL_smokeShellGreen",
			"RB205_UGL_smokeShellRed",
			"RB205_UGL_smokeShellYellow",
			"RB205_UGL_smokeShellPurple",
			"RB205_UGL_smokeShellOrange"
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

	class 3AS_SmokeShellBase;
	class RB205_smokeShellWhite: 3AS_SmokeShellBase
	{
		effectsSmoke = "SmokeShellWhiteEffect";
	};



	class 3AS_MPL_25mm_Smoke_White;
	class RB205_UGL_smokeShellWhite: 3AS_MPL_25mm_Smoke_White
	{
		effectsSmoke = "SmokeShellWhiteEffect";
		timeToLive = "180";
	};
	class 3AS_MPL_25mm_Smoke_Blue;
	class RB205_UGL_smokeShellBlue: 3AS_MPL_25mm_Smoke_Blue
	{
		timeToLive = "180";
	};
	class 3AS_MPL_25mm_Smoke_Green;
	class RB205_UGL_smokeShellGreen: 3AS_MPL_25mm_Smoke_Green
	{
		timeToLive = "180";
	};
	class 3AS_MPL_25mm_Smoke_Red;
	class RB205_UGL_smokeShellRed: 3AS_MPL_25mm_Smoke_Red
	{
		timeToLive = "180";
	};
	class 3AS_MPL_25mm_Smoke_Yellow;
	class RB205_UGL_smokeShellYellow: 3AS_MPL_25mm_Smoke_Yellow
	{
		timeToLive = "180";
	};
	class 3AS_MPL_25mm_Smoke_Purple;
	class RB205_UGL_smokeShellPurple: 3AS_MPL_25mm_Smoke_Purple
	{
		timeToLive = "180";
	};
	class 3AS_MPL_25mm_Smoke_Orange;
	class RB205_UGL_smokeShellOrange: 3AS_MPL_25mm_Smoke_Orange
	{
		timeToLive = "180";
	};
};

class CfgMagazines
{
	class 3AS_ThermalDetonator;

	class 3AS_SmokeWhite;
	class 3AS_SmokeBlue;
	class 3AS_SmokeGreen;
	class 3AS_SmokeRed;
	class 3AS_SmokeYellow;
	class 3AS_SmokePurple;
	class 3AS_SmokeOrange;
	
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
		ammo = "RB205_smokeShellWhite";
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
		displayName = "$STR_205_SmokeR_DisplayName";
		displayNameShort = "$STR_205_SmokeR_DisplayNameShort";
		descriptionShort = "Wirkung: Rauch<br />Farbe: Rot<br />Dauer: 3 Minuten";
		picture = "\RB205_weapons\grenades\data\smokeR.paa";
		MASS_SMK
        author = "205th Recon Battalion";
	};
	class RB205_smokeYellow: 3AS_SmokeYellow
	{
		displayName = "$STR_205_SmokeY_DisplayName";
		displayNameShort = "$STR_205_SmokeY_DisplayNameShort";
		descriptionShort = "Wirkung: Rauch<br />Farbe: Gelb<br />Dauer: 3 Minuten";
		picture = "\RB205_weapons\grenades\data\smokeY.paa";
		MASS_SMK
        author = "205th Recon Battalion";
	};
	class RB205_smokePurple: 3AS_SmokePurple
	{
		displayName = "$STR_205_SmokeP_DisplayName";
		displayNameShort = "$STR_205_SmokeP_DisplayNameShort";
		descriptionShort = "Wirkung: Rauch<br />Farbe: Lila<br />Dauer: 3 Minuten";
		picture = "\RB205_weapons\grenades\data\smokeP.paa";
		MASS_SMK
        author = "205th Recon Battalion";
	};
	class RB205_smokeOrange: 3AS_SmokeOrange
	{
		displayName = "$STR_205_SmokeO_DisplayName";
		displayNameShort = "$STR_205_SmokeO_DisplayNameShort";
		descriptionShort = "Wirkung: Rauch<br />Farbe: Orange<br />Dauer: 3 Minuten";
		picture = "\RB205_weapons\grenades\data\smokeO.paa";
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



	class 3AS_3Rnd_Smoke_White_shell;
	class 3AS_3Rnd_Smoke_Blue_shell;
	class 3AS_3Rnd_Smoke_Green_shell;
	class 3AS_3Rnd_Smoke_Red_shell;
	class 3AS_3Rnd_Smoke_Yellow_shell;
	class 3AS_3Rnd_Smoke_Purple_shell;
	class 3AS_3Rnd_Smoke_Orange_shell;

	class RB205_ugl_smoke_white: 3AS_3Rnd_Smoke_White_shell
	{
		displayName = "$STR_205_UGL_SmokeW_DisplayName";
		displayNameShort = "$STR_205_SmokeW_DisplayNameShort";
		descriptionShort = "Wirkung: Rauch<br />Farbe: Weiß<br />Dauer: 3 Minuten";
		MASS_SMK
        author = "205th Recon Battalion";
		ammo = "RB205_UGL_smokeShellWhite";
		count = 1;
	};
	class RB205_ugl_smoke_white_3rnd: RB205_ugl_smoke_white
	{
		displayName = "$STR_205_UGL3_SmokeW_DisplayName";
		count = 3;
	};
	class RB205_ugl_smoke_blue: 3AS_3Rnd_Smoke_Blue_shell
	{
		displayName = "$STR_205_UGL_SmokeB_DisplayName";
		displayNameShort = "$STR_205_SmokeB_DisplayNameShort";
		descriptionShort = "Wirkung: Rauch<br />Farbe: Blau<br />Dauer: 3 Minuten";
		MASS_SMK
        author = "205th Recon Battalion";
		ammo = "RB205_UGL_smokeShellBlue";
		count = 1;
	};
	class RB205_ugl_smoke_blue_3rnd: RB205_ugl_smoke_blue
	{
		displayName = "$STR_205_UGL3_SmokeB_DisplayName";
		count = 3;
	};
	class RB205_ugl_smoke_green: 3AS_3Rnd_Smoke_Green_shell
	{
		displayName = "$STR_205_UGL_SmokeG_DisplayName";
		displayNameShort = "$STR_205_SmokeG_DisplayNameShort";
		descriptionShort = "Wirkung: Rauch<br />Farbe: Grün<br />Dauer: 3 Minuten";
		MASS_SMK
        author = "205th Recon Battalion";
		ammo = "RB205_UGL_smokeShellGreen";
		count = 1;
	};
	class RB205_ugl_smoke_green_3rnd: RB205_ugl_smoke_green
	{
		displayName = "$STR_205_UGL3_SmokeG_DisplayName";
		count = 3;
	};
	class RB205_ugl_smoke_red: 3AS_3Rnd_Smoke_Red_shell
	{
		displayName = "$STR_205_UGL_SmokeR_DisplayName";
		displayNameShort = "$STR_205_SmokeR_DisplayNameShort";
		descriptionShort = "Wirkung: Rauch<br />Farbe: Rot<br />Dauer: 3 Minuten";
		MASS_SMK
        author = "205th Recon Battalion";
		ammo = "RB205_UGL_smokeShellRed";
		count = 1;
	};
	class RB205_ugl_smoke_red_3rnd: RB205_ugl_smoke_red
	{
		displayName = "$STR_205_UGL3_SmokeR_DisplayName";
		count = 3;
	};
	class RB205_ugl_smoke_yellow: 3AS_3Rnd_Smoke_Yellow_shell
	{
		displayName = "$STR_205_UGL_SmokeY_DisplayName";
		displayNameShort = "$STR_205_SmokeY_DisplayNameShort";
		descriptionShort = "Wirkung: Rauch<br />Farbe: Gelb<br />Dauer: 3 Minuten";
		MASS_SMK
        author = "205th Recon Battalion";
		ammo = "RB205_UGL_smokeShellYellow";
		count = 1;
	};
	class RB205_ugl_smoke_yellow_3rnd: RB205_ugl_smoke_yellow
	{
		displayName = "$STR_205_UGL3_SmokeY_DisplayName";
		count = 3;
	};
	class RB205_ugl_smoke_purple: 3AS_3Rnd_Smoke_Purple_shell
	{
		displayName = "$STR_205_UGL_SmokeP_DisplayName";
		displayNameShort = "$STR_205_SmokeP_DisplayNameShort";
		descriptionShort = "Wirkung: Rauch<br />Farbe: Lila<br />Dauer: 3 Minuten";
		MASS_SMK
        author = "205th Recon Battalion";
		ammo = "RB205_UGL_smokeShellPurple";
		count = 1;
	};
	class RB205_ugl_smoke_purple_3rnd: RB205_ugl_smoke_purple
	{
		displayName = "$STR_205_UGL3_SmokeP_DisplayName";
		count = 3;
	};
	class RB205_ugl_smoke_orange: 3AS_3Rnd_Smoke_Orange_shell
	{
		displayName = "$STR_205_UGL_SmokeO_DisplayName";
		displayNameShort = "$STR_205_SmokeO_DisplayNameShort";
		descriptionShort = "Wirkung: Rauch<br />Farbe: Orange<br />Dauer: 3 Minuten";
		MASS_SMK
        author = "205th Recon Battalion";
		ammo = "RB205_UGL_smokeShellOrange";
		count = 1;
	};
	class RB205_ugl_smoke_orange_3rnd: RB205_ugl_smoke_orange
	{
		displayName = "$STR_205_UGL3_SmokeO_DisplayName";
		count = 3;
	};
	
	class ACE_40mm_Flare_white;
	class ACE_40mm_Flare_green;
	class ACE_40mm_Flare_red;
	class ACE_40mm_Flare_ir;

	class RB205_ugl_flare_white: ACE_40mm_Flare_white
	{
		displayName = "$STR_205_UGL_FlareW_DisplayName";
		displayNameShort = "$STR_205_FlareW_DisplayNameShort";
		descriptionShort = "Wirkung: Licht<br />Farbe: Weiß<br />Dauer: 45 Sekunden";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_nade_flw.paa";
		MASS_LUM
        author = "205th Recon Battalion";
	};
	class RB205_ugl_flare_white_3rnd: RB205_ugl_flare_white
	{
		displayName = "$STR_205_UGL3_FlareW_DisplayName";
		count = 3;
	};
	class RB205_ugl_flare_green: ACE_40mm_Flare_green
	{
		displayName = "$STR_205_UGL_FlareG_DisplayName";
		displayNameShort = "$STR_205_FlareG_DisplayNameShort";
		descriptionShort = "Wirkung: Licht<br />Farbe: Grün<br />Dauer: 45 Sekunden";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_nade_flg.paa";
		MASS_LUM
        author = "205th Recon Battalion";
	};
	class RB205_ugl_flare_green_3rnd: RB205_ugl_flare_green
	{
		displayName = "$STR_205_UGL3_FlareG_DisplayName";
		count = 3;
	};
	class RB205_ugl_flare_red: ACE_40mm_Flare_red
	{
		displayName = "$STR_205_UGL_FlareR_DisplayName";
		displayNameShort = "$STR_205_FlareR_DisplayNameShort";
		descriptionShort = "Wirkung: Licht<br />Farbe: Rot<br />Dauer: 45 Sekunden";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_nade_flr.paa";
		MASS_LUM
        author = "205th Recon Battalion";
	};
	class RB205_ugl_flare_red_3rnd: RB205_ugl_flare_red
	{
		displayName = "$STR_205_UGL3_FlareR_DisplayName";
		count = 3;
	};
	class RB205_ugl_flare_ir: ACE_40mm_Flare_ir
	{
		displayName = "$STR_205_UGL_FlareIR_DisplayName";
		displayNameShort = "$STR_205_FlareIR_DisplayNameShort";
		descriptionShort = "Wirkung: Licht<br />Farbe: IR<br />Dauer: 45 Sekunden";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_nade_ir.paa";
		MASS_LUM
        author = "205th Recon Battalion";
	};
	class RB205_ugl_flare_ir_3rnd: RB205_ugl_flare_ir
	{
		displayName = "$STR_205_UGL3_FlareIR_DisplayName";
		count = 3;
	};

	class 1Rnd_HE_Grenade_shell;
	class RB205_ugl_he: 1Rnd_HE_Grenade_shell
	{
		displayName = "$STR_205_UGL_HE_DisplayName";
		displayNameShort = "$STR_205_HE_DisplayNameShort";
		descriptionShort = "Wirkung: Explosiv<br />Anzahl: 1";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_nade_he.paa";
		MASS_EXP
        author = "205th Recon Battalion";
	};
	class RB205_ugl_he_3rnd: RB205_ugl_he
	{
		displayName = "$STR_205_UGL3_HE_DisplayName";
		descriptionShort = "Wirkung: Explosiv<br />Anzahl: 3";
		count = 3;
	};
	class RB205_ugl_he_6rnd: RB205_ugl_he
	{
		displayName = "$STR_205_UGL6_HE_DisplayName";
		descriptionShort = "Wirkung: Explosiv<br />Anzahl: 6";
		count = 6;
	};

	class ACE_HuntIR_M203;
	class RB205_ugl_huntir: ACE_HuntIR_M203
	{
		displayName = "$STR_205_HuntIR_DisplayName";
		displayNameShort = "$STR_205_HuntIR_DisplayNameShort";
		descriptionShort = "";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_nade_proto.paa";
		MASS_EMP
        author = "205th Recon Battalion";
	};
};

class CfgMagazineWells
{
	class RB205_ugl_1rnd
	{
		RB205_Smokes[] =
		{
			"RB205_ugl_smoke_white",
			"RB205_ugl_smoke_blue",
			"RB205_ugl_smoke_green",
			"RB205_ugl_smoke_red",
			"RB205_ugl_smoke_yellow",
			"RB205_ugl_smoke_purple",
			"RB205_ugl_smoke_orange"
		};
		RB205_Flares[] =
		{
			"RB205_ugl_flare_white",
			"RB205_ugl_flare_green",
			"RB205_ugl_flare_red",
			"RB205_ugl_flare_ir"
		};
		RB205_Explosives[] =
		{
			"RB205_ugl_he"
		};
		RB205_Other[] =
		{
			"RB205_ugl_huntir"
		};
	};
	class RB205_ugl_3rnd
	{
		RB205_Smokes[] =
		{
			"RB205_ugl_smoke_white_3rnd",
			"RB205_ugl_smoke_blue_3rnd",
			"RB205_ugl_smoke_green_3rnd",
			"RB205_ugl_smoke_red_3rnd",
			"RB205_ugl_smoke_yellow_3rnd",
			"RB205_ugl_smoke_purple_3rnd",
			"RB205_ugl_smoke_orange_3rnd"
		};
		RB205_Flares[] =
		{
			"RB205_ugl_flare_white_3rnd",
			"RB205_ugl_flare_green_3rnd",
			"RB205_ugl_flare_red_3rnd",
			"RB205_ugl_flare_ir_3rnd"
		};
		RB205_Explosives[] =
		{
			"RB205_ugl_he_3rnd"
		};
		RB205_Other[] =
		{
			"RB205_ugl_huntir"
		};
	};
	class RB205_ugl_arc
	{
		RB205_Smokes[] =
		{
			"RB205_ugl_smoke_white",
			"RB205_ugl_smoke_blue",
			"RB205_ugl_smoke_green",
			"RB205_ugl_smoke_red",
			"RB205_ugl_smoke_yellow",
			"RB205_ugl_smoke_purple",
			"RB205_ugl_smoke_orange"
		};
		RB205_Flares[] =
		{
			"RB205_ugl_flare_white",
			"RB205_ugl_flare_green",
			"RB205_ugl_flare_red",
			"RB205_ugl_flare_ir"
		};
		RB205_Explosives[] =
		{
			"RB205_ugl_he_6rnd"
		};
		RB205_Other[] =
		{
			"RB205_ugl_huntir"
		};
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
			"RB205_smokeYellow_muzzle",
			"RB205_smokePurple_muzzle",
			"RB205_smokeOrange_muzzle",
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
		class RB205_smokeYellow_muzzle: ThrowMuzzle
		{
			magazines[] =
			{
				"RB205_smokeYellow"
			};
		};
		class RB205_smokePurple_muzzle: ThrowMuzzle
		{
			magazines[] =
			{
				"RB205_smokePurple"
			};
		};
		class RB205_smokeOrange_muzzle: ThrowMuzzle
		{
			magazines[] =
			{
				"RB205_smokeOrange"
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