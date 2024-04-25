soundEngineOnExt[] = 
{
	"RB205_vehicles\laat\data\sounds\laat_engine_on_ext.ogg",
	1.4125376,
	1,
	600
};
soundEngineOnInt[] = 
{
	"RB205_vehicles\laat\data\sounds\laat_engine_on_int.ogg",
	1.4125376,
	1,
	600
};
soundEngineOffExt[] = 
{
	"RB205_vehicles\laat\data\sounds\laat_engine_off_ext.ogg",
	0.31622776,
	1
};
soundEngineOffInt[] = 
{
	"RB205_vehicles\laat\data\sounds\laat_engine_off_int.ogg",
	0.79432821,
	1,
	600
};
gearUpExt[] = 
{
	"RB205_vehicles\laat\data\sounds\laat_doors_close_ext.ogg",
	5,
	1,
	1000
};
gearUpInt[] = 
{
	"RB205_vehicles\laat\data\sounds\laat_doors_close_int.ogg",
	5,
	1,
	100
};
gearDownExt[] = 
{
	"RB205_vehicles\laat\data\sounds\laat_doors_open_ext.ogg",
	5,
	1,
	1000
};
gearDownInt[] = 
{
	"RB205_vehicles\laat\data\sounds\laat_doors_close_int.ogg",
	5,
	1,
	100
};
class Sounds
{
	class EngineExt
	{
		sound[] = 
		{
			"RB205_vehicles\laat\data\sounds\laat_engine_ext.ogg",
			1.7782794,
			1,
			800
		};
		frequency = "rotorSpeed";
		volume = "camPos*(rotorSpeed factor[0.4,1])";
	};
	class EngineInt
	{
		sound[] = 
		{
			"RB205_vehicles\laat\data\sounds\laat_engine_int.ogg",
			0.79432821,
			1
		};
		frequency = "rotorSpeed";
		volume = "(1-camPos)*(rotorSpeed factor[0.4,1])";
	};
	class RotorExt
	{
		sound[] = 
		{
			"RB205_vehicles\laat\data\sounds\laat_engine_ext.ogg",
			1,
			1,
			1500
		};
		frequency = "rotorSpeed * (1-rotorThrust/5) * 1.2";
		volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
		cone[] = {1.6,3.1400001,1.6,0.94999999};
	};
	class RotorInt
	{
		sound[] = 
		{
			"RB205_vehicles\laat\data\sounds\laat_engine_int.ogg",
			0.50118721,
			1
		};
		frequency = "rotorSpeed * (1-rotorThrust/5) * 1.2";
		volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9";
	};
	class RotorSwistExt
	{
		sound[] = 
		{
			"",
			0,
			0,
			0
		};
		frequency = 1;
		volume = 0;
	};
	class TransmissionDamageExt_phase1
	{
		sound[] = 
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
			1,
			1,
			150
		};
		frequency = "0.66 + rotorSpeed / 3";
		volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
	};
	class TransmissionDamageExt_phase2
	{
		sound[] = 
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
			1,
			1,
			150
		};
		frequency = "0.66 + rotorSpeed / 3";
		volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
	};
	class TransmissionDamageInt_phase1
	{
		sound[] = 
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
			1,
			1,
			150
		};
		frequency = "0.66 + rotorSpeed / 3";
		volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
	};
	class TransmissionDamageInt_phase2
	{
		sound[] = 
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
			1,
			1,
			150
		};
		frequency = "0.66 + rotorSpeed / 3";
		volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
	};
	class damageAlarmInt
	{
		sound[] = 
		{
			"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
			0.31622776,
			1
		};
		frequency = 1;
		volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
	};
	class damageAlarmExt
	{
		sound[] = 
		{
			"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
			0.22387211,
			1,
			20
		};
		frequency = 1;
		volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
	};
	class rotorLowAlarmInt
	{
		sound[] = 
		{
			"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
			0.31622776,
			1
		};
		frequency = 1;
		volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
	};
	class rotorLowAlarmExt
	{
		sound[] = 
		{
			"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
			0.22387211,
			1,
			20
		};
		frequency = 1;
		volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
	};
	class scrubLandInt
	{
		sound[] = 
		{
			"A3\Sounds_F\vehicles\air\noises\wheelsInt",
			1,
			1,
			100
		};
		frequency = 1;
		volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
	};
	class scrubLandExt
	{
		sound[] = 
		{
			"A3\Sounds_F\dummysound",
			1,
			1,
			100
		};
		frequency = 1;
		volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
	};
	class scrubBuildingInt
	{
		sound[] = 
		{
			"A3\Sounds_F\vehicles\air\noises\wheelsInt",
			1,
			1,
			100
		};
		frequency = 1;
		volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
	};
	class scrubBuildingExt
	{
		sound[] = 
		{
			"A3\Sounds_F\dummysound",
			1,
			1,
			100
		};
		frequency = 1;
		volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
	};
	class scrubTreeInt
	{
		sound[] = 
		{
			"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
			1,
			1,
			100
		};
		frequency = 1;
		volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
	};
	class scrubTreeExt
	{
		sound[] = 
		{
			"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
			1,
			1,
			100
		};
		frequency = 1;
		volume = "camPos * ((scrubTree) factor [0, 0.01])";
	};
	class RainExt
	{
		sound[] = 
		{
			"A3\Sounds_F\vehicles\noises\rain1_ext",
			1,
			1,
			100
		};
		frequency = 1;
		volume = "camPos * (rain - rotorSpeed/2) * 2";
	};
	class RainInt
	{
		sound[] = 
		{
			"A3\Sounds_F\vehicles\noises\rain1_int",
			1,
			1,
			100
		};
		frequency = 1;
		volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
	};
	class SlingLoadDownExt
	{
		sound[] = 
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
			1.2589254,
			1,
			500
		};
		frequency = 1;
		volume = "camPos*(slingLoadActive factor [0,-1])";
	};
	class SlingLoadUpExt
	{
		sound[] = 
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
			1.2589254,
			1,
			500
		};
		frequency = 1;
		volume = "camPos*(slingLoadActive factor [0,1])";
	};
	class SlingLoadDownInt
	{
		sound[] = 
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
			1,
			1,
			500
		};
		frequency = 1;
		volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
	};
	class SlingLoadUpInt
	{
		sound[] = 
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
			1,
			1,
			500
		};
		frequency = 1;
		volume = "(1-camPos)*(slingLoadActive factor [0,1])";
	};
	class WindInt
	{
		sound[] = 
		{
			"A3\Sounds_F\vehicles\air\noises\wind_closed",
			0.13095737,
			1,
			50
		};
		frequency = 1;
		volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
	};
	class GStress
	{
		sound[] = 
		{
			"",
			0,
			0,
			0
		};
		frequency = 1;
		volume = 0;
	};
	class SpeedStress
	{
		sound[] = 
		{
			"",
			0,
			0,
			0
		};
		frequency = 1;
		volume = 0;
	};
};