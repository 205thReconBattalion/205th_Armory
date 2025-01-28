class cfgPatches
{
    class RB205_vehicles_weapons_pylons
	{
		requiredAddons[]=
		{
			"A3_Weapons_F_Jets",
			"ace_maverick",
			"3AS_VehicleWeapons"
		};
		requiredVersion = 1.0;
    	author = "205th Recon Battalion";
		units[] = {};
		weapons[]=
		{
			"RB205_BIM9X_weapon",
			"RB205_AMRAAM_weapon",
			"RB205_AGM65_weapon",
			"RB205_AGM65L_weapon",
			"RB205_AGMHARM_weapon",

			"RB205_GBU12_weapon",
			"RB205_GBUSDB_weapon",
			"RB205_CBU85_weapon",
			"RB205_Mk82_weapon"
		};
		magazines[]=
		{
			"RB205_BIM9X_missile",
			"RB205_BIM9X_missilePylon_3rnd",

			"RB205_AMRAAM_missile",
			"RB205_AMRAAM_missilePylon",
			"RB205_AMRAAM_missilePylon_2rnd",

			"RB205_AGM65_missile",
            "RB205_AGM65_missilePylon",
            "RB205_AGM65_missilePylon_2rnd",

			"RB205_AGM65L_missile",
            "RB205_AGM65L_missilePylon",
            "RB205_AGM65L_missilePylon_2rnd",

			"RB205_AGMHARM_missile",
            "RB205_AGMHARM_missilePylon",


			"RB205_GBU12_bomb",
            "RB205_GBU12_bombPylon",

			"RB205_GBUSDB_bomb",
            "RB205_GBUSDB_bombPylon",

            "RB205_CBU85_bombPylon",

			"RB205_Mk82_bomb",
			"RB205_Mk82_bombPylon"
		};
		ammo[]=
		{
			"RB205_BIM9X_ammo",
			"RB205_AMRAAM_ammo",
			"RB205_AGM65_ammo",
			"RB205_AGM65L_ammo",
			"RB205_AGMHARM_ammo",

			"RB205_GBU12_ammo",
			"RB205_GBUSDB_ammo",
			"RB205_CBU85_ammo",
			"RB205_Mk82_ammo"
		};
	};
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"

class CfgSoundSets
{
	class RB205_missile_shot_SoundSet
	{
		SoundShaders[] =
		{
			"RB205_missile_shot_soundShader"
		};
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionLight3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
		occlusionFactor = 0.3;
		obstructionFactor = 0;
	};
	class RB205_missile_aa_shot_SoundSet
	{
		SoundShaders[] =
		{
			"RB205_missile_aa_shot_soundShader"
		};
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "ExplosionLight3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
		occlusionFactor = 0.3;
		obstructionFactor = 0;
	};
};
class CfgSoundShaders
{
	class RB205_missile_shot_soundShader
	{
		samples[] =
		{
			
			{
				"\RB205_vehicles\vehicles_weapons\data\sounds\missile_fire.ogg",
				1
			}
		};
		volume = 1;
		range = 1600;
	};
	class RB205_missile_aa_shot_soundShader
	{
		samples[] =
		{
			
			{
				"\RB205_vehicles\vehicles_weapons\data\sounds\missile_aa_fire.ogg",
				1
			}
		};
		volume = 1;
		range = 1600;
	};
};

class CfgLights
{
	class RB205_plasmaBlue
	{
		color[]={0,0,1,1};
		ambient[]={0,0,1,0};
		brightness=10;
		intensity=1000;
		drawLight=0;
		class Attenuation
		{
			start=0;
			constant=1;
			linear=0;
			quadratic=40;
		};
		position[]={0,0.2,0};
		diffuse[]={0,0,0.1};
	};
};
class RB205_bomb_blue
{
	class RB205_bombBlue
	{
		simulation="light";
		type="RB205_plasmaBlue";
		position[]={0,0,0};
		intensity=0;
		interval=1;
		lifeTime=6;
	};
};