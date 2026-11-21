// Addon options of the T-7. isGlobal 1: the value of the server applies to all players.

[
	"RB205_T7ION_chargeTime",
	"SLIDER",
	["Charge Time", "Seconds the trigger has to be held before the T-7 can fire. Releasing earlier aborts the shot."],
	["[205] Weapons", "T-7 Ion Disruptor"],
	[1, 10, 5, 1],
	1
] call CBA_fnc_addSetting;

[
	"RB205_T7ION_fireWindow",
	"SLIDER",
	["Fire Window", "Seconds after charging in which releasing the trigger fires the T-7. Holding it longer overloads the weapon."],
	["[205] Weapons", "T-7 Ion Disruptor"],
	[0.2, 5, 1, 1],
	1
] call CBA_fnc_addSetting;

[
	"RB205_T7ION_largeVehicles",
	"EDITBOX",
	["Large Vehicles", "Comma separated class names of vehicles that take three hits to disable. Everything inheriting from these classes counts as well."],
	["[205] Weapons", "T-7 Ion Disruptor"],
	"3AS_MTT, ls_vehicle_mtt_base, ls_vehicle_cisDropship, 3AS_ATAT_Base, WM_ATAT, 3AS_Gozanti_F, 3AS_Republic_Transport_01",
	1
] call CBA_fnc_addSetting;
