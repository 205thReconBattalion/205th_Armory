params ["_title","_name","_firstName","_id","_rank","_squad","_battalion","_picture","_idtype","_licenses","_species","_homeWorld","_takeShow"];

206 cutRsc ["idcardInteractive", "PLAIN"];

private _display = uiNamespace getVariable ["idcardInteractive", displayNull];
private _nameCtrl = _display displayCtrl 205008;
private _idCtrl = _display displayCtrl 205009;
private _rankCtrl = _display displayCtrl 205010;
private _squadCtrl = _display displayCtrl 205011;
private _battalionCtrl = _display displayCtrl 205012;
private _titleCtrl = _display displayCtrl 205006;
private _pictureCtrl = _display displayCtrl 205007;
private _nameVariableCtrl = _display displayCtrl 205001;
private _idVariableCtrl = _display displayCtrl 205002;
private _rankVariableCtrl = _display displayCtrl 205003;
private _squadVariableCtrl = _display displayCtrl 205004;
private _battalionVariableCtrl = _display displayCtrl 205005;
private _licensesCtrl = _display displayCtrl 205013;
private _homeWorldCtrl = _display displayCtrl 205014;
private _homeWorldVariableCtrl = _display displayCtrl 205015;
private _licensesPermitsTextCtrl = _display displayCtrl 205016;

switch (_idtype) do {
	case "clone": {
		_nameCtrl ctrlSetText "Name";
		_idCtrl ctrlSetText "ID";
		_rankCtrl ctrlSetText "Rank";
		_squadCtrl ctrlSetText "Squad";
		_battalionCtrl ctrlSetText "Unit";
		_nameVariableCtrl ctrlSetText _name;
		_idVariableCtrl ctrlSetText _id;
		_rankVariableCtrl ctrlSetText _rank;
		_squadVariableCtrl ctrlSetText _squad;
		_battalionVariableCtrl ctrlSetText _battalion;
		_pictureCtrl ctrlSetText _picture;
		_titleCtrl ctrlSetText _title;

		_rankCtrl ctrlShow true;
		_squadCtrl ctrlShow true;
		_battalionCtrl ctrlShow true;
		_rankVariableCtrl ctrlShow true;
		_squadVariableCtrl ctrlShow true;
		_battalionVariableCtrl ctrlShow true;
		_licensesCtrl ctrlShow false;
		_homeWorldCtrl ctrlShow false;
		_homeWorldVariableCtrl ctrlShow false;
		_licensesPermitsTextCtrl ctrlShow false;
	};
	case "diplomatCIS";
	case "diplomatRep": {
		_nameCtrl ctrlSetText "Name";
		_idCtrl ctrlSetText "FName";
		_rankCtrl ctrlSetText "Species";
		_squadCtrl ctrlSetText "";
		_battalionCtrl ctrlSetText "";
		_nameVariableCtrl ctrlSetText _name;
		_idVariableCtrl ctrlSetText _firstName;
		_rankVariableCtrl ctrlSetText _species;
		_squadVariableCtrl ctrlSetText "";
		_battalionVariableCtrl ctrlSetText "";
		_pictureCtrl ctrlSetText _picture;
		_titleCtrl ctrlSetText _title;
		_homeWorldCtrl ctrlSetText "Planet";
		_homeWorldVariableCtrl ctrlSetText _homeWorld;

		_rankCtrl ctrlShow true;
		_squadCtrl ctrlShow false;
		_battalionCtrl ctrlShow false;
		_rankVariableCtrl ctrlShow true;
		_squadVariableCtrl ctrlShow false;
		_battalionVariableCtrl ctrlShow false;
		_licensesCtrl ctrlShow false;
		_titleCtrl ctrlShow false;
		_homeWorldCtrl ctrlShow true;
		_homeWorldVariableCtrl ctrlShow true;
		_licensesPermitsTextCtrl ctrlShow false;
	};
	case "civilianRep";
	case "civilianCIS";
	case "civilianNeutral": {
		private _licensesText = "";
		{
			_licensesText = _licensesText + format ["%1\n", _x];
		} forEach _licenses;
		//hint format ["test %1", _licensesText];
		_nameCtrl ctrlSetText "Name";
		_idCtrl ctrlSetText "FName";
		_rankCtrl ctrlSetText "Species";
		_squadCtrl ctrlSetText "";
		_battalionCtrl ctrlSetText "";
		_nameVariableCtrl ctrlSetText _name;
		_idVariableCtrl ctrlSetText _firstName;
		_rankVariableCtrl ctrlSetText _species;
		_squadVariableCtrl ctrlSetText "";
		_battalionVariableCtrl ctrlSetText "";
		_pictureCtrl ctrlSetText _picture;
		_titleCtrl ctrlSetText _title;
		_licensesCtrl ctrlSetText _licensesText;
		_homeWorldCtrl ctrlSetText "Planet";
		_homeWorldVariableCtrl ctrlSetText _homeWorld;
		_licensesPermitsTextCtrl ctrlSetText "Licenses/Permits";

		_rankCtrl ctrlShow true;
		_squadCtrl ctrlShow false;
		_battalionCtrl ctrlShow false;
		_rankVariableCtrl ctrlShow true;
		_squadVariableCtrl ctrlShow false;
		_battalionVariableCtrl ctrlShow false;
		_licensesCtrl ctrlShow true;
		_idVariableCtrl ctrlShow true;
		_homeWorldCtrl ctrlShow true;
		_homeWorldVariableCtrl ctrlShow true;
		_licensesPermitsTextCtrl ctrlShow true;
		_titleCtrl ctrlShow false;
	};
	default {
		hint "Default";
	};
};

