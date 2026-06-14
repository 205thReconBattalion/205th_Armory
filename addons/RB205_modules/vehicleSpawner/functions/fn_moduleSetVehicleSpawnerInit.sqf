params ["_logic", "_units", "_activated"];

if (!_activated) exitWith {};

_spawnpad = _logic getVariable ["RB205_VehicleSpawnerVariableName",nil];
_landingPad = missionNamespace getVariable [_spawnpad,objNull];
{
    if (_logic getVariable "RB205_UnarmoredVehicleBool") then {
        _x addAction [
            "Ungepanzerte Fahrzeuge",
            {
                params ["_target", "_caller", "_actionId", "_arguments"];
                private _spawnpad = _arguments select 0;
                ["vehicles",_spawnpad] call RB205_spawnerDialog_fnc_openDialog;
            },
            [_spawnpad],21,true,false,"","",5
        ];
    };
    
    if (_logic getVariable "RB205_ArmoredVehicleBool") then {
        _x addAction [
            "Gepanzerte Fahrzeuge",
            {
                params ["_target", "_caller", "_actionId", "_arguments"];
                private _spawnpad = _arguments select 0;
                ["vehiclesArmored",_spawnpad] call RB205_spawnerDialog_fnc_openDialog;
            },
            [_spawnpad],20,true,false,"","",5
        ];
    };
    if (_logic getVariable "RB205_AirTransportVehicleBool") then {
        _x addAction [
            "Lufttransport",
            {
                params ["_target", "_caller", "_actionId", "_arguments"];
                private _spawnpad = _arguments select 0;
                ["airTransport",_spawnpad] call RB205_spawnerDialog_fnc_openDialog;
            },
            [_spawnpad],19,true,false,"","",5
        ];
    };
    if (_logic getVariable "RB205_AirFighterVehicleBool") then {
        _x addAction [
            "Luftkampf",
            {
                params ["_target", "_caller", "_actionId", "_arguments"];
                private _spawnpad = _arguments select 0;
                ["airCombat",_spawnpad] call RB205_spawnerDialog_fnc_openDialog;
            },
            [_spawnpad],18,true,false,"","",5
        ];
    };
    if (_logic getVariable "RB205_NavalVehicleBool") then {
        _x addAction [
            "Marine",
            {
                params ["_target", "_caller", "_actionId", "_arguments"];
                private _spawnpad = _arguments select 0;
                ["naval",_spawnpad] call RB205_spawnerDialog_fnc_openDialog;
            },
            [_spawnpad],17,true,false,"","",5
        ];
    };
    _x addAction ["<t color='#6a0f0f'>Fahrzeug einlagern</t>",
        {
            params ["_target", "_caller", "_actionId", "_arguments"];
            private _landingPad = _arguments select 0;
            _allVehiclesInSpawnArea = nearestObjects [_landingPad, ["Land", "Air", "Ship"], 5];
            if ((count _allVehiclesInSpawnArea) >= 1) then {
                
                deleteVehicle (_allVehiclesInSpawnArea select 0);
            };
            
        },[_landingPad], 16, false,	true, "", "", 5
    ];
} forEach _units;