class cfgPatches
{
    class RB205_vehicles_barc
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
            "ls_vehicles_ground",
            "3AS_LightVics_Barc"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] =
		{
			"RB205_barc",
			"RB205_barc_sidecar"
		};
		weapons[] =
		{
			"3AS_BARC_repeater",
			"RB205_barc_repeater_he"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

#define LAATC_LIFTABLE \
    tas_canBlift = 2; \
    tas_liftVars = "[[[[0,-3.7,-6]],[[-1,-3.7,-6],[1,-3.7,-6]]], [0.5,0.25], [-0.1,0.05]]";

#define BARC_SOUND \
    soundGetIn[] =	{"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",0.56234133,1}; \
    soundGetOut[] =	{"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",0.56234133,1,40}; \
    soundDammage[] = {"",0.56234133,1}; \
    soundEngineOnInt[] =  {"\ls\core\addons\sounds\vehicles\barc\start.wss","db-8",1}; \
    soundEngineOnExt[] =  {"\ls\core\addons\sounds\vehicles\barc\start.wss","db-7",1,200}; \
    soundEngineOffInt[] = {"\ls\core\addons\sounds\vehicles\speeder\end.wss","db-8",1}; \
    soundEngineOffExt[] = {"\ls\core\addons\sounds\vehicles\speeder\end.wss","db-7",1,200}; \
    soundGear[] = {"\ls\core\addons\sounds\vehicles\barc\gear.wss","db-8",1}; \
    buildCrash0[] =	{"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1,1,200}; \
    buildCrash1[] =	{"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1,1,200}; \
    buildCrash2[] =	{"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1,1,200}; \
    buildCrash3[] =	{"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1,1,200}; \
    soundBuildingCrash[]=	{"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25}; \
    WoodCrash0[]=	{"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1,1,200}; \
    WoodCrash1[]=	{"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1,1,200}; \
    WoodCrash2[]=	{"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1,1,200}; \
    WoodCrash3[]=	{"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1,1,200}; \
    soundWoodCrash[]=	{"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25}; \
    armorCrash0[]=	{"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1,1,200}; \
    armorCrash1[]=	{"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1,1,200}; \
    armorCrash2[]=	{"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1,1,200}; \
    armorCrash3[]=	{"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1,1,200}; \
    soundArmorCrash[]=	{"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25}; \
    class Sounds \
    { \
        class Idle_ext \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\idle.wss","db-13",1,150}; \
            frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2"; \
            volume="engineOn*camPos*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))"; \
        }; \
        class Engine \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\engine_1.wss","db-11",1,200}; \
            frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2"; \
            volume="engineOn*camPos*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))"; \
        }; \
        class Engine1_ext \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\engine_2.wss","db-9",1,240}; \
            frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2"; \
            volume="engineOn*camPos*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))"; \
        }; \
        class Engine2_ext \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\engine_3.wss","db-8",1,280}; \
            frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2"; \
            volume="engineOn*camPos*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))"; \
        }; \
        class Engine3_ext \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\engine_4.wss","db-7",1,320}; \
            frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2"; \
            volume="engineOn*camPos*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))"; \
        }; \
        class Engine4_ext \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\engine_5.wss","db-6",1,360}; \
            frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.2"; \
            volume="engineOn*camPos*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))"; \
        }; \
        class Engine5_ext \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\engine_5.wss","db-5",1,420}; \
            frequency="0.95	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.15"; \
            volume="engineOn*camPos*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])"; \
        }; \
        class IdleThrust \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\idle.wss","db-6",1,200}; \
            frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2"; \
            volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))"; \
        }; \
        class EngineThrust \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\exhaust_1.wss","db-5",1,250}; \
            frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2"; \
            volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))"; \
        }; \
        class Engine1_Thrust_ext \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\exhaust_2.wss","db-4",1,280}; \
            frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2"; \
            volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))"; \
        }; \
        class Engine2_Thrust_ext \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\exhaust_3.wss","db-3",1,320}; \
            frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2"; \
            volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))"; \
        }; \
        class Engine3_Thrust_ext \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\exhaust_4.wss","db-2",1,360}; \
            frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2"; \
            volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))"; \
        }; \
        class Engine4_Thrust_ext \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\exhaust_5.wss","db0",1,400}; \
            frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.3"; \
            volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))"; \
        }; \
        class Engine5_Thrust_ext \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\exhaust_5.wss","db2",1,450}; \
            frequency="0.9	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.2"; \
            volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])"; \
        }; \
        class Idle_int \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\idle.wss","db-15",1}; \
            frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2"; \
            volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))"; \
        }; \
        class Engine_int \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\engine_1.wss","db-14",1}; \
            frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2"; \
            volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))"; \
        }; \
        class Engine1_int \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\engine_2.wss","db-12",1}; \
            frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2"; \
            volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))"; \
        }; \
        class Engine2_int \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\engine_3.wss","db-11",1}; \
            frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2"; \
            volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))"; \
        }; \
        class Engine3_int \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\engine_4.wss","db-10",1}; \
            frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2"; \
            volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))"; \
        }; \
        class Engine4_int \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\engine_5.wss","db-9",1}; \
            frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.2"; \
            volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))"; \
        }; \
        class Engine5_int \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\engine_5.wss","db-6",1}; \
            frequency="0.95	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.15"; \
            volume="engineOn*(1-camPos)*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])"; \
        }; \
        class IdleThrust_int \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\idle.wss","db-10",1}; \
            frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2"; \
            volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))"; \
        }; \
        class EngineThrust_int \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\exhaust_1.wss","db-9",1}; \
            frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2"; \
            volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))"; \
        }; \
        class Engine1_Thrust_int \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\exhaust_2.wss","db-8",1}; \
            frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2"; \
            volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))"; \
        }; \
        class Engine2_Thrust_int \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\exhaust_3.wss","db-7",1}; \
            frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2"; \
            volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))"; \
        }; \
        class Engine3_Thrust_int \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\exhaust_4.wss","db-6",1}; \
            frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2"; \
            volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))"; \
        }; \
        class Engine4_Thrust_int \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\exhaust_5.wss","db-5",1}; \
            frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.3"; \
            volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))"; \
        }; \
        class Engine5_Thrust_int \
        { \
            sound[] = {"\ls\core\addons\sounds\vehicles\speeder\engine\exhaust_5.wss","db-4",1}; \
            frequency="0.9	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.2"; \
            volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])"; \
        }; \
        class Movement \
        { \
            sound="soundEnviron"; \
            frequency="1"; \
            volume="0"; \
        }; \
        class TiresRockOut \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",0.50118721,1,60}; \
            frequency="1"; \
            volume="camPos*rock*(speed factor[2, 20])"; \
        }; \
        class TiresSandOut \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",0.50118721,1,60}; \
            frequency="1"; \
            volume="camPos*sand*(speed factor[2, 20])"; \
        }; \
        class TiresGrassOut \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",0.50118721,1,60}; \
            frequency="1"; \
            volume="camPos*grass*(speed factor[2, 20])"; \
        }; \
        class TiresMudOut \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",0.50118721,1,60}; \
            frequency="1"; \
            volume="camPos*mud*(speed factor[2, 20])"; \
        }; \
        class TiresGravelOut \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",0.50118721,1,60}; \
            frequency="1"; \
            volume="camPos*gravel*(speed factor[2, 20])"; \
        }; \
        class TiresAsphaltOut \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",0.50118721,1,60}; \
            frequency="1"; \
            volume="camPos*asphalt*(speed factor[2, 20])"; \
        }; \
        class NoiseOut \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",0.39810717,1,90}; \
            frequency="1"; \
            volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])"; \
        }; \
        class TiresRockIn \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.50118721,1}; \
            frequency="1"; \
            volume="(1-camPos)*rock*(speed factor[2, 20])"; \
        }; \
        class TiresSandIn \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.50118721,1}; \
            frequency="1"; \
            volume="(1-camPos)*sand*(speed factor[2, 20])"; \
        }; \
        class TiresGrassIn \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.50118721,1}; \
            frequency="1"; \
            volume="(1-camPos)*grass*(speed factor[2, 20])"; \
        }; \
        class TiresMudIn \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.50118721,1}; \
            frequency="1"; \
            volume="(1-camPos)*mud*(speed factor[2, 20])"; \
        }; \
        class TiresGravelIn \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.50118721,1}; \
            frequency="1"; \
            volume="(1-camPos)*gravel*(speed factor[2, 20])"; \
        }; \
        class TiresAsphaltIn \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.50118721,1}; \
            frequency="1"; \
            volume="(1-camPos)*asphalt*(speed factor[2, 20])"; \
        }; \
        class NoiseIn \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.25118864,1}; \
            frequency="1"; \
            volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)"; \
        }; \
        class breaking_ext_road \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.70794576,1,80}; \
            frequency=1; \
            volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])"; \
        }; \
        class acceleration_ext_road \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80}; \
            frequency=1; \
            volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])"; \
        }; \
        class turn_left_ext_road \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80}; \
            frequency=1; \
            volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])"; \
        }; \
        class turn_right_ext_road \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80}; \
            frequency=1; \
            volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])"; \
        }; \
        class breaking_ext_dirt \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.70794576,1,60}; \
            frequency=1; \
            volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])"; \
        }; \
        class acceleration_ext_dirt \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",0.70794576,1,60}; \
            frequency=1; \
            volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])"; \
        }; \
        class turn_left_ext_dirt \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60}; \
            frequency=1; \
            volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])"; \
        }; \
        class turn_right_ext_dirt \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60}; \
            frequency=1; \
            volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])"; \
        }; \
        class breaking_int_road \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.31622776,1}; \
            frequency=1; \
            volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])"; \
        }; \
        class acceleration_int_road \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1}; \
            frequency=1; \
            volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])"; \
        }; \
        class turn_left_int_road \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1}; \
            frequency=1; \
            volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])"; \
        }; \
        class turn_right_int_road \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1}; \
            frequency=1; \
            volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])"; \
        }; \
        class breaking_int_dirt \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.31622776,1}; \
            frequency=1; \
            volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])"; \
        }; \
        class acceleration_int_dirt \
        { \
            sound[]= \
            {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",0.31622776,1}; \
            frequency=1; \
            volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])"; \
        }; \
        class turn_left_int_dirt \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.31622776,1}; \
            frequency=1; \
            volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])"; \
        }; \
        class turn_right_int_dirt \
        { \
            sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.31622776,1}; \
            frequency=1; \
            volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])"; \
        }; \
    };