switch (_idtype) do {
	case "clone": {
		_color = [0.73, 0.96, 0.98, 0.6];
		_nameCtrl ctrlSetTextColor _color;
		_idCtrl ctrlSetTextColor _color;
		_rankCtrl ctrlSetTextColor _color;
		_squadCtrl ctrlSetTextColor _color;
		_battalionCtrl ctrlSetTextColor _color;
		_titleCtrl ctrlSetTextColor _color;
		_nameVariableCtrl ctrlSetTextColor _color;
		_idVariableCtrl ctrlSetTextColor _color;
		_rankVariableCtrl ctrlSetTextColor _color;
		_squadVariableCtrl ctrlSetTextColor _color;
		_battalionVariableCtrl ctrlSetTextColor _color;

		_nameCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.275* safezoneH + safezoneY];
		_nameCtrl ctrlCommit 0;
		_nameVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.275* safezoneH + safezoneY];
		_nameVariableCtrl ctrlCommit 0;
		_idCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.305* safezoneH + safezoneY];
		_idCtrl ctrlCommit 0;
		_idVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.305* safezoneH + safezoneY];
		_idVariableCtrl ctrlCommit 0;
		_rankCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.335* safezoneH + safezoneY];
		_rankCtrl ctrlCommit 0;
		_rankVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.335* safezoneH + safezoneY];
		_rankVariableCtrl ctrlCommit 0;
	};
	case "diplomatCIS": {
		_color = [0.67, 0.25, 0.22, 0.5];
		_nameCtrl ctrlSetTextColor _color;
		_idCtrl ctrlSetTextColor _color;
		_rankCtrl ctrlSetTextColor _color;
		_squadCtrl ctrlSetTextColor _color;
		_battalionCtrl ctrlSetTextColor _color;
		_titleCtrl ctrlSetTextColor _color;
		_nameVariableCtrl ctrlSetTextColor _color;
		_idVariableCtrl ctrlSetTextColor _color;
		_rankVariableCtrl ctrlSetTextColor _color;
		_squadVariableCtrl ctrlSetTextColor _color;
		_battalionVariableCtrl ctrlSetTextColor _color;
		_licensesCtrl ctrlSetTextColor _color;
		_homeWorldCtrl ctrlSetTextColor _color;
		_homeWorldVariableCtrl ctrlSetTextColor _color;
		_licensesPermitsTextCtrl ctrlSetTextColor _color;

		_nameCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.48 * safezoneH + safezoneY];
		_nameCtrl ctrlCommit 0;
		_nameVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.48 * safezoneH + safezoneY];
		_nameVariableCtrl ctrlCommit 0;
		_idCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.51* safezoneH + safezoneY];
		_idCtrl ctrlCommit 0;
		_idVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.51* safezoneH + safezoneY];
		_idVariableCtrl ctrlCommit 0;
		_rankCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.54* safezoneH + safezoneY];
		_rankCtrl ctrlCommit 0;
		_rankVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.54* safezoneH + safezoneY];
		_rankVariableCtrl ctrlCommit 0;
		_homeWorldCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.57* safezoneH + safezoneY];
		_homeWorldCtrl ctrlCommit 0;
		_homeWorldVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.57* safezoneH + safezoneY];
		_homeWorldVariableCtrl ctrlCommit 0;
	};
	case "diplomatRep": {
		_color = [1,0.953, 0.729, 0.6];
		_nameCtrl ctrlSetTextColor _color;
		_idCtrl ctrlSetTextColor _color;
		_rankCtrl ctrlSetTextColor _color;
		_squadCtrl ctrlSetTextColor _color;
		_battalionCtrl ctrlSetTextColor _color;
		_titleCtrl ctrlSetTextColor _color;
		_nameVariableCtrl ctrlSetTextColor _color;
		_idVariableCtrl ctrlSetTextColor _color;
		_rankVariableCtrl ctrlSetTextColor _color;
		_squadVariableCtrl ctrlSetTextColor _color;
		_battalionVariableCtrl ctrlSetTextColor _color;
		_licensesCtrl ctrlSetTextColor _color;
		_homeWorldCtrl ctrlSetTextColor _color;
		_homeWorldVariableCtrl ctrlSetTextColor _color;
		_licensesPermitsTextCtrl ctrlSetTextColor _color;

		_nameCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.46 * safezoneH + safezoneY];
		_nameCtrl ctrlCommit 0;
		_nameVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.46 * safezoneH + safezoneY];
		_nameVariableCtrl ctrlCommit 0;
		_idCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.49* safezoneH + safezoneY];
		_idCtrl ctrlCommit 0;
		_idVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.49* safezoneH + safezoneY];
		_idVariableCtrl ctrlCommit 0;
		_rankCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.52* safezoneH + safezoneY];
		_rankCtrl ctrlCommit 0;
		_rankVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.52* safezoneH + safezoneY];
		_rankVariableCtrl ctrlCommit 0;
		_homeWorldCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.55* safezoneH + safezoneY];
		_homeWorldCtrl ctrlCommit 0;
		_homeWorldVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.55* safezoneH + safezoneY];
		_homeWorldVariableCtrl ctrlCommit 0;
	};
	case "civilianRep": {
		_color = [0.78, 0.96, 0.98, 0.5];
		_nameCtrl ctrlSetTextColor _color;
		_idCtrl ctrlSetTextColor _color;
		_rankCtrl ctrlSetTextColor _color;
		_squadCtrl ctrlSetTextColor _color;
		_battalionCtrl ctrlSetTextColor _color;
		_titleCtrl ctrlSetTextColor _color;
		_nameVariableCtrl ctrlSetTextColor _color;
		_idVariableCtrl ctrlSetTextColor _color;
		_rankVariableCtrl ctrlSetTextColor _color;
		_squadVariableCtrl ctrlSetTextColor _color;
		_battalionVariableCtrl ctrlSetTextColor _color;
		_licensesCtrl ctrlSetTextColor _color;
		_homeWorldCtrl ctrlSetTextColor _color;
		_homeWorldVariableCtrl ctrlSetTextColor _color;
		_licensesPermitsTextCtrl ctrlSetTextColor _color;

		_nameCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.43* safezoneH + safezoneY];
		_nameCtrl ctrlCommit 0;
		_nameVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.43* safezoneH + safezoneY];
		_nameVariableCtrl ctrlCommit 0;
		_idCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.46* safezoneH + safezoneY];
		_idCtrl ctrlCommit 0;
		_idVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.46* safezoneH + safezoneY];
		_idVariableCtrl ctrlCommit 0;
		_rankCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.49* safezoneH + safezoneY];
		_rankCtrl ctrlCommit 0;
		_rankVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.49* safezoneH + safezoneY];
		_rankVariableCtrl ctrlCommit 0;
		_homeWorldCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.52* safezoneH + safezoneY];
		_homeWorldCtrl ctrlCommit 0;
		_homeWorldVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.52* safezoneH + safezoneY];
		_homeWorldVariableCtrl ctrlCommit 0;
		_licensesPermitsTextCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.65* safezoneH + safezoneY];
		_licensesPermitsTextCtrl ctrlCommit 0;
		_licensesCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.69* safezoneH + safezoneY];
		_licensesCtrl ctrlCommit 0;
	};
	case "civilianCIS": {
		_color = [0.63, 0.67, 1, 0.5];
		_nameCtrl ctrlSetTextColor _color;
		_idCtrl ctrlSetTextColor _color;
		_rankCtrl ctrlSetTextColor _color;
		_squadCtrl ctrlSetTextColor _color;
		_battalionCtrl ctrlSetTextColor _color;
		_titleCtrl ctrlSetTextColor _color;
		_nameVariableCtrl ctrlSetTextColor _color;
		_idVariableCtrl ctrlSetTextColor _color;
		_rankVariableCtrl ctrlSetTextColor _color;
		_squadVariableCtrl ctrlSetTextColor _color;
		_battalionVariableCtrl ctrlSetTextColor _color;
		_licensesCtrl ctrlSetTextColor _color;
		_homeWorldCtrl ctrlSetTextColor _color;
		_homeWorldVariableCtrl ctrlSetTextColor _color;
		_licensesPermitsTextCtrl ctrlSetTextColor _color;

		_nameCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.48* safezoneH + safezoneY];
		_nameCtrl ctrlCommit 0;
		_nameVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.48* safezoneH + safezoneY];
		_nameVariableCtrl ctrlCommit 0;
		_idCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.51* safezoneH + safezoneY];
		_idCtrl ctrlCommit 0;
		_idVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.51* safezoneH + safezoneY];
		_idVariableCtrl ctrlCommit 0;
		_rankCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.49* safezoneH + safezoneY];
		_rankCtrl ctrlCommit 0;
		_rankVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.49* safezoneH + safezoneY];
		_rankVariableCtrl ctrlCommit 0;
		_homeWorldCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.52* safezoneH + safezoneY];
		_homeWorldCtrl ctrlCommit 0;
		_homeWorldVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.52* safezoneH + safezoneY];
		_homeWorldVariableCtrl ctrlCommit 0;
		_licensesPermitsTextCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.65* safezoneH + safezoneY];
		_licensesPermitsTextCtrl ctrlCommit 0;
		_licensesCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.69* safezoneH + safezoneY];
		_licensesCtrl ctrlCommit 0;
	};
	case "civilianNeutral": {
		_color = [0.77, 0.77, 0.77, 0.5];
		_nameCtrl ctrlSetTextColor _color;
		_idCtrl ctrlSetTextColor _color;
		_rankCtrl ctrlSetTextColor _color;
		_squadCtrl ctrlSetTextColor _color;
		_battalionCtrl ctrlSetTextColor _color;
		_titleCtrl ctrlSetTextColor _color;
		_nameVariableCtrl ctrlSetTextColor _color;
		_idVariableCtrl ctrlSetTextColor _color;
		_rankVariableCtrl ctrlSetTextColor _color;
		_squadVariableCtrl ctrlSetTextColor _color;
		_battalionVariableCtrl ctrlSetTextColor _color;
		_licensesCtrl ctrlSetTextColor _color;
		_homeWorldCtrl ctrlSetTextColor _color;
		_homeWorldVariableCtrl ctrlSetTextColor _color;
		_licensesPermitsTextCtrl ctrlSetTextColor _color;

		_nameCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.37* safezoneH + safezoneY];
		_nameCtrl ctrlCommit 0;
		_nameVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.37* safezoneH + safezoneY];
		_nameVariableCtrl ctrlCommit 0;
		_idCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.40* safezoneH + safezoneY];
		_idCtrl ctrlCommit 0;
		_idVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.40* safezoneH + safezoneY];
		_idVariableCtrl ctrlCommit 0;
		_rankCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.49* safezoneH + safezoneY];
		_rankCtrl ctrlCommit 0;
		_rankVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.49* safezoneH + safezoneY];
		_rankVariableCtrl ctrlCommit 0;
		_homeWorldCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.52* safezoneH + safezoneY];
		_homeWorldCtrl ctrlCommit 0;
		_homeWorldVariableCtrl ctrlSetPosition [0.85 * safezoneW + safezoneX, 0.52* safezoneH + safezoneY];
		_homeWorldVariableCtrl ctrlCommit 0;
		_licensesPermitsTextCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.65* safezoneH + safezoneY];
		_licensesPermitsTextCtrl ctrlCommit 0;
		_licensesCtrl ctrlSetPosition [0.78 * safezoneW + safezoneX, 0.69* safezoneH + safezoneY];
		_licensesCtrl ctrlCommit 0;
	};
	default {
		hint "Default";
	};
};
//hint format ["%1", _picture];
if (_species == "Default" && (_idtype == "civilianRep" || _idtype == "civilianCIS" || _idtype == "civilianNeutral" || _idtype == "diplomatCIS" || _idtype == "diplomatRep") ) then {
	_rankCtrl ctrlShow false;
	_rankVariableCtrl ctrlShow false;
	_homeWorldCtrl ctrlShow false;
	_homeWorldVariableCtrl ctrlShow false;
};

