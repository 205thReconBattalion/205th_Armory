#define IMAGE_CT "#(rgb,8,8,3)color(1,1,1,1)"
#define IMAGE_CS "#(rgb,8,8,3)color(0.349,0.325,0.122,1)"
#define IMAGE_CL "#(rgb,8,8,3)color(0.133,0.31,0.376,1)"
#define IMAGE_CO "#(rgb,8,8,3)color(0.396,0.149,0.161,1)"
#define IMAGE_CC "#(rgb,8,8,3)color(0.733,0.612,0.212,1)"

class XtdGearModels
{
    class CfgWeapons 
    {
        class RB205_H
        {
            label = "205th";
            author = "205th Recon Battalion";
            options[] =
			{
				"phase",
                "type",
                "rank",
                "camo",
                "var"
			};
            class phase
            {
                label = "Epoche";
                values[] =
				{
                    "p1",
					"p2",
					"emp"
				};
                class p1
                {
                    label = "Phase I";
                    description = "Klonkriege: 22BBY - 19BBY";
                };
                class p2
                {
                    label = "Phase II";
                    description = "Klonkriege: 22BBY - 19BBY";
                };
                class emp
                {
                    label = "Imperium";
                    description = "Galaktische Bürgerkriege: 19BBY - 5ABY";
                };
            };
            class type
            {
                label = "Typ";
                values[] =
				{
                    "dft",
                    "ab",
                    "arf",
                    "plt",
                    "snow",
                    "arc"
				};
                class dft
                {
                    label = "Standard";
                    description = "";
                };
                class ab
                {
                    label = "Airborne";
                    description = "aka. Paratroopers";
                };
                class arf
                {
                    label = "ARF";
                    description = "Advanced Recon Force";
                };
                class plt
                {
                    label = "Pilot";
                    description = "";
                };
                class snow
                {
                    label = "Schnee";
                    description = "Snowtrooper";
                };
                class arc
                {
                    label = "ARC";
                    description = "Advanced Recon Commando";
                };
            };
            class rank
            {
                label = "Dienstgrad";
                values[] =
				{
                    "cr",
                    "ct",
					"cp",
					"cs",
					"cl",
					"co",
					"cc"
				};
                class cr
                {
                    label = "CR";
                    description = "Clone Recruit (CR)";
                };
                class ct
                {
                    label = "CT";
                    description = "Clone Trooper (CT) - Clone Specialist (CSP)";
                    image = IMAGE_CT;
                };
                class cp
                {
                    label = "CP";
                    description = "Clone Lance Corporal (CLC) - Clone Corporal (CP)";
                    image = IMAGE_CT;
                };
                class cs
                {
                    label = "CS";
                    description = "Clone Sergeant (CS) - Clone Sergeant-Major (CSM)";
                    image = IMAGE_CS;
                };
                class cl
                {
                    label = "CL";
                    description = "Clone Lieutenant (CL)";
                    image = IMAGE_CL;
                };
                class co
                {
                    label = "CO";
                    description = "Captain (CO)";
                    image = IMAGE_CO;
                };
                class cc
                {
                    label = "CC";
                    description = "Commander (CC)";
                    image = IMAGE_CC;
                };
            };
            class camo
            {
                label = "Tarnmuster";
                values[] =
				{
                    "default",
					"arctic",
                    "woodland",
                    "jungle",
					"desert"
				};
                class default
                {
                    label = "Standard";
                    description = "";
                    image = "#(rgb,8,8,3)color(0,0,0,1)";
                };
                class arctic
                {
                    label = "Schnee";
                    description = "";
                    image = "\RB205_main\data\ui\other\background_arctic.jpg";
                };
                class woodland
                {
                    label = "Wald";
                    description = "";
                    image = "\RB205_main\data\ui\other\background_woodland.jpg";
                };
                class jungle
                {
                    label = "Dschungel";
                    description = "";
                    image = "\RB205_main\data\ui\other\background_jungle.jpg";
                };
                class desert
                {
                    label = "Wüste";
                    description = "";
                    image = "\RB205_main\data\ui\other\background_desert.jpg";
                };
            };
            class var
            {
                label = "Variation";
                values[] =
				{
                    "default",
					"flaps",
                    "damaged"
				};
                class default
                {
                    label = "Standard";
                    description = "";
                };
                class flaps
                {
                    label = "Flaps";
                    description = "";
                };
                class damaged
                {
                    label = "Beschädigt";
                    description = "";
                };
            };
        };
        class RB205_U: RB205_H
        {
            options[] =
			{
				"phase",
                "type",
                "rank",
                "camo",
                "squad"
			};
            class squad
            {
                label = "Squad";
                values[] =
				{
                    "default",
                    "1_1",
					"1_2",
					"1_3",
					"2_1",
					"3_1"
				};
                class default
                {
                    label = "Standard";
                    description = "Kein Squad";
                    image = "#(rgb,8,8,3)color(0,0,0,1)";
                };
                class 1_1
                {
                    label = "";
                    description = "Zillo (1-1)";
                    image = "\RB205_main\data\ui\other\1_1_zillo.jpg";
                };
                class 1_2
                {
                    label = "";
                    description = "Chimaera (1-2)";
                    image = "\RB205_main\data\ui\other\1_2_chimaera.jpg";
                };
                class 1_3
                {
                    label = "";
                    description = "Rancor (1-3)";
                    image = "\RB205_main\data\ui\other\1_3_rancor.jpg";
                };
                class 2_1
                {
                    label = "";
                    description = "Krayt (2-1)";
                    image = "\RB205_main\data\ui\other\2_1_krayt.jpg";
                };
                class 3_1
                {
                    label = "";
                    description = "Raven (3-1)";
                    image = "\RB205_main\data\ui\other\3_1_raven.jpg";
                };
            };
        };
        class RB205_V: RB205_H
        {
            options[] =
			{
				"phase",
                "type",
                "rank",
                "special"
			};
            class rank
            {
                label = "Dienstgrad";
                values[] =
				{
                    "ct",
					"clc",
					"cp",
					"cs",
					"csm",
					"cl",
					"co",
					"cc"
				};
                class ct
                {
                    label = "CT";
                    description = "Clone Recruit (CR) - Clone Specialist (CSP)";
                    image = IMAGE_CT;
                };
                class clc
                {
                    label = "CLC";
                    description = "Clone Lance Corporal (CLC)";
                    image = IMAGE_CT;
                };
                class cp
                {
                    label = "CP";
                    description = "Clone Corporal (CP)";
                    image = IMAGE_CT;
                };
                class cs
                {
                    label = "CS";
                    description = "Clone Sergeant (CS)";
                    image = IMAGE_CS;
                };
                class csm
                {
                    label = "CSM";
                    description = "Clone Sergeant-Major (CSM)";
                    image = IMAGE_CS;
                };
                class cl
                {
                    label = "CL";
                    description = "Clone Lieutenant (CL)";
                    image = IMAGE_CL;
                };
                class co
                {
                    label = "CO";
                    description = "Captain (CO)";
                    image = IMAGE_CO;
                };
                class cc
                {
                    label = "CC";
                    description = "Commander (CC)";
                    image = IMAGE_CC;
                };
            };
            class special
            {
                label = "Spezialisierung";
                values[] =
				{
                    "default",
                    "medic",
					"grenadier",
                    "scuba"
				};
                class default
                {
                    label = "Standard";
                    description = "";
                };
                class medic
                {
                    label = "Medic";
                    description = "";
                };
                class grenadier
                {
                    label = "Grenadier";
                    description = "";
                };
                class scuba
                {
                    label = "Scuba";
                    description = "";
                };
            };
        };
    };
    class CfgVehicles
    {
        class RB205_B
        {
            label = "205th";
            author = "205th Recon Battalion";
            options[] =
			{
				"phase",
                "type",
                "special"
			};
            class phase
            {
                label = "Epoche";
                values[] =
				{
                    "p1",
					"p2",
					"emp"
				};
                class p1
                {
                    label = "Phase I";
                    description = "Klonkriege: 22BBY - 19BBY";
                };
                class p2
                {
                    label = "Phase II";
                    description = "Klonkriege: 22BBY - 19BBY";
                };
                class emp
                {
                    label = "Imperium";
                    description = "Galaktische Bürgerkriege: 19BBY - 5ABY";
                };
            };
            class type
            {
                label = "Typ";
                values[] =
				{
                    "dft",
                    "ab",
                    "snow"
				};
                class dft
                {
                    label = "Standard";
                    description = "";
                };
                class ab
                {
                    label = "Airborne";
                    description = "aka. Paratroopers";
                };
                class snow
                {
                    label = "Schnee";
                    description = "Snowtrooper";
                };
            };
            class special
            {
                label = "Spezialisierung";
                values[] =
				{
                    "default",
                    "heavy",
                    "medic",
                    "radio",
					"rocket",
                    "eod"
				};
                class default
                {
                    label = "";
                    description = "Standard";
                    image = "\RB205_main\data\ui\other\role_rifleman.jpg";
                };
                class heavy
                {
                    label = "";
                    description = "Heavy";
                    image = "\RB205_main\data\ui\other\role_heavy.jpg";
                };
                class medic
                {
                    label = "";
                    description = "Medic";
                    image = "\RB205_main\data\ui\other\role_medic.jpg";
                };
                class radio
                {
                    label = "";
                    description = "RTO";
                    image = "\RB205_main\data\ui\other\role_rto.jpg";
                };
                class rocket
                {
                    label = "";
                    description = "AT/AA";
                    image = "\RB205_main\data\ui\other\role_ataa.jpg";
                };
                class eod
                {
                    label = "";
                    description = "EOD";
                    image = "\RB205_main\data\ui\other\role_eod.jpg";
                };
            };
        };
        class RB205_B_arf: RB205_B
        {
            label = "205th ARF";
            options[] =
			{
				"camo"
			};
            class camo
            {
                label = "Tarnmuster";
                values[] =
				{
                    "default",
					"arctic",
                    "woodland",
                    "jungle",
					"desert"
				};
                class default
                {
                    label = "Standard";
                    description = "";
                    image = "#(rgb,8,8,3)color(0,0,0,1)";
                };
                class arctic
                {
                    label = "Schnee";
                    description = "";
                    image = "\RB205_main\data\ui\other\background_arctic.jpg";
                };
                class woodland
                {
                    label = "Wald";
                    description = "";
                    image = "\RB205_main\data\ui\other\background_woodland.jpg";
                };
                class jungle
                {
                    label = "Dschungel";
                    description = "";
                    image = "\RB205_main\data\ui\other\background_jungle.jpg";
                };
                class desert
                {
                    label = "Wüste";
                    description = "";
                    image = "\RB205_main\data\ui\other\background_desert.jpg";
                };
            };
        };
        class RB205_B_arc
        {
            label = "205th ARC";
            author = "205th Recon Battalion";
            options[] =
			{
				"type"
			};
            class type
            {
                label = "Variante";
                values[] =
				{
                    "default",
                    "jetpack"
				};
                class default
                {
                    label = "Standard";
                    description = "";
                };
                class jetpack
                {
                    label = "Jetpack";
                    description = "";
                };
            };
        };
        class RB205_B_radioMini: RB205_B
        {
            label = "205th Mini RTO";
            options[] =
			{
				"type"
			};
            class type
            {
                label = "Variante";
                values[] =
				{
                    "white",
					"black"
				};
                class white
                {
                    label = "Weiß";
                    description = "";
                    image = "#(rgb,8,8,3)color(1,1,1,1)";
                };
                class black
                {
                    label = "Schwarz";
                    description = "";
                    image = "#(rgb,8,8,3)color(0,0,0,1)";
                };
            };
        };
    };
};

