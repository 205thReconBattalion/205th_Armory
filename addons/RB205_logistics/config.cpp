class CfgPatches
{
	class RB205_logistics
	{
		requiredAddons[] =
		{
			"RB205_core",
			"RB205_main",
			"RB205_weapons",
			"RB205_custom"
		};
		requiredVersion = 1.0;
		author = "205th Recon Battalion";
		units[] = {};
		weapons[] = {};
	};
};

class ACEX_Fortify_Presets
{
	class RB205_fort_light
	{
        displayName = "Republic Fortifications (Light)";
        objects[] = {
            {"3AS_Shield_1_Prop", 2},
            {"3AS_Shield_3_Prop", 6},
			{"3AS_Shield_5_Prop", 10},
			{"3AS_Shield_C_Prop", 20},
			{"Land_lsb_fob_hBarrier_ramp", 3},
			{"land_3as_Ladder3", 3}
        };
    };
	class RB205_fort_medium
	{
        displayName = "Republic Fortifications (Medium)";
        objects[] = {
            {"3AS_Shield_1_Prop", 2},
            {"3AS_Shield_3_Prop", 5},
			{"3AS_Shield_5_Prop", 8},
			{"3AS_Shield_C_Prop", 10},
			{"3AS_Short_Wall", 3},
            {"3AS_Short_Wall_Long", 3},
			{"3AS_Short_Wall_Curved", 3},
			{"3AS_Short_Wall_Post", 3},
			{"3AS_Short_Wall_Bunker", 10},
			{"land_3AS_light_s_reb", 3},
			{"Land_lsb_fob_hBarrier_ramp", 3},
			{"land_3as_Ladder3", 3}
        };
    };
    class RB205_fort_heavy
	{
        displayName = "Republic Fortifications (Heavy)";
        objects[] = {
            {"3AS_Short_Wall", 3},
            {"3AS_Short_Wall_Long", 3},
			{"3AS_Short_Wall_Curved", 3},
			{"3AS_Short_Wall_Post", 3},
			{"3AS_Short_Wall_Bunker", 10},
			{"Land_lsb_fob_hBarrier_1", 3},
			{"Land_lsb_fob_hBarrier_3", 4},
			{"Land_lsb_fob_hBarrier_5", 5},
			{"Land_lsb_fob_hBarrier_wall", 5},
			{"Land_lsb_fob_hBarrierWall_4", 7},
			{"Land_lsb_fob_hBarrierWall_7", 10},
			{"Land_lsb_fob_hBarrier_ramp", 3},
			{"Land_lsb_fob_hBarrierWall_ramp", 7},
			{"Land_lsb_fob_hBarrierWall_exvertedCorner", 7},
			{"Land_lsb_fob_hBarrierWall_invertedCorner", 7},
			{"Land_lsb_fob_hBarrier_corridor", 7},
			{"Land_lsb_fob_hBarrier_tower", 30},
			{"Land_OPTRE_hard_tent_urban", 20},
			{"Aux212_Mobile_Support_Bridge_Straight", 15},
			{"Land_ConcreteHedgehog_01_F", 3},
			{"land_3AS_light_s_reb", 3},
			{"3as_FOB_Banner_prop", 1},
			{"land_3as_Ladder3", 3},
			{"land_3as_Ladder5", 3}
        };
    };
};