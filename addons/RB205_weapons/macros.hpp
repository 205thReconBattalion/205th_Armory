/* MASS / WEIGHT */
#define MASS_WP_CARBINE 	60
#define MASS_WP_CARBINE_GL 	65
#define MASS_WP_RIFLE 		80
#define MASS_WP_RIFLE_GL	85
#define MASS_WP_HEAVY		150
#define MASS_WP_PISTOL		20

/* EMP COMPAT */
#define FRIED_WEAPON(CLASSNAME,PICTURE) \
	class ##CLASSNAME##_fried: ##CLASSNAME## \
	{ \
		JLTS_isFried=1; \
		scope=1; \
		magazines[]={}; \
		picture=##PICTURE##; \
	};

#define FRIED_WEAPON_SECONDARY(CLASSNAME,PICTURE) \
	class ##CLASSNAME##_fried: ##CLASSNAME## \
	{ \
		JLTS_isFried=1; \
		scope=1; \
		magazines[]={}; \
		picture=##PICTURE##; \
		class Stun: Stun \
		{ \
			magazines[]={}; \
		}; \
	};