#define H_P2(CLASS,TYPE,RANK,CAMO,VAR) \
	class ##CLASS## \
	{ \
		model = "RB205_H"; \
		phase = "p2"; \
		type = ##TYPE##; \
		rank = ##RANK##; \
		camo = ##CAMO##; \
		var = ##VAR##; \
	};
#define U_P2(CLASS,TYPE,RANK,CAMO,SQUAD) \
	class ##CLASS## \
	{ \
		model = "RB205_U"; \
		phase = "p2"; \
        type = ##TYPE##; \
		rank = ##RANK##; \
		camo = ##CAMO##; \
		squad = ##SQUAD##; \
	};
#define V_P2(CLASS,TYPE,RANK,SPECIAL) \
	class ##CLASS## \
	{ \
		model = "RB205_V"; \
		phase = "p2"; \
        type = ##TYPE##; \
        rank = ##RANK##; \
		special = ##SPECIAL##; \
	};
        
#define B_P2(CLASS,TYPE,SPECIAL) \
	class ##CLASS## \
	{ \
		model = "RB205_B"; \
		phase = "p2"; \
        type = ##TYPE##; \
        special = ##SPECIAL##; \
	};

class XtdGearInfos
{
    class CfgWeapons
	{
        // HELMETS

        H_P2(RB205_H_trooper,"dft","ct","default","default")
        H_P2(RB205_H_corporal,"dft","cp","default","default")
        H_P2(RB205_H_sergeant,"dft","cs","default","default")
        H_P2(RB205_H_lieutenant,"dft","cl","default","default")
        
