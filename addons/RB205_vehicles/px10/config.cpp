class cfgPatches
{
    class RB205_vehicles_px10
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_Rebel_Armor_PX10"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_px10",
			"RB205_px10_service"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgWeapons {};
class cfgVehicles
{
	class 3AS_PX10_REP_F;
	class RB205_px10: 3AS_PX10_REP_F
	{
		ACCESS_TRUE
		displayName = "PX-10";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		//Texture
		hiddenSelectionsTextures[] =
		{
			"3as\3AS_Rebel_Armor\PX10_Cav\Textures\PX10CAV_Republic_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10fuel_Republic_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10crane_Republic_co.paa"
		};
		class textureSources
		{
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] =
				{
					"3as\3AS_Rebel_Armor\PX10_Cav\Textures\PX10CAV_Republic_co.paa",
					"3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
					"3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
					"3as\3as_rebel_armor\px10_cav\textures\px10fuel_Republic_co.paa",
					"3as\3as_rebel_armor\px10_cav\textures\px10crane_Republic_co.paa"
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] =
				{
					"3as\3AS_Rebel_Armor\PX10_Cav\Textures\PX10CAV_Imp_co.paa",
					"3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
					"3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
					"3as\3as_rebel_armor\px10_cav\textures\px10fuel_Imp_co.paa",
					"3as\3as_rebel_armor\px10_cav\textures\px10crane_co.paa"
				};
			};
		};
	};

	class 3AS_PX10_REP_R3;
	class RB205_px10_service: 3AS_PX10_REP_R3
	{
		ACCESS_TRUE
		displayName = "PX-10 (Service)";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY
		CARGO_M
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		//Texture
		hiddenSelectionsTextures[] =
		{
			"3as\3AS_Rebel_Armor\PX10_Cav\Textures\PX10CAV_Republic_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10fuel_Republic_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10crane_Republic_co.paa"
		};
		class textureSources
		{
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] =
				{
					"3as\3AS_Rebel_Armor\PX10_Cav\Textures\PX10CAV_Republic_co.paa",
					"3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
					"3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
					"3as\3as_rebel_armor\px10_cav\textures\px10fuel_Republic_co.paa",
					"3as\3as_rebel_armor\px10_cav\textures\px10crane_Republic_co.paa"
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] =
				{
					"3as\3AS_Rebel_Armor\PX10_Cav\Textures\PX10CAV_Imp_co.paa",
					"3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
					"3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
					"3as\3as_rebel_armor\px10_cav\textures\px10fuel_Imp_co.paa",
					"3as\3as_rebel_armor\px10_cav\textures\px10crane_co.paa"
				};
			};
		};
	};
};