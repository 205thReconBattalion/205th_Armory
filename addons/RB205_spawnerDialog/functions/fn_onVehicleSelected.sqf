params ["_control", "_lbCurSel", "_lbSelection"];

private _ctrlDisplay = findDisplay 205500;
private _ctrlVehicleInfoBox = _ctrlDisplay displayCtrl 205505;


private _fahrzeugKlassenName = _control lnbData [_lbCurSel, 0];
private _fahrzeugInfoName = _control lnbData [_lbCurSel, 1];

private _maxSpeed = str getNumber (configFile >> 'CfgVehicles' >> _fahrzeugKlassenName >> 'maxSpeed');
private _aceCargo = if(getNumber(configFile >> 'CfgVehicles' >> _fahrzeugKlassenName >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> _fahrzeugKlassenName >> 'ace_cargo_space')} else {str 0};
private _fahrzeugInfoText = format ["$STR_Hint_%1", _fahrzeugInfoName];

_fahrzeugInfoText = _fahrzeugInfoText call BIS_fnc_localize;
_fahrzeugInfoText = _fahrzeugInfoText regexReplace ["%11", "%1"];
_fahrzeugInfoText = _fahrzeugInfoText regexReplace ["%12", "%2"];

_fahrzeugInfoText = format [_fahrzeugInfoText, _maxSpeed, _aceCargo];

_ctrlVehicleInfoBox ctrlSetStructuredText parseText _fahrzeugInfoText;

private _height = ctrlTextHeight _ctrlVehicleInfoBox;

_ctrlVehicleInfoBox ctrlSetPosition [
    0,
    0,
    ctrlPosition _ctrlVehicleInfoBox # 2,
    _height
];
_ctrlVehicleInfoBox ctrlCommit 0;



//hint format ["%1 , %2", _fahrzeugInfoName, _fahrzeugInfoText];