#define BARC_FLIP \
    class UserActions \
    { \
        class PressXToFlipTheThing \
        { \
            displayNameDefault="Flip Speeder"; \
            displayName="Flip Speeder"; \
            position=""; \
            radius=2.7; \
            onlyForPlayer=1; \
            condition="alive this AND not canmove this AND (count crew this == 0 || isAutonomous this)"; \
            statement="this setpos [getpos this select 0,getpos this select 1,(getpos this select 2)+1]"; \
        }; \
    };

class cfgVehicles
{
	/*class ls_barc_base;
	class RB205_barc: ls_barc_base
	{
		ACCESS_TRUE
		displayName = "BARC Mk.1";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		VEH_INVENTORY_LIGHT
		CARGO_1
        LAATC_LIFTABLE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Textures
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\barc\data\barc_body.paa",
			"RB205_vehicles\barc\data\barc_weapons.paa",
			"RB205_vehicles\barc\data\barc_dashboard.paa"
		};
		class textureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\barc\data\barc_body.paa",
					"RB205_vehicles\barc\data\barc_weapons.paa",
					"RB205_vehicles\barc\data\barc_dashboard.paa"
				};
				factions[] =
				{
					"RB205"
				};
			};
		};
		weapons[] =
		{
			"RB205_barc_repeater"
		};
		magazines[] =
		{
			"RB205_barc_mag",
			"RB205_barc_mag",
			"RB205_barc_mag",
			"RB205_barc_mag",
            "RB205_barc_mag"
		};
		BARC_SOUND
		BARC_FLIP

	};*/

