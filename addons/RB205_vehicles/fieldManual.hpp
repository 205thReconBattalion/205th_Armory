class CfgHintCategories
{
	/*class Arma_3_General
	{
		displayName = "Arma 3 General";
		logicalOrder = 1;		
	};*/
	class 205_Vehicle_Info_Hint_Category
	{
		displayName = "205th Vehicle Information";
		logicalOrder = 0;		
	};
};
class CfgHints
{
	class Default {};
	class 205Speeder
	{
		category = "205_Vehicle_Info_Hint_Category";
		displayName = "Speeder";
		logicalOrder = 0;			
		class BARC_Speeder
		{
			scope = 2;	
			displayName = "Biker Advanced Recon Commando-Speeder (BARC)";
			description = $STR_Hint_RB205_BARC_Speeder;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_barc' >> 'maxSpeed')", 
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_barc' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_barc' >> 'ace_cargo_space')} else {str 0}"
			};			
			image = "RB205_core\data\RB205_logo.paa";
			vehicle = "RB205_barc";
			logicalOrder = 0;				
		};
		class SwampSpeeder 
		{
			scope = 2;	
			displayName = "Infantry Support Platform (ISP)";
			description = $STR_Hint_RB205_SwampSpeeder;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_Swamp' >> 'maxSpeed')", 
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_Swamp' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_Swamp' >> 'ace_cargo_space')} else {str 0}"
			};			
			image = "RB205_core\data\RB205_logo.paa";
			vehicle = "RB205_Swamp";
			logicalOrder = 1;				
		};
	};
	class 205Vehicle
	{
		category = "205_Vehicle_Info_Hint_Category";
		displayName = "Vehicle";
		logicalOrder = 1;			
		class AT_RT
		{
			scope = 2;	
			displayName = "All Terrain Recon Transport (AT-RT)";
			description = $STR_Hint_RB205_ATRT;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_atrt' >> 'maxSpeed')", 
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_atrt' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_atrt' >> 'ace_cargo_space')} else {str 0}"
			};			
			image = "RB205_core\data\RB205_logo.paa";
			vehicle = "RB205_atrt";
			logicalOrder = 0;				
		};
		class Warthog
		{
			scope = 2;	
			displayName = "Warthog (WTH)";
			description = $STR_Hint_RB205_WTH;
			arguments[] = {
			"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_WH' >> 'maxSpeed')", 
			"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_WH' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_WH' >> 'ace_cargo_space')} else {str 0}"
			};			
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 1;		
			vehicle = "RB205_WH";
		};
		class Tempest
		{
			scope = 2;
			displayName = "Tempest (TEMP)";
			description = $STR_Hint_RB205_Tempest;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_truck_ammo' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_truck_ammo' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_truck_ammo' >> 'ace_cargo_space')} else {str 0}"
			};
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 2;
			vehicle = "RB205_truck_transport";
		};
		class AV7
		{
			scope = 2;
			displayName = "AV-7 Anti-Vehicle Artillery Cannon";
			description = $STR_Hint_RB205_AV7;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_av7' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_av7' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_av7' >> 'ace_cargo_space')} else {str 0}"
			};
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 3;		
//			vehicle = "RB205_av7";	
		}
	};
	class 205VehicleArmored
	{
		category = "205_Vehicle_Info_Hint_Category";
		displayName = "Vehicle (Armored)";
		logicalOrder = 2;
		class TX130
		{
			scope = 2;
			displayName = "TX-130 Saber-Class Fighter Tank";
			description = $STR_Hint_RB205_TX130;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_tx130' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_tx130' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_tx130' >> 'ace_cargo_space')} else {str 0}"
			};
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 0;
			vehicle = "RB205_tx130";
		};
		class ATTE
		{
			scope = 2;
			displayName = "All Terrain Tactical Enforcer (AT-TE)";
			description = $STR_Hint_RB205_ATTE;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_atte' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_atte' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_atte' >> 'ace_cargo_space')} else {str 0}"};
			image = "RB205_core\data\RB205_logo.paa"; 
			logicalOrder = 1;
			vehicle = "RB205_ATTE";
		};	
		class ATAP
		{
			scope = 2;
			displayName = "All Terrain Attack Pod (AT-AP)";
			description = $STR_Hint_RB205_ATAP;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_atap' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_atap' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_atap' >> 'ace_cargo_space')} else {str 0}"
			};
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 2;
//			vehicle = "RB205_atap";
		};		
		class UTAT
		{
			scope = 2;
			displayName = "Unstable Terrain Artillery Transport (UT-AT)";
			description = $STR_Hint_RB205_UTAT;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_utat' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_utat' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_utat' >> 'ace_cargo_space')} else {str 0}"
			};
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 3;
//			vehicle = "RB205_utat";
		};
		class Juggernaut
		{
			scope = 2;
			displayName = "HAVw A6 Juggernaut";
			description = $STR_Hint_RB205_Juggernaut;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_juggernaut' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_juggernaut' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_juggernaut' >> 'ace_cargo_space')} else {str 0}"
			};
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 4;
//			vehicle = "RB205_juggernaut";
		};
		class Bantha
		{
			scope = 2;
			displayName = "HAVw A2 Bantha";
			description = $STR_Hint_RB205_BANTHA;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_bantha' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_bantha' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_bantha' >> 'ace_cargo_space')} else {str 0}"
			};
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 5;
			vehicle = "212th_Bantha_MK1"; //205th Klasse oder 212th Klassen aus der Aux212th zeigt einen Skinloses Model an
		};
		class PX10
		{
			scope = 2;
			displayName = "PX-10";
			description = $STR_Hint_RB205_PX10;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_px10' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_px10' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_px10' >> 'ace_cargo_space')} else {str 0}"
			};
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 6;
			vehicle = "RB205_px10";
		};
	};
	class 205GunshipShuttle
	{
		category = "205_Vehicle_Info_Hint_Category";
		displayName = "Gunship/Shuttle";
		logicalOrder = 3;
		class Laat
		{
			scope = 2;
			displayName = "Low Altitude Assault Transport/ Infantry (LAAT/I)";
			description = $STR_Hint_RB205_LAAT;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_laat' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_laat' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_laat' >> 'ace_cargo_space')} else {str 0}"
			};
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 0;
			vehicle = "RB205_laat";
		};
		class Laatc
		{
			scope = 2;
			displayName = "Low Altitude Assault Transport/ Carrier (LAAT/C)";
			description = $STR_Hint_RB205_LAATC;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_laatc' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_laatc' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_laatc' >> 'ace_cargo_space')} else {str 0}"
			};
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 1;
//			vehicle = "RB205_laatc";
		};
		class Laatle
		{
			scope = 2;
			displayName = "Low Altitude Assault Transport/ Law Enforcement (LAAT/LE)";
			description = $STR_Hint_RB205_LAATLE;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_laatle' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_laatle' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_laatle' >> 'ace_cargo_space')} else {str 0}"
			};
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 2;
			vehicle = "RB205_laatle";
		};
		class Nuclass
		{
			scope = 2;
			displayName = "Nu-Class Attack Shuttle / Rho-Class Transport Shuttle";
			description = $STR_Hint_RB205_nuclass;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_nuclass' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_nuclass' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_nuclass' >> 'ace_cargo_space')} else {str 0}"
			};
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 3;
//			vehicle = "RB205_nuclass";
		};
		class Purrgil
		{
			scope = 2;
			displayName = "Purrgil Transport Shuttle";
			description = $STR_Hint_RB205_PURRGIL;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_purrgil' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_purrgil' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_purrgil' >> 'ace_cargo_space')} else {str 0}"
			};
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 4;
//			vehicle = "RB205_purrgil";
		};
		class Gozanti
		{
			scope = 2;
			displayName = "Gozanti-Class Cruiser";
			description = $STR_Hint_RB205_GOZANTI;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_gozanti' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_gozanti' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_gozanti' >> 'ace_cargo_space')} else {str 0}"
			};
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 5;
//			vehicle = "RB205_gozanti";
		};
	};
	class 205Starfighter
	{
		category = "205_Vehicle_Info_Hint_Category";
		displayName = "Starfighter";
		logicalOrder = 4;
		class ARC170
		{
			scope = 2;
			displayName = "Aggressive Reconnaissance-170 (ARC-170)";
			description = $STR_Hint_RB205_ARC170;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_arc170' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_arc170' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_arc170' >> 'ace_cargo_space')} else {str 0}"
			};
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 0;
			vehicle = "RB205_arc170";
		};
		class Z95
		{
			scope = 2;
			displayName = "Z-95 Headhunter";
			description = $STR_Hint_RB205_Z95;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_z95' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_z95' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_z95' >> 'ace_cargo_space')} else {str 0}"
			};
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 1;
			vehicle = "RB205_z95";
		};
		class VWing
		{
			scope = 2;
			displayName = "Alpha-3 Nimbus-Class V-Wing Starfighter";
			description = $STR_Hint_RB205_VWING;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_vwing' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_vwing' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_vwing' >> 'ace_cargo_space')} else {str 0}"
			};
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 2;
			vehicle = "RB205_vwing";
		};
		class V19
		{
			scope = 2;
			displayName = "V-19 Torrent Starfighter";
			description = $STR_Hint_RB205_V19;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_v19' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_v19' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_v19' >> 'ace_cargo_space')} else {str 0}"
			};
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 3;
			vehicle = "RB205_v19";
		};
	};
	class 205Naval
	{
		category = "205_Vehicle_Info_Hint_Category";
		displayName = "Naval";
		logicalOrder = 5;
		class RB205_waterGlider
		{
			scope = 2;
			displayName = "'Aiwha' Water Glider";
			description = $STR_Hint_RB205_WaterGlider;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_waterGlider_mg' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_waterGlider_mg' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_waterGlider_mg' >> 'ace_cargo_space')} else {str 0}"
			};
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 0;
			vehicle = "RB205_waterGlider_mg";
		};
		class RB205_SDV
		{
			scope = 2;
			displayName = "Swimmer Delivery Vehicle (SDV)";
			description = $STR_Hint_RB205_SDV;
			arguments[] = {
				"str getNumber (configFile >> 'CfgVehicles' >> 'RB205_SDV' >> 'maxSpeed')",
				"if(getNumber(configFile >> 'CfgVehicles' >> 'RB205_SDV' >> 'ace_cargo_hasCargo')==1) then {str getNumber(configFile >> 'CfgVehicles' >> 'RB205_SDV' >> 'ace_cargo_space')} else {str 0}"
			};
			image = "RB205_core\data\RB205_logo.paa";
			logicalOrder = 1;
			vehicle = "RB205_SDV";
		};
	};
// Filtert standard Arma 3 hints aus
	/*class Arma_3_General
	{
		category = "Arma_3_General";
		displayName = "Empty";
		logicalOrder = 0;			
		class Empty
		{
			scope = 2;		
			displayName = "Filler";
			displayNameShort = "Filler";
			description = "Filler";
			arguments[] = {};
			image = "RB205_core\data\RB205_logo.paa";
			tip = "Filler";			 
			logicalOrder = 2;							
		};	
	};*/
};

