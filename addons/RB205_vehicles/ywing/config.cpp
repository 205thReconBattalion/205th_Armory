class cfgPatches
{
    class RB205_vehicles_ywing
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_BTLB_Bomber"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_ywing"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3AS_BTLB_Bomber_ShadowLeader;
	class RB205_ywing: 3AS_BTLB_Bomber_ShadowLeader
	{
		ACCESS_TRUE
		displayName = "BTL-B Y-Wing Bomber";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY_LIGHT
		CARGO_NONE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		//Texture
		hiddenSelectionsTextures[]=
		{
			"RB205_vehicles\ywing\data\ywing_co.paa",
			"3as\3AS_btlb\data\detail_co.paa",
			"3as\3AS_btlb\data\interior_co.paa"
		};
		class TextureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\ywing\data\ywing_co.paa",
					"3as\3AS_btlb\data\detail_co.paa",
					"3as\3AS_btlb\data\interior_co.paa"
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
					"3as\3AS_btlb\textures\chasis_shadowleader_co.paa",
					"3as\3AS_btlb\data\detail_co.paa",
					"3as\3AS_btlb\data\interior_co.paa"
				};
			};
			class Republic_91
			{
				displayName = "Grand Army of the Republic - 91st";
				author = "3AS";
				textures[] =
				{
					"3AS\3AS_BTLB\textures\Chasis_RedLeader_CO.paa",
					"3as\3AS_btlb\data\detail_co.paa",
					"3as\3AS_btlb\data\interior_co.paa"
				};
			};
		};
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};
};