params ["_this"];

_this execVM "\RB205_logistics\resupply\scripts\arsenal_complete.sqf";

_this addAction
[
	"<t color='#FFFFFF'>Spieler-Loadouts kopieren</t>",
	"\RB205_logistics\utilities\scripts\actions\getPlayerLoadouts.sqf",
	nil, 16, false,	true, "", "", 5
];

_this addAction
[
	"<t color='#191919'>Ace Fortify Einstellungen anzeigen</t>",
	{
		hint parseText "ACE FORTIFY SETTINGS<br/><br/>
			<t align='left'>#ace-fortify on/off<br/>
			#ace-fortify west -PRESET-<br/><br/>
			Presets:<br/>
			- RB205_fort_light<br/>
			- RB205_fort_medium<br/>
			- RB205_fort_heavy</t>"
	},
	nil, 16, false,	true, "", "", 5
];
_this addAction
[
	"<t color='#191919'>Leere KI Gruppen entfernen</t>",
	{
		{
			if (count units _x==0) then
			{
				deleteGroup _x
			}
		} forEach allGroups;
	},
	nil, 16, false,	true, "", "", 5
];