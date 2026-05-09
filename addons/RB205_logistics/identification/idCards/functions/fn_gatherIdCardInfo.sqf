params ["_player","_target","_idtype","_takeShow"];
private _title = "";
private _name = "";
private _firstName = "";
private _id = "";
private _rank = "";
private _squad = "";
private _battalion = "";
private _picture = "";
private _licenses = [];
private _species = "";
private _homeWorld = "";

switch (_idtype) do {
	case "clone": {
		_playerName = name _player;
		_splittedString = [_playerName,"- "] call BIS_fnc_splitString;
		_name = _splittedString select 2;
		_id = _splittedString select 1;
		_rank = _splittedString select 0;
		_title = _rank + "-" + _id;
		_squad = groupId group _player;
		_battalion = "205th";
		_picture = "RB205_logistics\identification\idCards\UIElements\idcardClone.paa";
	};
	case "diplomatRep": {
		_playerName = name _player;
		_splittedString = [_playerName," "] call BIS_fnc_splitString;
		_name = _splittedString select 1;
		_firstName = _splittedString select 0;
		_title = "Diplomat";
		_picture = "RB205_logistics\identification\idCards\UIElements\idCardDipRep.paa";
	};
	case "diplomatCIS": {
		_playerName = name _player;
		_splittedString = [_playerName," "] call BIS_fnc_splitString;
		_name = _splittedString select 1;
		_firstName = _splittedString select 0;
		_title = "Diplomat";
		_picture = "RB205_logistics\identification\idCards\UIElements\idCardDipCIS.paa";
	};
	case "civilianRep": {
		_playerName = name _player;
		_splittedString = [_playerName," "] call BIS_fnc_splitString;
		_name = _splittedString select 1;
		_firstName = _splittedString select 0;
		_title = "Civilian";
		_picture = "RB205_logistics\identification\idCards\UIElements\idCardZivRep.paa";
	};
	case "civilianCIS": {
		_playerName = name _player;
		_splittedString = [_playerName," "] call BIS_fnc_splitString;
		_name = _splittedString select 1;
		_firstName = _splittedString select 0;
		_title = "Civilian";
		_picture = "RB205_logistics\identification\idCards\UIElements\idCardZivCIS.paa";
	};
	case "civilianNeutral": {
		_playerName = name _player;
		_splittedString = [_playerName," "] call BIS_fnc_splitString;
		_name = _splittedString select 1;
		_firstName = _splittedString select 0;
		_title = "Civilian";
		_picture = "RB205_logistics\identification\idCards\UIElements\idCardZivNeutral.paa";
	};
	default {
		_name = "Unknown";
		_id = "Unknown";
		_rank = "Unknown";
		_title = "Unknown";
		_squad = "Unknown";
		_battalion = "Unknown";
		_picture = "RB205_logistics\identification\idCards\UIElements\idcardCloneEins.paa";
	};
};

