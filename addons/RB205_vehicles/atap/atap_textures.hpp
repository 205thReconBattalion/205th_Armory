hiddenSelectionsMaterials[] =
{
	"RB205_vehicles\atap\data\atap_hull.rvmat",
	"RB205_vehicles\atap\data\atap_weaponsAndDecals.rvmat",
	"RB205_vehicles\atap\data\atap_legs.rvmat",
};
hiddenSelectionsTextures[]=
{
	"RB205_vehicles\atap\data\atap_hull_co.paa",
	"RB205_vehicles\atap\data\atap_weaponsAndDecals_co.paa",
	"RB205_vehicles\atap\data\atap_legs_co.paa"
};
textureList[] =
{
	"Default",	1,
	"Republic",	0
};
class textureSources
{
	class Default
	{
		displayName = "205th Recon Battalion";
		author = "205th Recon Battalion";
		textures[] =
		{
			"RB205_vehicles\atap\data\atap_hull_co.paa",
			"RB205_vehicles\atap\data\atap_weaponsAndDecals_co.paa",
			"RB205_vehicles\atap\data\atap_legs_co.paa"
		};
		factions[] = {"RB205"};
	};
	class Republic
	{
		displayName = "Grand Army of the Republic";
		author = "3AS";
		textures[] =
		{
			"3as\3as_atap\data\hull_co.paa",
			"3as\3as_atap\data\weapons and decals_co.paa",
			"3as\3as_atap\data\legs_co.paa"
		};
	};
};