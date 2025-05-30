private _roles = [
	"Standard",
	"Medic",
	"EOD",
	"Crewman",
	"Pilot",
	"ARC"
] apply { [[_x], [], [], [], _x, _x] };

[
	[_roles, 0, false], "Rechte zuweisen",
	{
		if (_confirmed) then
		{
			systemChat format ["Deine Auswahl: %1", _data];
			playSound3D ["RB205_logistics\utilities\data\Gonk.ogg", _this select 0];
			
			switch (_data) do
			{
				case "Standard": {
					player setVariable ["ace_medical_medicClass", 0, true];
					player setVariable ["ACE_IsEngineer", 0, true];
					player setVariable ["ACE_isEOD", 0, true];
				}; 
				case "Medic": {
					player setVariable ["ace_medical_medicClass", 1, true];
					player setVariable ["ACE_IsEngineer", 0, true];
					player setVariable ["ACE_isEOD", 0, true];
				};
				case "EOD": {
					player setVariable ["ace_medical_medicClass", 0, true];
					player setVariable ["ACE_IsEngineer", 0, true];
					player setVariable ["ACE_isEOD", 1, true];
				};
				case "Crewman": {
					player setVariable ["ace_medical_medicClass", 0, true];
					player setVariable ["ACE_IsEngineer", 1, true];
					player setVariable ["ACE_isEOD", 0, true];
				};
				case "Pilot": {
					player setVariable ["ace_medical_medicClass", 1, true];
					player setVariable ["ACE_IsEngineer", 1, true];
					player setVariable ["ACE_isEOD", 0, true];
				};
				case "ARC": {
					player setVariable ["ace_medical_medicClass", 1, true];
					player setVariable ["ACE_IsEngineer", 1, true];
					player setVariable ["ACE_isEOD", 1, true];
				};
			};
		};
	},
	"OK",
	"ABBRECHEN"
] call CAU_UserInputMenus_fnc_listbox;