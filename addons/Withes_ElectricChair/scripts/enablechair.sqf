/*
Author: Robin Withes
*/

//lock the chair
_this setVariable ["in_use",true,true];
[_this,"LOCK"] execVM "\Withes_ElectricChair\scripts\lock.sqf";

//create a object to play the sound on
_thing = "Land_BottlePlastic_V1_F" createVehicle position _this;
_thing hideObjectGlobal true;

//animate chair
_this animateSource ["Chains_Translation",1];
_this animateSource ["Crown_Translation",1];
sleep 3;

[_thing,"electricChairScream"] remoteExec ["say3D",0];
sleep 8; //wait for the sound to finish
{_x setDamage 1}forEach crew _this;

sleep 3;
_this setVariable ["in_use",nil,true];
[_this,"UNLOCK"] execVM "\Withes_ElectricChair\scripts\lock.sqf";
_this animateSource ["Chains_Translation",0];
_this animateSource ["Crown_Translation",0];