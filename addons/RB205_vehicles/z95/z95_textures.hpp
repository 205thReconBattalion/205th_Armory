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
	"3AS\3as_saber\data\glass\glass_ca.paa"
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
			"3AS\3as_saber\data\glass\glass_ca.paa"
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
			"3AS\3as_saber\data\glass\glass_ca.paa"
		};
	};
};
class Damage
{
	mat[] =
	{
		"RB205_vehicles\z95\data\z95_body.rvmat",
		"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
		"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",

		"3AS\3AS_z95\Data\z95cockpit.rvmat",
		"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
		"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",

		"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass.rvmat",
		"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_glass_damage.rvmat",
		"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_glass_destruct.rvmat"
	};
	tex[] = {};
};