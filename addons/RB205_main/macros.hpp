#define ACCESS_TRUE \
	scope = 2; \
	scopeArsenal = 2;
#define ACCESS_FALSE \
	scope = 0; \
	scopeArsenal = 0;

//MASS VALUES
#define MASS_HELMET 	20

#define MASS_UNIFORM 	150

#define MASS_VEST_ENL 	10
#define MASS_VEST_NCO 	20
#define MASS_VEST_CO 	40
#define MASS_VEST_ARC 	60

//INVENTORY SPACE
#define INV_UNIFORM 	"Supply80"

#define INV_VEST_ENL 	"Supply200"
#define INV_VEST_NCO 	"Supply250"
#define INV_VEST_CO 	"Supply300"

#define INV_VEST_MEDIC 		"Supply250"
#define INV_VEST_GRENADIER 	"Supply250"
#define INV_VEST_ARC 		"Supply300"

#define INV_BACK		150
#define INV_BACK_NONE	0
#define INV_BACK_MEDIC	250
#define INV_BACK_ROCKET	200
#define INV_BACK_EOD	150
#define INV_BACK_RADIO	50
#define INV_BACK_ARF	200
#define INV_BACK_ARC	300

//NIGHT VISION
#define VIS_NV \
visionMode[] = { "Normal", "NVG" };
#define VIS_NV_T \
visionMode[] = { "Normal", "NVG", "TI" }; \
thermalMode[]= { 0, 1 };

//ACE HEARING PROTECTION
#define ACE_HEARING_PROTECTION 1
#define ACE_HEARING_LOWER_VOLUME_DEFAULT 0.1 //0.25
#define ACE_HEARING_LOWER_VOLUME_PILOT 0.6
#define MODEL_OPTICS "\SWLB_clones\SWLB_clone_nvg_optic_dummy.p3d"

//TASK FORCE ARROWHEAD RADIO (TFAR)
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
#define JETPACK_VALUES \
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
/*#define JET_EMERGENCY \
	NSM_jumppack_is_jumppack=1; \
	NSM_jumppack_spam_delay=1; \
	NSM_jumppack_energy_capacity=10; \
	NSM_jumppack_recharge=5; \
	NSM_jumppack_jump_types[] = \
	{ \
		{ \
			"Deceleration", \
			{ 0,5,10,0,0,0 } \
		} \
	};\
	NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21"; \
	NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}}; \
	NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"}; \
    NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"}; \
    NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};*/

//HITPOINTS
#define HITPOINTS_HELMET \
class Head \
{ \
	hitpointName = "HitHead"; \
	armor = 10; \
	passThrough = 0.5; \
}; \
class Face \
{ \
	hitpointName = "HitFace"; \
	armor = 8; \
	passThrough = 0.5; \
};

//OTHER
#define ALLOWED_SLOTS_HELMET {605,901}

#define LINKED_ITEMS(HELMET,VEST,NVG) \
linkedItems[] = \
{ \
	##HELMET##,##VEST##,##NVG##, \
	"ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","TFAR_microdagr" \
}; \
respawnlinkedItems[] = \
{ \
	##HELMET##,##VEST##,##NVG##, \
	"ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","TFAR_microdagr" \
};