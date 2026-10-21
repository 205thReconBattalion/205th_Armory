/*
 * Persistent jump indicator for RB205_vehicles. Called locally every 0.1 s.
 * Shows the synchronized cabin light mode to all living occupants.
 * No sounds are played here, so boarding and JIP are silent.
 */

if (!hasInterface) exitWith {};
disableSerialization;

private _mode = 0;
if (!isNull player && {alive player}) then {
    private _vehicle = objectParent player;
    if (!isNull _vehicle && {alive _vehicle}) then {
        _mode = _vehicle getVariable ["RB205_vehicles_cabinLightMode", 0];
    };
};

private _display = uiNamespace getVariable ["RB205_vehicles_cabinLightIndicatorDisplay", displayNull];
private _layer = "RB205_vehicles_cabinLightIndicator" call BIS_fnc_rscLayer;

// Remove the complete resource, including its background, when inactive.
if !(_mode in [1, 2]) exitWith {
    if (!isNull _display) then {
        _layer cutText ["", "PLAIN"];
        uiNamespace setVariable ["RB205_vehicles_cabinLightIndicatorDisplay", displayNull];
    };
};

if (isNull _display) then {
    _layer cutRsc ["RB205_vehicles_CabinLightIndicator", "PLAIN"];
    _display = uiNamespace getVariable ["RB205_vehicles_cabinLightIndicatorDisplay", displayNull];
};
if (isNull _display) exitWith {};

private _status = _display displayCtrl 20501;
if (_mode == 1) then {
    _status ctrlSetText "PREPARE TO JUMP";
    _status ctrlSetTextColor [1, 0.15, 0.15, 1];
} else {
    _status ctrlSetText "GO";
    _status ctrlSetTextColor [0.15, 1, 0.15, 1];
};

nil;
