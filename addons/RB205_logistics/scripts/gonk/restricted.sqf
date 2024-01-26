params ["_this"];

_this execVM "\RB205_logistics\scripts\gonk\addActions\aceArsenal.sqf";

_this addAction
[
	"<t color='#6a0f0f'>Heilen</t>",
	"\RB205_logistics\scripts\gonk\addActions\heal.sqf",
	nil, 16, false,	true, "", "", 5
];
_this addAction
[
	"<t color='#FFFFFF'>Rechte zuweisen</t>",
	"\RB205_logistics\scripts\gonk\addActions\getPermission.sqf",
	nil, 16, false,	true, "", "", 5
];
_this addAction
[
	"<t color='#FFFFFF'>Vorgefertigtes Loadout laden</t>",
	"\RB205_logistics\scripts\gonk\addActions\getLoadout.sqf",
	nil, 16, false,	true, "", "", 5
];