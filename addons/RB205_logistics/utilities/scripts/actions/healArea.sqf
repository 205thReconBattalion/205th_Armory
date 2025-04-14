_allPlayersNearDroid = nearestObjects [_this select 0, ["CAManBase"], 5];
{
	_x setDamage 0;
	_x call ace_medical_treatment_fnc_fullHealLocal;
} forEach _allPlayersNearDroid;
playSound3D ["RB205_logistics\gonk\data\Gonk.ogg", _this select 0];