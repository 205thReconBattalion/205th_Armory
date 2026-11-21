/*
 * Gibt das FCC zurück, in dem der Spieler sitzt und dessen Karten-Intel er sehen darf.
 *
 * Return Value:
 * FCC oder objNull <OBJECT>
 */

if (!RB205_fcc_intelEnabled || {!isNil "RKAGRevealedGroups"}) exitWith {objNull};

private _fcc = objectParent player;
if (isNull _fcc || {!(_fcc isKindOf "RB205_fcc")} || {!alive _fcc} || {!alive player}) exitWith {objNull};
if !(_fcc getVariable ["RB205_fcc_deployed", false]) exitWith {objNull};
if (RB205_fcc_intelAccess == 0 && {player isNotEqualTo gunner _fcc}) exitWith {objNull};

_fcc
