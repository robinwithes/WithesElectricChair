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
		ElectricChair_Sit = "ElectricChair_Sit"
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class ElectricChair_Sit: Crew
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
				gunnerAction = "ElectricChair_Sit";
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
		driverAction = "ElectricChair_Sit";
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
	
	class Withes_ElectricChair: StaticWeapon 
	{
		model 	= "\Withes_ElectricChair\electricchair.p3d";
		scope	= 2;
		crew 	= "C_man_1";
		side	= 3;
		faction	= CIV_F;
		displayName = "Electric Chair";

		class AnimationSources
		{
			class Crown_Translation
			{
				source = "user";
				initPhase = 0;
				animPeriod = 3;
			};
			class Chains_Translation
			{
				source = "user";
				initPhase = 0;
				animPeriod = 3;
			};			
		};
		
		// class UserActions
		// {
		// 	class open
		// 	{
		// 		displayName = "use";
		// 		position = "get_in_pos";
		// 		radius = 8.5;
		// 		onlyForPlayer = 1;
		// 		condition = "true";                                  
		// 		statement="this animateSource ['Crown_Translation',1];";
		// 	};
		// };
	};	
};