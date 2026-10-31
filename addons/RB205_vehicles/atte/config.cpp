class cfgPatches
{
    class RB205_vehicles_atte
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_ATTE"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_atte",
			"RB205_atte_cmd"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgWeapons {};
class cfgVehicles
{
	class Wheeled_APC_F;
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class AnimationSources;
	};
	class 3as_ATTE_Base: APC_Wheeled_01_base_F
	{
		class AnimationSources: AnimationSources
		{
			class ShowATTENuts;
			class ShowATTEIntCommand;
			class ShowATTEIntPassenger;
		};
	};
	class RB205_atte: 3as_ATTE_Base
	{
		ACCESS_TRUE
		displayName = "AT-TE";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY
		CARGO_L
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		#include "\RB205_vehicles\atte\atte_textures.hpp"
		class AnimationSources: AnimationSources
		{
			// inherited from the Marshall (APC_Wheeled_01_base_F), no effect on the AT-TE
			// redefined without base class (not resolvable from here) and without displayName -> hidden in garage
			class showBags { source = "user"; animPeriod = 0.001; initPhase = 0; };
			class showCamonetHull { source = "user"; animPeriod = 0.001; initPhase = 0; };
			class showCamonetTurret { source = "user"; animPeriod = 0.001; initPhase = 0; };
			class showSLATHull { source = "user"; animPeriod = 0.001; initPhase = 0; };
			class showSLATTurret { source = "user"; animPeriod = 0.001; initPhase = 0; };
			// hidden by default (also when spawned via BIS_fnc_initVehicle reset)
			class ShowATTENuts: ShowATTENuts { initPhase = 1; };
			// declared here so RB205_atte_cmd can inherit from them
			class ShowATTEIntCommand: ShowATTEIntCommand {};
			class ShowATTEIntPassenger: ShowATTEIntPassenger {};
		};
	};
	class RB205_atte_cmd: RB205_atte
	{
		ACCESS_TRUE
		displayName = "AT-TE (Command)";
		#include "\RB205_vehicles\atte\atte_textures_cmd.hpp"
		class AnimationSources: AnimationSources
		{
			// command interior as default state, animationList is ignored by the spawner's reset
			class ShowATTEIntCommand: ShowATTEIntCommand { initPhase = 0; };
			class ShowATTEIntPassenger: ShowATTEIntPassenger { initPhase = 1; };
		};
		animationList[] =
		{
			"ShowATTENuts", 1,
			"ShowATTEIntPassenger", 1,
			"ShowATTEIntBackPassenger", 0,
			"ShowATTEIntCommand", 0,
			"ShowATTERebelMod", 1
		};
	};
};