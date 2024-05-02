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
		author = "205th Recon Battalion";
		crew = "RB205_clone_plt_trooper";
		VEH_INVENTORY
		CARGO_XL
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
				/*factions[] =
				{
					"RB205"
				};*/
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

	/*class 3AS_Nuclass;
	class RB205_nuclass: 3AS_Nuclass
	{
		ACCESS_TRUE
		displayName = "Nu-Class Shuttle";
		author = "205th Recon Battalion";
		crew = "RB205_clone_plt_trooper";
		VEH_INVENTORY
		CARGO_XL
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		//Textures
		hiddenSelectionsMaterials[]=
		{
			"RB205_vehicles\nuClass\data\nuClass_exterior.rvmat",
			"RB205_vehicles\nuClass\data\nuClass_wings.rvmat",
			"3as\3as_Nu\data\NU_Interior.rvmat",
			"RB205_vehicles\nuClass\data\nuClass_cockpit_doors.rvmat"
		};
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\nuClass\data\nuClass_exterior_co.paa",
			"RB205_vehicles\nuClass\data\nuClass_wings_co.paa",
			"3as\3as_Nu\data\interior_co.paa",
			"RB205_vehicles\nuClass\data\nuClass_cockpit_doors_co.paa"
		};
		class TextureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\nuClass\data\nuClass_exterior_co.paa",
					"RB205_vehicles\nuClass\data\nuClass_wings_co.paa",
					"3as\3as_Nu\data\interior_co.paa",
					"RB205_vehicles\nuClass\data\nuClass_cockpit_doors_co.paa"
				};
				factions[] =
				{
					"RB205"
				};
			};
			class RB205_chimaera
			{
				displayName = "205th Recon Battalion - Chimaera";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\nuClass\data\nuClass2_exterior_co.paa",
					"RB205_vehicles\nuClass\data\nuClass2_wings_co.paa",
					"3as\3as_Nu\data\interior_co.paa",
					"RB205_vehicles\nuClass\data\nuClass2_cockpit_doors_co.paa"
				};
			};
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] =
				{
					"3AS\3as_nu\data\exterior_CO.paa",
					"3AS\3as_nu\data\wings_CO.paa",
					"3as\3as_Nu\data\interior_co.paa",
					"3as\3as_Nu\data\cockpit_doors_co.paa"
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] =
				{
					"3AS\3as_nu\data\exterior_blank_CO.paa",
					"3AS\3as_nu\data\wings_blank_CO.paa",
					"3as\3as_Nu\data\interior_co.paa",
					"3as\3as_Nu\data\cockpit_doors_blank_co.paa"
				};
			};
		};
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};*/
};