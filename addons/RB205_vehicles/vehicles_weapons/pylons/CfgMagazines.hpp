class CfgMagazines
{
    class magazine_Missile_BIM9X_x1;
    class RB205_BIM9X_missile: magazine_Missile_BIM9X_x1
    {
        scope = 2;
        displayName = "[205] BIM-9X";
        displayNameShort = "AA SR";

        ammo = "RB205_BIM9X_ammo";
    };
	class RB205_BIM9X_missilePylon_3rnd: RB205_BIM9X_missile
	{
        displayName = "[205] BIM-9X (x3)";
		pylonWeapon = "RB205_BIM9X_weapon";
		//hardpoints[] = {"B_AGM65_RAIL","REP_AAA_RAIL","CIS_AAA_RAIL","IMP_AAA_RAIL","REBEL_AAA_RAIL"};
        hardpoints[] = {"B_BIM9X_RAIL","B_BIM9X_DUAL_RAIL"};
		count = 3;
        model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_x1_F";
	};

    class magazine_Missile_AMRAAM_D_x1;
	class RB205_AMRAAM_missile: magazine_Missile_AMRAAM_D_x1
	{
		scope = 2;
		displayName = "[205] AMRAAM";
		displayNameShort = "AA MR";

		ammo = "RB205_AMRAAM_ammo";
	};
	class RB205_AMRAAM_missilePylon: RB205_AMRAAM_missile
	{
		pylonWeapon = "RB205_AMRAAM_weapon";
        hardpoints[] = {"B_AMRAAM_D_RAIL"};
		count = 1;
        model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_Rail_x1_F";
	};
	class RB205_AMRAAM_missilePylon_2rnd: RB205_AMRAAM_missilePylon
	{
		displayName="[205] AMRAAM (x2)";
        hardpoints[] = {"B_AMRAAM_D_DUAL_RAIL"};
		count = 2;
        model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_DualRail_x2_F";
	};

	class magazine_Missile_AGM_02_x1;
	class RB205_AGM65_missile: magazine_Missile_AGM_02_x1
	{
		scope = 2;
        displayName = "[205] AGM-65 Maverick G";
        displayNameShort = "AGM (IR)";

        ammo = "RB205_AGM65_ammo";
	};
	class RB205_AGM65_missilePylon: RB205_AGM65_missile
	{
		pylonWeapon = "RB205_AGM65_weapon";
        hardpoints[] = {"B_AGM65_RAIL"};
		count = 1;
        model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_Rail_x1_F";
	};
	class RB205_AGM65_missilePylon_2rnd: RB205_AGM65_missilePylon
	{
		displayName="[205] AGM-65 Maverick G (x2)";
        hardpoints[] = {"B_AGM65_DUAL_RAIL"};
		count = 2;
        model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_DualRail_x2_F";
	};

	class ace_maverick_L_magazine_x1;
	class RB205_AGM65L_missile: ace_maverick_L_magazine_x1
	{
		scope = 2;
        displayName = "[205] AGM-65 Maverick L";
        displayNameShort = "AGM (L)";

        ammo = "RB205_AGM65L_ammo";
	};
	class RB205_AGM65L_missilePylon: RB205_AGM65L_missile
	{
		pylonWeapon = "RB205_AGM65L_weapon";
        hardpoints[] = {"B_AGM65_RAIL"};
		count = 1;
        model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_Rail_x1_F";
	};
	class RB205_AGM65L_missilePylon_2rnd: RB205_AGM65L_missilePylon
	{
		displayName="[205] AGM-65 Maverick L (x2)";
        hardpoints[] = {"B_AGM65_DUAL_RAIL"};
		count = 2;
        model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_DualRail_x2_F";
	};

	class magazine_Missile_HARM_x1;
	class RB205_AGMHARM_missile: magazine_Missile_HARM_x1
	{
		scope = 2;
        displayName = "[205] AGM-88C HARM";
        displayNameShort = "AGM (AR)";

        ammo = "RB205_AGMHARM_ammo";
	};
	class RB205_AGMHARM_missilePylon: RB205_AGMHARM_missile
	{
		pylonWeapon = "RB205_AGMHARM_weapon";
        hardpoints[] = {"B_HARM_RAIL"};
		count = 1;
        model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_Rail_x1_F";
	};


	class 4Rnd_Bomb_04_F;
	class RB205_GBU12_bomb: 4Rnd_Bomb_04_F
	{
		scope = 2;
        displayName = "[205] GBU-12";
        displayNameShort = "GBU-12 (L)";

        ammo = "RB205_GBU12_ammo";
		count = 1;
	};
	class RB205_GBU12_bombPylon: RB205_GBU12_bomb
	{
		pylonWeapon = "RB205_GBU12_weapon";
		hardpoints[] = {"B_BOMB_PYLON"};
		model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
	};

	class magazine_Bomb_SDB_x1;
	class RB205_GBUSDB_bomb: magazine_Bomb_SDB_x1
	{
		scope = 2;
        displayName = "[205] GBU SDB";
        displayNameShort = "GBU SDB (IR/L)";

        ammo = "RB205_GBUSDB_ammo";
	};
	class RB205_GBUSDB_bombPylon: RB205_GBUSDB_bomb
	{
        displayName = "[205] GBU SDB (x4)";
		count = 4;
		pylonWeapon = "RB205_GBUSDB_weapon";
		hardpoints[] = {"B_BOMB_PYLON"};
        model = "\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_DualRail_x2_F";
	};

	class PylonMissile_1Rnd_BombCluster_01_F;
	class RB205_CBU85_bombPylon: PylonMissile_1Rnd_BombCluster_01_F
	{
		scope = 2;
        displayName = "[205] CBU-85 Cluster";
        displayNameShort = "CBU-85 (L)";

        ammo = "RB205_CBU85_ammo";

		pylonWeapon = "RB205_CBU85_weapon";
		hardpoints[] = {"B_BOMB_PYLON"};
		model = "\a3\Weapons_F_Orange\DynamicLoadout\PylonMissile_1x_BombCluster_01_F.p3d";
	};

	class 2Rnd_Mk82;
	class RB205_Mk82_bomb: 2Rnd_Mk82
	{
		scope = 2;
        displayName = "[205] Plasma Bomb";
        displayNameShort = "Plasma";

        ammo = "RB205_Mk82_ammo";
		count = 5;

		model = "\RB205_vehicles\vehicles_weapons\data\plasma_bomb.p3d";
	};
	class RB205_Mk82_bombPylon: RB205_Mk82_bomb
	{
		pylonWeapon = "RB205_Mk82_weapon";
		hardpoints[] = {"B_BOMB_PYLON"};
		model = "3as\3AS_VehicleWeapons\model\3AS_Proton_Bomb.p3d";
		//model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
	};
};