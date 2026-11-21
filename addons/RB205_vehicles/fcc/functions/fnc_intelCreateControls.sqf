/*
 * Legt Tooltip und Checkbox auf der Karte (Display 12) an. Wird beim Öffnen der Karte aufgerufen,
 * die Controls werden nur einmal pro Karten-Display erzeugt.
 */

disableSerialization;

private _display = findDisplay 12;
if (isNull _display) exitWith {};
if !(isNull ((uiNamespace getVariable ["RB205_fcc_intelTooltip", [controlNull]]) select 0)) exitWith {};

//Tooltip mit Infanterie- und Fahrzeugübersicht der Gruppe

private _tooltip = _display ctrlCreate ["RscControlsGroupNoScrollbars", -1];
_tooltip ctrlSetPosition [0, 0, 0.4625, 0.34];
_tooltip ctrlCommit 0;

private _fnc_create = {
	params ["_class", "_position", "_color", ["_text", ""]];
	private _control = _display ctrlCreate [_class, -1, _tooltip];
	_control ctrlSetPosition _position;
	_control ctrlSetBackgroundColor _color;
	if (_text != "") then {
		_control ctrlSetStructuredText parseText format ["<t font='PuristaSemibold' valign='middle' size='1' shadow='0' align='center'>%1</t>", _text];
	};
	_control ctrlCommit 0;
	_control
};

private _infantryHeader = ["RscStructuredText", [0.0125, 0.02, 0.4375, 0.04], [0.15, 0.15, 0.15, 0.75], "Infantry Intel"] call _fnc_create;
private _infantryBody = ["RscStructuredText", [0.0125, 0.06, 0.4375, 0.1], [0.05, 0.05, 0.05, 0.75]] call _fnc_create;
private _vehicleHeader = ["RscStructuredText", [0.0125, 0.18, 0.4375, 0.04], [0.15, 0.15, 0.15, 0.75], "Vehicle Intel"] call _fnc_create;
private _vehicleBody = ["RscStructuredText", [0.0125, 0.22, 0.4375, 0.1], [0.05, 0.05, 0.05, 0.75]] call _fnc_create;

_tooltip ctrlShow false;
uiNamespace setVariable ["RB205_fcc_intelTooltip", [_tooltip, _infantryHeader, _infantryBody, _vehicleHeader, _vehicleBody]];

//Tooltip folgt der Maus
(_display displayCtrl 51) ctrlAddEventHandler ["MouseMoving", {
	private _tooltip = (uiNamespace getVariable ["RB205_fcc_intelTooltip", [controlNull]]) select 0;
	if (isNull _tooltip || {!ctrlShown _tooltip}) exitWith {};
	getMousePosition params ["_mouseX", "_mouseY"];
	_tooltip ctrlSetPosition [_mouseX, _mouseY + 0.05];
	_tooltip ctrlCommit 0;
}];

//Checkbox zum Ein-/Ausblenden der Intel-Symbole

private _checkbox = _display ctrlCreate ["RscCheckBox", -1];
_checkbox ctrlSetPosition [0.965937 * safeZoneW + safeZoneX, 0.948 * safeZoneH + safeZoneY, 0.018125 * safeZoneW, 0.0336666 * safeZoneH];
_checkbox ctrlSetBackgroundColor [0.18, 0.72, 1, 0.6];
_checkbox ctrlSetTooltip "FCC map intel: ON";
_checkbox cbSetChecked RB205_fcc_intelShowIcons;
_checkbox ctrlShow RB205_fcc_intelActive;
_checkbox ctrlCommit 0;
_checkbox ctrlAddEventHandler ["CheckedChanged", {
	params ["_control", "_checked"];
	RB205_fcc_intelShowIcons = _checked == 1;
	_control ctrlSetTooltip (["FCC map intel: OFF", "FCC map intel: ON"] select RB205_fcc_intelShowIcons);
	if (RB205_fcc_intelActive) then {
		setGroupIconsVisible [RB205_fcc_intelShowIcons, false];
		setGroupIconsSelectable RB205_fcc_intelShowIcons;
		{_x setMarkerAlphaLocal ([0, 1] select RB205_fcc_intelShowIcons)} forEach RB205_fcc_intelRadarMarkers;
	};
	if (!RB205_fcc_intelShowIcons) then {
		RB205_fcc_intelHoverGroups = [];
		call RB205_fcc_fnc_intelHideTooltip;
	};
}];
uiNamespace setVariable ["RB205_fcc_intelCheckbox", _checkbox];
