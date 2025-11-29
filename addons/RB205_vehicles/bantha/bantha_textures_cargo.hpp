hiddenSelectionsMaterials[] =
{
	"RB205_vehicles\bantha\data\bantha_wheels.rvmat",
	"RB205_vehicles\bantha\data\bantha_hull_cargo.rvmat"
};
hiddenSelectionsTextures[]=
{
	"RB205_vehicles\bantha\data\bantha_wheels_co.paa",
	"RB205_vehicles\bantha\data\bantha_hull_cargo_co.paa"
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
			"RB205_vehicles\bantha\data\bantha_wheels_co.paa",
			"RB205_vehicles\bantha\data\bantha_hull_cargo_co.paa"
		};
		factions[] = {"RB205"};
	};
	class Republic
	{
		displayName = "Grand Army of the Republic";
		author = "212";
		textures[] =
		{
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_Master\Bantha_Wheel_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_T\Bantha_T_Cargo\Bantha_T_Cargo_Body_Co.paa"
		};
	};
};