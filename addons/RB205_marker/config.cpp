class cfgPatches
{
    class RB205_marker
    {
        requiredAddons[] =
        {
            "A3_Ui_F"
        };
        requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] = {};
    };
};

class CfgMarkerClasses
{
	class RB205_BFT
	{
		displayName = "205th Recon Battalion";
	};
};

class CfgMarkers
{
    class RB205_BFT_lead
    {
        name = "0-0 Pathfinder";
        icon = "RB205_marker\data\0-0.paa";
        color[] = {1,1,1,1};
        size = 50;
        shadow = 0;
        scope = 2;
        markerClass = "RB205_BFT";
        side = 1;
    };
	class RB205_BFT_1AP_lead: RB205_BFT_lead
	{
		name = "1-0 Tamer";
		color[] = {0,0,0,1};
		icon = "RB205_marker\data\1-0.paa";
	};
	class RB205_BFT_70MRP_lead: RB205_BFT_lead
	{
		name = "2-0 N/A";
		icon = "RB205_marker\data\2-0.paa";
	};
	class RB205_BFT_35HSP_lead: RB205_BFT_lead
	{
		name = "3-0 N/A";
		icon = "RB205_marker\data\3-0.paa";
	};

	//1st Attack Platoon
	class RB205_BFT_11_a: RB205_BFT_lead
	{
		name="1-1 Zillo";
		color[]={0,0.8,0,1};
		icon="RB205_marker\data\1-1_A.paa";
	};
	class RB205_BFT_11_b: RB205_BFT_11_a
	{
		name="1-1-B Zillo";
		icon="RB205_marker\data\1-1_B.paa";
	};
	class RB205_BFT_11_c: RB205_BFT_11_a
	{
		name="1-1-C Zillo";
		icon="RB205_marker\data\1-1_C.paa";
	};
	class RB205_BFT_11_d: RB205_BFT_11_a
	{
		name="1-1-D Zillo";
		icon="RB205_marker\data\1-1_D.paa";
	};

	class RB205_BFT_12_a: RB205_BFT_lead
	{
		name="1-2 Chimaera";
		color[]={0.9,0,0,1};
		icon="RB205_marker\data\1-2_A.paa";
	};
	class RB205_BFT_12_b: RB205_BFT_12_a
	{
		name="1-2-B Chimaera";
		icon="RB205_marker\data\1-2_B.paa";
	};
	class RB205_BFT_12_c: RB205_BFT_12_a
	{
		name="1-2-C Chimaera";
		icon="RB205_marker\data\1-2_C.paa";
	};
	class RB205_BFT_12_d: RB205_BFT_12_a
	{
		name="1-2-D Chimaera";
		icon="RB205_marker\data\1-2_D.paa";
	};

	class RB205_BFT_13_a: RB205_BFT_lead
	{
		name="1-3 Rancor";
		color[]={0,0,1,1};
		icon="RB205_marker\data\1-3_A.paa";
	};
	class RB205_BFT_13_b: RB205_BFT_13_a
	{
		name="1-3-B Rancor";
		icon="RB205_marker\data\1-3_B.paa";
	};
	class RB205_BFT_13_c: RB205_BFT_13_a
	{
		name="1-3-C Rancor";
		icon="RB205_marker\data\1-3_C.paa";
	};
	class RB205_BFT_13_d: RB205_BFT_13_a
	{
		name="1-3-D Rancor";
		icon="RB205_marker\data\1-3_D.paa";
	};

	//70th Mobile Response Platoon
	class RB205_BFT_21_a: RB205_BFT_lead
	{
		name="2-1 Krayt";
		color[]={0.5,0.6,0.4,1};
		icon="RB205_marker\data\2-1_A.paa";
	};
	class RB205_BFT_21_b: RB205_BFT_21_a
	{
		name="2-1-B Krayt";
		icon="RB205_marker\data\2-1_B.paa";
	};
	class RB205_BFT_21_c: RB205_BFT_21_a
	{
		name="2-1-C Krayt";
		icon="RB205_marker\data\2-1_C.paa";
	};

	//35th Heavy Support Platoon
	class RB205_BFT_31_unknown: RB205_BFT_lead
	{
		name="3-1 Raven [Unknown]";
		color[]={0.5,0.5,0.5,1};
		icon="RB205_marker\data\3-1.paa";
	};
	class RB205_BFT_31_laat: RB205_BFT_31_unknown
	{
		name="3-1 Raven [LAAT/I]";
		icon="RB205_marker\data\3-1_LAAT.paa";
	};
	class RB205_BFT_31_laatc: RB205_BFT_31_unknown
	{
		name="3-1 Raven [LAAT/C]";
		icon="RB205_marker\data\3-1_LAATC.paa";
	};
	class RB205_BFT_31_laatle: RB205_BFT_31_unknown
	{
		name="3-1 Raven [LAAT/LE]";
		icon="RB205_marker\data\3-1_LAATLE.paa";
	};
	class RB205_BFT_31_nu: RB205_BFT_31_unknown
	{
		name="3-1 Raven [Nu-Class]";
		icon="RB205_marker\data\3-1_NU.paa";
	};
	class RB205_BFT_31_purrgil: RB205_BFT_31_unknown
	{
		name="3-1 Raven [Purrgil]";
		icon="RB205_marker\data\3-1_PURRGIL.paa";
	};
	class RB205_BFT_31_arc170: RB205_BFT_31_unknown
	{
		name="3-1 Raven [ARC-170]";
		icon="RB205_marker\data\3-1_ARC170.paa";
	};
	class RB205_BFT_31_z95: RB205_BFT_31_unknown
	{
		name="3-1 Raven [Z-95]";
		icon="RB205_marker\data\3-1_Z95.paa";
	};
	class RB205_BFT_31_vwing: RB205_BFT_31_unknown
	{
		name="3-1 Raven [V-Wing]";
		icon="RB205_marker\data\3-1_VWING.paa";
	};
	class RB205_BFT_31_v19: RB205_BFT_31_unknown
	{
		name="3-1 Raven [V-19]";
		icon="RB205_marker\data\3-1_V19.paa";
	};
	class RB205_BFT_31_ywing: RB205_BFT_31_unknown
	{
		name="3-1 Raven [Y-Wing]";
		icon="RB205_marker\data\3-1_YWING.paa";
	};
    
    class hd_dot;
    class hd_arrow;
    class hd_ambush;
    class hd_join;
    class hd_pickup;
    class hd_destroy;
    class hd_start;
    class hd_end;
    class hd_objective;
    class hd_flag;
    class hd_warning;
    class hd_unknown;
};