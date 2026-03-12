
//TODO
addMissionEventHandler ["HandleDisconnect", {
	params ["_unit", "_id", "_uid", "_name"];
	    if (!(isNull (_unit getVariable ["RB205_TAS_Personal_Shield_Object", objNull]))) then {
            [_unit] call shieldDetach;
        };
}];



if (!hasInterface) exitWith {};

// Player-Variablen initialisieren
player setVariable ["RB205_Z6_Cast_Shield_Energy", 100, true]; 
player setVariable ["RB205_Z6_Cast_Shield_Ready", true, true];

// EventHandler für Waffenwechsel
player addEventHandler ["WeaponChanged", {
    params ["_player", "_oldWeapon", "_newWeapon"];

    if (format ["%1", _newWeapon] == "RB205_Z6") then {
		[] call z6ShieldDisplayShow;
        [] spawn z6ShieldHideDisplayIfFullyCharged;
    } else {
        if (format ["%1", _oldWeapon] == "RB205_Z6") then {
			[] call z6ShieldDisplayHide;
            if (!(isNull (_player getVariable ["RB205_TAS_Personal_Shield_Object", objNull]))) then {
                [_player] call z6ShieldInterupt;
            };
        };
    };
}];

["ace_unconscious", {
    params ["_unit", "_isUnconscious"];
    if (_unit == player && _isUnconscious && (primaryWeapon player == "RB205_Z6") ) then {
        [] call z6ShieldDisplayHide;
        if (!(isNull (_unit getVariable ["RB205_TAS_Personal_Shield_Object", objNull]))) then {
            [_unit] call z6ShieldInterupt;
        } else {
            [] call z6ShieldDisplayShow;
        };
    };
}] call CBA_fnc_addEventHandler;

player addEventHandler ["Respawn", {
	params ["_unit", "_corpse"];
        if (!(isNull (_unit getVariable ["RB205_TAS_Personal_Shield_Object", objNull]))) then {
            [_unit] call z6ShieldInterupt;
        };
        _unit setVariable ["RB205_Z6_Cast_Shield_Ready", true, true];
        _unit setVariable ["RB205_Z6_Cast_Shield_Energy", 100, true]; 
        [] call z6ShieldDisplayHide;
}];
