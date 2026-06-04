_condition =
{
    crew _target isEqualTo [];
};

_statement = {
    _veh = _target;

	_class = typeOf _veh;
	if (typeOf _veh == "RB205_barc") then {
		_class = "RB205_barc_stretcher";
	} else {
		_class = "RB205_barc";
	};
	_pos = getPosATL _veh;
	if (surfaceIsWater position _veh) then {
		_pos = getPosASL _veh;
	};
	_pos = [_pos select 0, _pos select 1, (_pos select 2) + 1]; //prevents explosion when spawning the new vehicle
	_dir = getDir _veh;
	_fuel = fuel _veh;
	_inv = getItemCargo _veh;

	deleteVehicle _veh;
	_vehNew = createVehicle[_class, _pos, [], 0, "CAN_COLLIDE"];

	_vehNew setDir _dir;
	_vehNew setFuel _fuel;
	clearItemCargoGlobal _vehNew;
	for "_i" from 0 to (count (_inv select 0))-1 do {
		_item = _inv select 0 select _i;
		_quantity = _inv select 1 select _i;
		_vehNew addItemCargoGlobal [_item, _quantity];
	};
};

_action = ["Attach/Detach Stretcher", "Attach/Detach Stretcher", "",_statement,_condition] call ace_interact_menu_fnc_createAction;
["RB205_barc", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["RB205_barc_stretcher", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;