/*
Diese Funktion ändert die Anzeige im Zeus Dialog jenachdem welches Fahrzeug im Dropdown ausgewählt wurde!
*/ 

params ["_control", "_lbCurSel", "_lbSelection"];

private _ctrlDisplay = findDisplay 205520;
private _ctrlComboBox = findDisplay 205521;
private _ctrlText = displayCtrl 205524;

_className = _control lbData _lbCurSel;

_hashMap = missionNamespace getVariable ["RB205_VehicleMaxSpawns", createHashMap];
private _varName = (toUpper _className) + "_VehicleMaxSpawns";
_selVehSpawnCount = _hashMap get _varName;

if (isNil {_hashMap get _varName;}) then {
    _ctrlText ctrlSetText "-1";
} else {
    _ctrlText ctrlSetText format ["%1", _selVehSpawnCount];
};


