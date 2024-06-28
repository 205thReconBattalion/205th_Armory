#include "\RB205_core\macros.hpp"


#define LINKED_ITEMS(HELMET,VEST) \
linkedItems[] = \
{ \
	##HELMET##,##VEST##, \
	"ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ItemWatch" \
}; \
respawnlinkedItems[] = \
{ \
	##HELMET##,##VEST##, \
	"ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ItemWatch" \
};

#define LINKED_ITEMS_WITHOUT_VEST(HELMET) \
linkedItems[] = \
{ \
	##HELMET##, \
	"ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ItemWatch" \
}; \
respawnlinkedItems[] = \
{ \
	##HELMET##, \
	"ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ItemWatch" \
};