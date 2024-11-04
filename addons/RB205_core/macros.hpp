#define AUTHOR "205th Recon Battalion"
#define LOGO "\RB205_core\data\RB205_logo.paa"


/* ARSENAL ACCESS */
#define ACCESS_TRUE \
	scope = 2; \
	scopeArsenal = 2;

#define ACCESS_FALSE \
	scope = 0; \
	scopeArsenal = 0;


/* MASS / WEIGHT */
#define MASS_HELMET 		20

#define MASS_UNIFORM 		150

#define MASS_VEST			10
#define MASS_VEST_NCO		20
#define MASS_VEST_CO		40

#define MASS_NVG			5
#define MASS_VISOR			5

#define MASS_BACKPACK		50
#define MASS_BACKPACK_SMALL	10


/* INVENOTRY SPACE */
#define INV_UNIFORM 		"Supply80"

#define INV_VEST 			"Supply200"
#define INV_VEST_NCO 		"Supply250"
#define INV_VEST_CO 		"Supply300"
#define INV_VEST_MEDIC 		"Supply250"
#define INV_VEST_GRENADIER 	"Supply250"
#define INV_VEST_ARC 		"Supply300"

#define INV_BACK		150
#define INV_BACK_NONE	0
#define INV_BACK_MEDIC	250
#define INV_BACK_ROCKET	200
#define INV_BACK_EOD	150
#define INV_BACK_RADIO	50
#define INV_BACK_SCOUT	200
#define INV_BACK_SOF	300


/* INVENOTRY MACROS */
#define WEAP_XX(a,b) 	class _xx_##a { weapon = a; count = b; }
#define MAG_XX(a,b) 	class _xx_##a { magazine = a; count = b; }
#define ITEM_XX(a,b) 	class _xx_##a { name = a; count = b; }

#define ENUM_2(a) 	a, a
#define ENUM_3(a) 	a, a, a
#define ENUM_4(a) 	a, a, a, a
#define ENUM_5(a) 	a, a, a, a, a
#define ENUM_6(a) 	a, a, a, a, a, a
#define ENUM_7(a) 	a, a, a, a, a, a, a
#define ENUM_8(a) 	a, a, a, a, a, a, a, a
#define ENUM_9(a) 	a, a, a, a, a, a, a, a, a
#define ENUM_10(a) 	a, a, a, a, a, a, a, a, a, a
#define ENUM_11(a) 	a, a, a, a, a, a, a, a, a, a, a
#define ENUM_12(a) 	a, a, a, a, a, a, a, a, a, a, a, a
#define ENUM_13(a) 	a, a, a, a, a, a, a, a, a, a, a, a, a
#define ENUM_14(a) 	a, a, a, a, a, a, a, a, a, a, a, a, a, a
#define ENUM_15(a) 	a, a, a, a, a, a, a, a, a, a, a, a, a, a, a
#define ENUM_20(a) 	a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a
#define ENUM_25(a) 	a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a
#define ENUM_50(a) 	a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a
#define ENUM_75(a) 	a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a
#define ENUM_100(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a


/* ACE HEARING */
#define ACE_HEARING_VOLUME 			0.1
#define ACE_HEARING_VOLUME_LOWERED 	0.6


/* NIGHTVISION / THERMAL */
#define MODEL_OPTICS				"\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d"
#define MODEL_OPTICS_NV_VISOR 		"\MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d"
#define MODEL_OPTICS_RANGEFINDER 	"\MRC\JLTS\characters\CloneArmor\CloneNVGRange_optic.p3d"


/* CAMOUFLAGE VALUES */
#define CAMOUFLAGE_DEFAULT 1.4
#define CAMOUFLAGE_SCOUT 0.4


/* UNIT ICONS */
#define ICON_DEFAULT 	"iconMan"
#define ICON_NCO 		"iconManLeader"
#define ICON_CO 		"iconManOfficer"

#define ICON_ROCKET		"iconManAT"
#define ICON_EOD		"iconManExplosive"
#define ICON_HEAVY		"iconManMG"
#define ICON_MEDIC		"iconManMedic"
#define ICON_CREWMAN	"iconManEngineer"


/* TASK FORCE ARROWHEAD RADIO (TFAR) */
#define TFAR_RADIO \
tf_dialog="JLTS_clone_rto_radio_dialog"; \
tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;"; \
tf_encryptionCode="tf_west_radio_code"; \
tf_hasLRradio=1; \
tf_range=250000; \
tf_subtype="digital_lr";

#define TFAR_RADIO_SMALL \
tf_dialog="JLTS_clone_lr_programmer_radio_dialog"; \
tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;"; \
tf_encryptionCode="tf_west_radio_code"; \
tf_hasLRradio=1; \
tf_range=250000; \
tf_subtype="digital_lr";


/* JUMPPACK */
#define JETPACK_TRUE \
    JLTS_isJumppack = 0; \
	tas_is_jetpack = 0; \
    NSMLLTE_jumppack_is_jumppack = 0; \
	RD501_jumppack_is_jumppack = 0; \
	knd_isJetpack = 0; \
	jen_jetpacks_core_isJetpack = 1; \
	jen_jetpacks_core_acceleration = 1.8; \
	jen_jetpacks_core_ascensionCoef = 1; \
	jen_jetpacks_core_coolCoef = 2; \
	jen_jetpacks_core_fuelCapacity = 500; \
	jen_jetpacks_core_fuelCoef = 1; \
	jen_jetpacks_core_heatCoef = 6; \
	jen_jetpacks_core_jumpCoef = 1; \
	jen_jetpacks_core_drag = 4; \
	jen_jetpacks_core_strafeCoef = 0.3;