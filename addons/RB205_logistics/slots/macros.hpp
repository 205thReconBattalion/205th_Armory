#define SLOT(CLASS,DISPLAYNAME) \
class ##CLASS##; \
class ##CLASS##_unarmed: ##CLASS## \
{ \
	displayName = ##DISPLAYNAME##; \
	editorSubCategory = "RB205_slots"; \
	weapons[] = { "Throw","Put" }; \
	respawnweapons[] = { "Throw","Put" }; \
	magazines[] = {}; \
	respawnmagazines[] = {}; \
	items[] = { "JLTS_ids_gar_army" }; \
	respawnitems[] = { "JLTS_ids_gar_army" }; \
};
#define SLOT_MED(CLASS,DISPLAYNAME) \
class ##CLASS##; \
class ##CLASS##_unarmed: ##CLASS## \
{ \
	displayName = ##DISPLAYNAME##; \
	editorSubCategory = "RB205_slots"; \
	weapons[] = { "Throw","Put" }; \
	respawnweapons[] = { "Throw","Put" }; \
	magazines[] = {}; \
	respawnmagazines[] = {}; \
	items[] = { "JLTS_ids_gar_army","JLTS_ids_gar_medical" }; \
	respawnitems[] = { "JLTS_ids_gar_army","JLTS_ids_gar_medical" }; \
};
#define SLOT_NAVY(CLASS,DISPLAYNAME) \
class ##CLASS##; \
class ##CLASS##_unarmed: ##CLASS## \
{ \
	displayName = ##DISPLAYNAME##; \
	editorSubCategory = "RB205_slots"; \
	weapons[] = { "Throw","Put" }; \
	respawnweapons[] = { "Throw","Put" }; \
	magazines[] = {}; \
	respawnmagazines[] = {}; \
	items[] = { "JLTS_ids_gar_navy" }; \
	respawnitems[] = { "JLTS_ids_gar_navy" }; \
};
#define SLOT_EMP(CLASS,DISPLAYNAME) \
class ##CLASS##; \
class ##CLASS##_unarmed: ##CLASS## \
{ \
	displayName = ##DISPLAYNAME##; \
	editorSubCategory = "RB205_slots"; \
	weapons[] = { "Throw","Put" }; \
	respawnweapons[] = { "Throw","Put" }; \
	magazines[] = {}; \
	respawnmagazines[] = {}; \
	items[] = {}; \
	respawnitems[] = {}; \
};