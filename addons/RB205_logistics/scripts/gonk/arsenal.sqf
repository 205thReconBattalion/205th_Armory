params ["_this"];

_this execVM "\RB205_logistics\scripts\gonk\addActions\aceArsenal.sqf";

_this addAction
[
	"<t color='#191919'>BI Arsenal</t>",
	"\RB205_logistics\scripts\gonk\addActions\biArsenal.sqf",
	nil, 16, false,	true, "", "", 5
];