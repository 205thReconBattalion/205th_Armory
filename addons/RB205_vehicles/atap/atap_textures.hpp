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
class Damage
{
	mat[] =
	{
		"RB205_vehicles\atap\data\atap_hull.rvmat",
		"3as\3AS_ATAP\data\damage\ATAP_Hull_damage.rvmat",
		"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat",
		
		"RB205_vehicles\atap\data\atap_weaponsAndDecals.rvmat",
		"3as\3AS_ATAP\data\damage\ATAP_Weapons_damage.rvmat",
		"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat",
		
		"RB205_vehicles\atap\data\atap_legs.rvmat",
		"3as\3AS_ATAP\data\damage\ATAP_Legs_damage.rvmat",
		"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat"
	};
	tex[] = {};
};