#define ACCESS_TRUE \
	scope = 2; \
	scopeArsenal = 2;
#define ACCESS_FALSE \
	scope = 0; \
	scopeArsenal = 0;

#define CARGO_NONE \
	ace_cargo_hasCargo = 0;
#define CARGO_S \
	ace_cargo_hasCargo = 1; \
	ace_cargo_size = 5;
#define CARGO_M \
	ace_cargo_hasCargo = 1; \
	ace_cargo_size = 10;
#define CARGO_L \
	ace_cargo_hasCargo = 1; \
	ace_cargo_size = 20;
#define CARGO_XL \
	ace_cargo_hasCargo = 1; \
	ace_cargo_size = 50;
#define CARGO_XXL \
	ace_cargo_hasCargo = 1; \
	ace_cargo_size = 100;