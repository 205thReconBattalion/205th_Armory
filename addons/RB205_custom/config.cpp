class cfgPatches
{
    class RB205_custom
	{
		requiredAddons[]=
		{
			"RB205_main"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =
		{
			"RB205_U_trooper_zillo",
			"RB205_U_corporal_zillo",
			"RB205_U_sergeant_zillo",

			"RB205_U_trooper_chimaera",
			"RB205_U_corporal_chimaera",
			"RB205_U_sergeant_chimaera",
			
			"RB205_U_trooper_rancor",
			"RB205_U_corporal_rancor",
			"RB205_U_sergeant_rancor",
			
			"RB205_U_trooper_wampa",
			"RB205_U_corporal_wampa",
			"RB205_U_sergeant_wampa",
			
			"RB205_U_arf_trooper_nexu",
			"RB205_U_arf_corporal_nexu",
			"RB205_U_arf_sergeant_nexu",
			
			"RB205_U_plt_trooper_raven",
			"RB205_U_plt_corporal_raven",
			"RB205_U_plt_sergeant_raven"
		};
		units[] =
		{
			"RB205_clone_trooper_zillo",
			"RB205_clone_lanceCorporal_zillo",
			"RB205_clone_corporal_zillo",
			"RB205_clone_sergeant_zillo",
			"RB205_clone_trooper_zillo_medic",
			"RB205_clone_trooper_zillo_rto",

			"RB205_clone_ab_trooper_chimaera",
			"RB205_clone_ab_lanceCorporal_chimaera",
			"RB205_clone_ab_corporal_chimaera",
			"RB205_clone_ab_sergeant_chimaera",
			"RB205_clone_ab_trooper_chimaera_medic",
			"RB205_clone_ab_trooper_chimaera_rto",

			"RB205_clone_trooper_rancor",
			"RB205_clone_lanceCorporal_rancor",
			"RB205_clone_corporal_rancor",
			"RB205_clone_sergeant_rancor",
			"RB205_clone_trooper_rancor_medic",
			"RB205_clone_trooper_rancor_rto",

			"RB205_clone_trooper_wampa",
			"RB205_clone_lanceCorporal_wampa",
			"RB205_clone_corporal_wampa",
			"RB205_clone_sergeant_wampa",
			"RB205_clone_trooper_wampa_medic",
			"RB205_clone_trooper_wampa_rto",

			"RB205_clone_arf_trooper_nexu",
			"RB205_clone_arf_lanceCorporal_nexu",
			"RB205_clone_arf_corporal_nexu",
			"RB205_clone_arf_sergeant_nexu",
			"RB205_clone_arf_trooper_nexu_medic",

			"RB205_clone_plt_trooper_raven",
			"RB205_clone_plt_lanceCorporal_raven",
			"RB205_clone_plt_corporal_raven",
			"RB205_clone_plt_sergeant_raven"
		};
	};
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
	class RB205_U_trooper;
	class RB205_U_corporal;
	class RB205_U_sergeant;
	class RB205_U_arf_trooper;
	class RB205_U_arf_corporal;
	class RB205_U_arf_sergeant;
	class RB205_U_plt_trooper;
	class RB205_U_plt_corporal;
	class RB205_U_plt_sergeant;
	class RB205_U_snow_trooper;
	class RB205_U_snow_corporal;
	class RB205_U_snow_sergeant;
	class ItemInfo;

	class RB205_U_trooper_zillo: RB205_U_trooper
	{
		ACCESS_TRUE
		displayName = "[205] Clone Trooper Armor <1-1 Zillo>";
		class ItemInfo: ItemInfo
		{
			uniformClass = RB205_clone_trooper_zillo;
		};
	};
	class RB205_U_corporal_zillo: RB205_U_corporal
	{
		ACCESS_TRUE
		displayName = "[205] Clone Trooper Armor (Corporal) <1-1 Zillo>";
		class ItemInfo: ItemInfo
		{
			uniformClass = RB205_clone_corporal_zillo;
		};
	};
	class RB205_U_sergeant_zillo: RB205_U_sergeant
	{
		ACCESS_TRUE
		displayName = "[205] Clone Trooper Armor (Sergeant) <1-1 Zillo>";
		class ItemInfo: ItemInfo
		{
			uniformClass = RB205_clone_sergeant_zillo;
		};
	};

	class RB205_U_trooper_chimaera: RB205_U_trooper
	{
		ACCESS_TRUE
		displayName = "[205] Clone Trooper Armor <1-2 Chimaera>";
		class ItemInfo: ItemInfo
		{
			uniformClass = RB205_clone_ab_trooper_chimaera;
		};
	};
	class RB205_U_corporal_chimaera: RB205_U_corporal
	{
		ACCESS_TRUE
		displayName = "[205] Clone Trooper Armor (Corporal) <1-2 Chimaera>";
		class ItemInfo: ItemInfo
		{
			uniformClass = RB205_clone_ab_corporal_chimaera;
		};
	};
	class RB205_U_sergeant_chimaera: RB205_U_sergeant
	{
		ACCESS_TRUE
		displayName = "[205] Clone Trooper Armor (Sergeant) <1-2 Chimaera>";
		class ItemInfo: ItemInfo
		{
			uniformClass = RB205_clone_ab_sergeant_chimaera;
		};
	};

	class RB205_U_trooper_rancor: RB205_U_trooper
	{
		ACCESS_TRUE
		displayName = "[205] Clone Trooper Armor <1-3 Rancor>";
		class ItemInfo: ItemInfo
		{
			uniformClass = RB205_clone_trooper_rancor;
		};
	};
	class RB205_U_corporal_rancor: RB205_U_corporal
	{
		ACCESS_TRUE
		displayName = "[205] Clone Trooper Armor (Corporal) <1-3 Rancor>";
		class ItemInfo: ItemInfo
		{
			uniformClass = RB205_clone_corporal_rancor;
		};
	};
	class RB205_U_sergeant_rancor: RB205_U_sergeant
	{
		ACCESS_TRUE
		displayName = "[205] Clone Trooper Armor (Sergeant) <1-3 Rancor>";
		class ItemInfo: ItemInfo
		{
			uniformClass = RB205_clone_sergeant_rancor;
		};
	};

	class RB205_U_trooper_wampa: RB205_U_trooper
	{
		ACCESS_TRUE
		displayName = "[205] Clone Trooper Armor <1-3 Rancor>";
		class ItemInfo: ItemInfo
		{
			uniformClass = RB205_clone_trooper_wampa;
		};
	};
	class RB205_U_corporal_wampa: RB205_U_corporal
	{
		ACCESS_TRUE
		displayName = "[205] Clone Trooper Armor (Corporal) <1-3 Rancor>";
		class ItemInfo: ItemInfo
		{
			uniformClass = RB205_clone_corporal_wampa;
		};
	};
	class RB205_U_sergeant_wampa: RB205_U_sergeant
	{
		ACCESS_TRUE
		displayName = "[205] Clone Trooper Armor (Sergeant) <1-3 Rancor>";
		class ItemInfo: ItemInfo
		{
			uniformClass = RB205_clone_sergeant_wampa;
		};
	};

	class RB205_U_arf_trooper_nexu: RB205_U_arf_trooper
	{
		ACCESS_TRUE
		displayName = "[205] Clone ARF Trooper Armor <2-1 Nexu>";
		class ItemInfo: ItemInfo
		{
			uniformClass = RB205_clone_arf_trooper_nexu;
		};
	};
	class RB205_U_arf_corporal_nexu: RB205_U_arf_corporal
	{
		ACCESS_TRUE
		displayName = "[205] Clone ARF Trooper Armor (Corporal) <2-1 Nexu>";
		class ItemInfo: ItemInfo
		{
			uniformClass = RB205_clone_arf_corporal_nexu;
		};
	};
	class RB205_U_arf_sergeant_nexu: RB205_U_arf_sergeant
	{
		ACCESS_TRUE
		displayName = "[205] Clone ARF Trooper Armor (Sergeant) <2-1 Nexu>";
		class ItemInfo: ItemInfo
		{
			uniformClass = RB205_clone_arf_sergeant_nexu;
		};
	};

	class RB205_U_plt_trooper_raven: RB205_U_plt_trooper
	{
		ACCESS_TRUE
		displayName = "[205] Clone Pilot Trooper Armor <3-1 Raven>";
		class ItemInfo: ItemInfo
		{
			uniformClass = RB205_clone_plt_trooper_raven;
		};
	};
	class RB205_U_plt_corporal_raven: RB205_U_plt_corporal
	{
		ACCESS_TRUE
		displayName = "[205] Clone Pilot Trooper Armor (Corporal) <3-1 Raven>";
		class ItemInfo: ItemInfo
		{
			uniformClass = RB205_clone_plt_corporal_raven;
		};
	};
	class RB205_U_plt_sergeant_raven: RB205_U_plt_sergeant
	{
		ACCESS_TRUE
		displayName = "[205] Clone Pilot Trooper Armor (Sergeant) <3-1 Raven>";
		class ItemInfo: ItemInfo
		{
			uniformClass = RB205_clone_plt_sergeant_raven;
		};
	};
};
class cfgVehicles
{
	class RB205_clone_trooper;
	class RB205_clone_lanceCorporal;
	class RB205_clone_corporal;
	class RB205_clone_sergeant;
	class RB205_clone_trooper_medic;
	class RB205_clone_trooper_rto;

	class RB205_clone_ab_trooper;
	class RB205_clone_ab_lanceCorporal;
	class RB205_clone_ab_corporal;
	class RB205_clone_ab_sergeant;
	class RB205_clone_ab_trooper_medic;
	class RB205_clone_ab_trooper_rto;

	class RB205_clone_arf_trooper;
	class RB205_clone_arf_lanceCorporal;
	class RB205_clone_arf_corporal;
	class RB205_clone_arf_sergeant;
	class RB205_clone_arf_trooper_medic;

	class RB205_clone_plt_trooper;
	class RB205_clone_plt_lanceCorporal;
	class RB205_clone_plt_corporal;
	class RB205_clone_plt_sergeant;

	class RB205_clone_snow_trooper;
	class RB205_clone_snow_lanceCorporal;
	class RB205_clone_snow_corporal;
	class RB205_clone_snow_sergeant;
	class Rb205_clone_snow_trooper_medic;
	class Rb205_clone_snow_trooper_rto;

	class RB205_clone_trooper_zillo: RB205_clone_trooper
	{
		displayName = "(1-1 Zillo) (2-CT) Clone Trooper";
		uniformclass = "RB205_U_trooper_zillo";
		editorSubcategory = "RB205_squadVariants";
		hiddenselectionsTextures[] =
		{
			"RB205_custom\data\U_enl_upper_zillo.paa",
			"RB205_main\data\default\U_enl_lower_co.paa",
			"RB205_main\data\default\U_undersuit_co.paa"
		};
	};
	class RB205_clone_lanceCorporal_zillo: RB205_clone_lanceCorporal
	{
		displayName = "(1-1 Zillo) (3-CLC) Clone Lance-Corporal";
		uniformclass = "RB205_U_corporal_zillo";
		editorSubcategory = "RB205_squadVariants";
	};
	class RB205_clone_corporal_zillo: RB205_clone_corporal
	{
		displayName = "(1-1 Zillo) (4-CP) Clone Corporal";
		uniformclass = "RB205_U_corporal_zillo";
		editorSubcategory = "RB205_squadVariants";
		hiddenselectionsTextures[] =
		{
			"RB205_custom\data\U_enl_upper_zillo.paa",
			"RB205_main\data\default\U_nco_lower_co.paa",
			"RB205_main\data\default\U_undersuit_co.paa"
		};
	};
	class RB205_clone_sergeant_zillo: RB205_clone_sergeant
	{
		displayName = "(1-1 Zillo) (5-CS) Clone Sergeant";
		uniformclass = "RB205_U_sergeant_zillo";
		editorSubcategory = "RB205_squadVariants";
		hiddenselectionsTextures[] =
		{
			"RB205_custom\data\U_enl_upper_zillo.paa",
			"RB205_main\data\default\U_nco_lower_co.paa",
			"RB205_main\data\default\U_undersuit_co.paa"
		};
	};
	class RB205_clone_trooper_zillo_medic: RB205_clone_trooper_medic
	{
		displayName = "(1-1 Zillo) Clone Trooper <Medic>";
		uniformclass = "RB205_U_trooper_zillo";
		editorSubcategory = "RB205_squadVariants";
	};
	class RB205_clone_trooper_zillo_rto: RB205_clone_trooper_rto
	{
		displayName = "(1-1 Zillo) Clone Trooper <RTO>";
		uniformclass = "RB205_U_trooper_zillo";
		editorSubcategory = "RB205_squadVariants";
	};

	class RB205_clone_ab_trooper_chimaera: RB205_clone_ab_trooper
	{
		displayName = "(1-2 Chimaera) (2-CT) Clone Airborne Trooper";
		uniformclass = "RB205_U_trooper_chimaera";
		editorSubcategory = "RB205_squadVariants";
		hiddenselectionsTextures[] =
		{
			"RB205_custom\data\U_enl_upper_chimaera.paa",
			"RB205_main\data\default\U_enl_lower_co.paa",
			"RB205_main\data\default\U_undersuit_co.paa"
		};
	};
	class RB205_clone_ab_lanceCorporal_chimaera: RB205_clone_ab_lanceCorporal
	{
		displayName = "(1-2 Chimaera) (3-CLC) Clone Airborne Lance-Corporal";
		uniformclass = "RB205_U_corporal_chimaera";
		editorSubcategory = "RB205_squadVariants";
	};
	class RB205_clone_ab_corporal_chimaera: RB205_clone_ab_corporal
	{
		displayName = "(1-2 Chimaera) (4-CP) Clone Airborne Corporal";
		uniformclass = "RB205_U_corporal_chimaera";
		editorSubcategory = "RB205_squadVariants";
		hiddenselectionsTextures[] =
		{
			"RB205_custom\data\U_enl_upper_chimaera.paa",
			"RB205_main\data\default\U_nco_lower_co.paa",
			"RB205_main\data\default\U_undersuit_co.paa"
		};
	};
	class RB205_clone_ab_sergeant_chimaera: RB205_clone_ab_sergeant
	{
		displayName = "(1-2 Chimaera) (5-CS) Clone Airborne Sergeant";
		uniformclass = "RB205_U_sergeant_chimaera";
		editorSubcategory = "RB205_squadVariants";
		hiddenselectionsTextures[] =
		{
			"RB205_custom\data\U_enl_upper_chimaera.paa",
			"RB205_main\data\default\U_nco_lower_co.paa",
			"RB205_main\data\default\U_undersuit_co.paa"
		};
	};
	class RB205_clone_ab_trooper_chimaera_medic: RB205_clone_ab_trooper_medic
	{
		displayName = "(1-2 Chimaera) Clone Airborne Trooper <Medic>";
		uniformclass = "RB205_U_trooper_chimaera";
		editorSubcategory = "RB205_squadVariants";
	};
	class RB205_clone_ab_trooper_chimaera_rto: RB205_clone_ab_trooper_rto
	{
		displayName = "(1-2 Chimaera) Clone Airborne Trooper <RTO>";
		uniformclass = "RB205_U_trooper_chimaera";
		editorSubcategory = "RB205_squadVariants";
	};

	class RB205_clone_trooper_rancor: RB205_clone_trooper
	{
		displayName = "(1-3 Rancor) (2-CT) Clone Trooper";
		uniformclass = "RB205_U_trooper_rancor";
		editorSubcategory = "RB205_squadVariants";
		hiddenselectionsTextures[] =
		{
			"RB205_custom\data\U_enl_upper_rancor.paa",
			"RB205_main\data\default\U_enl_lower_co.paa",
			"RB205_main\data\default\U_undersuit_co.paa"
		};
	};
	class RB205_clone_lanceCorporal_rancor: RB205_clone_lanceCorporal
	{
		displayName = "(1-3 Rancor) (3-CLC) Clone Lance-Corporal";
		uniformclass = "RB205_U_corporal_rancor";
		editorSubcategory = "RB205_squadVariants";
	};
	class RB205_clone_corporal_rancor: RB205_clone_corporal
	{
		displayName = "(1-3 Rancor) (4-CP) Clone Corporal";
		uniformclass = "RB205_U_corporal_rancor";
		editorSubcategory = "RB205_squadVariants";
		hiddenselectionsTextures[] =
		{
			"RB205_custom\data\U_enl_upper_rancor.paa",
			"RB205_main\data\default\U_nco_lower_co.paa",
			"RB205_main\data\default\U_undersuit_co.paa"
		};
	};
	class RB205_clone_sergeant_rancor: RB205_clone_sergeant
	{
		displayName = "(1-3 Rancor) (5-CS) Clone Sergeant";
		uniformclass = "RB205_U_sergeant_rancor";
		editorSubcategory = "RB205_squadVariants";
		hiddenselectionsTextures[] =
		{
			"RB205_custom\data\U_enl_upper_rancor.paa",
			"RB205_main\data\default\U_nco_lower_co.paa",
			"RB205_main\data\default\U_undersuit_co.paa"
		};
	};
	class RB205_clone_trooper_rancor_medic: RB205_clone_trooper_medic
	{
		displayName = "(1-3 Rancor) Clone Trooper <Medic>";
		uniformclass = "RB205_U_trooper_rancor";
		editorSubcategory = "RB205_squadVariants";
	};
	class RB205_clone_trooper_rancor_rto: RB205_clone_trooper_rto
	{
		displayName = "(1-3 Rancor) Clone Trooper <RTO>";
		uniformclass = "RB205_U_trooper_rancor";
		editorSubcategory = "RB205_squadVariants";
	};

	class RB205_clone_trooper_wampa: RB205_clone_trooper
	{
		displayName = "(1-4 Wampa) (2-CT) Clone Trooper";
		uniformclass = "RB205_U_trooper_wampa";
		editorSubcategory = "RB205_squadVariants";
		hiddenselectionsTextures[] =
		{
			"RB205_custom\data\U_enl_upper_wampa.paa",
			"RB205_main\data\default\U_enl_lower_co.paa",
			"RB205_main\data\default\U_undersuit_co.paa"
		};
	};
	class RB205_clone_lanceCorporal_wampa: RB205_clone_lanceCorporal
	{
		displayName = "(1-4 Wampa) (3-CLC) Clone Lance-Corporal";
		uniformclass = "RB205_U_corporal_wampa";
		editorSubcategory = "RB205_squadVariants";
	};
	class RB205_clone_corporal_wampa: RB205_clone_corporal
	{
		displayName = "(1-4 Wampa) (4-CP) Clone Corporal";
		uniformclass = "RB205_U_corporal_wampa";
		editorSubcategory = "RB205_squadVariants";
		hiddenselectionsTextures[] =
		{
			"RB205_custom\data\U_enl_upper_wampa.paa",
			"RB205_main\data\default\U_nco_lower_co.paa",
			"RB205_main\data\default\U_undersuit_co.paa"
		};
	};
	class RB205_clone_sergeant_wampa: RB205_clone_sergeant
	{
		displayName = "(1-4 Wampa) (5-CS) Clone Sergeant";
		uniformclass = "RB205_U_sergeant_wampa";
		editorSubcategory = "RB205_squadVariants";
		hiddenselectionsTextures[] =
		{
			"RB205_custom\data\U_enl_upper_wampa.paa",
			"RB205_main\data\default\U_nco_lower_co.paa",
			"RB205_main\data\default\U_undersuit_co.paa"
		};
	};
	class RB205_clone_trooper_wampa_medic: RB205_clone_trooper_medic
	{
		displayName = "(1-4 Wampa) Clone Trooper <Medic>";
		uniformclass = "RB205_U_trooper_wampa";
		editorSubcategory = "RB205_squadVariants";
	};
	class RB205_clone_trooper_wampa_rto: RB205_clone_trooper_rto
	{
		displayName = "(1-4 Wampa) Clone Trooper <RTO>";
		uniformclass = "RB205_U_trooper_wampa";
		editorSubcategory = "RB205_squadVariants";
	};
	
	class RB205_clone_arf_trooper_nexu: RB205_clone_arf_trooper
	{
		displayName = "(2-1 Nexu) (2-CT) Clone ARF Trooper";
		uniformclass = "RB205_U_arf_trooper_nexu";
		editorSubcategory = "RB205_squadVariants";
		hiddenselectionsTextures[] =
		{
			"RB205_custom\data\U_enl_upper_nexu.paa",
			"RB205_main\data\arf\U_enl_lower_co.paa",
			"RB205_main\data\default\U_undersuit_co.paa"
		};
	};
	class RB205_clone_arf_lanceCorporal_nexu: RB205_clone_arf_lanceCorporal
	{
		displayName = "(2-1 Nexu) (3-CLC) Clone ARF Lance-Corporal";
		uniformclass = "RB205_U_arf_corporal_nexu";
		editorSubcategory = "RB205_squadVariants";
	};
	class RB205_clone_arf_corporal_nexu: RB205_clone_arf_corporal
	{
		displayName = "(2-1 Nexu) (4-CP) Clone ARF Corporal";
		uniformclass = "RB205_U_arf_corporal_nexu";
		editorSubcategory = "RB205_squadVariants";
		hiddenselectionsTextures[] =
		{
			"RB205_custom\data\U_enl_upper_nexu.paa",
			"RB205_main\data\arf\U_nco_lower_co.paa",
			"RB205_main\data\default\U_undersuit_co.paa"
		};
	};
	class RB205_clone_arf_sergeant_nexu: RB205_clone_arf_sergeant
	{
		displayName = "(2-1 Nexu) (5-CS) Clone ARF Sergeant";
		uniformclass = "RB205_U_arf_sergeant_nexu";
		editorSubcategory = "RB205_squadVariants";
		hiddenselectionsTextures[] =
		{
			"RB205_custom\data\U_enl_upper_nexu.paa",
			"RB205_main\data\arf\U_nco_lower_co.paa",
			"RB205_main\data\default\U_undersuit_co.paa"
		};
	};
	class RB205_clone_arf_trooper_nexu_medic: RB205_clone_arf_trooper_medic
	{
		displayName = "(2-1 Nexu) Clone ARF Trooper <Medic>";
		uniformclass = "RB205_U_arf_trooper_nexu";
		editorSubcategory = "RB205_squadVariants";
	};

	class RB205_clone_plt_trooper_raven: RB205_clone_plt_trooper
	{
		displayName = "(3-1 Raven) (2-CT) Clone Pilot Trooper ";
		uniformclass = "RB205_U_plt_trooper_raven";
		editorSubcategory = "RB205_squadVariants";
		hiddenselectionsTextures[] =
		{
			"RB205_custom\data\U_enl_upper_raven.paa",
			"RB205_main\data\arf\U_enl_lower_co.paa",
			"RB205_main\data\default\U_undersuit_co.paa"
		};
	};
	class RB205_clone_plt_lanceCorporal_raven: RB205_clone_plt_lanceCorporal
	{
		displayName = "(3-1 Raven) (3-CLC) Clone Pilot Lance-Corporal";
		uniformclass = "RB205_U_plt_corporal_raven";
		editorSubcategory = "RB205_squadVariants";
	};
	class RB205_clone_plt_corporal_raven: RB205_clone_plt_corporal
	{
		displayName = "(3-1 Raven) (4-CP) Clone Pilot Corporal";
		uniformclass = "RB205_U_plt_corporal_raven";
		editorSubcategory = "RB205_squadVariants";
		hiddenselectionsTextures[] =
		{
			"RB205_custom\data\U_enl_upper_raven.paa",
			"RB205_main\data\arf\U_nco_lower_co.paa",
			"RB205_main\data\default\U_undersuit_co.paa"
		};
	};
	class RB205_clone_plt_sergeant_raven: RB205_clone_plt_sergeant
	{
		displayName = "(3-1 Raven) (5-CS) Clone Pilot Sergeant";
		uniformclass = "RB205_U_plt_sergeant_raven";
		editorSubcategory = "RB205_squadVariants";
		hiddenselectionsTextures[] =
		{
			"RB205_custom\data\U_enl_upper_raven.paa",
			"RB205_main\data\arf\U_nco_lower_co.paa",
			"RB205_main\data\default\U_undersuit_co.paa"
		};
	};
};

class CfgEditorSubcategories
{
	class RB205_lore
	{
		displayName = "Lore Clones";
	};
	class RB205_squadVariants
	{
		displayName = "Squad-specific Armor";
	};
};