if (_idtype == "civilianRep" || _idtype == "civilianCIS" || _idtype == "civilianNeutral") then {
	
	if ("JLTS_ids_license_driver_small" in (items _player)) then{
		_licenses pushBack "Driver (small)";
	};
	if ("JLTS_ids_license_driver_medium" in (items _player)) then{
		_licenses pushBack "Driver (medium)";
	};
	if ("JLTS_ids_license_driver_large" in (items _player)) then{
		_licenses pushBack "Driver (large)";
	};
	//JLTS hat die Klassennamen dieser beiden vertauscht
	if ("JLTS_ids_license_weapon_primary" in (items _player)) then{
		_licenses pushBack "Weapon (secondary)";
	};
	if ("JLTS_ids_license_weapon_secondary" in (items _player)) then{
		_licenses pushBack "Weapon (primary)";
	};
};
_defaultSpieces = {
	_species = "Unknown";
	_homeWorld = "Unknown";
};
if (_idtype == "diplomatRep" || _idtype == "diplomatCIS" || _idtype == "civilianRep" || _idtype == "civilianCIS" || _idtype == "civilianNeutral") then {
	_face = face _player;
	//hint format ["_Player %1, _Target %2, Player %3", _player, _target, player];
		switch (true) do {
		case (["WhiteHead_", _face] call BIS_fnc_inString) : {
			_species = "Human";
			_homeWorld = "Coruscant";
		};
		case (["Cathar", _face] call BIS_fnc_inString) : {
			_species = "Cathar";
			_homeWorld = "Cathar";
		};
		case (["chiss", _face] call BIS_fnc_inString) : {
			_species = "Chiss";
			_homeWorld = "Csilla";
		};
		case (["Cyborg", _face] call BIS_fnc_inString) : {
			_species = "Cyborg";
			_homeWorld = "Unknown";
		};
		case (["Mirakulan", _face] call BIS_fnc_inString) : {
			_species = "Mirakulan";
			_homeWorld = "Mirakulan";
		};
		case (["Nekghoul", _face] call BIS_fnc_inString) : {
			_species = "Nekghoul";
			_homeWorld = "Unknown";
		};
		case (["Trandoshan", _face] call BIS_fnc_inString) : {
			_species = "Trandoshan";
			_homeWorld = "Trandosha";
		};
		case (["Twilek", _face] call BIS_fnc_inString) : {
			_species = "Twilek";
			_homeWorld = "Ryloth";
		};
		case (["Russian", _face] call BIS_fnc_inString) : {
			_species = "Human";
			_homeWorld = "Coruscant";
		};
		case (["Tanoan", _face] call BIS_fnc_inString) : {
			_species = "Human";
			_homeWorld = "Coruscant";
		};
		case (["Greek", _face] call BIS_fnc_inString) : {
			_species = "Human";
			_homeWorld = "Coruscant";
		};
		case (["Persian", _face] call BIS_fnc_inString) : {
			_species = "Human";
			_homeWorld = "Coruscant";
		};
		case (["Barklem", _face] call BIS_fnc_inString) : {
			_species = "Human";
			_homeWorld = "Coruscant";
		};
		case (["Livonian", _face] call BIS_fnc_inString) : {
			_species = "Human";
			_homeWorld = "Coruscant";
		};
		case (["Asian", _face] call BIS_fnc_inString) : {
			_species = "Human";
			_homeWorld = "Coruscant";
		};
		case (["Droid", _face] call BIS_fnc_inString) : {
			_species = "Droid";
		};
		case (["clone", _face] call BIS_fnc_inString) : {
			_species = "Clone";
		};
		case (["sangheili", _face] call BIS_fnc_inString) : {
			_species = "Human";
			_homeWorld = "Coruscant";
		};
		case (["African", _face] call BIS_fnc_inString) : {
			_species = "Human";
			_homeWorld = "Coruscant";
		};
		case (["Ioannou", _face] call BIS_fnc_inString) : {
			_species = "Human";
			_homeWorld = "Coruscant";
		};
		case (["Jackal", _face] call BIS_fnc_inString) : {
			_species = "Jackal";
			_homeWorld = "Unkown";
		};
		case (["Head_Fett", _face] call BIS_fnc_inString) : {
			_species = "Clone";
			_homeWorld = "Kamino";
		};
		case (["Abed", _face] call BIS_fnc_inString) : {
			_species = "Abednedo";
			_homeWorld = "Abednedo";
		};
		case (["Aqualish", _face] call BIS_fnc_inString) : {
			_species = "Aqualish";
			_homeWorld = "Ando";
		};
		case (["Duros", _face] call BIS_fnc_inString) : {
			_species = "Duros";
			_homeWorld = "Duro";
		};
		case (["Ishi", _face] call BIS_fnc_inString) : {
			_species = "Ishi Tib";
			_homeWorld = "Tibrin";
		};
		case (["Keldor", _face] call BIS_fnc_inString) : {
			_species = "Kel-dor";
			_homeWorld = "Dorin";
		};
		case (["Mimbanese", _face] call BIS_fnc_inString) : {
			_species = "Mimbanese";
			_homeWorld = "Mimban";
		};
		case (["Nikto", _face] call BIS_fnc_inString) : {
			_species = "Nikto";
			_homeWorld = "Kintan";
		};
		case (["Quarren", _face] call BIS_fnc_inString) : {
			_species = "Quarren";
			_homeWorld = "Mon Cala";
		};
		case (["Rodian", _face] call BIS_fnc_inString) : {
			_species = "Rodian";
			_homeWorld = "Rodia";
		};
		case (["Sullustan", _face] call BIS_fnc_inString) : {
			_species = "Sullustan";
			_homeWorld = "Sullust";
		};
		case (["Weequay", _face] call BIS_fnc_inString) : {
			_species = "Weequay";
			_homeWorld = "Sriluur";
		};
		case (["Default", _face] call BIS_fnc_inString) : {
			_species = "Default";
			_homeWorld = "Coruscant";
		};
		case (["Mavros", _face] call BIS_fnc_inString) : {
			_species = "Human";
			_homeWorld = "Coruscant";
		};
		case (["mirialan", _face] call BIS_fnc_inString) : {
			_species = "Mirialan";
			_homeWorld = "Mirial";
		};
		case (["Sturrock", _face] call BIS_fnc_inString) : {
			_species = "Human";
			_homeWorld = "Coruscant";
		};
		case (["zabrak", _face] call BIS_fnc_inString) : {
			_species = "Zabrak";
			_homeWorld = "Iridonia";
		};
		case (["zelosian", _face] call BIS_fnc_inString) : {
			_species = "Zelosian";
			_homeWorld = "Zelos";
		};
		case (["zeltron", _face] call BIS_fnc_inString) : {
			_species = "Zeltron";
			_homeWorld = "Zeltros";
		};
		default _defaultSpieces;
	};
};

if (RB205_IDCARDS_OVERWRITE && _takeShow == "show") then {
	_name = RB205_IDCARDS_OVERWRITE_NAME;
	_id = RB205_IDCARDS_OVERWRITE_ID;
	_firstName = RB205_IDCARDS_OVERWRITE_FIRSTNAME;
	_rank = RB205_IDCARDS_OVERWRITE_RANK;
	_squad = RB205_IDCARDS_OVERWRITE_SQUAD;
	_battalion = RB205_IDCARDS_OVERWRITE_BATTALION;
	_species = RB205_IDCARDS_OVERWRITE_SPECIES;
	_homeWorld = RB205_IDCARDS_OVERWRITE_HOMEWORLD;
};

[_title,_name,_firstName,_id,_rank,_squad,_battalion,_picture,_idtype,_licenses,_species,_homeWorld,_takeShow] remoteExec ["RB205_IdCards_fnc_showIDCard",_target];