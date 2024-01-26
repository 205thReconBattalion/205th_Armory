class cfgPatches
{
    class RB205_slots
	{
		requiredAddons[]=
		{
			"RB205_main",
			"RB205_custom"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] = {};
		units[] =
		{

		};
	};
};

#include "\RB205_main\macros.hpp"

#define SLOT(CLASS,DISPLAYNAME) \
class ##CLASS##; \
class ##CLASS##_unarmed: ##CLASS## \
{ \
	displayName = ##DISPLAYNAME##; \
	editorSubCategory = "RB205_slots"; \
	weapons[] = { "Throw","Put" }; \
	respawnweapons[] = { "Throw","Put" }; \
	magazines[] = {}; \
	respawnmagazines[] = {}; \
	items[] = { "JLTS_ids_gar_army" }; \
	respawnitems[] = { "JLTS_ids_gar_army" }; \
};
#define SLOT_MED(CLASS,DISPLAYNAME) \
class ##CLASS##; \
class ##CLASS##_unarmed: ##CLASS## \
{ \
	displayName = ##DISPLAYNAME##; \
	editorSubCategory = "RB205_slots"; \
	weapons[] = { "Throw","Put" }; \
	respawnweapons[] = { "Throw","Put" }; \
	magazines[] = {}; \
	respawnmagazines[] = {}; \
	items[] = { "JLTS_ids_gar_army","JLTS_ids_gar_medical" }; \
	respawnitems[] = { "JLTS_ids_gar_army","JLTS_ids_gar_medical" }; \
};

#define SLOT_NAVY(CLASS,DISPLAYNAME) \
class ##CLASS##; \
class ##CLASS##_unarmed: ##CLASS## \
{ \
	displayName = ##DISPLAYNAME##; \
	editorSubCategory = "RB205_slots"; \
	weapons[] = { "Throw","Put" }; \
	respawnweapons[] = { "Throw","Put" }; \
	magazines[] = {}; \
	respawnmagazines[] = {}; \
	items[] = { "JLTS_ids_gar_navy" }; \
	respawnitems[] = { "JLTS_ids_gar_navy" }; \
};

class cfgVehicles
{
	SLOT(RB205_clone_spark,							"(0-0) Clone Commander 'CC-8550 Spark'")
	SLOT(RB205_clone_lucky,							"(0-0) Clone Lieuteant 'CL-2058 Lucky")

	SLOT(RB205_clone_doc,							"(1-0) Clone Captain 'CO-7005 Doc'")
	SLOT(RB205_clone_scythe,						"(1-0) Clone Lieutenant 'CL-5577 Scythe'")

	SLOT(RB205_clone_sergeant_zillo,				"(1-1-A) Clone Sergeant")
	SLOT(RB205_clone_corporal_zillo,				"(1-1-B) Clone Corporal")
	SLOT(RB205_clone_lanceCorporal_zillo,			"(1-1-C) Clone Lance Corporal")
	SLOT(RB205_clone_trooper_zillo,					"(1-1-D) Clone Trooper")
	SLOT_MED(RB205_clone_trooper_zillo_medic,		"(1-1-D) Clone Trooper <Medic>")
	SLOT(RB205_clone_trooper_zillo_rto,				"(1-1-D) Clone Trooper <RTO>")

	SLOT(RB205_clone_ab_sergeant_chimaera,			"(1-2-A) Clone Sergeant")
	SLOT(RB205_clone_ab_corporal_chimaera,			"(1-2-B) Clone Corporal")
	SLOT(RB205_clone_ab_lanceCorporal_chimaera,		"(1-2-C) Clone Lance Corporal")
	SLOT(RB205_clone_ab_trooper_chimaera,			"(1-2-D) Clone Trooper")
	SLOT_MED(RB205_clone_ab_trooper_chimaera_medic,	"(1-2-D) Clone Trooper <Medic>")
	SLOT(RB205_clone_ab_trooper_chimaera_rto,		"(1-2-D) Clone Trooper <RTO>")

	SLOT(RB205_clone_sergeant_rancor,				"(1-3-A) Clone Sergeant")
	SLOT(RB205_clone_corporal_rancor,				"(1-3-B) Clone Corporal")
	SLOT(RB205_clone_lanceCorporal_rancor,			"(1-3-C) Clone Lance Corporal")
	SLOT(RB205_clone_trooper_rancor,				"(1-3-D) Clone Trooper")
	SLOT_MED(RB205_clone_trooper_rancor_medic,		"(1-3-D) Clone Trooper <Medic>")
	SLOT(RB205_clone_trooper_rancor_rto,			"(1-3-D) Clone Trooper <RTO>")

	SLOT(RB205_clone_arf_sergeant_krayt,			"(2-1-A) Clone Sergeant")
	SLOT(RB205_clone_arf_corporal_krayt,			"(2-1-B) Clone Corporal")
	SLOT(RB205_clone_arf_trooper_krayt,				"(2-1-C) Clone Trooper")

	SLOT(RB205_clone_plt_sergeant_raven,			"(3-1-A) Clone Sergeant")
	SLOT(RB205_clone_plt_corporal_raven,			"(3-1-B) Clone Corporal")
	SLOT(RB205_clone_plt_trooper_raven,				"(3-1-C) Clone Trooper")

	SLOT_NAVY(RB205_navy_chiefPettyOfficer, 		"(4-0-A) Chief Petty Officer")
	SLOT_NAVY(RB205_navy_pettyOfficer, 				"(4-0-B) Petty Officer")
	SLOT_NAVY(RB205_navy_officer, 					"(4-0-C) Officer")
	SLOT_NAVY(RB205_navy_ensign, 					"(4-0-D) Ensign")

	SLOT(RB205_clone_recruit,						"(5-0) Clone Recruit")
	
	SLOT(RB205_clone_trooper,						"[2-CT] Clone Trooper")
	SLOT(RB205_clone_lanceCorporal,					"[3-CLC] Clone Lance Corporal")
	SLOT(RB205_clone_corporal,						"[4-CP] Clone Corporal")
	SLOT(RB205_clone_sergeant,						"[5-CS] Clone Sergeant")
	SLOT(RB205_clone_sergeantMajor,					"[6-CSM] Clone Sergeant-Major")
	SLOT(RB205_clone_lieutenant,					"[7-CL] Clone Lieutenant")
	
	SLOT_MED(RB205_clone_trooper_medic,				"[2-CT] Clone Trooper <Medic>")
	SLOT(RB205_clone_trooper_rto,					"[2-CT] Clone Trooper <RTO>")
};

class CfgEditorSubcategories
{
	class RB205_slots
	{
		displayName = "Slots (Unarmed)";
		ACCESS_TRUE
	};
};