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
	"RTO/JTAC",
	"ARF",
	"Pilot",
	"Crewman",
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
					execVM "\RB205_logistics\scripts\armor\recruit.sqf";
				}; 
				case "Rifleman": {
					execVM "\RB205_logistics\scripts\armor\rifleman.sqf";
				};
				case "AA": {
					execVM "\RB205_logistics\scripts\armor\aa.sqf";
				};
				case "AT": {
					execVM "\RB205_logistics\scripts\armor\at.sqf";
				};
				case "EOD": {
					execVM "\RB205_logistics\scripts\armor\eod.sqf";
				};
				case "Grenadier": {
					execVM "\RB205_logistics\scripts\armor\grenadier.sqf";
				};
				case "Heavy": {
					execVM "\RB205_logistics\scripts\armor\heavy.sqf";
				};
				case "Marksman": {
					execVM "\RB205_logistics\scripts\armor\marksman.sqf";
				};
				case "Medic": {
					execVM "\RB205_logistics\scripts\armor\medic.sqf";
				};
				case "RTO/JTAC": {
					execVM "\RB205_logistics\scripts\armor\rto.sqf";
				};
				case "ARF": {
					execVM "\RB205_logistics\scripts\armor\arf.sqf";
				};
				case "Pilot": {
					execVM "\RB205_logistics\scripts\armor\pilot.sqf";
				};
				case "Crewman": {
					execVM "\RB205_logistics\scripts\armor\crewman.sqf";
				};
				case "ARC": {
					execVM "\RB205_logistics\scripts\armor\arc.sqf";
				};
			};
		}; 
	},
	"OK",
	"ABBRECHEN"
] call CAU_UserInputMenus_fnc_listbox;