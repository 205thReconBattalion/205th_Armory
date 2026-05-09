class cfgWeapons
{
	class 3AS_BARC_repeater;
	class RB205_barc_repeater: 3AS_BARC_repeater
	{
		displayName = "BARC Repeater";
		magazines[] =
		{
			"RB205_barc_mag"
		};
	};
	class 3AS_BARC_SideCar_repeater;
	class RB205_barc_repeater_sidecar: 3AS_BARC_SideCar_repeater
	{
		displayName = "BARC Repeater (Sidecar)";
		magazines[] =
		{
			"RB205_barc_mag"
		};
	};
	class 3AS_Defoliator_Heavy_Flamer_Weapon;
	class RB205_barc_flamer_sidecar: 3AS_Defoliator_Heavy_Flamer_Weapon
	{
		displayName = "BARC Flamethrower (Sidecar)";
		magazines[] =
		{
			"RB205_barc_flamer_mag"
		};
	};
};
class cfgMagazines
{
	class 3AS_BARC_Mag;
	class RB205_barc_mag: 3AS_BARC_Mag
	{
		ammo = "RB205_barc_ammo";
		count = 1000;
	};
	class 3AS_1000Rnd_HeavyFlamer;
	class RB205_barc_flamer_mag: 3AS_1000Rnd_HeavyFlamer
	{
		ammo = "3AS_HeavyFlamer_Round";
		count = 1000;
	};
};
class cfgAmmo
{
	class 3AS_Barc_Ammo;
	class RB205_barc_ammo: 3AS_Barc_Ammo
	{
		hit = 100;//200
		indirectHit = 8;
		indirectHitRange = 0.4;//0.4
		caliber = 4;//7
		class CamShakeFire
		{
			distance = 0;
			duration = 0;
			frequency = 0;
			power = 0;
		};
	};
};