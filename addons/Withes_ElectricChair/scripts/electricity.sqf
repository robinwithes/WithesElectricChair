/*
Author: Robin Withes
just kidding i just pasted the vanilla arma 3 attack helicopter script :)
*/
_v = _this;

// --- engine exhaust smoke 1 ---
[_v] spawn {
	_v = _this select 0;
	while {_v getVariable ["in_use",false]} do {
		_posV = getPos _v;
		_smoke1 = "#particlesource" createVehicleLocal getpos _v;
		_smoke1 attachTo [_v,[0,0,0],"fx_pos"];
		_pos = getPos _smoke1;
		deleteVehicle _smoke1;
		_smoke1 = "#particlesource" createVehicleLocal getpos _v;
		_smoke1 setPos _pos;
		_smoke1 setParticleClass "WreckSmokeSmall";
		if (isNil {_v getVariable "smokeSound"}) then {
			_smokeSound1 = createSoundSource ["Sound_SmokeWreck1", _pos, [], 0];
			_v setVariable ["smokeSound",_smokeSound1];
		};
		while {(_posV distance (getPos _v)) < 0.5 && _v getVariable ["in_use",false]} do {
			sleep 5
		};
		deleteVehicle _smoke1;
		if !(isNil {_v getVariable "smokeSound"}) then {deleteVehicle (_v getVariable "smokeSound")};
	};
	if !(isNil "_smoke1") then {deleteVehicle _smoke1;};
	if !(isNil {_v getVariable "smokeSound"}) then {deleteVehicle (_v getVariable "smokeSound")};
};

// --- engine exhaust smoke 2 ---
[_v] spawn {
	_v = _this select 0;
	while {_v getVariable ["in_use",false]} do {
		_posV = getPos _v;
		_smoke2 = "#particlesource" createVehicleLocal getpos _v;
		_smoke2 attachTo [_v,[0,0,0],"fx_pos"];
		_pos = getPos _smoke2;
		deleteVehicle _smoke2;
		_smoke1 = "#particlesource" createVehicleLocal getpos _v;
		_smoke1 setPos _pos;
		_smoke1 setParticleClass "WreckSmokeSmall";
		if (isNil {_v getVariable "smokeSound2"}) then {
			_smokeSound2 = createSoundSource ["Sound_SmokeWreck1", _pos, [], 0];
			_v setVariable ["smokeSound2",_smokeSound2];
		};
		while {(_posV distance (getPos _v)) < 0.5 && _v getVariable ["in_use",false]} do {
			sleep 1
		};
		deleteVehicle _smoke1;
		if !(isNil {_v getVariable "smokeSound2"}) then {deleteVehicle (_v getVariable "smokeSound2")};
	};
	if !(isNil "_smoke1") then {deleteVehicle _smoke1;};
	if !(isNil {_v getVariable "smokeSound2"}) then {deleteVehicle (_v getVariable "smokeSound2")};
};

// --- avionics sparks 1 (gunner's display) ---
[_v] spawn {
_v = _this select 0;
while {_v getVariable ["in_use",false]} do {
	_sparks = "#particlesource" createVehicleLocal getpos _v;
	_sparks attachTo [_v,[0,0,0],"fx_pos"];
	_pos = getPos _sparks;
	deleteVehicle _sparks;
	_posV = getPos _v;

	while {(_posV distance (getPos _v)) < 0.5 && _v getVariable ["in_use",false]} do {
		_sparks = "#particlesource" createVehicleLocal getpos _v;
		_sparks setPos _pos;
		_sparks setParticleClass "AvionicsSparks";
		_sparksSound1 = createSoundSource ["Sound_SparklesWreck2", _pos, [], 0];
		sleep 1.5;
		deleteVehicle _sparksSound1;
		deleteVehicle _sparks;

		sleep 1;
	};
};
if !(isNil "_smoke1") then {deleteVehicle _smoke1;};
	if !(isNil {_v getVariable "smokeSound"}) then {deleteVehicle (_v getVariable "smokeSound")};
};

// --- avionics sparks 2 (gunner's controls) ---
[_v] spawn {
_v = _this select 0;
while {_v getVariable ["in_use",false]} do {
	_sparks = "#particlesource" createVehicleLocal getpos _v;
	_sparks attachTo [_v,[0,0,0],"fx_pos"];
	_pos = getPos _sparks;
	deleteVehicle _sparks;
	_posV = getPos _v;

	while {(_posV distance (getPos _v)) < 0.5 && _v getVariable ["in_use",false]} do {			
		_sparks = "#particlesource" createVehicleLocal getpos _v;
		_sparks setPos _pos;
		_sparks setParticleClass "AvionicsSparks";

		_smoke = "#particlesource" createVehicleLocal getpos _v;
		_smoke setPos _pos;
		_smoke setParticleClass "AvionicsSmoke";
		_sparksSound2 = createSoundSource ["Sound_SparklesWreck1", _pos, [], 0];

		sleep 1.5;
		deleteVehicle _sparks;
		sleep 1.5;
		deleteVehicle _sparksSound2;
		deleteVehicle _smoke;

		sleep 1;
	};
};
if !(isNil "_smoke1") then {deleteVehicle _smoke1;};
	if !(isNil {_v getVariable "smokeSound"}) then {deleteVehicle (_v getVariable "smokeSound")};
};

// --- avionics sparks 3 (pilot's controls) ---
[_v] spawn {
_v = _this select 0;
while {_v getVariable ["in_use",false]} do {
	_sparks = "#particlesource" createVehicleLocal getpos _v;
	_sparks attachTo [_v,[0,0,0],"fx_pos"];
	_pos = getPos _sparks;
	deleteVehicle _sparks;
	_posV = getPos _v;

	while {(_posV distance (getPos _v)) < 0.5 && _v getVariable ["in_use",false]} do {		
		_sparks = "#particlesource" createVehicleLocal getpos _v;
		_sparks setPos _pos;
		_sparks setParticleClass "AvionicsSparks";

		_smoke = "#particlesource" createVehicleLocal getpos _v;
		_smoke setPos _pos;
		_smoke setParticleClass "AvionicsSmoke";
		_sparksSound3 = createSoundSource ["Sound_SparklesWreck1", _pos, [], 0];

		sleep 1.5;
		deleteVehicle _sparks;
		sleep 1.5;
		deleteVehicle _sparksSound3;
		deleteVehicle _smoke;

		sleep 1;
	};
};
if !(isNil "_smoke1") then {deleteVehicle _smoke1;};
	if !(isNil {_v getVariable "smokeSound"}) then {deleteVehicle (_v getVariable "smokeSound")};
};