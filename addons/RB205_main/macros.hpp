#define IDENTITY_TYPES {"LanguageENG_F","SWLB_JH_Head_Hair"}
#define IDENTITY_TYPES_GLASSES(GLASSES) {"LanguageENG_F","SWLB_JH_Head_Hair",##GLASSES##}

#define LINKED_ITEMS(HELMET,VEST,NVG) \
linkedItems[] = \
{ \
	##HELMET##,##VEST##,##NVG##, \
	"ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ACE_Altimeter" \
}; \
respawnlinkedItems[] = \
{ \
	##HELMET##,##VEST##,##NVG##, \
	"ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ACE_Altimeter" \
};

/*
	UNIT INVENTORY
*/

#define ADD_INVENTORY_MAG \
	ENUM_5("RB205_Compact_Energy_Pack"), \
	ENUM_3("RB205_thermalDet"), \
	ENUM_2("RB205_smokeWhite"), \
	ENUM_2("ACE_painkillers")

#define ADD_INVENTORY_MAG_RIFLEMAN \
	ADD_INVENTORY_MAG, \
	ENUM_8("RB205_Standard_Energy_Pack")

#define ADD_INVENTORY_MAG_GRENADIER \
	ADD_INVENTORY_MAG_RIFLEMAN, \
	ENUM_5("3Rnd_HE_Grenade_shell")

#define ADD_INVENTORY_MAG_HEAVY \
	ADD_INVENTORY_MAG, \
	ENUM_8("RB205_RapidFire_Energy_Pack")

#define ADD_INVENTORY_MAG_MARKSMAN \
	ADD_INVENTORY_MAG, \
	ENUM_8("RB205_Overcharged_Energy_Pack")