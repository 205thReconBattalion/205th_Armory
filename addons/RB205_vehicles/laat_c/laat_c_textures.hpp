hiddenSelectionsMaterials[] =
{
	"RB205_vehicles\laat_c\data\laat_c_hull.rvmat",
	"RB205_vehicles\laat_c\data\laat_c_wings.rvmat",
	"RB205_vehicles\laat_c\data\laat_c_top.rvmat",
	"RB205_vehicles\laat_c\data\laat_c_details_front.rvmat"
};
hiddenSelectionsTextures[] =
{
	"RB205_vehicles\laat_c\data\laat_c_hull_co.paa",
	"RB205_vehicles\laat_c\data\laat_c_wings_co.paa",
	"RB205_vehicles\laat_c\data\laat_c_top_co.paa",
	"RB205_vehicles\laat_c\data\laat_c_details_front_co.paa"
};
textureList[] =
{
	"Default",			1,
	"Republic",			0,
	"Republic_Wampa",	0
};
class TextureSources
{
	class Default
	{
		displayName = "205th Recon Battalion";
		author = "205th Recon Battalion";
		textures[] =
		{
			"RB205_vehicles\laat_c\data\laat_c_hull_co.paa",
			"RB205_vehicles\laat_c\data\laat_c_wings_co.paa",
			"RB205_vehicles\laat_c\data\laat_c_top_co.paa",
			"RB205_vehicles\laat_c\data\laat_c_details_front_co.paa"
		};
		factions[] = {"RB205"};
	};
	class Republic
	{
		displayName = "Grand Army of the Republic";
		author = "3AS";
		textures[] =
		{
			"3AS\3AS_LAATC\data\Textures\LAAT_C_Hull_co.paa",
			"3AS\3AS_LAATC\data\Textures\LAAT_C_Wings_co.paa",
			"3AS\3AS_LAATC\data\Textures\LAAT_C_Top_co.paa",
			"3AS\3AS_LAATC\data\Textures\LAAT_C_Detail_Front_co.paa"
		};
	};
	class Republic_Wampa
	{
		displayName = "Grand Army of the Republic - Wampa";
		author = "3AS";
		textures[] =
		{
			"\3AS\3AS_LAATC\data\Textures\LAAT_C_Hull_Wampa_co.paa",
			"\3AS\3AS_LAATC\data\Textures\LAAT_C_Wings_Wampa_co.paa",
			"\3AS\3AS_LAATC\data\Textures\LAAT_C_Top_co.paa",
			"\3AS\3AS_LAATC\data\Textures\LAAT_C_Detail_Front_co.paa"
		};
	};
};
class Damage
{
	mat[] =
	{
		"RB205_vehicles\laat_c\data\laat_c_hull.rvmat",
		"3as\3AS_LAATC\data\damage\LAAT_C_Hull_damage.rvmat",
		"A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_base_destruct.rvmat",

		"RB205_vehicles\laat_c\data\laat_c_wings.rvmat",
		"3as\3AS_LAATC\data\damage\LAAT_C_Wings_damage.rvmat",
		"A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_base_destruct.rvmat",

		"RB205_vehicles\laat_c\data\laat_c_top.rvmat",
		"3as\3AS_LAATC\data\damage\LAAT_C_Top_damage.rvmat",
		"A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_base_destruct.rvmat",

		"RB205_vehicles\laat_c\data\laat_c_details_front.rvmat",
		"3as\3AS_LAATC\data\damage\LAAT_C_Details_damage.rvmat",
		"A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_base_destruct.rvmat",

		"3as\3as_laatc\data\textures\glass.rvmat",
		"A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_glass_damage.rvmat",
		"A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_glass_damage.rvmat"
	};
	tex[] = {};
};