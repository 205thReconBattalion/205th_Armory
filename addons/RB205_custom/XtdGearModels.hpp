class XtdGearModels
{
    class CfgWeapons 
    {
        class RB205_H_custom
        {
            label = "205th Lore";
            author = "205th Recon Battalion";
            options[] =
			{
				"id",
                "var"
			};
            class id
            {
                label = "Klon-ID";
                values[] =
				{
					"0113",
                    "0955",
					"1312",
                    "1510",
                    "1972",
                    "2058",
                    "2111",
                    "2187",
                    "2209",
                    "2288",
                    "2420",
                    "2441",
                    "2609",
                    "3040",
                    "3234",
                    "3340",
                    "3369",
                    "3697",
                    "4040",
                    "4137",
                    "4600",
                    "5283",
                    "5463",
                    "5577",
                    "6666",
                    "7300",
                    "7565",
                    "9089"
				};
            };
            class var
            {
                label = "Variante";
                values[] =
				{
                    "dft",
					"var1",
					"var2",
					"var3"
				};
                class dft
                {
                    label = "Standard";
                    description = "";
                };
                class var1
                {
                    label = "I";
                    description = "";
                };
                class var2
                {
                    label = "II";
                    description = "";
                };
                class var3
                {
                    label = "III";
                    description = "";
                };
            };
        };
        class RB205_U_custom: RB205_H_custom{};
        class RB205_V_custom: RB205_H_custom{};
    };
    class CfgGlasses
    {
        class RB205_G_custom
        {
            label = "205th Lore";
            author = "205th Recon Battalion";
            options[] =
			{
				"type",
                "var"
			};
            class type
            {
                label = "Variante";
                values[] =
				{
					"dft",
                    "2058",
                    "5577",
                    "7005",
                    "8550"
				};
                class dft
                {
                    label = "Standard";
                    description = "";
                };
                class 2058
                {
                    label = "2058";
                    description = "";
                };
                class 5577
                {
                    label = "5577";
                    description = "";
                };
                class 7005
                {
                    label = "7005";
                    description = "";
                };
                class 8550
                {
                    label = "8550";
                    description = "";
                };
            };
            class var
            {
                label = "Variation";
                values[] =
				{
					"dft",
                    "var1",
                    "var2",
                    "var3"
				};
                class dft
                {
                    label = "Standard";
                    description = "";
                };
                class var1
                {
                    label = "I";
                    description = "";
                };
                class var2
                {
                    label = "II";
                    description = "";
                };
                class var3
                {
                    label = "III";
                    description = "";
                };
            };
        };
    };
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

class XtdGearInfos
{
    class CfgWeapons
	{
        U_P2(RB205_U_trooper_zillo,"dft","ct","default","1_1")
        U_P2(RB205_U_corporal_zillo,"dft","cp","default","1_1")
        U_P2(RB205_U_sergeant_zillo,"dft","cs","default","1_1")
        
        U_P2(RB205_U_trooper_chimaera,"dft","ct","default","1_2")
        U_P2(RB205_U_corporal_chimaera,"dft","cp","default","1_2")
        U_P2(RB205_U_sergeant_chimaera,"dft","cs","default","1_2")
        
        U_P2(RB205_U_trooper_rancor,"dft","ct","default","1_3")
        U_P2(RB205_U_corporal_rancor,"dft","cp","default","1_3")
        U_P2(RB205_U_sergeant_rancor,"dft","cs","default","1_3")
        
        U_P2(RB205_U_arf_trooper_krayt,"arf","ct","default","2_1")
        U_P2(RB205_U_arf_corporal_krayt,"arf","cp","default","2_1")
        U_P2(RB205_U_arf_sergeant_krayt,"arf","cs","default","2_1")
        
        U_P2(RB205_U_plt_trooper_raven,"plt","ct","default","3_1")
        U_P2(RB205_U_plt_corporal_raven,"plt","cp","default","3_1")
        U_P2(RB205_U_plt_sergeant_raven,"plt","cs","default","3_1")
    };
    class CfgGlasses
    {
        class RB205_VIS
        {
            model = "RB205_G_custom";
            type = "dft";
            var = "dft";
        };
    };
};