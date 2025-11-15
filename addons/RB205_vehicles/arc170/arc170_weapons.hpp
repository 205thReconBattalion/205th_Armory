class Components: Components
{
	class TransportPylonsComponent
	{
		UIPicture = "3as\3AS_ARC170\data\ui\pylon_arc.paa";
		class pylons
		{
			class pylons1
			{
				hardpoints[] =
				{
					"B_BIM9X_RAIL",
					"B_BIM9X_DUAL_RAIL",
					"B_AMRAAM_D_RAIL",
					"B_AMRAAM_D_DUAL_RAIL",
					"B_AGM65_RAIL",
					"B_AGM65_DUAL_RAIL",
					"B_HARM_RAIL"
				};
				attachment = "RB205_AGM65_missilePylon_2rnd";
				priority = 10;
				maxweight = 5000;
				UIposition[] = {0.15,0.15};
			};
			class pylons2: pylons1
			{
				UIposition[] = {0.5,0.15};
				mirroredMissilePos = 1;
			};
			class pylons3: pylons1
			{
				hardpoints[] =
				{
					"B_BIM9X_RAIL",
					"B_BIM9X_DUAL_RAIL",
					"B_AMRAAM_D_RAIL",
					"B_AMRAAM_D_DUAL_RAIL",
					"B_AGM65_RAIL",
					"B_AGM65_DUAL_RAIL",
					"B_HARM_RAIL"
				};
				attachment = "RB205_AGM65L_missilePylon_2rnd";
				priority = 9;
				maxweight = 5000;
				UIposition[] = {0.1,0.25};
			};
			class pylons4: pylons3
			{
				UIposition[] = {0.55,0.25};
				mirroredMissilePos = 3;
			};
			class pylons5: pylons1
			{
				hardpoints[] =
				{
					"B_BIM9X_RAIL",
					"B_BIM9X_DUAL_RAIL",
					"B_AMRAAM_D_RAIL",
					"B_AMRAAM_D_DUAL_RAIL",
					"B_AGM65_RAIL",
					"B_AGM65_DUAL_RAIL",
					"B_HARM_RAIL"
				};
				attachment = "RB205_AMRAAM_missilePylon_2rnd";
				priority = 7;
				maxweight = 5000;
				UIposition[] = {0.55,0.35};
				mirroredMissilePos = 6;
			};
			class pylons6: pylons5
			{
				UIposition[] = {0.1,0.35};
				mirroredMissilePos = 0;
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
					"RB205_AGM65_missilePylon_2rnd",
					"RB205_AGM65_missilePylon_2rnd",
					"RB205_AGM65L_missilePylon_2rnd",
					"RB205_AGM65L_missilePylon_2rnd",
					"RB205_AMRAAM_missilePylon_2rnd",
					"RB205_AMRAAM_missilePylon_2rnd"
				};
			};
			class AA
			{
				displayName = "AA";
				attachment[] =
				{
					"RB205_AMRAAM_missilePylon_2rnd",
					"RB205_AMRAAM_missilePylon_2rnd",
					"RB205_AMRAAM_missilePylon_2rnd",
					"RB205_AMRAAM_missilePylon_2rnd",
					"RB205_BIM9X_missilePylon_3rnd",
					"RB205_BIM9X_missilePylon_3rnd"
				};
			};
			class CAS
			{
				displayName = "CAS";
				attachment[] =
				{
					"RB205_AGM65_missilePylon_2rnd",
					"RB205_AGM65_missilePylon_2rnd",
					"RB205_AGM65L_missilePylon_2rnd",
					"RB205_AGM65L_missilePylon_2rnd",
					"RB205_AGMHARM_missilePylon",
					"RB205_AGMHARM_missilePylon"
				};
			};
		};
	};
};