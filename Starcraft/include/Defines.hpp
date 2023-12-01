#ifndef DEFINES_HPP_
#define DEFINES_HPP_

#include <string>

const std::string battlecruser = "BATTLE CRUSER"; 
const std::string carrier = "CARRIER"; 
const std::string phoenix = "PHOENIX"; 
const std::string viking = "VIKING"; 

enum AirShipDefines {
  BATTLE_CRUSER_HEALTH = 450,
  BATTLE_CRUSER_DAMAGE = 40,

  VIKING_HEALTH = 150,
  VIKING_DAMAGE = 15,

  CARRIER_HEALTH = 200,
  CARRIER_SHIELD = 150,
  CARRIER_DAMAGE = 8,
  CARRIER_SHIELD_REGENERATE_RATE = 40,

  PHOENIX_HEALTH = 90,
  PHOENIX_SHIELD = 90,
  PHOENIX_DAMAGE = 20,
  PHOENIX_SHIELD_REGENERATE_RATE = 20
};
 
enum CarrierDefines { 
    MAX_INTERCEPTORS = 8, 
    DAMAGED_STATUS_INTERCEPTORS = 4 
};

enum BattleCruserDefines { 
    YAMATO_CANNON_LOADING_TURNS = 5, 
    YAMATO_CANNON_MULTIPLIER = 5
};

#endif //DEFINES_HPP_