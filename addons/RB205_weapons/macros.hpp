/* MASS / WEIGHT */
#define MASS_WP_CARBINE 	60
#define MASS_WP_CARBINE_GL 	65
#define MASS_WP_RIFLE 		80
#define MASS_WP_RIFLE_GL	85
#define MASS_WP_HEAVY		150
#define MASS_WP_PISTOL		20

#define MASS_ACC_OPTIC		5
#define MASS_ACC_MUZZLE		5
#define MASS_ACC_BIPOD		5

/* DISPERSION */
#define DISPERSION_DC15A	0.00066
#define DISPERSION_DC15C	0.00079
#define DISPERSION_DC15S	0.00093
#define DISPERSION_SNIPER	0
#define DISPERSION_z6		0.00500
#define DISPERSION_SPECIAL	0
#define DISPERSION_DC17		0.00093

/* EMP COMPAT */
#define FRIED_WEAPON(CLASSNAME,PICTURE) \
	class ##CLASSNAME##_fried: ##CLASSNAME## \
	{ \
		JLTS_isFried=1; \
		scope=1; \
		magazines[]={}; \
		picture=##PICTURE##; \
		muzzles[] = {"this"}; \
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