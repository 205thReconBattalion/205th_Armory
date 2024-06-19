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


/* ACE */
#define ACE_HEARING_VOLUME 			0.1
#define ACE_HEARING_VOLUME_LOWERED 	0.6


/* NIGHTVISION / THERMAL */
#define MODEL_OPTICS				"\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d"
#define MODEL_OPTICS_NV_VISOR 		"\MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d"
#define MODEL_OPTICS_RANGEFINDER 	"\MRC\JLTS\characters\CloneArmor\CloneNVGRange_optic.p3d"


/* CAMOUFLAGE VALUES */
#define CAMOUFLAGE_DEFAULT 1.4
#define CAMOUFLAGE_SCOUT 0.4


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
	knd_isJetpack = 1; \
	knd_jetpack_acceleration = 1.8; \
	knd_jetpack_ascensionCoef = 1; \
	knd_jetpack_coolCoef = 1; \
	knd_jetpack_fuelCapacity = 400; \
	knd_jetpack_fuelCoef = 1.5; \
	knd_jetpack_heatCoef = 6; \
	knd_jetpack_jumpCoef = 1; \
	knd_jetpack_resistance = 4; \
	knd_jetpack_strafeCoef = 0.3;