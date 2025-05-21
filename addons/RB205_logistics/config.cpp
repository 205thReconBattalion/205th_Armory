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
            {"Land_OPTRE_ConstructionBarrier2", 3},
            {"Land_OPTRE_Cone", 1}
        };
    };
	class RB205_fort_medium
	{
        displayName = "Republic Fortifications (Medium)";
        objects[] = {
			{"3AS_Short_Wall", 3},
            {"3AS_Short_Wall_Long", 3},
			{"3AS_Short_Wall_Curved", 3},
			{"3AS_Short_Wall_Post", 3},
			{"3AS_Short_Wall_Bunker", 10},
			
			{"land_3AS_light_s_reb", 3},
			{"land_3as_Ladder3", 3}
        };
    };
    class RB205_fort_heavy
	{
        displayName = "Republic Fortifications (Heavy)";
        objects[] = {
			{"3as_hbarrier_1", 3},
			{"3as_hbarrier_3", 3},
			{"3as_hbarrier_5", 3},
			{"3as_hbarricade", 3},
			{"3as_hbarrierwall_1", 5},
			{"3as_hbarrierWall_4", 5},
			{"3as_hbarrierWall_6", 5},
			{"3as_hbarrierWall_corner3", 5},
			{"3as_hbarrierWall_cornerinv3", 5},
			{"3as_hbarrierWall_Corridor", 5},
			{"3as_hbarrier_Ramp", 3},

            {"3as_hbarrier_big", 8},
            {"3as_hbarrier_big4", 8},
			{"3as_hbarrier_big6", 8},
			{"3as_hbarrier_bunker", 15},
			{"3as_hbarrier_Tower", 30},

			{"land_3as_GuardShack", 20},
			{"Land_OPTRE_hard_tent_urban", 20},
			{"Aux212_Mobile_Support_Bridge_Straight", 15},
			{"land_3as_Hedgehog", 1},
			{"land_3as_Dragonstooth", 1},
			{"land_3AS_light_s_reb", 3},
			{"3as_FOB_Banner_prop", 1},
			{"land_3as_Ladder3", 3},
			{"land_3as_Ladder5", 3}
        };
    };

	#define category0 "(-) Road Barriers"
	#define category1 "(FCS) Shield Barricades"
	#define category2 "(FCS) Small Fortifications"
	#define category3 "(FC) H-Barriers"
	#define category4 "(FC) H-Barriers (Wall)"
	#define category5 "(FC) H-Barriers (Big)"
	#define category6 "(FC) Buildings"
	#define category7 "(SV) Bridges"
	#define category8 "(FCS) Misc"

	class RB205_fort_allInOne {
        displayName = "Republic Fortifications (All In One)";
        objects[] = {
			{"Land_OPTRE_ConstructionBarrier2", 3, category0},
            {"Land_OPTRE_Cone", 1, category0},

			{"3AS_Shield_1_Prop", 2, category1},
            {"3AS_Shield_3_Prop", 2, category1},
			{"3AS_Shield_5_Prop", 2, category1},
			{"3AS_Shield_C_Prop", 2, category1},

			{"3AS_Short_Wall", 2, category2},
            {"3AS_Short_Wall_Long", 2, category2},
			{"3AS_Short_Wall_Curved", 2, category2},
			{"3AS_Short_Wall_Post", 2, category2},
			{"3AS_Short_Wall_Bunker", 5, category2},

            {"3as_hbarrier_1", 3, category3},
			{"3as_hbarrier_3", 3, category3},
			{"3as_hbarrier_5", 3, category3},
			{"3as_hbarricade", 3, category3},

			{"3as_hbarrierwall_1", 5, category4},
			{"3as_hbarrierWall_4", 5, category4},
			{"3as_hbarrierWall_6", 5, category4},
			{"3as_hbarrierWall_corner3", 5, category4},
			{"3as_hbarrierWall_cornerinv3", 5, category4},
			{"3as_hbarrierWall_Corridor", 5, category4},
			{"3as_hbarrier_Ramp", 3, category4},

            {"3as_hbarrier_big", 8, category5},
            {"3as_hbarrier_big4", 8, category5},
			{"3as_hbarrier_big6", 8, category5},
			{"3as_hbarrier_bunker", 15, category5},
			{"3as_hbarrier_Tower", 30, category5},

			{"land_3as_GuardShack", 20, category6},
			{"Land_OPTRE_hard_tent_urban", 20, category6},

			{"Aux212_Mobile_Support_Bridge_Straight", 10, category7},

			{"land_3as_Hedgehog", 1, category8},
			{"land_3as_Dragonstooth", 1, category8},
			{"land_3AS_light_s_reb", 3, category8},
			{"3as_FOB_Banner_prop", 1, category8},
			{"land_3as_Ladder3", 3, category8},
			{"land_3as_Ladder5", 3, category8}
        };
    };
};