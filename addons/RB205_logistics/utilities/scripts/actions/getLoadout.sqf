private _loadout = [
	"Klon Rekrut",
	"Rifleman",
	"AA",
	"AT",
	"EOD",
	"Grenadier",
	"Heavy",
	"Marksman",
	"Medic",
	"RTO",
	"Crewman",
	"Pilot",
	"ARF",
	"ARC"
] apply { [[_x], [], [], [], _x, _x] };

[
	[_loadout, 1, false], "Vorgefertigtes Loadout laden",
	{
		if (_confirmed) then
		{
			systemChat format ["Deine Auswahl: %1", _data];
			
			switch (_data) do
			{
				case "Klon Rekrut": {
					execVM "\RB205_logistics\utilities\scripts\premadeLoadouts\recruit.sqf";
				}; 
				case "Rifleman": {
					execVM "\RB205_logistics\utilities\scripts\premadeLoadouts\rifleman.sqf";
				};
				case "AA": {
					execVM "\RB205_logistics\utilities\scripts\premadeLoadouts\aa.sqf";
				};
				case "AT": {
					execVM "\RB205_logistics\utilities\scripts\premadeLoadouts\at.sqf";
				};
				case "EOD": {
					execVM "\RB205_logistics\utilities\scripts\premadeLoadouts\eod.sqf";
				};
				case "Grenadier": {
					execVM "\RB205_logistics\utilities\scripts\premadeLoadouts\grenadier.sqf";
				};
				case "Heavy": {
					execVM "\RB205_logistics\utilities\scripts\premadeLoadouts\heavy.sqf";
				};
				case "Marksman": {
					execVM "\RB205_logistics\utilities\scripts\premadeLoadouts\marksman.sqf";
				};
				case "Medic": {
					execVM "\RB205_logistics\utilities\scripts\premadeLoadouts\medic.sqf";
				};
				case "RTO": {
					execVM "\RB205_logistics\utilities\scripts\premadeLoadouts\rto.sqf";
				};
				case "Crewman": {
					execVM "\RB205_logistics\utilities\scripts\premadeLoadouts\crewman.sqf";
				};
				case "Pilot": {
					execVM "\RB205_logistics\utilities\scripts\premadeLoadouts\pilot.sqf";
				};
				case "ARF": {
					execVM "\RB205_logistics\utilities\scripts\premadeLoadouts\arf.sqf";
				};
				case "ARC": {
					execVM "\RB205_logistics\utilities\scripts\premadeLoadouts\arc.sqf";
				};
			};
		}; 
	},
	"OK",
	"ABBRECHEN"
] call CAU_UserInputMenus_fnc_listbox;