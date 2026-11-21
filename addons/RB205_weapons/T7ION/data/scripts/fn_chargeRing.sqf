// Draws the charge ring: its 8 segments light up one after the other, clockwise from the top.
params ["_unit", "_progress", "_color"];
_color params ["_red", "_green", "_blue"];

private _display = uiNamespace getVariable ["RB205_T7ION_chargeRing", displayNull];
if (isNull _display) exitWith {};

private _inOptics = cameraView == "GUNNER";

// Size of the segment texture as a share of the screen height. 0.12 lays the ring over the
// crosshair, 0.35 puts it around the reticle of the scope. Adjust these two values if needed.
private _height = ([0.12, 0.35] select _inOptics) * safeZoneH;
private _width = _height * pixelW / pixelH;

// Without optics the crosshair follows the weapon, in the scope the reticle stays in the centre.
private _center = [0.5, 0.5];
if (!_inOptics) then {
	private _aimPoint = eyePos _unit vectorAdd ((_unit weaponDirection currentWeapon _unit) vectorMultiply 500);
	private _onScreen = worldToScreen ASLToAGL _aimPoint;
	if (_onScreen isNotEqualTo []) then {
		_center = _onScreen;
	};
};
_center params ["_centerX", "_centerY"];

for "_i" from 0 to 7 do {
	private _segment = _display displayCtrl (20510 + _i);
	private _fill = ((_progress * 8) - _i) max 0 min 1;

	_segment ctrlSetPosition [_centerX - _width / 2, _centerY - _height / 2, _width, _height];
	_segment ctrlSetTextColor [
		1 + (_red - 1) * _fill,
		1 + (_green - 1) * _fill,
		1 + (_blue - 1) * _fill,
		0.28 + 0.62 * _fill
	];
	_segment ctrlCommit 0;
};
