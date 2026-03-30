class 3AS_FOB_Door_Prop;

class RB205_keycard_door_red_3AS_FOB_Door_Prop: 3AS_FOB_Door_Prop {
    editorCategory = EDITOR_CATEGORY;
    editorSubcategory = EDITOR_SUBCATEGORY_RED;
    class UserActions {
        class OpenDoor {
            USER_ACTION_OPEN
            condition = "(('RB205_keycard_red' in items player || 'RB205_tseries_head_red' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_left') < 0.5))";
            position = "door_Action";
            statement = "[this,'open_down',1] call BIS_fnc_DoorNoHandleOpen";
        };
        class CloseDoor: OpenDoor {
            USER_ACTION_CLOSE
            condition = "(('RB205_keycard_red' in items player || 'RB205_tseries_head_red' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_left') >= 0.5))";
            statement = "[this,'open_down',0] call BIS_fnc_DoorNoHandleClose";
        };
        class DoorLocked: OpenDoor {
            USER_ACTION_LOCKED
            condition = "(!('RB205_keycard_red' in items player || 'RB205_tseries_head_red' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_left') < 0.5))";
        };
    };
};
class RB205_keycard_door_orange_3AS_FOB_Door_Prop: 3AS_FOB_Door_Prop {
    editorCategory = EDITOR_CATEGORY;
    editorSubcategory = EDITOR_SUBCATEGORY_ORANGE;
    class UserActions {
        class OpenDoor {
            USER_ACTION_OPEN
            condition = "(('RB205_keycard_orange' in items player || 'RB205_tseries_head_orange' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_left') < 0.5))";
            position = "door_Action";
            statement = "[this,'open_down',1] call BIS_fnc_DoorNoHandleOpen";
        };
        class CloseDoor: OpenDoor {
            USER_ACTION_CLOSE
            condition = "(('RB205_keycard_orange' in items player || 'RB205_tseries_head_orange' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_left') >= 0.5))";
            statement = "[this,'open_down',0] call BIS_fnc_DoorNoHandleClose";
        };
        class DoorLocked: OpenDoor {
            USER_ACTION_LOCKED
            condition = "(!('RB205_keycard_orange' in items player || 'RB205_tseries_head_orange' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_left') < 0.5))";
        };
    };
};
class RB205_keycard_door_yellow_3AS_FOB_Door_Prop: 3AS_FOB_Door_Prop {
    editorCategory = EDITOR_CATEGORY;
    editorSubcategory = EDITOR_SUBCATEGORY_YELLOW;
    class UserActions {
        class OpenDoor {
            USER_ACTION_OPEN
            condition = "(('RB205_keycard_yellow' in items player || 'RB205_tseries_head_yellow' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_left') < 0.5))";
            position = "door_Action";
            statement = "[this,'open_down',1] call BIS_fnc_DoorNoHandleOpen";
        };
        class CloseDoor: OpenDoor {
            USER_ACTION_CLOSE
            condition = "(('RB205_keycard_yellow' in items player || 'RB205_tseries_head_yellow' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_left') >= 0.5))";
            statement = "[this,'open_down',0] call BIS_fnc_DoorNoHandleClose";
        };
        class DoorLocked: OpenDoor {
            USER_ACTION_LOCKED
            condition = "(!('RB205_keycard_yellow' in items player || 'RB205_tseries_head_yellow' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_left') < 0.5))";
        };
    };
};
class RB205_keycard_door_green_3AS_FOB_Door_Prop: 3AS_FOB_Door_Prop {
    editorCategory = EDITOR_CATEGORY;
    editorSubcategory = EDITOR_SUBCATEGORY_GREEN;
    class UserActions {
        class OpenDoor {
            USER_ACTION_OPEN
            condition = "(('RB205_keycard_green' in items player || 'RB205_tseries_head_green' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_left') < 0.5))";
            position = "door_Action";
            statement = "[this,'open_down',1] call BIS_fnc_DoorNoHandleOpen";
        };
        class CloseDoor: OpenDoor {
            USER_ACTION_CLOSE
            condition = "(('RB205_keycard_green' in items player || 'RB205_tseries_head_green' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_left') >= 0.5))";
            statement = "[this,'open_down',0] call BIS_fnc_DoorNoHandleClose";
        };
        class DoorLocked: OpenDoor {
            USER_ACTION_LOCKED
            condition = "(!('RB205_keycard_green' in items player || 'RB205_tseries_head_green' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_left') < 0.5))";
        };
    };
};
class RB205_keycard_door_blue_3AS_FOB_Door_Prop: 3AS_FOB_Door_Prop {
    editorCategory = EDITOR_CATEGORY;
    editorSubcategory = EDITOR_SUBCATEGORY_BLUE;
    class UserActions {
        class OpenDoor {
            USER_ACTION_OPEN
            condition = "(('RB205_keycard_blue' in items player || 'RB205_tseries_head' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_left') < 0.5))";
            position = "door_Action";
            statement = "[this,'open_down',1] call BIS_fnc_DoorNoHandleOpen";
        };
        class CloseDoor: OpenDoor {
            USER_ACTION_CLOSE
            condition = "(('RB205_keycard_blue' in items player || 'RB205_tseries_head' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_left') >= 0.5))";
            statement = "[this,'open_down',0] call BIS_fnc_DoorNoHandleClose";
        };
        class DoorLocked: OpenDoor {
            USER_ACTION_LOCKED
            condition = "(!('RB205_keycard_blue' in items player || 'RB205_tseries_head' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_left') < 0.5))";
        };
    };
};