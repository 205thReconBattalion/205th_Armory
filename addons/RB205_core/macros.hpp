#define AUTHOR "205th Recon Battalion"
#define PICTURE "\RB205_core\data\RB205_logo.paa"


//ARSENAL ACCESS:
#define ACCESS_TRUE \
	scope = 2; \
	scopeArsenal = 2;
#define ACCESS_FALSE \
	scope = 0; \
	scopeArsenal = 0;


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