        H_P2(RB205_H_ab_trooper,"ab","ct","default","default")
        H_P2(RB205_H_ab_corporal,"ab","cp","default","default")
        H_P2(RB205_H_ab_sergeant,"ab","cs","default","default")
        H_P2(RB205_H_ab_lieutenant,"ab","cl","default","default")
        
        H_P2(RB205_H_arf_trooper,"arf","ct","default","default")
        H_P2(RB205_H_arf_corporal,"arf","cp","default","default")
        H_P2(RB205_H_arf_sergeant,"arf","cs","default","default")
        H_P2(RB205_H_arf_lieutenant,"arf","cl","default","default")

        H_P2(RB205_H_arfF_trooper,"arf","ct","default","flaps")
        H_P2(RB205_H_arfF_corporal,"arf","cp","default","flaps")
        H_P2(RB205_H_arfF_sergeant,"arf","cs","default","flaps")
        H_P2(RB205_H_arfF_lieutenant,"arf","cl","default","flaps")
        
        H_P2(RB205_H_arf_trooper_arctic,"arf","ct","arctic","default")
        H_P2(RB205_H_arf_trooper_woodland,"arf","ct","woodland","default")
        H_P2(RB205_H_arf_trooper_jungle,"arf","ct","jungle","default")
        H_P2(RB205_H_arf_trooper_desert,"arf","ct","desert","default")
        
