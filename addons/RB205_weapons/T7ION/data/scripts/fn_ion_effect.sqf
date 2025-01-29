_AOE = 15;

{
	_x setHit ["light_1_hitpoint", 0.97]; //all possible light hitpoints
	_x setHit ["light_2_hitpoint", 0.97]; //no lights escape this
	_x setHit ["light_3_hitpoint", 0.97];
	_x setHit ["light_4_hitpoint", 0.97];
	_bbr = boundingBoxReal vehicle _x;
	_p1 = _bbr select 0;
	_p2 = _bbr select 1;
	_maxHeight = abs ((_p2 select 2) - (_p1 select 2));
	_spark_sound = ["spark1","spark11","spark2","spark22","spark4"] call BIS_fnc_selectRandom;
	_x say3D _spark_sound;
	//_spark_poz_rel = [getPos _lamp select 0,getPos _lamp select 1,_maxHeight-0.5];
	_spark_poz_rel = (_maxHeight/2)-0.45;

	_spark_type = ["white","orange"] call BIS_fnc_selectRandom;

	_drop = 0.001+(random 0.05);
	_scantei_spark = "#particlesource" createVehicleLocal (getPosATL _x);

	if (_spark_type=="orange") then 
	{
		_scantei_spark setParticleCircle [0, [0, 0, 0]];
		_scantei_spark setParticleRandom [1, [0.1, 0.1, 0.1], [0, 0, 0], 0, 0.25, [0, 0, 0, 0], 0, 0];
		_scantei_spark setParticleParams [["\A3\data_f\proxies\muzzle_flash\muzzle_flash_silencer.p3d", 1, 0, 1], "", "SpaceObject", 1, 1, [0, 0,_spark_poz_rel], [0, 0, 0], 0, 15, 7.9, 0, [0.5,0.5,0.05], [[1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 0]], [0.08], 1, 0, "", "", _x,0,true,0.3,[[0,0,0,0]]];
		_scantei_spark setDropInterval _drop;
		sleep 1;
		deleteVehicle _scantei_spark;
	} else
	{
		//hint "alb";
		_scantei_spark setParticleCircle [0, [0, 0, 0]];
		_scantei_spark setParticleRandom [1, [0.05, 0.05, 0.1], [5, 5, 3], 0, 0.0025, [0, 0, 0, 0], 0, 0];
		_scantei_spark setParticleParams [["\A3\data_f\proxies\muzzle_flash\muzzle_flash_silencer.p3d", 1, 0, 1], "", "SpaceObject", 1, 1, [0, 0,_spark_poz_rel], [0, 0, 0], 0, 20, 7.9, 0, [0.5,0.5,0.05], [[1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 0]], [0.08], 1, 0, "", "", _x,0,true,0.3,[[0,0,0,0]]];
		_scantei_spark setDropInterval 0.001;
		sleep 0.1 +(random 0.4);
		deleteVehicle _scantei_spark;
	};
} forEach (nearestObjects [_this, [
	"Lamps_base_F", //These are all the lights' base classes
	"PowerLines_base_F",
	"PowerLines_base_F",
	"Land_TTowerBig_1_F",
	"Land_TTowerBig_2_F",
	"Land_PowerPoleWooden_L_F",
	"Land_PowerPoleWooden_F",
	"Land_PowerLine_distributor_F",
	"Land_PowLines_Transformer_F",
	"Land_HighVoltageColumn_F",
	"Land_fs_roof_F", 
	"Land_LightHouse_F"
], _AOE]);