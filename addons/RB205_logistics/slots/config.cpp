class cfgPatches
{
    class RB205_logistics_slots
	{
		requiredAddons[]=
		{
			"RB205_main",
			"RB205_custom"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] = {};
		units[] = {};
	};
};

#include "macros.hpp"

class cfgVehicles
{
	SLOT(RB205_clone_spark,							"(0-0) Clone Commander 'CC-8550 Spark'")

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

	SLOT(RB205_clone_sergeant_wampa,				"(1-4-A) Clone Sergeant")
	SLOT(RB205_clone_corporal_wampa,				"(1-4-B) Clone Corporal")
	SLOT(RB205_clone_lanceCorporal_wampa,			"(1-4-C) Clone Lance Corporal")
	SLOT(RB205_clone_trooper_wampa,					"(1-4-D) Clone Trooper")
	SLOT_MED(RB205_clone_trooper_wampa_medic,		"(1-4-D) Clone Trooper <Medic>")
	SLOT(RB205_clone_trooper_wampa_rto,				"(1-4-D) Clone Trooper <RTO>")

	SLOT(RB205_clone_plt_sergeant_banshee,			"(3-1-A) Clone Sergeant")
	SLOT(RB205_clone_plt_corporal_banshee,			"(3-1-B) Clone Corporal")
	SLOT(RB205_clone_plt_lanceCorporal_banshee,		"(3-1-C) Clone Lance Corporal")
	SLOT(RB205_clone_plt_trooper_banshee,			"(3-1-D) Clone Trooper")

	//NAVY -> empire

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
	};
};