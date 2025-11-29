class Components: Components
{
	class TransportPylonsComponent
	{
		UIPicture = "3as\3AS_BTLB\data\ui\pylon_ywing.paa";
		class pylons
		{
			class pylons1
			{
				hardpoints[] =
				{
					"B_BOMB_PYLON",
					"B_SDB_QUAD_RAIL",
					"B_AGM65_RAIL",
					"B_AGM65_DUAL_RAIL",
					"B_HARM_RAIL"
				};
				attachment = "RB205_GBUSDB_bombPylon";
				priority = 10;
				maxweight = 5000;
				UIposition[] = {0.15,0.15};//{0.5,0.25};
			};
			class pylons2: pylons1
			{
				UIposition[] = {0.525,0.15};//{0.15,0.25};
				mirroredMissilePos = 1;
			};
			class pylons3: pylons1
			{
				hardpoints[] =
				{
					"B_BOMB_PYLON",
					"B_SDB_QUAD_RAIL",
					"ARC_EMP_RAIL",
					"B_AGM65_RAIL",
					"B_AGM65_DUAL_RAIL",
					"B_HARM_RAIL"
				};
				attachment = "RB205_GBU12_bombPylon";
				priority = 9;
				maxweight = 5000;
				UIposition[] = {0.15,0.25};//{0.55,0.35};
			};
			class pylons4: pylons3
			{
				UIposition[] = {0.525,0.25};//{0.1,0.35};
				mirroredMissilePos = 3;
			};
			class pylons5: pylons1
			{
				hardpoints[] =
				{
					"B_BOMB_PYLON",
					"B_SDB_QUAD_RAIL",
					"B_AGM65_RAIL",
					"B_AGM65_DUAL_RAIL",
					"B_HARM_RAIL"
				};
				attachment = "RB205_AGM65_missilePylon_2rnd";
				priority = 7;
				maxweight = 5000;
				UIposition[] = {0.15,0.35};//{0.6,0.45};
			};
			class pylons6: pylons5
			{
				UIposition[] = {0.525,0.35};//{0.05,0.45};
				mirroredMissilePos = 5;
			};
			class pylons7: pylons1
			{
				hardpoints[] =
				{
					"B_BIM9X_RAIL",
					"B_BIM9X_DUAL_RAIL",
					"B_AMRAAM_D_RAIL",
					"B_AGM65_RAIL",
					"B_AGM65_DUAL_RAIL",
					"B_HARM_RAIL"
				};
				attachment = "RB205_AGMHARM_missilePylon";
				priority = 9;
				maxweight = 5000;
				UIposition[] = {0.2,0.45};//{0.45,0.4};
			};
			class pylons8: pylons7
			{
				UIposition[] = {0.475,0.45};//{0.2,0.4};
				attachment = "RB205_BIM9X_missilePylon_3rnd";
				mirroredMissilePos = 7;
			};
		};
		class presets
		{
			class empty
			{
				displayName = "$STR_empty";
				attachment[] = {};
			};
			class Default
			{
				displayName = "$STR_vehicle_default";
				attachment[] =
				{
					"RB205_GBUSDB_bombPylon",
					"RB205_GBUSDB_bombPylon",
					"RB205_GBU12_bombPylon",
					"RB205_GBU12_bombPylon",
					"RB205_AGM65_missilePylon_2rnd",
					"RB205_AGM65_missilePylon_2rnd",
					"RB205_AGMHARM_missilePylon",
					"RB205_BIM9X_missilePylon_3rnd"
				};
			};
			class CAS
			{
				displayName = "CAS";
				attachment[] =
				{
					"RB205_GBUSDB_bombPylon",
					"RB205_GBUSDB_bombPylon",
					"RB205_GBU12_bombPylon",
					"RB205_GBU12_bombPylon",
					"RB205_GBU12_bombPylon",
					"RB205_CBU85_bombPylon",
					"RB205_AGM65_missilePylon_2rnd",
					"RB205_AGM65_missilePylon_2rnd"
				};
			};
		};
	};
};