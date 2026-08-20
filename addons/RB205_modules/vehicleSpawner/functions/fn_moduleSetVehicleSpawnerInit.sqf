/*
Diese Funktion stellt die AddActions für die Spawner bereit
*/
params ["_logic", "_units", "_activated"];

if (!_activated) exitWith {};

_spawnpad = _logic getVariable ["RB205_VehicleSpawnerVariableName",nil];
_landingPad = missionNamespace getVariable [_spawnpad,objNull];
{
    if (_logic getVariable "RB205_UnarmoredVehicleBool") then {
        _x addAction [
            "Fahrzeug Spawner (Ungepanzert)",
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
            "Fahrzeug Spawner (Gepanzert)",
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
            "Fahrzeug Spawner (Lufttransport)",
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
            "Fahrzeug Spawner (Sternenjäger)",
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
            "Fahrzeug Spawner (Wasser)",
            {
                params ["_target", "_caller", "_actionId", "_arguments"];
                private _spawnpad = _arguments select 0;
                ["naval",_spawnpad] call RB205_spawnerDialog_fnc_openDialog;
            },
            [_spawnpad],17,true,false,"","",5
        ];
    };
    if (_logic getVariable "RB205_UtilityVehicleBool") then {
        _x addAction [
            "Fahrzeug Spawner (Stationär)",
            {
                params ["_target", "_caller", "_actionId", "_arguments"];
                private _spawnpad = _arguments select 0;
                ["utility",_spawnpad] call RB205_spawnerDialog_fnc_openDialog;
            },
            [_spawnpad],17,true,false,"","",5
        ];
    };
    
    _x addAction ["<t color='#6a0f0f'>Fahrzeug einlagern</t>",
        {
            params ["_target", "_caller", "_actionId", "_arguments"];
            private _landingPad = _arguments select 0;
            _allVehiclesInSpawnArea = nearestObjects [_landingPad, ["Land", "Air", "Ship"], 15]; //"LandVehicle" = "Land" ohne "Man"
            if ((count _allVehiclesInSpawnArea) >= 1) then {
                _vehicleClassName = typeOf (_allVehiclesInSpawnArea select 0);
                deleteVehicle (_allVehiclesInSpawnArea select 0);
                RB205_VehicleMaxSpawns = missionNamespace getVariable["RB205_VehicleMaxSpawns", createHashMap];

                if ((count RB205_VehicleMaxSpawns) >= 0) then {
                    _varNameVehicleMaxSpawns = format ["%1_VehicleMaxSpawns", toUpper _vehicleClassName];
                    _anzahlVerfuegbar = RB205_VehicleMaxSpawns getOrDefault [_varNameVehicleMaxSpawns, -1];
                    if (_anzahlVerfuegbar >= 0) then {
                        _anzahlVerfuegbar = _anzahlVerfuegbar + 1;
                        RB205_VehicleMaxSpawns set [_varNameVehicleMaxSpawns,_anzahlVerfuegbar];
                        publicVariable "RB205_VehicleMaxSpawns";
                    };
                };
            };
        },[_landingPad], 16, false,	true, "", "", 5
    ];
} forEach _units;