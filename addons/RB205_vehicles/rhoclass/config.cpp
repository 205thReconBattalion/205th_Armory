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
			"RB205_nuclass"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3AS_Rho_REP_F;
	class RB205_rhoclass: 3AS_Rho_REP_F
	{
		ACCESS_TRUE
		displayName = "Rho-Class Shuttle";
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
					"3as\3as_republic_heli\rho_class\data\hull_rho_co.paa",
					"3as\3as_republic_heli\nu_class\data\hull_front_co.paa",
					"3as\3as_republic_heli\rho_class\data\wings_rho_co.paa",
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
					"3as\3as_republic_heli\rho_class\data\hull_rho_Imp_co.paa",
					"3as\3as_republic_heli\nu_class\data\hull_front_imp_co.paa",
					"3as\3as_republic_heli\rho_class\data\wings_rho_Imp_co.paa",
					"3as\3as_republic_heli\rho_class\data\cockpit_co.paa",
					"3as\3as_republic_heli\rho_class\data\cockpit_interfaces_co.paa",
					"3as\3as_republic_heli\rho_class\data\interior_co.paa",
					"3as\3as_republic_heli\rho_class\data\interior_optional_co.paa"
				};
			};
		};
	};



	class 3AS_Rho_Crate_REP_Transport;
	class RB205_rhoclass_crate_transport: 3AS_Rho_Crate_REP_Transport
	{
		ACCESS_TRUE
		displayName = "Rho-Class Crate (Transport)";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_other";
		editorPreview = "";
		//Textures
		hiddenSelectionsTextures[] =
		{
			"3as\3as_republic_heli\rho_class\data\crate_ext_co.paa",
			"3as\3as_republic_heli\rho_class\data\crate_int_co.paa",
			"3as\3as_republic_heli\rho_class\data\variant_barracks_co.paa",
			"3as\3as_republic_heli\rho_class\data\clone_bed_co.paa",
			"3as\3as_republic_heli\rho_class\data\interior_co.paa"
		};
		class TextureSources
		{
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] = 
				{
					"3as\3as_republic_heli\rho_class\data\crate_ext_co.paa",
					"3as\3as_republic_heli\rho_class\data\crate_int_co.paa",
					"3as\3as_republic_heli\rho_class\data\variant_barracks_co.paa",
					"3as\3as_republic_heli\rho_class\data\clone_bed_co.paa",
					"3as\3as_republic_heli\rho_class\data\interior_co.paa"
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] = 
				{
					"3as\3as_republic_heli\rho_class\data\crate_ext_Imp_co.paa",
					"3as\3as_republic_heli\rho_class\data\crate_int_co.paa",
					"3as\3as_republic_heli\rho_class\data\variant_barracks_co.paa",
					"3as\3as_republic_heli\rho_class\data\clone_bed_co.paa",
					"3as\3as_republic_heli\rho_class\data\interior_co.paa"
				};
			};
		};
	};

	class 3AS_Rho_Crate_REP_Barracks;
	class RB205_rhoclass_crate_barracks: 3AS_Rho_Crate_REP_Barracks
	{
		ACCESS_TRUE
		displayName = "Rho-Class Crate (Barracks)";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_other";
		editorPreview = "";
		//Textures
		hiddenSelectionsTextures[] =
		{
			"3as\3as_republic_heli\rho_class\data\crate_ext_co.paa",
			"3as\3as_republic_heli\rho_class\data\crate_int_co.paa",
			"3as\3as_republic_heli\rho_class\data\variant_barracks_co.paa",
			"3as\3as_republic_heli\rho_class\data\clone_bed_co.paa",
			"3as\3as_republic_heli\rho_class\data\interior_co.paa"
		};
		class TextureSources
		{
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] = 
				{
					"3as\3as_republic_heli\rho_class\data\crate_ext_co.paa",
					"3as\3as_republic_heli\rho_class\data\crate_int_co.paa",
					"3as\3as_republic_heli\rho_class\data\variant_barracks_co.paa",
					"3as\3as_republic_heli\rho_class\data\clone_bed_co.paa",
					"3as\3as_republic_heli\rho_class\data\interior_co.paa"
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] = 
				{
					"3as\3as_republic_heli\rho_class\data\crate_ext_Imp_co.paa",
					"3as\3as_republic_heli\rho_class\data\crate_int_co.paa",
					"3as\3as_republic_heli\rho_class\data\variant_barracks_co.paa",
					"3as\3as_republic_heli\rho_class\data\clone_bed_co.paa",
					"3as\3as_republic_heli\rho_class\data\interior_co.paa"
				};
			};
		};
	};
	
	class 3AS_Rho_Crate_REP_Medical;
	class RB205_rhoclass_crate_medical: 3AS_Rho_Crate_REP_Medical
	{
		ACCESS_TRUE
		displayName = "Rho-Class Crate (Medical)";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_other";
		editorPreview = "";
		//Textures
		hiddenSelectionsTextures[] =
		{
			"3as\3as_republic_heli\rho_class\data\crate_ext_co.paa",
			"3as\3as_republic_heli\rho_class\data\crate_int_co.paa",
			"3as\3as_republic_heli\rho_class\data\variant_barracks_co.paa",
			"3as\3as_republic_heli\rho_class\data\clone_bed_co.paa",
			"3as\3as_republic_heli\rho_class\data\interior_co.paa"
		};
		class TextureSources
		{
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] = 
				{
					"3as\3as_republic_heli\rho_class\data\crate_ext_co.paa",
					"3as\3as_republic_heli\rho_class\data\crate_int_co.paa",
					"3as\3as_republic_heli\rho_class\data\variant_barracks_co.paa",
					"3as\3as_republic_heli\rho_class\data\clone_bed_co.paa",
					"3as\3as_republic_heli\rho_class\data\interior_co.paa"
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] = 
				{
					"3as\3as_republic_heli\rho_class\data\crate_ext_Imp_co.paa",
					"3as\3as_republic_heli\rho_class\data\crate_int_co.paa",
					"3as\3as_republic_heli\rho_class\data\variant_barracks_co.paa",
					"3as\3as_republic_heli\rho_class\data\clone_bed_co.paa",
					"3as\3as_republic_heli\rho_class\data\interior_co.paa"
				};
			};
		};
	};
};