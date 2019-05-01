/*
Author: Robin Withes
*/
_vehicle = _this select 0;
_state = _this select 1;

switch(_state) do {
	case "LOCK": { _vehicle lock true };
	case "UNLOCK": { _vehicle lock false };
	default { _vehicle lock 1 };
};