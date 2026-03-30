class land_3AS_Prison_Corridor_Short;

class RB205_keycard_door_prison_land_3AS_Prison_Corridor_Short: land_3AS_Prison_Corridor_Short {
    editorCategory = EDITOR_CATEGORY;
    editorSubcategory = EDITOR_SUBCATEGORY_PRISON;
    class UserActions {
        class OpenDoor {
            USER_ACTION_OPEN
            condition = "(('RB205_keycard_prison' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_left') < 0.5))";
            position = "door_Action";
            statement = "[this,'open_left',1] call BIS_fnc_DoorNoHandleOpen";
        };
        class CloseDoor: OpenDoor {
            USER_ACTION_CLOSE
            condition = "(('RB205_keycard_prison' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_left') >= 0.5))";
            statement = "[this,'open_left',0] call BIS_fnc_DoorNoHandleClose";
        };
        class DoorLocked: OpenDoor {
            USER_ACTION_LOCKED
            condition = "(!('RB205_keycard_prison' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_left') < 0.5))";
        };
        
        class OpenDoor2: OpenDoor {
            condition = "(('RB205_keycard_prison' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_Right') < 0.5))";
            position = "Door_Action_Right";
            statement = "[this,'open_Right',1] call BIS_fnc_DoorNoHandleOpen";
        };
        class CloseDoor2: OpenDoor2 {
            USER_ACTION_CLOSE
            condition = "(('RB205_keycard_prison' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_Right') >= 0.5))";
            statement = "[this,'open_Right',0] call BIS_fnc_DoorNoHandleClose";
        };
        class DoorLocked2: OpenDoor2 {
            USER_ACTION_LOCKED
            condition = "(!('RB205_keycard_prison' in items player || 'RB205_keycard_master' in items player) && ((this animationPhase 'open_Right') < 0.5))";
        };
    };
};