if (RB205_IDCARDS_OVERWRITE && _takeShow == "show") then {
	_nameVariableCtrl ctrlSetText _name;
	_idVariableCtrl ctrlSetText _id;
	if (_idtype == "clone") then {
		_rankCtrl ctrlSetText "Rank";
		_rankVariableCtrl ctrlSetText _rank;
	} else {
		if (RB205_IDCARDS_OVERWRITE_SPECIES != "") then {
			_rankCtrl ctrlShow true;
			_rankVariableCtrl ctrlShow true;
			_homeWorldCtrl ctrlShow true;
			_homeWorldVariableCtrl ctrlShow true;
			if (RB205_IDCARDS_OVERWRITE_HOMEWORLD == "") then {
				_homeWorldCtrl ctrlShow false;
				_homeWorldVariableCtrl ctrlShow false;
			};
		} else {
			_rankCtrl ctrlShow false;
			_rankVariableCtrl ctrlShow false;
			_homeWorldCtrl ctrlShow false;
			_homeWorldVariableCtrl ctrlShow false;
		};
		_rankCtrl ctrlSetText "Species";
		_rankVariableCtrl ctrlSetText _species;
		_homeWorldVariableCtrl ctrlSetText _homeWorld;
		_homeWorldCtrl ctrlSetText "Planet";
	};
	_squadVariableCtrl ctrlSetText _squad;
	_battalionVariableCtrl ctrlSetText _battalion;

	if (_idtype == "clone") then {
		_titleCtrl ctrlSetText format ["%1-%2", _rank, _id];
	};
};

	