        H_P2(RB205_H_plt_trooper,"plt","ct","default","default")
        H_P2(RB205_H_plt_corporal,"plt","cp","default","default")
        H_P2(RB205_H_plt_sergeant,"plt","cs","default","default")
        H_P2(RB205_H_plt_lieutenant,"plt","cl","default","default")
        
        H_P2(RB205_H_snow_trooper,"snow","ct","default","default")
        H_P2(RB205_H_snow_corporal,"snow","cp","default","default")
        H_P2(RB205_H_snow_sergeant,"snow","cs","default","default")
        H_P2(RB205_H_snow_lieutenant,"snow","cl","default","default")
        
        H_P2(RB205_H_arc_trooper,"arc","ct","default","default")

        // UNIFORMS

        U_P2(RB205_U_trooper,"dft","ct","default","default")
        U_P2(RB205_U_corporal,"dft","cp","default","default")
        U_P2(RB205_U_sergeant,"dft","cs","default","default")
        U_P2(RB205_U_lieutenant,"dft","cl","default","default")

        U_P2(RB205_U_arf_trooper,"arf","ct","default","default")
        U_P2(RB205_U_arf_corporal,"arf","cp","default","default")
        U_P2(RB205_U_arf_sergeant,"arf","cs","default","default")
        U_P2(RB205_U_arf_lieutenant,"arf","cl","default","default")

