params ["_this"];

_this addAction
[
	"<t color='#6a0f0f'>Heilen</t>",
	"\RB205_logistics\utilities\scripts\actions\heal.sqf",
	nil, 16, false,	true, "", "", 5
];
_this addAction
[
	"<t color='#191919'>Heilen (5m Radius)</t>",
	"\RB205_logistics\utilities\scripts\actions\healArea.sqf",
	nil, 16, false,	true, "", "", 5
];