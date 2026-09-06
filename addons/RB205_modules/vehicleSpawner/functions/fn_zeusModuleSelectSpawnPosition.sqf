
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
        _count = _count + 1;
        missionNamespace setVariable ["VehicleSpawnerCount",_count,true];
        _spawnerVarName = format["RB205_VehicleSpawner_%1", _count];
        _spawnPad setVehicleVarName _spawnerVarName;
        missionNamespace setVariable [_spawnerVarName, _spawnPad, true];
        _spawnerObjekt setVariable ["RB205_VehicleSpawnerVariableName", _spawnerVarName, true];
        uiNamespace setVariable ["RB205_VehicleSpawnerObject", _spawnerObjekt];
        createDialog "RB205_vehicleSelctorDialog";
        private _ctrlDisplay = findDisplay 205550;
        private _ctrlCheckboxUnarmored = _ctrlDisplay displayCtrl 205551;
        private _ctrlCheckboxArmored = _ctrlDisplay displayCtrl 205552;
        private _ctrlCheckboxAirTransport = _ctrlDisplay displayCtrl 205553;
        private _ctrlCheckboxStarfighter = _ctrlDisplay displayCtrl 205554;
        private _ctrlCheckboxNaval = _ctrlDisplay displayCtrl 205555;
        private _ctrlCheckboxUtility = _ctrlDisplay displayCtrl 205556;
        _ctrlCheckboxUnarmored cbSetChecked (_spawnerObjekt getVariable ["RB205_UnarmoredVehicleBool", false]);
        _ctrlCheckboxArmored cbSetChecked (_spawnerObjekt getVariable ["RB205_ArmoredVehicleBool", false]);
        _ctrlCheckboxAirTransport cbSetChecked (_spawnerObjekt getVariable ["RB205_AirTransportVehicleBool", false]);
        _ctrlCheckboxStarfighter cbSetChecked (_spawnerObjekt getVariable ["RB205_AirFighterVehicleBool", false]);
        _ctrlCheckboxNaval cbSetChecked (_spawnerObjekt getVariable ["RB205_NavalVehicleBool", false]);
        _ctrlCheckboxUtility cbSetChecked (_spawnerObjekt getVariable ["RB205_UtilityVehicleBool", false]);
    }
];

_display setVariable [
    "RB205_Module_ZeusOverlayEventHandlerID",
    _eh
];
