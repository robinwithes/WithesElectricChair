/*
Author: Robin Withes
*/
_exit = false;
{
if (!alive _x) exitWith {_exit = true};
} forEach crew _this;
if (_exit) exitWith {};

//lock the chair
_this setVariable ["in_use",true,true];
[_this,"LOCK"] execVM "\Withes_ElectricChair\scripts\lock.sqf";

//create a object to play the sound on
_thing = "Land_BottlePlastic_V1_F" createVehicle position _this;
_thing attachTo [_this,[0,0,0],"fx_pos"];
_thing hideObjectGlobal true;

//animate chair
_this animateSource ["Chains_Translation",1];
_this animateSource ["Crown_Translation",1];
sleep 3;
{player setRandomLip true;} forEach crew _this;

[_thing,"electricChairScream"] remoteExec ["say3D",0];
_this execVM "\Withes_ElectricChair\scripts\electricity.sqf";
sleep 8; //wait for the sound to finish

{player setRandomLip false; unassignVehicle _x; _x action ["GetOut", vehicle _x]; _x setDamage 1}forEach crew _this;

sleep 3;
_this setVariable ["in_use",nil,true];
[_this,"UNLOCK"] execVM "\Withes_ElectricChair\scripts\lock.sqf";
_this animateSource ["Chains_Translation",0];
_this animateSource ["Crown_Translation",0];
deleteVehicle _thing;