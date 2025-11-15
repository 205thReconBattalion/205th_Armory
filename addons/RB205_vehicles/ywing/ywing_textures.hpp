hiddenSelectionsMaterials[] =
{
	"RB205_vehicles\ywing\data\ywing_chasis.rvmat",
	"RB205_vehicles\ywing\data\ywing_detail.rvmat",
	"RB205_vehicles\ywing\data\ywing_interior.rvmat"
};
hiddenSelectionsTextures[]=
{
	"RB205_vehicles\ywing\data\ywing_chasis_co.paa",
	"RB205_vehicles\ywing\data\ywing_detail_co.paa",
	"RB205_vehicles\ywing\data\ywing_interior_co.paa"
};
textureList[] =
{
	"Default",		1,
	"Republic",		0,
	"Republic_91",	0
};
class TextureSources
{
	class Default
	{
		displayName = "205th Recon Battalion";
		author = "205th Recon Battalion";
		textures[] =
		{
			"RB205_vehicles\ywing\data\ywing_chasis_co.paa",
			"RB205_vehicles\ywing\data\ywing_detail_co.paa",
			"RB205_vehicles\ywing\data\ywing_interior_co.paa"
		};
		factions[] = {"RB205"};
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