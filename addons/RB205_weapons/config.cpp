class cfgPatches
{
	class RB205_weapons
	{
		requiredAddons[] =
		{
			"3AS_Weapons",
			"JLTS_Z6_mag"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		ammo[] =
		{
			"RB205_ammo_standard",
			"RB205_ammo_compact",
			"RB205_ammo_overcharged",
			"RB205_ammo_heavy",
			"RB205_ammo_rapidFire",
			"RB205_ammo_experimental"
		};
		magazines[] =
		{
			"RB205_Standard_Energy_Pack",
			"RB205_Compact_Energy_Pack",
			"RB205_Overcharged_Energy_Pack",
			"RB205_Heavy_Energy_Pack",
			"RB205_RapidFire_Energy_Pack",
			"RB205_Experimental_Energy_Pack"
		};
		weapons[] = {};
		units[] = {};
	};
};

class CfgAmmo
{
	class JLTS_bullet_rifle_blue;
	class JLTS_bullet_pistol_blue;
	class JLTS_bullet_sniper_blue;
	class JLTS_bullet_carbine_blue;

	/* STANDARD ENERGY PACK */
	class 3AS_EC50_BluePlasma;
	class RB205_ammo_standard: 3AS_EC50_BluePlasma
	{
		hit = 15;
		caliber = 1.95;
		waterFriction = -0.0099999998;
	};

	/* COMPACT ENERGY PACK */
	class 3AS_EC20_BluePlasma;
	class RB205_ammo_compact: 3AS_EC20_BluePlasma
	{
		hit = 15;
		caliber = 1.95;
	};

	/* OVERCHARGED ENERGY PACK */
	class 3AS_EC80_BluePlasma;
	class RB205_ammo_overcharged: 3AS_EC80_BluePlasma
	{
		hit = 25;
		caliber = 1.95;//3.21;
	};

	/* HEAVY ENERGY PACK*/
	class 3AS_EC40_BluePlasma;
	class RB205_ammo_heavy: 3AS_EC40_BluePlasma
	{
		hit = 10;
		caliber = 1.65;
	};

	/* ROTARY ENERGY PACK */
	class RB205_ammo_rapidFire: 3AS_EC40_BluePlasma//JLTS_bullet_carbine_blue
	{
		hit = 15;
		caliber = 1.65;
	};

	/* EXPERIMENTAL ENERGY PACK */
	class RB205_ammo_experimental: 3AS_EC50_BluePlasma
	{
		hit = 20;
		caliber = 1.95;
	};
};

class CfgMagazines
{
	// DC-15A, DC-15S, DC-15C
	class 3AS_45Rnd_EC50_Mag;
	class RB205_Standard_Energy_Pack: 3AS_45Rnd_EC50_Mag
	{
		displayName = "$STR_205_Standard_Energy_Pack_DisplayName";
		displayNameShort = "$STR_205_Standard_Energy_Pack_DisplayNameShort";
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		ammo = "RB205_ammo_standard";
		count = 60;
		mass = 8;
		tracersEvery = 1;
		lastRoundsTracer = 60;
		descriptionShort = "$STR_205_Standard_Energy_Pack_DescriptionShort";
        author = "205th Recon Battalion";
	};

	// DC-17
	class 3AS_16Rnd_EC20_Mag;
	class RB205_Compact_Energy_Pack: 3AS_16Rnd_EC20_Mag
	{
		displayName = "$STR_205_Compact_Energy_Pack_DisplayName";
		displayNameShort = "$STR_205_Compact_Energy_Pack_DisplayNameShort";
		picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		ammo = "RB205_ammo_compact";
		count = 30;//20
		mass = 2;
		tracersEvery=1;
		lastRoundsTracer = 30;//20
		descriptionShort = "$STR_205_Compact_Energy_Pack_DescriptionShort";
        author = "205th Recon Battalion"
	};

	// DC-15X, Valken-38X
	class 3AS_10Rnd_EC80_Mag;
	class RB205_Overcharged_Energy_Pack: 3AS_10Rnd_EC80_Mag
	{
		displayName = "$STR_205_Overcharged_Energy_Pack_DisplayName";
		displayNameShort = "$STR_205_Overcharged_Energy_Pack_DisplayNameShort";
		picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		ammo = "RB205_ammo_overcharged";
		count = 15;
		mass = 4;
		tracersEvery = 1;
		lastRoundsTracer = 15;
		descriptionShort = "$STR_205_Overcharged_Energy_Pack_DescriptionShort";
        author = "205th Recon Battalion";
	};

	//DC-15L
	class 3AS_200Rnd_EC40_Mag;
	class RB205_Heavy_Energy_Pack: 3AS_200Rnd_EC40_Mag
	{
		displayName = "$STR_205_Heavy_Energy_Pack_DisplayName";
		displayNameShort = "$STR_205_Heavy_Energy_Pack_DisplayNameShort";
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		ammo = "RB205_ammo_heavy";
		count = 200;
		mass = 16;//23		
		tracersEvery = 1;
		lastRoundsTracer =  200;
		descriptionShort = "$STR_205_Heavy_Energy_Pack_DescriptionShort";
        author = "205th Recon Battalion";
	};

	//Z-6
	class JLTS_Z6_mag;
	class RB205_RapidFire_Energy_Pack: JLTS_Z6_mag
	{
		displayName = "$STR_205_RapidFire_Energy_Pack_DisplayName";
		displayNameShort = "$STR_205_RapidFire_Energy_Pack_DisplayNameShort";
		picture = "\MRC\JLTS\weapons\z6\data\ui\z6_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
		ammo = "RB205_ammo_rapidFire";
		count = 350;
		mass = 23;
		tracersEvery = 1;
		lastRoundsTracer = 350;
		descriptionShort = "$STR_205_RapidFire_Energy_Pack_DescriptionShort";
        author = "205th Recon Battalion";
	};

	//Westar-M5
	class 3AS_60Rnd_EC50_Mag;
	class RB205_Experimental_Energy_Pack: 3AS_60Rnd_EC50_Mag
	{
		displayName = "$STR_205_Experimental_Energy_Pack_DisplayName";
		displayNameShort = "$STR_205_Experimental_Energy_Pack_DisplayNameShort";
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		ammo = "RB205_ammo_experimental";
		count = 60;
		mass = 10;
		tracersEvery = 1;
		lastRoundsTracer = 60;
		descriptionShort = "$STR_205_Experimental_Energy_Pack_DescriptionShort";
        author = "205th Recon Battalion";
	};
};