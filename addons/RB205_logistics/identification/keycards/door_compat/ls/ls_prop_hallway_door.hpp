class ls_prop_hallway_door;

class RB205_keycard_door_red_ls_prop_hallway_door: ls_prop_hallway_door {
    editorCategory = EDITOR_CATEGORY;
    editorSubcategory = EDITOR_SUBCATEGORY_RED;
    class UserActions {
        class OpenDoor {
            USER_ACTION_OPEN
            condition = "(('RB205_keycard_red' in items player || 'RB205_tseries_head_red' in items player || 'RB205_keycard_master' in items player) && [this, 1, true] call ls_common_fnc_doorCondition)";
            position = "door_1_trigger";
            statement = "[this, 1, 1] call ls_common_fnc_doorStatement";
        };
        class CloseDoor: OpenDoor {
            USER_ACTION_CLOSE
            condition = "(('RB205_keycard_red' in items player || 'RB205_tseries_head_red' in items player || 'RB205_keycard_master' in items player) && [this, 1, false] call ls_common_fnc_doorCondition)";
            statement = "[this, 1, 0] call ls_common_fnc_doorStatement";
        };
        class DoorLocked: OpenDoor {
            USER_ACTION_LOCKED
            condition = "(!('RB205_keycard_red' in items player || 'RB205_tseries_head_red' in items player || 'RB205_keycard_master' in items player) && [this, 1, true] call ls_common_fnc_doorCondition)";
        };
    };
};
class RB205_keycard_door_orange_ls_prop_hallway_door: ls_prop_hallway_door {
    editorCategory = EDITOR_CATEGORY;
    editorSubcategory = EDITOR_SUBCATEGORY_ORANGE;
    class UserActions {
        class OpenDoor {
            USER_ACTION_OPEN
            condition = "(('RB205_keycard_orange' in items player || 'RB205_tseries_head_orange' in items player || 'RB205_keycard_master' in items player) && [this, 1, true] call ls_common_fnc_doorCondition)";
            position = "door_1_trigger";
            statement = "[this, 1, 1] call ls_common_fnc_doorStatement";
        };
        class CloseDoor: OpenDoor {
            USER_ACTION_CLOSE
            condition = "(('RB205_keycard_orange' in items player || 'RB205_tseries_head_orange' in items player || 'RB205_keycard_master' in items player) && [this, 1, false] call ls_common_fnc_doorCondition)";
            statement = "[this, 1, 0] call ls_common_fnc_doorStatement";
        };
        class DoorLocked: OpenDoor {
            USER_ACTION_LOCKED
            condition = "(!('RB205_keycard_orange' in items player || 'RB205_tseries_head_orange' in items player || 'RB205_keycard_master' in items player) && [this, 1, true] call ls_common_fnc_doorCondition)";
        };
    };
};
class RB205_keycard_door_yellow_ls_prop_hallway_door: ls_prop_hallway_door {
    editorCategory = EDITOR_CATEGORY;
    editorSubcategory = EDITOR_SUBCATEGORY_YELLOW;
    class UserActions {
        class OpenDoor {
            USER_ACTION_OPEN
            condition = "(('RB205_keycard_yellow' in items player || 'RB205_tseries_head_yellow' in items player || 'RB205_keycard_master' in items player) && [this, 1, true] call ls_common_fnc_doorCondition)";
            position = "door_1_trigger";
            statement = "[this, 1, 1] call ls_common_fnc_doorStatement";
        };
        class CloseDoor: OpenDoor {
            USER_ACTION_CLOSE
            condition = "(('RB205_keycard_yellow' in items player || 'RB205_tseries_head_yellow' in items player || 'RB205_keycard_master' in items player) && [this, 1, false] call ls_common_fnc_doorCondition)";
            statement = "[this, 1, 0] call ls_common_fnc_doorStatement";
        };
        class DoorLocked: OpenDoor {
            USER_ACTION_LOCKED
            condition = "(!('RB205_keycard_yellow' in items player || 'RB205_tseries_head_yellow' in items player || 'RB205_keycard_master' in items player) && [this, 1, true] call ls_common_fnc_doorCondition)";
        };
    };
};
class RB205_keycard_door_green_ls_prop_hallway_door: ls_prop_hallway_door {
    editorCategory = EDITOR_CATEGORY;
    editorSubcategory = EDITOR_SUBCATEGORY_GREEN;
    class UserActions {
        class OpenDoor {
            USER_ACTION_OPEN
            condition = "(('RB205_keycard_green' in items player || 'RB205_tseries_head_green' in items player || 'RB205_keycard_master' in items player) && [this, 1, true] call ls_common_fnc_doorCondition)";
            position = "door_1_trigger";
            statement = "[this, 1, 1] call ls_common_fnc_doorStatement";
        };
        class CloseDoor: OpenDoor {
            USER_ACTION_CLOSE
            condition = "(('RB205_keycard_green' in items player || 'RB205_tseries_head_green' in items player || 'RB205_keycard_master' in items player) && [this, 1, false] call ls_common_fnc_doorCondition)";
            statement = "[this, 1, 0] call ls_common_fnc_doorStatement";
        };
        class DoorLocked: OpenDoor {
            USER_ACTION_LOCKED
            condition = "(!('RB205_keycard_green' in items player || 'RB205_tseries_head_green' in items player || 'RB205_keycard_master' in items player) && [this, 1, true] call ls_common_fnc_doorCondition)";
        };
    };
};
class RB205_keycard_door_blue_ls_prop_hallway_door: ls_prop_hallway_door {
    editorCategory = EDITOR_CATEGORY;
    editorSubcategory = EDITOR_SUBCATEGORY_BLUE;
    class UserActions {
        class OpenDoor {
            USER_ACTION_OPEN
            condition = "(('RB205_keycard_blue' in items player || 'RB205_tseries_head' in items player || 'RB205_keycard_master' in items player) && [this, 1, true] call ls_common_fnc_doorCondition)";
            position = "door_1_trigger";
            statement = "[this, 1, 1] call ls_common_fnc_doorStatement";
        };
        class CloseDoor: OpenDoor {
            USER_ACTION_CLOSE
            condition = "(('RB205_keycard_blue' in items player || 'RB205_tseries_head' in items player || 'RB205_keycard_master' in items player) && [this, 1, false] call ls_common_fnc_doorCondition)";
            statement = "[this, 1, 0] call ls_common_fnc_doorStatement";
        };
        class DoorLocked: OpenDoor {
            USER_ACTION_LOCKED
            condition = "(!('RB205_keycard_blue' in items player || 'RB205_tseries_head' in items player || 'RB205_keycard_master' in items player) && [this, 1, true] call ls_common_fnc_doorCondition)";
        };
    };
};