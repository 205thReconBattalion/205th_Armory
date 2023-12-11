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