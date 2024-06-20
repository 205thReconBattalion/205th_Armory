#include "\RB205_core\macros.hpp"


#define INVENTORY_SPACE maximumload = 1000000;

#define ACE_CARGO \
	ace_cargo_size = 1; \
	ace_cargo_canLoad = 1; \
	ace_cargo_noRename = 0; \
	ace_cargo_blockUnloadCarry = 0;

#define CARRYABLE \
	ace_dragging_canCarry = 1; \
	ace_dragging_carryPosition[] = {0, 1.2, 0}; \
	ace_dragging_carryDirection  = 0;
	
#define DRAGGABLE \
	ace_dragging_canDrag = 1; \
	ace_dragging_dragPosition[] = {0, 1.2, 0}; \
	ace_dragging_dragDirection  = 0;