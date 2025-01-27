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
};