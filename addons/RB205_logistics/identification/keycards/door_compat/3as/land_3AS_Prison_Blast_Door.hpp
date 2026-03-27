class land_3AS_Prison_Blast_Door;

class RB205_keycard_door_prison_land_3AS_Prison_Blast_Door: land_3AS_Prison_Blast_Door {
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
    };
};