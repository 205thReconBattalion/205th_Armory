hiddenSelectionsMaterials[] =
{
	"RB205_vehicles\bantha\data\bantha_wheels.rvmat",
	"RB205_vehicles\bantha\data\bantha_hull_cargo.rvmat",
	"RB205_vehicles\bantha\data\bantha_turret_assault_base.rvmat",
	"212th\Vehicles\212th_APC02\Data\Textures\Bantha_T\Bantha_T_Assault\Bantha_T_Assault_Turret_Main.rvmat"
};
hiddenSelectionsTextures[]=
{
	"RB205_vehicles\bantha\data\bantha_wheels_co.paa",
	"RB205_vehicles\bantha\data\bantha_hull_cargo_co.paa",
	"RB205_vehicles\bantha\data\bantha_turret_assault_base_co.paa",
	"212th\Vehicles\212th_APC02\Data\Textures\Bantha_T\Bantha_T_Assault\Bantha_T_Assault_Turret_Main_Co.paa"
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
			"RB205_vehicles\bantha\data\bantha_hull_cargo_co.paa",
			"RB205_vehicles\bantha\data\bantha_turret_assault_base_co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_T\Bantha_T_Assault\Bantha_T_Assault_Turret_Main_Co.paa"
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
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_T\Bantha_T_Assault\Bantha_T_Assault_Body_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_T\Bantha_T_Assault\Bantha_T_Assault_Turret_Base_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_T\Bantha_T_Assault\Bantha_T_Assault_Turret_Main_Co.paa"
		};
	};
};