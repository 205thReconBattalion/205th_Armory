#define ACCESS_TRUE \
	scope = 2; \
	scopeArsenal = 2;
#define ACCESS_FALSE \
	scope = 0; \
	scopeArsenal = 0;

#define ALLOWED_SLOTS_HELMET {605,901}
/*
allowedSlots[] = {...}
allowedSlots[] is an array of slot numbers where you may put the item:
	605 - headgear
	701 - vest
	801 - uniform
	901	- backpack

e.g. helmet with allowedSlots[] = {605, 701, 901} means you can put the helmet in the vest or backpack but not inside your uniform
*/

//MASS VALUES
#define MASS_HELMET 10