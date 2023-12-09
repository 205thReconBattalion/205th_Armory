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

//OTHER
#define ALLOWED_SLOTS_HELMET {605,901}

#define LINKED_ITEMS(HELMET,VEST,NVG) \
linkedItems[] = \
{ \
	##HELMET##,##VEST##,##NVG##, \
	"SWLB_clone_binocular","ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","TFAR_microdagr" \
}; \
respawnlinkedItems[] = \
{ \
	##HELMET##,##VEST##,##NVG##, \
	"SWLB_clone_binocular","ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","TFAR_microdagr" \
};