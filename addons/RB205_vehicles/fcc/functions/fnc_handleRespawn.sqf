/*
 * Respawn-Eventhandler des Spielers.
 * Der Vanilla-Respawn setzt Spieler mit moveInAny in das FCC, also zuerst auf den Commander-Sitz.
 * Ist ein Passagierplatz frei, wird der Spieler stattdessen dorthin gesetzt.
 *
 * Arguments:
 * 0: Neue Einheit <OBJECT>
 */

params ["_unit"];

if (!RB205_fcc_respawnPreferPassenger) exitWith {};

//Das Einsteigen passiert kurz nach dem Respawn, daher bis zu 10 s darauf warten
[{
	params ["_unit"];
	private _fcc = objectParent _unit;
	!isNull _fcc && {_fcc isKindOf "RB205_fcc"} && {_unit isEqualTo gunner _fcc}
}, {
	params ["_unit"];
	private _fcc = objectParent _unit;
	if ((_fcc emptyPositions "cargo") < 1) exitWith {};

	moveOut _unit;
	[{isNull objectParent (_this select 0)}, {
		params ["_unit", "_fcc"];
		_unit moveInCargo _fcc;
	}, [_unit, _fcc], 2] call CBA_fnc_waitUntilAndExecute;
}, [_unit], 10] call CBA_fnc_waitUntilAndExecute;
