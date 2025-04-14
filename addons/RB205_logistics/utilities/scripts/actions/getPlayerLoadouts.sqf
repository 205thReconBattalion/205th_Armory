rb205_players = (allPlayers - entities "HeadlessClient_F"); 
 
_playersApplied = rb205_players apply { 
	[ 
		[name _x], 
		[format["%1-%2-%3", _x getVariable ["ace_medical_medicClass", 0], _x getVariable ["ACE_IsEngineer", 0], _x getVariable ["ACE_isEOD", 0]]], 
		[], 
		[], 
		groupId group _x, 
		str _x, 
		0 
	] 
}; 
 
[ 
	[ 
		_playersApplied, 
		0, 
		false 
	], 
	"Player Selection [MED-ENG-EOD]", 
	{ 
		if (!_confirmed) exitWith {}; 
		
		_unit = (rb205_players select _index); 
		systemchat format["Die Ausrüstung von %1 wurde kopiert.", name _unit]; 
		player setUnitLoadout (getUnitLoadout _unit); 
	}, 
	"Kopieren", 
	"Abbrechen" 
] call CAU_UserInputMenus_fnc_listbox;