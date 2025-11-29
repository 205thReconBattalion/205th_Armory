class cfgPatches
{
    class RB205_vehicles_rhoclass
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_Republic_Heli_Rho"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_rhoclass",
			"RB205_rhoclass_crate_transport",
			"RB205_rhoclass_crate_barracks",
			"RB205_rhoclass_crate_medical"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"
#include "\RB205_vehicles\rhoclass\rhoclass_crate_textures.hpp"

class cfgVehicles
{
	class 3AS_Rho_REP_F;
	class RB205_rhoclass: 3AS_Rho_REP_F
	{
		ACCESS_TRUE
		displayName = "Rho-Class Shuttle";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY
		CARGO_L
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		#include "\RB205_vehicles\rhoclass\rhoclass_textures.hpp"
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};



	class 3AS_Rho_Crate_REP_Transport;
	class RB205_rhoclass_crate_transport: 3AS_Rho_Crate_REP_Transport
	{
		ACCESS_TRUE
		displayName = "Rho-Class Crate (Transport)";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		VEH_INVENTORY
		CARGO_L
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_other";
		editorPreview = "";
		RHO_CRATE_TEXTURES("RB205_vehicles\rhoclass\data\rhoclass_crate_ext_co.paa")
	};

	class 3AS_Rho_Crate_REP_Barracks;
	class RB205_rhoclass_crate_barracks: 3AS_Rho_Crate_REP_Barracks
	{
		ACCESS_TRUE
		displayName = "Rho-Class Crate (Barracks)";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		VEH_INVENTORY
		CARGO_L
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_other";
		editorPreview = "";
		RHO_CRATE_TEXTURES("RB205_vehicles\rhoclass\data\rhoclass_crate_ext_co.paa")
	};
	
	class 3AS_Rho_Crate_REP_Medical;
	class RB205_rhoclass_crate_medical: 3AS_Rho_Crate_REP_Medical
	{
		ACCESS_TRUE
		displayName = "Rho-Class Crate (Medical)";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		VEH_INVENTORY
		CARGO_L
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_other";
		editorPreview = "";
		RHO_CRATE_TEXTURES("RB205_vehicles\rhoclass\data\rhoclass_crate_ext_med_co.paa")
	};
};