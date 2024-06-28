class cfgPatches
{
    class RB205_vehicles_nuclass
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_Republic_Heli_Nu"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_nuclass"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3AS_Nu_REP_F;
	class RB205_nuclass: 3AS_Nu_REP_F
	{
		ACCESS_TRUE
		displayName = "Nu-Class Shuttle";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY
		CARGO_L
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
		//Textures		
		class TextureSources
		{
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] =
				{
					"3as\3as_republic_heli\nu_class\data\hull_co.paa",
					"3as\3as_republic_heli\nu_class\data\hull_front_co.paa",
					"3as\3as_republic_heli\nu_class\data\wings_co.paa",
					"3as\3as_republic_heli\rho_class\data\cockpit_co.paa",
					"3as\3as_republic_heli\rho_class\data\cockpit_interfaces_co.paa",
					"3as\3as_republic_heli\rho_class\data\interior_co.paa",
					"3as\3as_republic_heli\rho_class\data\interior_optional_co.paa"
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] =
				{
					"3as\3as_republic_heli\nu_class\data\hull_co.paa",
					"3as\3as_republic_heli\nu_class\data\hull_front_co.paa",
					"3as\3as_republic_heli\nu_class\data\wings_co.paa",
					"3as\3as_republic_heli\rho_class\data\cockpit_co.paa",
					"3as\3as_republic_heli\rho_class\data\cockpit_interfaces_co.paa",
					"3as\3as_republic_heli\rho_class\data\interior_co.paa",
					"3as\3as_republic_heli\rho_class\data\interior_optional_co.paa"
				};
			};
		};
	};
};