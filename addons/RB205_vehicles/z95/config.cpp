class cfgPatches
{
    class RB205_vehicles_z95
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3as_Z95_base"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_z95"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3as_Z95_Republic;

	class RB205_z95: 3as_Z95_Republic
	{
		ACCESS_TRUE
		displayName = "Z-95 Headhunter";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY_LIGHT
		CARGO_NONE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		//Textures
		hiddenselectionstextures[] =
		{
			"RB205_vehicles\z95\data\z95_co.paa",
			"3AS\3as_Z95\Data\cockpit_co.paa",
			"3AS\3as_saber\data\glass\glass_ca"
		};
		class TextureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\z95\data\z95_co.paa",
					"3AS\3as_Z95\Data\cockpit_co.paa"
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
					"3AS\3as_Z95\data\body_co.paa",
					"3AS\3as_Z95\data\cockpit_co.paa"
				};
			};
		};
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};
};