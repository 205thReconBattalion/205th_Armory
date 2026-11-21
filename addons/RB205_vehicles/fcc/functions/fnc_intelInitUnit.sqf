/*
 * Hängt einmalig den Schuss-Handler an eine Einheit. Schüsse erscheinen als kurze Marker auf der Karte,
 * aber nur, solange das Karten-Intel aktiv und die Karte offen ist.
 *
 * Arguments:
 * 0: Einheit <OBJECT>
 */

params [["_unit", objNull, [objNull]]];

if (isNull _unit || {_unit getVariable ["RB205_fcc_intelFiredEH", false]}) exitWith {};
_unit setVariable ["RB205_fcc_intelFiredEH", true];

_unit addEventHandler ["FiredMan", {
	params ["_unit"];
	if (!RB205_fcc_intelActive || {!RB205_fcc_intelShotTracers} || {!RB205_fcc_intelShowIcons} || {!visibleMap}) exitWith {};

	//Bei Dauerfeuer höchstens 5 Marker pro Sekunde und Einheit
	if (time < (_unit getVariable ["RB205_fcc_intelNextTracer", 0])) exitWith {};
	_unit setVariable ["RB205_fcc_intelNextTracer", time + 0.2];

	private _vehicle = vehicle _unit;
	private _direction = _vehicle weaponDirection ((weaponState [_vehicle, _vehicle unitTurret _unit]) select 0);
	if (_direction isEqualTo [0, 0, 0]) then {
		_direction = _unit weaponDirection currentWeapon _unit;
	};
	_direction set [2, 0];
	_direction = vectorNormalized _direction;
	if (_direction isEqualTo [0, 0, 0]) exitWith {};

	private _marker = createMarkerLocal [format ["RB205_fcc_tracer_%1", RB205_fcc_intelTracerCount], getPosWorldVisual _unit];
	RB205_fcc_intelTracerCount = RB205_fcc_intelTracerCount + 1;
	_marker setMarkerShapeLocal "RECTANGLE";
	_marker setMarkerBrushLocal "SolidFull";
	_marker setMarkerColorLocal "ColorWhite";
	_marker setMarkerSizeLocal [1, 4];
	_marker setMarkerDirLocal ((_direction select 0) atan2 (_direction select 1));

	RB205_fcc_intelTracers pushBack [_marker, _direction, time + 1];
}];