        U_P2(RB205_U_arf_trooper_arctic,"arf","ct","arctic","default")
        U_P2(RB205_U_arf_trooper_woodland,"arf","ct","woodland","default")
        U_P2(RB205_U_arf_trooper_jungle,"arf","ct","jungle","default")
        U_P2(RB205_U_arf_trooper_desert,"arf","ct","desert","default")

        U_P2(RB205_U_plt_trooper,"plt","ct","default","default")
        U_P2(RB205_U_plt_corporal,"plt","cp","default","default")
        U_P2(RB205_U_plt_sergeant,"plt","cs","default","default")
        U_P2(RB205_U_plt_lieutenant,"plt","cl","default","default")

        U_P2(RB205_U_snow_trooper,"snow","ct","default","default")
        U_P2(RB205_U_snow_corporal,"snow","cp","default","default")
        U_P2(RB205_U_snow_sergeant,"snow","cs","default","default")
        U_P2(RB205_U_snow_lieutenant,"snow","cl","default","default")

        U_P2(RB205_U_arc_trooper,"arc","ct","default","default")

        // VESTS

        V_P2(RB205_V_ct,"dft","ct","default")
        V_P2(RB205_V_clc,"dft","clc","default")
        V_P2(RB205_V_cp,"dft","cp","default")
        V_P2(RB205_V_cs,"dft","cs","default")
        V_P2(RB205_V_csm,"dft","csm","default")
        V_P2(RB205_V_cl,"dft","cl","default")
        V_P2(RB205_V_medic,"dft","ct","medic")
        V_P2(RB205_V_grenadier,"dft","ct","grenadier")
        V_P2(RB205_V_rebreather,"dft","ct","scuba")
        
        V_P2(RB205_V_ab_ct,"ab","ct","default")
        V_P2(RB205_V_ab_clc,"ab","clc","default")
        V_P2(RB205_V_ab_cp,"ab","cp","default")
        V_P2(RB205_V_ab_cs,"ab","cs","default")
        V_P2(RB205_V_ab_csm,"ab","csm","default")
        V_P2(RB205_V_ab_cl,"ab","cl","default")
        V_P2(RB205_V_ab_medic,"ab","ct","medic")
        V_P2(RB205_V_ab_grenadier,"ab","ct","grenadier")
        
        V_P2(RB205_V_arf_ct,"arf","ct","default")
        V_P2(RB205_V_arf_clc,"arf","clc","default")
        V_P2(RB205_V_arf_cp,"arf","cp","default")
        V_P2(RB205_V_arf_cs,"arf","cs","default")
        V_P2(RB205_V_arf_csm,"arf","csm","default")
        V_P2(RB205_V_arf_cl,"arf","cl","default")
        V_P2(RB205_V_arf_medic,"arf","ct","medic")
        
        V_P2(RB205_V_plt_ct,"plt","ct","default")
        V_P2(RB205_V_plt_clc,"plt","clc","default")
        V_P2(RB205_V_plt_cp,"plt","cp","default")
        V_P2(RB205_V_plt_cs,"plt","cs","default")
        V_P2(RB205_V_plt_csm,"plt","csm","default")
        V_P2(RB205_V_plt_cl,"plt","cl","default")

        V_P2(RB205_V_snow_ct,"snow","ct","default")
        V_P2(RB205_V_snow_clc,"snow","clc","default")
        V_P2(RB205_V_snow_cp,"snow","cp","default")
        V_P2(RB205_V_snow_cs,"snow","cs","default")
        V_P2(RB205_V_snow_csm,"snow","csm","default")
        V_P2(RB205_V_snow_cl,"snow","cl","default")
        V_P2(RB205_V_snow_medic,"snow","ct","medic")
        V_P2(RB205_V_snow_grenadier,"snow","ct","grenadier")
        
