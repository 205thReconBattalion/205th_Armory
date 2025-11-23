class cfgWeapons
{
	class CannonCore;
	class 3AS_BARC_repeater: CannonCore
	{
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	class RB205_barc_repeater: 3AS_BARC_repeater
	{
		displayName = "BARC Repeater";
		magazines[] =
		{
			"RB205_barc_mag"
		};
		class manual: manual
		{
			class StandardSound
			{
				begin1[] = {"\ls\core\addons\sounds\vehicles\barc\shot.wss",1.12202,1,1200};
				soundBegin[] = {"begin1",1};
			};
		};
		class close: close
		{
			class StandardSound
			{
				begin1[] = {"\ls\core\addons\sounds\vehicles\barc\shot.wss",1.12202,1,1200};
				soundBegin[] = {"begin1",1};
			};
		};
		class short: short
		{
			class StandardSound
			{
				begin1[] = {"\ls\core\addons\sounds\vehicles\barc\shot.wss",1.12202,1,1200};
				soundBegin[] = {"begin1",1};
			};
		};
		class medium: medium
		{
			class StandardSound
			{
				begin1[] = {"\ls\core\addons\sounds\vehicles\barc\shot.wss",1.12202,1,1200};
				soundBegin[] = {"begin1",1};
			};
		};
		class far: far
		{
			class StandardSound
			{
				begin1[] = {"\ls\core\addons\sounds\vehicles\barc\shot.wss",1.12202,1,1200};
				soundBegin[] = {"begin1",1};
			};
		};
	};

	class ls_speeder_AP;
	class RB205_barc_repeater_he: ls_speeder_AP
	{
		displayName = "BARC Repeater (HE)";
		magazines[] =
		{
			"RB205_barc_he_mag"
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

	class ls_50Rnd_speederHE_belt;
	class RB205_barc_he_mag: ls_50Rnd_speederHE_belt
	{
		ammo = "RB205_barc_he_ammo";
		count = 75;
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

	class ls_speeder_HE;
	class RB205_barc_he_ammo: ls_speeder_HE
	{
		hit = 20;
		indirectHit = 10;
		indirectHitRange = 3;
		caliber = 2;
	};
};