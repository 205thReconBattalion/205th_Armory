#define EDITOR_CATEGORY "RB205_props_keycards"
#define EDITOR_SUBCATEGORY_RED "RB205_props_keycards_doors_red"
#define EDITOR_SUBCATEGORY_ORANGE "RB205_props_keycards_doors_orange"
#define EDITOR_SUBCATEGORY_YELLOW "RB205_props_keycards_doors_yellow"
#define EDITOR_SUBCATEGORY_GREEN "RB205_props_keycards_doors_green"
#define EDITOR_SUBCATEGORY_BLUE "RB205_props_keycards_doors_blue"
#define EDITOR_SUBCATEGORY_PRISON "RB205_props_keycards_doors_prison"

#define USER_ACTION_OPEN \
	displayName = "Open Door"; \
	displayNameDefault = "<img image='\3AS\3AS_Terrain_Universal\icons\open_door_ca.paa' size='2.5' />"; \
	onlyForPlayer = 0; \
	priority = 0.4; \
	radius = 3;

#define USER_ACTION_CLOSE \
	displayName = "Close Door"; \
	priority = 0.2;

#define USER_ACTION_LOCKED \
	displayName = "(Keycard required)"; \
	displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\Obsolete\ui_action_cancel_ca.paa' size='2.5' />"; \
	statement = "";