        V_P2(RB205_V_arc,"arc","ct","default")

        // RECRUITS       

        H_P2(RB205_H_recruit,"dft","cr","default","default")
        H_P2(RB205_H_ab_recruit,"ab","cr","default","default")
        H_P2(RB205_H_arf_recruit,"arf","cr","default","default")
        H_P2(RB205_H_plt_recruit,"plt","cr","default","default")
        H_P2(RB205_H_snow_recruit,"snow","cr","default","default")

        U_P2(RB205_U_recruit,"dft","cr","default","default")
        U_P2(RB205_U_snow_recruit,"snow","cr","default","default")
    };
    class CfgVehicles
    {
        B_P2(RB205_B_heavy,"dft","heavy")
        B_P2(RB205_B_medic,"dft","medic")
        B_P2(RB205_B_radio,"dft","radio")
        B_P2(RB205_B_rocket,"dft","rocket")
        B_P2(RB205_B_eod,"dft","eod")

        B_P2(RB205_B_ab,"ab","default")
        B_P2(RB205_B_ab_heavy,"ab","heavy")
        B_P2(RB205_B_ab_medic,"ab","medic")
        B_P2(RB205_B_ab_radio,"ab","radio")
        B_P2(RB205_B_ab_rocket,"ab","rocket")
        B_P2(RB205_B_ab_eod,"ab","eod")
        
        B_P2(RB205_B_snow_heavy,"snow","heavy")
        B_P2(RB205_B_snow_medic,"snow","medic")
        B_P2(RB205_B_snow_radio,"snow","radio")
        B_P2(RB205_B_snow_rocket,"snow","rocket")
        B_P2(RB205_B_snow_eod,"snow","eod")



        /*B_P2("RB205_B",RB205_B_heavy,"heavy")
        B_P2("RB205_B",RB205_B_medic,"medic")
        B_P2("RB205_B",RB205_B_radio,"radio")
        B_P2("RB205_B",RB205_B_rocket,"rocket")
        B_P2("RB205_B",RB205_B_eod,"eod")

        B_P2("RB205_B_ab",RB205_B_ab,"default")
        B_P2("RB205_B_ab",RB205_B_ab_heavy,"heavy")
        B_P2("RB205_B_ab",RB205_B_ab_medic,"medic")
        B_P2("RB205_B_ab",RB205_B_ab_rocket,"rocket")
        B_P2("RB205_B_ab",RB205_B_ab_radio,"radio")
        B_P2("RB205_B_ab",RB205_B_ab_eod,"eod")
        
        B_P2("RB205_B_snow",RB205_B_snow_heavy,"heavy")
        B_P2("RB205_B_snow",RB205_B_snow_medic,"medic")
        B_P2("RB205_B_snow",RB205_B_snow_rocket,"radio")
        B_P2("RB205_B_snow",RB205_B_snow_eod,"rocket")
        B_P2("RB205_B_snow",RB205_B_snow_radio,"eod")*/

        class RB205_B_arf
        {
            model = "RB205_B_arf";
            camo = "default";
        };
        class RB205_B_arf_arctic: RB205_B_arf
        {
            camo = "arctic";
        };
        class RB205_B_arf_desert: RB205_B_arf
        {
            camo = "desert";
        };
        class RB205_B_arf_jungle: RB205_B_arf
        {
            camo = "jungle";
        };
        class RB205_B_arf_woodland: RB205_B_arf
        {
            camo = "woodland";
        };

        class RB205_B_arc
        {
            model = "RB205_B_arc";
            type = "default";
        };
        class RB205_B_arc_jetpack: RB205_B_arc
        {
            type = "jetpack";
        };
        
        class RB205_B_radio_mini
        {
            model = "RB205_B_radioMini";
            type = "white";
        };
        class RB205_B_radio_mini_blk: RB205_B_radio_mini
        {
            type = "black";
        };
    };
};