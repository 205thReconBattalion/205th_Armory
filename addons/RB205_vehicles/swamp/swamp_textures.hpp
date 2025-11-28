hiddenSelectionsMaterials[] =
{
	"RB205_vehicles\swamp\data\swamp_base.rvmat",
	"3as\3AS_LightVics\3AS_ISP\textures\Screens.rvmat"
};
hiddenSelectionsTextures[] =
{
	"RB205_vehicles\swamp\data\swamp_base_co.paa",
	"3as\3AS_LightVics\3AS_ISP\textures\ISP_Screens_co.paa"
};
textureList[] =
{
	"Default",			1,
	"Republic",			0
};
class TextureSources
{
	class Default
	{
		displayName = "205th Recon Battalion";
		author = "205th Recon Battalion";
		textures[] =
		{
			"RB205_vehicles\swamp\data\swamp_base_co.paa",
			"3as\3AS_LightVics\3AS_ISP\textures\ISP_Screens_co.paa"
		};
		factions[] = {"RB205"};
	};
	class Republic
	{
		displayName = "Grand Army of the Republic";
		author = "3AS";
		textures[] =
		{
			"3as\3AS_LightVics\3AS_ISP\textures\ISP_Base_co.paa",
			"3as\3AS_LightVics\3AS_ISP\textures\ISP_Screens_co.paa"
		};
	};
};
class Damage
{
	mat[] =
	{
		"RB205_vehicles\swamp\data\swamp_base.rvmat",
		"RB205_vehicles\swamp\data\swamp_base.rvmat",
		"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat",

		"3as\3AS_LightVics\3AS_ISP\textures\Screens.rvmat",
		"3as\3AS_LightVics\3AS_ISP\textures\Screens.rvmat",
		"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat"
	};
	tex[] = {};
};