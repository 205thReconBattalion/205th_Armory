_allPlayersNearDroid = nearestObjects [_this select 0, ["CAManBase"], 5];
{
	_x setDamage 0;
	//Die ACE-Heilung muss dort laufen, wo der Patient lokal ist (bei anderen Spielern auf deren Rechner)
	["ace_medical_treatment_fullHealLocal", [_x], _x] call CBA_fnc_targetEvent;
} forEach _allPlayersNearDroid;
playSound3D ["RB205_logistics\utilities\data\Gonk.ogg", _this select 0];
