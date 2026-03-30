class ls_prop_hallway_door;

class RB205_keycard_door_red_ls_prop_hallway_door: ls_prop_hallway_door {
    editorCategory = EDITOR_CATEGORY;
    editorSubcategory = EDITOR_SUBCATEGORY_RED;
    class UserActions {
        class OpenDoor {
            USER_ACTION_OPEN
            condition = "(('RB205_keycard_red' in items player || 'RB205_tseries_head_red' in items player || 'RB205_keycard_master' in items player) && (this animationSourcePhase 'door_open' == 0))";
            position = "door_pos";
            statement = "this animateSource ['door_open', 1]; [this, 'ls_door1_open'] call ls_common_fnc_say3D";
        };
        class CloseDoor: OpenDoor {
            USER_ACTION_CLOSE
            condition = "(('RB205_keycard_red' in items player || 'RB205_tseries_head_red' in items player || 'RB205_keycard_master' in items player) && (this animationSourcePhase 'door_open' == 1))";
            statement = "this animateSource ['door_open', 0]; [this, 'ls_door1_close'] call ls_common_fnc_say3D";
        };
        class DoorLocked: OpenDoor {
            USER_ACTION_LOCKED
            condition = "(!('RB205_keycard_red' in items player || 'RB205_tseries_head_red' in items player || 'RB205_keycard_master' in items player) && (this animationSourcePhase 'door_open' == 0))";
        };
    };
};
class RB205_keycard_door_orange_ls_prop_hallway_door: ls_prop_hallway_door {
    editorCategory = EDITOR_CATEGORY;
    editorSubcategory = EDITOR_SUBCATEGORY_ORANGE;
    class UserActions {
        class OpenDoor {
            USER_ACTION_OPEN
            condition = "(('RB205_keycard_orange' in items player || 'RB205_tseries_head_orange' in items player || 'RB205_keycard_master' in items player) && (this animationSourcePhase 'door_open' == 0))";
            position = "door_pos";
            statement = "this animateSource ['door_open', 1]; [this, 'ls_door1_open'] call ls_common_fnc_say3D";
        };
        class CloseDoor: OpenDoor {
            USER_ACTION_CLOSE
            condition = "(('RB205_keycard_orange' in items player || 'RB205_tseries_head_orange' in items player || 'RB205_keycard_master' in items player) && (this animationSourcePhase 'door_open' == 1))";
            statement = "this animateSource ['door_open', 0]; [this, 'ls_door1_close'] call ls_common_fnc_say3D";
        };
        class DoorLocked: OpenDoor {
            USER_ACTION_LOCKED
            condition = "(!('RB205_keycard_orange' in items player || 'RB205_tseries_head_orange' in items player || 'RB205_keycard_master' in items player) && (this animationSourcePhase 'door_open' == 0))";
        };
    };
};
class RB205_keycard_door_yellow_ls_prop_hallway_door: ls_prop_hallway_door {
    editorCategory = EDITOR_CATEGORY;
    editorSubcategory = EDITOR_SUBCATEGORY_YELLOW;
    class UserActions {
        class OpenDoor {
            USER_ACTION_OPEN
            condition = "(('RB205_keycard_yellow' in items player || 'RB205_tseries_head_yellow' in items player || 'RB205_keycard_master' in items player) && (this animationSourcePhase 'door_open' == 0))";
            position = "door_pos";
            statement = "this animateSource ['door_open', 1]; [this, 'ls_door1_open'] call ls_common_fnc_say3D";
        };
        class CloseDoor: OpenDoor {
            USER_ACTION_CLOSE
            condition = "(('RB205_keycard_yellow' in items player || 'RB205_tseries_head_yellow' in items player || 'RB205_keycard_master' in items player) && (this animationSourcePhase 'door_open' == 1))";
            statement = "this animateSource ['door_open', 0]; [this, 'ls_door1_close'] call ls_common_fnc_say3D";
        };
        class DoorLocked: OpenDoor {
            USER_ACTION_LOCKED
            condition = "(!('RB205_keycard_yellow' in items player || 'RB205_tseries_head_yellow' in items player || 'RB205_keycard_master' in items player) && (this animationSourcePhase 'door_open' == 0))";
        };
    };
};
class RB205_keycard_door_green_ls_prop_hallway_door: ls_prop_hallway_door {
    editorCategory = EDITOR_CATEGORY;
    editorSubcategory = EDITOR_SUBCATEGORY_GREEN;
    class UserActions {
        class OpenDoor {
            USER_ACTION_OPEN
            condition = "(('RB205_keycard_green' in items player || 'RB205_tseries_head_green' in items player || 'RB205_keycard_master' in items player) && (this animationSourcePhase 'door_open' == 0))";
            position = "door_pos";
            statement = "this animateSource ['door_open', 1]; [this, 'ls_door1_open'] call ls_common_fnc_say3D";
        };
        class CloseDoor: OpenDoor {
            USER_ACTION_CLOSE
            condition = "(('RB205_keycard_green' in items player || 'RB205_tseries_head_green' in items player || 'RB205_keycard_master' in items player) && (this animationSourcePhase 'door_open' == 1))";
            statement = "this animateSource ['door_open', 0]; [this, 'ls_door1_close'] call ls_common_fnc_say3D";
        };
        class DoorLocked: OpenDoor {
            USER_ACTION_LOCKED
            condition = "(!('RB205_keycard_green' in items player || 'RB205_tseries_head_green' in items player || 'RB205_keycard_master' in items player) && (this animationSourcePhase 'door_open' == 0))";
        };
    };
};
class RB205_keycard_door_blue_ls_prop_hallway_door: ls_prop_hallway_door {
    editorCategory = EDITOR_CATEGORY;
    editorSubcategory = EDITOR_SUBCATEGORY_BLUE;
    class UserActions {
        class OpenDoor {
            USER_ACTION_OPEN
            condition = "(('RB205_keycard_blue' in items player || 'RB205_tseries_head' in items player || 'RB205_keycard_master' in items player) && (this animationSourcePhase 'door_open' == 0))";
            position = "door_pos";
            statement = "this animateSource ['door_open', 1]; [this, 'ls_door1_open'] call ls_common_fnc_say3D";
        };
        class CloseDoor: OpenDoor {
            USER_ACTION_CLOSE
            condition = "(('RB205_keycard_blue' in items player || 'RB205_tseries_head' in items player || 'RB205_keycard_master' in items player) && (this animationSourcePhase 'door_open' == 1))";
            statement = "this animateSource ['door_open', 0]; [this, 'ls_door1_close'] call ls_common_fnc_say3D";
        };
        class DoorLocked: OpenDoor {
            USER_ACTION_LOCKED
            condition = "(!('RB205_keycard_blue' in items player || 'RB205_tseries_head' in items player || 'RB205_keycard_master' in items player) && (this animationSourcePhase 'door_open' == 0))";
        };
    };
};