#define TX130_TEXTURES(WPN_RVMAT,WPN_TEX,WPN_TEX_REP,WPN_TEX_EMP) \
hiddenSelectionsMaterials[] = \
{ \
	"RB205_vehicles\tx130\data\tx130_hull.rvmat", \
	##WPN_RVMAT## \
}; \
hiddenSelectionsTextures[]= \
{ \
	"RB205_vehicles\tx130\data\tx130_hull_co.paa", \
	##WPN_TEX## \
}; \
textureList[] = \
{ \
	"Default",	1, \
	"Republic",	0, \
	"Empire",	0 \
}; \
class textureSources \
{ \
	class Default \
	{ \
		displayName = "205th Recon Battalion"; \
		author = "205th Recon Battalion"; \
		textures[] = \
		{ \
			"RB205_vehicles\tx130\data\tx130_hull_co.paa", \
			##WPN_TEX## \
		}; \
		factions[] = {"RB205"}; \
	}; \
	class Republic \
	{ \
		displayName = "Grand Army of the Republic"; \
		author = "3AS"; \
		textures[] = \
		{ \
			"3as\3as_saber\data\saber_hull_co.paa", \
			##WPN_TEX_REP## \
		}; \
	}; \
	class Empire \
	{ \
		displayName = "Galactic Empire"; \
		author = "3AS"; \
		textures[] = \
		{ \
			"3AS\3as_saber\data\saber_Imp_hull_co.paa", \
			##WPN_TEX_EMP## \
		}; \
	}; \
};