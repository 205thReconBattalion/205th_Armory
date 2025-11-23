hiddenSelectionsMaterials[] =
{
	"RB205_vehicles\z95\data\z95_body.rvmat",
	"3AS\3as_Z95\Data\Z95Cockpit.rvmat",
	"3AS\3as_Z95\Data\Z95Canopy.rvmat"
};
hiddenselectionstextures[] =
{
	"RB205_vehicles\z95\data\z95_body_co.paa",
	"3AS\3as_Z95\Data\cockpit_co.paa",
	"3AS\3as_saber\data\glass\glass_ca"
};
textureList[] =
{
	"Default",	1,
	"Republic",	0
};
class TextureSources
{
	class Default
	{
		displayName = "205th Recon Battalion";
		author = "205th Recon Battalion";
		textures[] =
		{
			"RB205_vehicles\z95\data\z95_body_co.paa",
			"3AS\3as_Z95\Data\cockpit_co.paa",
			"3AS\3as_saber\data\glass\glass_ca"
		};
		factions[] = {"RB205"};
	};
	class Republic
	{
		displayName = "Grand Army of the Republic";
		author = "3AS";
		textures[] =
		{
			"3AS\3as_Z95\data\body_co.paa",
			"3AS\3as_Z95\Data\cockpit_co.paa",
			"3AS\3as_saber\data\glass\glass_ca"
		};
	};
};