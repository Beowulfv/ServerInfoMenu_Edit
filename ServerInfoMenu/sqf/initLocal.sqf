/*
   Author: IT07

   Description:
   does whatever is needed to initialize the ServerInfoMenu
*/

if hasInterface then
   {
   if isMultiplayer then
      {
         waitUntil { if (not(isNull(findDisplay 46)) AND typeOf player isEqualTo "Exile_Unit_Player") then { true } else { uiSleep 0.5; false } };
      } else
      {
         waitUntil { if not(isNull(findDisplay 46)) then {true} else {uiSleep 0.5; systemChat format["waiting... %1", random 9000]; false} };
      };

      while {true} do
         {
            _player = player;
			waitUntil { if not(alive player) then { _player removeAction _action; true } else { uiSleep 2; false} };
            waitUntil { if not(_player isEqualTo player) then {true} else {uiSleep 2; false} };
            uiSleep 1;
         };
   };
