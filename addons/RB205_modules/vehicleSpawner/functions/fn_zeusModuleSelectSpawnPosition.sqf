
params ["_spawnerObjekt"];

private _display = findDisplay 312;

if (isNull _display) exitWith {["Du bist nicht im Zeus"] call zen_common_fnc_showMessage;};

_display setVariable ["RB205_Module_spawnerObjekt", _spawnerObjekt];

["Wähle jetzt die Spawnfläche aus."] call zen_common_fnc_showMessage;

private _eh = _display displayAddEventHandler [
    "MouseButtonDown",
    {
        params ["_display", "_button"];

        if (_button != 0) exitWith {};

        curatorMouseOver params [
            "_type",
            "_entity"
        ];

        if (_type != "OBJECT") exitWith {["Es wurde kein Objekt ausgewählt"] call zen_common_fnc_showMessage;};
        if (isNull _entity) exitWith {};

        private _spawnerObjekt = _display getVariable [
            "RB205_Module_spawnerObjekt",
            objNull
        ];

        private _spawnPad = _entity;
        hint str _spawnPad;
        private _eh = _display getVariable [
            "RB205_Module_ZeusOverlayEventHandlerID",
            -1
        ];

        if (_eh != -1) then {
            _display displayRemoveEventHandler [
                "MouseButtonDown",
                _eh
            ];
        };
        _display setVariable [
            "RB205_Module_ZeusOverlayEventHandlerID",
            nil
        ];
        private _count = missionNamespace getVariable ["VehicleSpawnerCount",1];
        missionNamespace setVariable ["VehicleSpawnerCount",_count,true];
        _count = format["RB205_VehicleSpawner_%1", _count];
        _spawnPad setVehicleVarName _count;
        _spawnerObjekt setVariable ["RB205_VehicleSpawnerVariableName", _count];
//        uiNamespace setVariable ["RB205_VehicleSpawnerVariableName", _count];
        uiNamespace setVariable ["RB205_VehicleSpawnerObject", _spawnerObjekt];
        createDialog "RB205_vehicleSelctorDialog";
    }
];

_display setVariable [
    "RB205_Module_ZeusOverlayEventHandlerID",
    _eh
];