	class 3AS_Barc;
	class 3AS_BarcSideCar;

	class RB205_barc: 3AS_Barc
	{
		ACCESS_TRUE
		displayName = "BARC Speeder";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		VEH_INVENTORY_LIGHT
		CARGO_1
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Textures
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\barc\data\barc2.paa"
		};
		class textureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\barc\data\barc2.paa"
				};
				factions[] =
				{
					"RB205"
				};
			};
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] =
				{
					"3AS\3AS_LightVics\3AS_BARC\data\barc_rep_co.paa"
				};
			};
		};
		weapons[] =
		{
			"RB205_barc_repeater"
		};
		magazines[] =
		{
			"RB205_barc_mag",
			"RB205_barc_mag",
			"RB205_barc_mag",
			"RB205_barc_mag",
            "RB205_barc_mag"
		};
		BARC_SOUND
		BARC_FLIP
	};
    class RB205_barc2: RB205_barc
    {
        scope = 1;
    };
	class RB205_barc_sidecar: 3AS_BarcSideCar
	{
		ACCESS_TRUE
		displayName = "BARC Speeder (Sidecar)";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		VEH_INVENTORY_LIGHT
		CARGO_1
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Textures
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\barc\data\barc2.paa",
			"RB205_vehicles\barc\data\barc2_sidecar.paa"
		};
		class textureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\barc\data\barc2.paa",
					"RB205_vehicles\barc\data\barc2_sidecar.paa"
				};
				factions[] =
				{
					"RB205"
				};
			};
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] =
				{
					"3AS\3AS_LightVics\3AS_BARC\data\barc_rep_co.paa",
					"3AS\3AS_LightVics\3AS_BARC\data\sidecar\GUNNER_co.paa"
				};
			};
		};
		weapons[] =
		{
			"RB205_barc_repeater"
		};
		magazines[] =
		{
			"RB205_barc_mag",
			"RB205_barc_mag",
			"RB205_barc_mag",
			"RB205_barc_mag",
            "RB205_barc_mag"
		};
		BARC_SOUND
		BARC_FLIP
	};
    class RB205_barc2_sidecar: RB205_barc_sidecar
    {
        scope = 1;
    };
};
class cfgWeapons
{
	class CannonCore;
	class 3AS_BARC_repeater: CannonCore
	{
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	class RB205_barc_repeater: 3AS_BARC_repeater
	{
		displayName = "BARC Repeater";
		magazines[] =
		{
			"RB205_barc_mag"
		};
		class manual: manual
		{
			class StandardSound
			{
				begin1[] = {"\ls\core\addons\sounds\vehicles\barc\shot.wss",1.12202,1,1200};
				soundBegin[] = {"begin1",1};
			};
		};
		class close: close
		{
			class StandardSound
			{
				begin1[] = {"\ls\core\addons\sounds\vehicles\barc\shot.wss",1.12202,1,1200};
				soundBegin[] = {"begin1",1};
			};
		};
		class short: short
		{
			class StandardSound
			{
				begin1[] = {"\ls\core\addons\sounds\vehicles\barc\shot.wss",1.12202,1,1200};
				soundBegin[] = {"begin1",1};
			};
		};
		class medium: medium
		{
			class StandardSound
			{
				begin1[] = {"\ls\core\addons\sounds\vehicles\barc\shot.wss",1.12202,1,1200};
				soundBegin[] = {"begin1",1};
			};
		};
		class far: far
		{
			class StandardSound
			{
				begin1[] = {"\ls\core\addons\sounds\vehicles\barc\shot.wss",1.12202,1,1200};
				soundBegin[] = {"begin1",1};
			};
		};
	};

	class ls_speeder_AP;
	class RB205_barc_repeater_he: ls_speeder_AP
	{
		displayName = "BARC Repeater (HE)";
		magazines[] =
		{
			"RB205_barc_he_mag"
		};
	};
};
class cfgMagazines
{
	class 3AS_BARC_Mag;
	class RB205_barc_mag: 3AS_BARC_Mag
	{
		ammo = "RB205_barc_ammo";
		count = 1000;
	};

	class ls_50Rnd_speederHE_belt;
	class RB205_barc_he_mag: ls_50Rnd_speederHE_belt
	{
		ammo = "RB205_barc_he_ammo";
		count = 75;
	};
};
class cfgAmmo
{
	class 3AS_Barc_Ammo;
	class RB205_barc_ammo: 3AS_Barc_Ammo
	{
		hit = 100;//200
		indirectHit = 8;
		indirectHitRange = 0.4;//0.4
		caliber = 4;//7
		class CamShakeFire
		{
			distance = 0;
			duration = 0;
			frequency = 0;
			power = 0;
		};
	};

	class ls_speeder_HE;
	class RB205_barc_he_ammo: ls_speeder_HE
	{
		hit = 20;
		indirectHit = 10;
		indirectHitRange = 3;
		caliber = 2;
	};
};