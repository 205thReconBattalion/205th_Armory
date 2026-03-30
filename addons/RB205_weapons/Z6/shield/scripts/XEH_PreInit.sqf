#include "\a3\ui_f\hpp\defineDIKCodes.inc"


shieldDetach = {
    params ["_player"];
    _TAS_Shield = _player getVariable ["RB205_TAS_Personal_Shield_Object", objNull];
    //Play Shield Stop Sound
    if (!isNull _player && alive _player) then {
        ["3AS\3AS_Main\functions\Throwables\Sounds\disable.ogg", _player, false, getPos _player, 5, 0.7, 25] remoteExec ["playSound3D", 0];
    };
        if (!isNull _TAS_Shield) then {
        detach _TAS_Shield;
        deleteVehicle _TAS_Shield;
        _player setVariable ["RB205_TAS_Personal_Shield_Object", nil, true];
    };
};

if (!hasInterface) exitWith {};


Z6_Cast_Shield_fnc_KeyPressed = {
    params ["_player"];

    if (!(isNull (_player getVariable ["RB205_TAS_Personal_Shield_Object", objNull]))) then {
        [_player] call z6ShieldInterupt;
    } else {
        if (_player getVariable ["RB205_Z6_Cast_Shield_Ready", false]) then {
            [_player] spawn {
                params ["_player"];
                private _display = uiNamespace getVariable ["progress_bar_shield", displayNull];
                private _progressBar = _display displayCtrl 1521;
            
                if (isNull _progressBar) then {
                    205 cutRsc ["progress_bar_shield", "PLAIN"];
                    uiSleep 0.1;
                    //waitUntil{!isNull findDisplay 205};
                    _display = uiNamespace getVariable ["progress_bar_shield", displayNull];
                    _progressBar = _display displayCtrl 1521;
                };
                if (!isNull _progressBar && (_player getVariable ["RB205_Z6_Cast_Shield_Ready", false])) then {
                    [_player] spawn shieldActivate;
                };
            };
        };
    };
};


shieldActivate = {
    params ["_player"];
    _player setVariable ["RB205_Z6_Cast_Shield_Ready", false, true];
    private _currentEnergy = _player getVariable ["RB205_Z6_Cast_Shield_Energy", 0];
    [_player] execVM "RB205_weapons\Z6\shield\scripts\createShield.sqf";
    while {_currentEnergy > 0 && alive _player && !(_player getVariable ["RB205_Z6_interupted", false])} do {
        _currentEnergy = _currentEnergy - 1; 
        _player setVariable ["RB205_Z6_Cast_Shield_Energy", _currentEnergy, true];
        
        [_currentEnergy, format ["Z6 Shield Active: %1", round _currentEnergy]] call updateProgressBar;
        //Wie lange hält 1/100 pro Zeiteinheit
        //hint format ["%1", (_player getVariable ["RB205_Z6_interupted", false])];
        uiSleep (parseNumber RB205_Z6_SHIELD_LIFETIME / 100);
    };
    _player setVariable ["RB205_Z6_Cast_Shield_Energy", 0, true];
    
    if (_player getVariable ["RB205_Z6_interupted", false]) then {
        [true,_player] spawn checkIfInterupted;
    } else {
        [false,_player] spawn checkIfInterupted;
    };
};

checkIfInterupted = {
    params ["_interupted","_player"];
    if (_interupted) then {
        _player setVariable ["RB205_Z6_interupted", false, true];
    } else {
        [_player] spawn shieldDeactivate;
    };
};
z6ShieldInterupt = {
    params ["_player"];
    _player setVariable ["RB205_Z6_interupted", true, true];
    [false,_player] call checkIfInterupted;
};

shieldDeactivate = {
    params ["_player"];

    _player setVariable ["RB205_Z6_Cast_Shield_Ready", false, true];
    _player setVariable ["RB205_Z6_Cast_Shield_Energy", 0, true];
    [_player] call shieldDetach;
    [_player] spawn charging;
};



updateProgressBar = {
    params ["_newValue", "_newText"];
    
    private _display = uiNamespace getVariable ["progress_bar_shield", displayNull];
    private _progressBar = _display displayCtrl 1521;
    private _progressBarText = _display displayCtrl 1522;
    if (!isNull _progressBar) then {
        _progressBar progressSetPosition ((_newValue / 100) max 0);
    };
    
    if (!isNull _progressBarText) then {
        _progressBarText ctrlSetText _newText;
    };
};

