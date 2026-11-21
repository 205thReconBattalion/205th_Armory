/*
 * Öffnet das Bestätigungsfenster (Holo-Stil) zum Errichten oder Abbauen. Nur auf Clients.
 *
 * Arguments:
 * 0: FCC <OBJECT>
 * 1: Modus "deploy" oder "undeploy" <STRING>
 *
 * Example:
 * [_fcc, "deploy"] call RB205_fcc_fnc_openConfirmDialog;
 */

params [["_fcc", objNull, [objNull]], ["_mode", "deploy", [""]]];

if (!hasInterface || {isNull _fcc}) exitWith {};
disableSerialization;

if (!createDialog "RB205_fcc_confirmDialog") exitWith {};
private _display = uiNamespace getVariable ["RB205_fcc_confirmDisplay", displayNull];
if (isNull _display) exitWith {};

uiNamespace setVariable ["RB205_fcc_confirmData", [_fcc, _mode]];

private _texts = if (_mode == "deploy") then {
	[
		"Establish forward command?",
		"Anchoring the command post opens a secure uplink to Republic High Command. Reinforcements, supply and medical droids will be routed to this position.",
		"ESTABLISH"
	]
} else {
	[
		"Break down forward command?",
		"The uplink will be severed and reinforcements can no longer deploy here. All supply crates assigned to this post, including unloaded ones, will be recalled.",
		"BREAK DOWN"
	]
};
_texts params ["_title", "_body", "_button"];

(_display displayCtrl 205801) ctrlSetText "FORWARD COMMAND CENTER // TACTICAL UPLINK";
(_display displayCtrl 205803) ctrlSetText _button;

//Text verkleinern, bis er ins Feld passt (je nach Auflösung und Interface-Größe)
private _bodyControl = _display displayCtrl 205802;
private _maxHeight = (ctrlPosition _bodyControl) select 3;
private _scale = 1;
while {
	_bodyControl ctrlSetStructuredText parseText format [
		"<t size='%3' color='#8FDCFF'>%1</t><br/><t size='%4'>&#160;</t><br/><t size='%4'>%2</t>",
		_title,
		_body,
		_scale * 1.15,
		_scale
	];
	ctrlTextHeight _bodyControl > _maxHeight && {_scale > 0.7}
} do {
	_scale = _scale - 0.05;
};
