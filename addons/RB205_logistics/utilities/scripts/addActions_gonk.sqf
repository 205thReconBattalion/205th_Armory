params ["_this"];

_this execVM "\RB205_logistics\resupply\scripts\arsenal_complete.sqf";

_this addAction
[
	"<t color='#FFFFFF'>Rechte zuweisen</t>",
	"\RB205_logistics\utilities\scripts\actions\getPermission.sqf",
	nil, 16, false,	true, "", "", 5
];
_this addAction
[
	"<t color='#FFFFFF'>Vorgefertigtes Loadout laden</t>",
	"\RB205_logistics\utilities\scripts\actions\getLoadout.sqf",
	nil, 16, false,	true, "", "", 5
];
_this addAction
[
	"<t color='#191919'>BI Arsenal</t>",
	"\RB205_logistics\utilities\scripts\actions\biArsenal.sqf",
	nil, 16, false,	true, "", "", 5
];