class cfgPatches
{
    class RB205_vehicles_truck
	{
		requiredAddons[]=
		{
			"RB205_vehicles"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_truck_transport",
			"RB205_truck_transport_covered",
			"RB205_truck_repair",
			"RB205_truck_ammo",
			"RB205_truck_fuel",
			"RB205_truck_device"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgWeapons {};
class cfgVehicles
{
	class O_Truck_03_transport_F;
	class O_Truck_03_covered_F;
	class O_Truck_03_repair_F;
	class O_Truck_03_ammo_F;
	class O_Truck_03_fuel_F;
	class O_Truck_03_device_F;

	class RB205_truck_transport: O_Truck_03_transport_F
	{
		ACCESS_TRUE
		displayName = "TEMP/T";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		VEH_INVENTORY
		CARGO_L
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Texture
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\truck\data\tempest_ext_1.paa",
			"RB205_vehicles\truck\data\tempest_ext_2.paa",
			"RB205_vehicles\truck\data\tempest_cargo.paa"
		};
		class TextureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\truck\data\tempest_ext_1.paa",
					"RB205_vehicles\truck\data\tempest_ext_2.paa",
					"RB205_vehicles\truck\data\tempest_cargo.paa"
				};
				factions[] =
				{
					"RB205"
				};
			};
		};
	};
	class RB205_truck_transport_covered: O_Truck_03_covered_F
	{
		ACCESS_TRUE
		displayName = "TEMP/T (Covered)";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		VEH_INVENTORY
		CARGO_L
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Texture
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\truck\data\tempest_ext_1.paa",
			"RB205_vehicles\truck\data\tempest_ext_2.paa",
			"RB205_vehicles\truck\data\tempest_cargo.paa",
			"RB205_vehicles\truck\data\tempest_cover.paa"
		};
		class TextureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\truck\data\tempest_ext_1.paa",
					"RB205_vehicles\truck\data\tempest_ext_2.paa",
					"RB205_vehicles\truck\data\tempest_cargo.paa",
					"RB205_vehicles\truck\data\tempest_cover.paa"
				};
				factions[] =
				{
					"RB205"
				};
			};
		};
	};
	class RB205_truck_repair: O_Truck_03_repair_F
	{
		ACCESS_TRUE
		displayName = "TEMP/R";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		VEH_INVENTORY_LIGHT
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Texture
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\truck\data\tempest_ext_1.paa",
			"RB205_vehicles\truck\data\tempest_ext_2.paa",
			"RB205_vehicles\truck\data\tempest_ammo.paa"
		};
		class TextureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\truck\data\tempest_ext_1.paa",
					"RB205_vehicles\truck\data\tempest_ext_2.paa",
					"RB205_vehicles\truck\data\tempest_ammo.paa"
				};
				factions[] =
				{
					"RB205"
				};
			};
		};
	};
	class RB205_truck_ammo: O_Truck_03_ammo_F
	{
		ACCESS_TRUE
		displayName = "TEMP/A";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		VEH_INVENTORY_LIGHT
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Texture
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\truck\data\tempest_ext_1.paa",
			"RB205_vehicles\truck\data\tempest_ext_2.paa",
			"RB205_vehicles\truck\data\tempest_cargo.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
		};
		class TextureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\truck\data\tempest_ext_1.paa",
					"RB205_vehicles\truck\data\tempest_ext_2.paa",
					"RB205_vehicles\truck\data\tempest_cargo.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
				};
				factions[] =
				{
					"RB205"
				};
			};
		};
	};
	class RB205_truck_fuel: O_Truck_03_fuel_F
	{
		ACCESS_TRUE
		displayName = "TEMP/F";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		VEH_INVENTORY_LIGHT
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Texture
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\truck\data\tempest_ext_1.paa",
			"RB205_vehicles\truck\data\tempest_ext_2.paa",
			"RB205_vehicles\truck\data\tempest_fuel.paa"
		};
		class TextureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\truck\data\tempest_ext_1.paa",
					"RB205_vehicles\truck\data\tempest_ext_2.paa",
					"RB205_vehicles\truck\data\tempest_fuel.paa"
				};
				factions[] =
				{
					"RB205"
				};
			};
		};
	};
	class RB205_truck_device: O_Truck_03_device_F
	{
		ACCESS_TRUE
		displayName = "TEMP/E";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		VEH_INVENTORY_LIGHT
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Texture
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\truck\data\tempest_ext_1.paa",
			"RB205_vehicles\truck\data\tempest_ext_2.paa",
			"RB205_vehicles\truck\data\tempest_cargo.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
		};
		class TextureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\truck\data\tempest_ext_1.paa",
					"RB205_vehicles\truck\data\tempest_ext_2.paa",
					"RB205_vehicles\truck\data\tempest_cargo.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
				factions[] =
				{
					"RB205"
				};
			};
		};
	};
};