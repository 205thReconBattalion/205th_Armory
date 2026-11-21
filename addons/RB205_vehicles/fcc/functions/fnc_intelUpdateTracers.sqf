/*
 * Bewegt die Schuss-Marker jeden Frame weiter und löscht abgelaufene.
 * Ein gemeinsamer Handler statt einem eigenen pro Schuss.
 */

#define TRACER_SPEED 450

if (RB205_fcc_intelTracers isEqualTo []) exitWith {};

private _step = TRACER_SPEED * diag_deltaTime;

RB205_fcc_intelTracers = RB205_fcc_intelTracers select {
	_x params ["_marker", "_direction", "_end"];
	private _keep = time < _end;
	if (_keep) then {
		_marker setMarkerPosLocal ((getMarkerPos _marker) vectorAdd (_direction vectorMultiply _step));
	} else {
		deleteMarkerLocal _marker;
	};
	_keep
};
