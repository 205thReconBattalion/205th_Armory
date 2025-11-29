#define BANTHA_ARMED_TEXTURES(TEXTURE_RVMAT,TURRET_TEXTURE1,TURRET_TEXTURE2) \
hiddenSelectionsMaterials[] = \
{ \
	"RB205_vehicles\bantha\data\bantha_hull.rvmat", \
	"RB205_vehicles\bantha\data\bantha_wheels.rvmat", \
	##TEXTURE_RVMAT##, \
}; \
hiddenSelectionsTextures[]= \
{ \
	"RB205_vehicles\bantha\data\bantha_hull_co.paa", \
	"RB205_vehicles\bantha\data\bantha_wheels_co.paa", \
	##TURRET_TEXTURE1## \
}; \
textureList[] = \
{ \
	"Default",	1, \
	"Republic",	0 \
}; \
class textureSources \
{ \
	class Default \
	{ \
		displayName = "205th Recon Battalion"; \
		author = "205th Recon Battalion"; \
		textures[] = \
		{ \
			"RB205_vehicles\bantha\data\bantha_hull_co.paa", \
			"RB205_vehicles\bantha\data\bantha_wheels_co.paa", \
		}; \
		factions[] = {"RB205"}; \
	}; \
	class Republic \
	{ \
		displayName = "Grand Army of the Republic"; \
		author = "212"; \
		textures[] = \
		{ \
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_C\Bantha_C_IFV\Bantha_C_IFV_Body_Co.paa", \
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_Master\Bantha_Wheel_Co.paa", \
			##TURRET_TEXTURE2## \
		}; \
	}; \
};