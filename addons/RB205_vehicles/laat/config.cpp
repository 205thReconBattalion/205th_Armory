class cfgPatches
{
    class RB205_vehicles_laat
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_LAAT"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_laat",
			"RB205_laat_lights",
			"RB205_laat_turrets"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgWeapons {};
class cfgVehicles
{
	class 3AS_laat_Base;
	class 3AS_LAAT_LampBase;
	class 3as_LAAT_Mk1: 3AS_laat_Base
	{
		class Components;
	};
	class 3as_LAAT_Mk1Lights: 3AS_LAAT_LampBase
	{
		class Components;
	};
	class 3as_LAAT_Mk2: 3AS_laat_Base
	{
		class Components;
	};

	class RB205_laat: 3as_LAAT_Mk2
	{
		ACCESS_TRUE
		displayName = "LAAT/I";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY
		CARGO_M
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		//Texture
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\laat\data\laat_hull_co.paa",
			"RB205_vehicles\laat\data\laat_wings_co.paa",
			"RB205_vehicles\laat\data\laat_weapons_co.paa",
			"RB205_vehicles\laat\data\laat_weapon_details_co.paa",
			"RB205_vehicles\laat\data\laat_interior_co.paa"
		};
		class TextureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\laat\data\laat_hull_co.paa",
					"RB205_vehicles\laat\data\laat_wings_co.paa",
					"RB205_vehicles\laat\data\laat_weapons_co.paa",
					"RB205_vehicles\laat\data\laat_weapon_details_co.paa",
					"RB205_vehicles\laat\data\laat_interior_co.paa"
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
					"3AS\3as_Laat\LAATI\data\Hull_CO.paa",
					"3AS\3as_Laat\LAATI\data\wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\interior_CO.paa"
				};
			};
			class Republic_91
			{
				displayName = "Grand Army of the Republic - 91st";
				author = "3AS";
				textures[] =
				{
					"3AS\3as_Laat\LAATI\data\Hull_91_CO.paa",
					"3AS\3as_Laat\LAATI\data\wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\interior_CO.paa"
				};
			};
			class Republic_ARC
			{
				displayName = "Grand Army of the Republic - ARC";
				author = "3AS";
				textures[] =
				{
					"3AS\3as_Laat\LAATI\data\hull_arc_co.paa",
					"3AS\3as_Laat\LAATI\data\wings_arc_co.paa",
					"3AS\3as_Laat\LAATI\data\weapons_arc_co.paa",
					"3AS\3as_Laat\LAATI\data\weapon_details_co.paa",
					"3AS\3as_Laat\LAATI\data\interior_co.paa"
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] =
				{
					"3AS\3as_Laat\LAATI\data\Hull_Imp_CO.paa",
					"3AS\3as_Laat\LAATI\data\wings_Imp_CO.paa",
					"3AS\3as_Laat\LAATI\data\weapons_Imp_CO.paa",
					"3AS\3as_Laat\LAATI\data\weapon_Details_Imp_CO.paa",
					"3AS\3as_Laat\LAATI\data\interior_Imp_CO.paa"
				};
			};
		};
		//Weapons
		#include "\RB205_vehicles\laat\laat_weapons.hpp"
		#include "\RB205_vehicles\laat\laat_sounds.hpp"
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};
	class RB205_laat_lights: 3as_LAAT_Mk1Lights
	{
		ACCESS_TRUE
		displayName = "LAAT/I (Lights)";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY
		CARGO_M
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		//Textures
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\laat\data\laat_hull_co.paa",
			"RB205_vehicles\laat\data\laat_wings_co.paa",
			"RB205_vehicles\laat\data\laat_weapons_co.paa",
			"RB205_vehicles\laat\data\laat_weapon_details_co.paa",
			"RB205_vehicles\laat\data\laat_interior_co.paa"
		};
		class TextureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\laat\data\laat_hull_co.paa",
					"RB205_vehicles\laat\data\laat_wings_co.paa",
					"RB205_vehicles\laat\data\laat_weapons_co.paa",
					"RB205_vehicles\laat\data\laat_weapon_details_co.paa",
					"RB205_vehicles\laat\data\laat_interior_co.paa"
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
					"3AS\3as_Laat\LAATI\data\Hull_CO.paa",
					"3AS\3as_Laat\LAATI\data\wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\interior_CO.paa"
				};
			};
			class Republic_91
			{
				displayName = "Grand Army of the Republic - 91st";
				author = "3AS";
				textures[] =
				{
					"3AS\3as_Laat\LAATI\data\Hull_91_CO.paa",
					"3AS\3as_Laat\LAATI\data\wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\interior_CO.paa"
				};
			};
			class ARC
			{
				displayName = "Grand Army of the Republic - ARC";
				author = "3AS";
				textures[] =
				{
					"3AS\3as_Laat\LAATI\data\hull_arc_co.paa",
					"3AS\3as_Laat\LAATI\data\wings_arc_co.paa",
					"3AS\3as_Laat\LAATI\data\weapons_arc_co.paa",
					"3AS\3as_Laat\LAATI\data\weapon_details_co.paa",
					"3AS\3as_Laat\LAATI\data\interior_co.paa"
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] =
				{
					"3AS\3as_Laat\LAATI\data\Hull_Imp_CO.paa",
					"3AS\3as_Laat\LAATI\data\wings_Imp_CO.paa",
					"3AS\3as_Laat\LAATI\data\weapons_Imp_CO.paa",
					"3AS\3as_Laat\LAATI\data\weapon_Details_Imp_CO.paa",
					"3AS\3as_Laat\LAATI\data\interior_Imp_CO.paa"
				};
			};
		};
		//Weapons
		#include "\RB205_vehicles\laat\laat_weapons.hpp"
		#include "\RB205_vehicles\laat\laat_sounds.hpp"
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};
	class RB205_laat_turrets: 3as_LAAT_Mk1
	{
		ACCESS_TRUE
		displayName = "LAAT/I (Turrets)";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY
		CARGO_M
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		//Textures
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\laat\data\laat_hull_co.paa",
			"RB205_vehicles\laat\data\laat_wings_co.paa",
			"RB205_vehicles\laat\data\laat_weapons_co.paa",
			"RB205_vehicles\laat\data\laat_weapon_details_co.paa",
			"RB205_vehicles\laat\data\laat_interior_co.paa"
		};
		class TextureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\laat\data\laat_hull_co.paa",
					"RB205_vehicles\laat\data\laat_wings_co.paa",
					"RB205_vehicles\laat\data\laat_weapons_co.paa",
					"RB205_vehicles\laat\data\laat_weapon_details_co.paa",
					"RB205_vehicles\laat\data\laat_interior_co.paa"
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
					"3AS\3as_Laat\LAATI\data\Hull_CO.paa",
					"3AS\3as_Laat\LAATI\data\wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\interior_CO.paa"
				};
			};
			class Republic_91
			{
				displayName = "Grand Army of the Republic - 91st";
				author = "3AS";
				textures[] =
				{
					"3AS\3as_Laat\LAATI\data\Hull_91_CO.paa",
					"3AS\3as_Laat\LAATI\data\wings_CO.paa",
					"3AS\3as_Laat\LAATI\data\weapons_CO.paa",
					"3AS\3as_Laat\LAATI\data\weapon_Details_CO.paa",
					"3AS\3as_Laat\LAATI\data\interior_CO.paa"
				};
			};
			class ARC
			{
				displayName = "Grand Army of the Republic - ARC";
				author = "3AS";
				textures[] =
				{
					"3AS\3as_Laat\LAATI\data\hull_arc_co.paa",
					"3AS\3as_Laat\LAATI\data\wings_arc_co.paa",
					"3AS\3as_Laat\LAATI\data\weapons_arc_co.paa",
					"3AS\3as_Laat\LAATI\data\weapon_details_co.paa",
					"3AS\3as_Laat\LAATI\data\interior_co.paa"
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] =
				{
					"3AS\3as_Laat\LAATI\data\Hull_Imp_CO.paa",
					"3AS\3as_Laat\LAATI\data\wings_Imp_CO.paa",
					"3AS\3as_Laat\LAATI\data\weapons_Imp_CO.paa",
					"3AS\3as_Laat\LAATI\data\weapon_Details_Imp_CO.paa",
					"3AS\3as_Laat\LAATI\data\interior_Imp_CO.paa"
				};
			};
		};
		//Weapons
		#include "\RB205_vehicles\laat\laat_weapons.hpp"
		#include "\RB205_vehicles\laat\laat_sounds.hpp"
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};
};