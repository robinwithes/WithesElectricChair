class CfgPatches
{
	class Withes_ElectricChair
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};

class CfgAddons
{
	class Withes_ElectricChair 
		{
		list[]=
			{
				"Withes_ElectricChair"
			};
	};
};

class CfgVehiclesClasses
{
class Withes_ElectricChair 
{ 
displayName="Electric Chair";
};
};

// class CfgSounds {
//   class Run_MRI {
//     name = "Run_MRI";
//     sound[] = {"ct_scanner_by_coala\sound\MRI.ogg", db+2, 1};
//     titles[] = {};
//   };
//   class wolf2 {
//     name = "";
//     sound[] = {"ct_scanner_by_coala\sound\MRI.ogg", db+2, 1};
//     titles[] = {};
//   };
// };

class CfgMovesBasic 
{
	
	class Action;
	class DefaultDie;
	class ManActions
	{
		MriCargo1 = "MriCargo1"
	};
};

class CfgMovesMaleSdr//: CfgMovesBasic
{
	class States
	{
		class Crew;
		class MriCargo1: Crew
		{
			file = "Withes_ElectricChair\anim\sit.rtm"
		};
	};
};

class CfgVehicles
{
	class All;
	class Strategic;
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		epeImpulseDamageCoef = 8.0;
		editorSubcategory = "EdSubcat_Turrets";
		vehicleClass = "Static";
		driverOpticsModel = "\A3\weapons_f\reticle\optics_empty";
		alphaTracks = 0.7;
		textureTrackWheel = 0;
		selectionLeftOffset = "";
		selectionRightOffset = "";
		memoryPointTrack1L = "";
		memoryPointTrack1R = "";
		memoryPointTrack2L = "";
		memoryPointTrack2R = "";
		tracksSpeed = 1;
		waterLeakiness = 100;
		selectionFireAnim = "";
		gunnerHasFlares = 0;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				selectionFireAnim = "";
				memoryPointsGetInGunner = "gunner_dir";
				memoryPointsGetInGunnerDir = "get_in_pos";
				outGunnerMayFire = 1;
				optics = 1;
				minTurn = -40;
				maxTurn = 40;
				initTurn = 0;
				minElev = -7;
				maxElev = 70;
				initElev = 0;
				castGunnerShadow = 1;
				ejectDeadGunner = 1;
				canEject = 1;
				gunnerAction = "MriCargo1";
				gunnerGetInAction = "";
				gunnerGetOutAction = "";
				gunnerForceOptics = 0;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
				};
			};
		};
		damperSize = 1.4;
		damperForce = 0.8;
		gearBox[] = {-1,0,1};
		attenuationEffectType = "OpenCarAttenuation";
		soundEnviron[] = {"",1.0,0.7};
		soundEngine[] = {"",10.0,1};
		soundCrash[] = {"",0.56234133,1};
		soundGear[] = {"",0.00031622773,1};
		soundDammage[] = {"",0.01,1};
		getInAction = "";
		getOutAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		mapSize = 2.55;
		getInRadius = 8.5;
		secondaryExplosion = -1;
		fuelExplosionPower = 0;
		fuelCapacity = 0;
		irScanRangeMin = 500;
		irScanRangeMax = 4000;
		irScanToEyeFactor = 1;
		irTarget = 0;
		laserTarget = 0;
		armor = 20024;
		armorStructural = 1;
		explosionShielding = 1;
		minTotalDamageThreshold = 0.01;
		crewCrashProtection = 1;
		crewExplosionProtection = 0;
		extCameraPosition[] = {0,1.5,-9};
		class ViewPilot: ViewPilot
		{
			initAngleX = 7;
			minAngleX = -15;
			maxAngleX = 25;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
		};
		cost = 10000;
		steerAheadSimul = 0.4;
		steerAheadPlan = 0.6;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.8;
		ejectDeadDriver = 1;
		ejectDeadCargo = 1;
		nightVision = 0;
		driverAction = "MriCargo1";
		driverInAction = "";
		memoryPointsGetInCargo = "get_in_pos";
		memoryPointsGetInCargoDir = "gunner_dir";
		simulation = "tankX";
		occludeSoundsWhenIn = 0.0;
		obstructSoundsWhenIn = 0.0;
		formationX = 20;
		formationZ = 30;
		precision = 1;
		brakeDistance = 0;
		turnCoef = 0;
		maxSpeed = 0;
		canFloat = 0;
		type = 1;
		threat[] = {0.7,1,0.3};
		camouflage = 1;
		audible = 1;
		sensitivity = 3;
		sensitivityEar = 0.5;
		hideProxyInCombat = 0;
		driverOpticsColor[] = {0,0,0,1};
		class CargoLight
		{
			color[] = {0,0,0,0};
			ambient[] = {0.6,0,0.15,1};
			brightness = 0.007;
		};
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		class Reflectors{};
		// class UserActions
		// {
		// 	class PressXToFlipTheThing
		// 	{
		// 		displayNameDefault = "$STR_A3_StaticWeapon_UserActions_PressXToFlipTheThing0";
		// 		displayName = "$STR_A3_StaticWeapon_UserActions_PressXToFlipTheThing0";
		// 		position = "";
		// 		radius = 2.7;
		// 		onlyForPlayer = 1;
		// 		condition = "alive this AND not canmove this AND (count crew this == 0 || isAutonomous this)";
		// 		statement = "this setpos [getpos this select 0,getpos this select 1,(getpos this select 2)+1]";
		// 	};
		// };
		numberPhysicalWheels = 0;
	};
	
	class MRI_SCANNER: StaticWeapon 
	{
		model 	= "\Withes_ElectricChair\electricchair.p3d";
		scope	= 2;
		crew 	= "C_man_1";
		side	= 3;
		faction	= CIV_F;
		displayName = "Electric Chair";

		
		// class AnimationSources
		// {
		// 	class Bed_Rotation
		// 	{
		// 		source = "user";
		// 		initPhase = 0;
		// 		animPeriod = 2;
		// 	};
		// 	class ROBERT_Rotation
		// 	{
		// 		source = "user";
		// 		initPhase = 0;
		// 		animPeriod = 2;
		// 	};			
		// };
		
		// class UserActions
		// {
		// 	class open
		// 	{
		// 		displayName = "$STR_Wsunac";
		// 		position = "button1";
		// 		radius = 1.5;
		// 		onlyForPlayer = 0;
		// 		showWindow = 0;
		// 		condition = ((this animationPhase 'Bed_Rotation') < 0.5) && ((this animationPhase 'ROBERT_Rotation') < 0.5) && (side player == independent && count crew this != 0 && !(player in crew this));                                  
		// 		statement="this execVM ""\ct_scanner_by_coala\scripts\in.sqf""";
		// 	};
		// 	class Close
		// 	{
		// 		displayName = "$STR_Wysunac";
		// 		position = "button1";
		// 		radius = 1.5;
		// 		onlyForPlayer = 0;
		// 		showWindow = 0;
		// 		condition = ((this animationPhase 'Bed_Rotation') >= 0.5) && ((this animationPhase 'ROBERT_Rotation') >= 0.5) && (side player == independent);                                
		// 		statement="this execVM ""\ct_scanner_by_coala\scripts\out.sqf""";
		// 	};			
			
		// 	class RestrainPatient
		// 	{
		// 		displayName = "$STR_Zwiazac";
		// 		radius = 1.5;
		// 		position = "button2";
		// 		onlyForplayer = 1;
		// 		condition = "locked this == 1 && side player == independent && count crew this != 0 && !(player in crew this);";
		// 		statement = "[[[this, 'LOCK'], '\ct_scanner_by_coala\scripts\lock.sqf'], 'BIS_fnc_execVM', true] call BIS_fnc_MP;";
		// 	};
		// 	class UnRestrainPatient
		// 	{
		// 		displayName = "$STR_Rozwiazac";
		// 		radius = 1.5;
		// 		position = "button2";
		// 		onlyForplayer = 1;
		// 		condition = "locked this != 1 && side player == independent && count crew this != 0 && !(player in crew this);";
		// 		statement = "[[[this, 'UNLOCK'], '\ct_scanner_by_coala\scripts\lock.sqf'], 'BIS_fnc_execVM', true] call BIS_fnc_MP;";
		// 	};			
		// };
	};	
};