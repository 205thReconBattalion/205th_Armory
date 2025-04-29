#include "\RB205_core\macros.hpp"


/* VEHICLE CREW */
#define CREW_DEFAULT	"RB205_clone_trooper"
#define CREW_ARMORED	"RB205_clone_trooper"
#define CREW_AIR		"RB205_clone_plt_trooper"


/* ACE CARGO */
#define CARGO_NONE \
	ace_cargo_hasCargo = 0; \
	ace_cargo_space = 0;
#define CARGO_1 \
	ace_cargo_hasCargo = 1; \
	ace_cargo_space = 1;
#define CARGO_S \
	ace_cargo_hasCargo = 1; \
	ace_cargo_space = 5;
#define CARGO_M \
	ace_cargo_hasCargo = 1; \
	ace_cargo_space = 10;
#define CARGO_L \
	ace_cargo_hasCargo = 1; \
	ace_cargo_space = 20;
#define CARGO_XL \
	ace_cargo_hasCargo = 1; \
	ace_cargo_space = 50;
#define CARGO_XXL \
	ace_cargo_hasCargo = 1; \
	ace_cargo_space = 100;