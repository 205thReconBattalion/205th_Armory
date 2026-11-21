/*
 * Feldlazarett: Ein aufgebautes FCC macht den Bereich um sich herum zur ACE-Sanitätseinrichtung.
 * Läuft alle 2 s auf jedem Client.
 *
 * ACE zählt Objekte mit "ace_medical_isMedicalFacility" im Umkreis von 7,5 m um den Spieler.
 * Für einen größeren Radius werden unsichtbare Hilfsobjekte in einem Wabenraster am FCC befestigt.
 * Die Hilfsobjekte existieren nur lokal, es entsteht also kein Netzwerkverkehr.
 */

if (isNil "RB205_fcc_medicalAreas") then {
	RB205_fcc_medicalAreas = [];                                                                     //[[FCC, Hilfsobjekte, Radius], ...]
};

//Bereiche entfernen, deren FCC weg, abgebaut oder deren Radius geändert ist
RB205_fcc_medicalAreas = RB205_fcc_medicalAreas select {
	_x params ["_fcc", "_helpers", "_radius"];
	private _keep = RB205_fcc_medicalEnabled
		&& {alive _fcc}
		&& {_fcc getVariable ["RB205_fcc_deployed", false]}
		&& {_radius == RB205_fcc_medicalRadius};
	if (!_keep) then {
		{deleteVehicle _x} forEach _helpers;
	};
	_keep
};

if (!RB205_fcc_medicalEnabled) exitWith {};

{
	private _fcc = _x;
	if (!alive _fcc || {!(_fcc getVariable ["RB205_fcc_deployed", false])}) then {continue};
	if (RB205_fcc_medicalAreas findIf {(_x select 0) isEqualTo _fcc} != -1) then {continue};

	//Wabenraster mit 12 m Abstand: Kreise mit 7,5 m Radius decken die Fläche lückenlos ab
	private _spacing = 12;
	private _rowHeight = _spacing * 0.866;
	private _limit = RB205_fcc_medicalRadius + 1.5;
	private _offsets = [];
	private _rows = ceil (_limit / _rowHeight);
	private _columns = ceil (_limit / _spacing) + 1;

	for "_row" from -_rows to _rows do {
		private _offsetY = _row * _rowHeight;
		private _shift = [0, _spacing / 2] select (_row mod 2 != 0);
		for "_column" from -_columns to _columns do {
			private _offsetX = _column * _spacing + _shift;
			if (sqrt (_offsetX ^ 2 + _offsetY ^ 2) <= _limit) then {
				_offsets pushBack [_offsetX, _offsetY, 0];
			};
		};
	};

	private _helpers = _offsets apply {
		private _helper = "Land_HelipadEmpty_F" createVehicleLocal [0, 0, 0];
		_helper attachTo [_fcc, _x];
		_helper setVariable ["ace_medical_isMedicalFacility", true];
		_helper
	};

	RB205_fcc_medicalAreas pushBack [_fcc, _helpers, RB205_fcc_medicalRadius];
} forEach RB205_fcc_registry;
