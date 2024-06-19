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