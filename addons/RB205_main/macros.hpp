#define ACCESS_TRUE \
	scope = 2; \
	scopeArsenal = 2;
#define ACCESS_FALSE \
	scope = 0; \
	scopeArsenal = 0;

//MASS VALUES
#define MASS_HELMET 20

#define MASS_UNIFORM 150

#define MASS_VEST_ENL 10
#define MASS_VEST_NCO 20
#define MASS_VEST_CO 40
#define MASS_VEST_ARC 60

//INVENTORY SPACE
#define INV_UNIFORM "Supply80"

#define INV_VEST_ENL "Supply200"
#define INV_VEST_NCO "Supply250"
#define INV_VEST_CO "Supply300"

#define INV_VEST_GRENADIER "Supply250"
#define INV_VEST_MEDIC "Supply250"
#define INV_VEST_ARC "Supply250"

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