charging = {
    params ["_player"];
    private _display = uiNamespace getVariable ["progress_bar_shield", displayNull];
    private _progressBar = _display displayCtrl 1521;
    [0, "Charging 0%"] call updateProgressBar;
    ["Red"] spawn z6ShieldProgressBarChangeColor;
    while {!(_player getVariable ["RB205_Z6_Cast_Shield_Ready", false])} do {
        private _currentEnergy = _player getVariable ["RB205_Z6_Cast_Shield_Energy", 0];
        
        if (_currentEnergy >= 100) exitWith {
            _player setVariable ["RB205_Z6_Cast_Shield_Ready", true, true];
            [_player getVariable ["RB205_Z6_Cast_Shield_Energy", 0], "Shield Ready"] call updateProgressBar;
            _display = uiNamespace getVariable ["progress_bar_shield", displayNull];
            if (!isNull _display) then {
                _progressBar = _display displayCtrl 1521;
                ["Blue"] spawn z6ShieldProgressBarChangeColor;
            }
        };
        
        _currentEnergy = _currentEnergy + 1;
        _player setVariable ["RB205_Z6_Cast_Shield_Energy", _currentEnergy, true];
        //Zeit die das Schild lädt 1/100 pro Zeiteinheit
        uiSleep (parseNumber RB205_Z6_SHIELD_RECHARGE_TIME / 100);
        [_currentEnergy, format ["Charging %1%%", round _currentEnergy]] call updateProgressBar;
    };
    [] spawn z6ShieldHideDisplayIfFullyCharged
};

z6ShieldHideDisplayIfFullyCharged = {
        if (RB205_Z6_SHIELD_HIDE_SHIELD_IF_FULLY_CHARGED) then {
        uiSleep (parseNumber RB205_Z6_SHIELD_FADE_AFTER);
        if((player getVariable ["RB205_Z6_Cast_Shield_Ready", false])) then {
            call z6ShieldDisplayHide;
        };
    };
};



z6ShieldDisplayShow = {
    205 cutRsc ["progress_bar_shield", "PLAIN"];
	private _display = uiNamespace getVariable ["progress_bar_shield", displayNull];
    private _progressBar = _display displayCtrl 1521;
	if(_player getVariable ["RB205_Z6_Cast_Shield_Ready", false])  then
	{
        ["Blue"] spawn z6ShieldProgressBarChangeColor;
		[100, "Shield Ready"] call updateProgressBar;
	} else {
        ["Red"] spawn z6ShieldProgressBarChangeColor;
		[_player getVariable ["RB205_Z6_Cast_Shield_Energy", 0], format ["Charging %1%%", _player getVariable ["RB205_Z6_Cast_Shield_Energy", 0]]] call updateProgressBar;
	};
};

z6ShieldDisplayHide = {
    205 cutText ["", "PLAIN"];
};

z6ShieldProgressBarChangeColor = {
    params ["_color"];
    private _display = uiNamespace getVariable ["progress_bar_shield", displayNull];
    private _progressBar = _display displayCtrl 1521;
    if (!isNull _progressBar) then {
        switch (_color) do {
            case "Blue": {_color = [0.3, 0.6, 0.9, 0.8]};
            case "Red": {_color = [0.5019, 0, 0.01, 0.8]};
            default {};
        };
        _progressBar ctrlSetTextColor _color;
    };
};

["205th Recon Battalion", "Z6CastShield", ["Activate Z6 Shield", "Aktiviert/Deaktiviert den Z6 Schild"], {
    private _player = call CBA_fnc_currentUnit;

    if (_player getVariable ["205_Z6_Cast_Shield_KeyPressed", false]) exitWith {};
    
    _player setVariable ["205_Z6_Cast_Shield_KeyPressed", true];
    
    [{
        params ["_player"];
        _player setVariable ["205_Z6_Cast_Shield_KeyPressed", false];
    }, [_player], 1] call CBA_fnc_waitAndExecute;
    if (currentWeapon player == "RB205_Z6" && (isNull objectParent player)) then {
        [_player] call Z6_Cast_Shield_fnc_KeyPressed;
    };
    
    
}, {}, [DIK_F, [false, false, true]]] call cba_fnc_addKeybind;

