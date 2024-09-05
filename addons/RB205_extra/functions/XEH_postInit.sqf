private _condition = {
	true
};

private _statement = {
	if (isNull _target) exitWith {};

	private _carbonite = _target;

	private _curPos = getPosASL _carbonite;
	private _pos = [(_curPos select 0),(_curPos select 1),(_curPos select 2)+0.6];
	private _dir = getDir _carbonite;

	_carbonite setPosASL _pos;
	[_carbonite, [_dir,90,0]] call BIS_fnc_setObjectRotation;
};

_rotateCarbonite = ["Straighten up Carbonite", "Straighten up Carbonite", "", _statement, _condition] call ace_interact_menu_fnc_createAction;
["RB205_carbonite", 0, ["ACE_MainActions"], _rotateCarbonite, true] call ace_interact_menu_fnc_addActionToClass;