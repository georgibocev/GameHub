#ifndef DEFINES_HPP_
#define DEFINES_HPP_

enum class PistolType { GLOCK = 0, DESERT_EAGLE = 1 };

enum GeneralDefines {
  PLAYER_ONE = 0,
  PLAYER_TWO = 1,
};

struct PlayerVitalData {
  int health;
  int armor;
};

struct Percentages{
  static constexpr int HUNDRED = 1;
  static constexpr int FIFTY = 2;
  static constexpr int TWENTYFIVE = 4;

};
constexpr const char* noAmmoLeftMessage = "No ammo left";
constexpr const char* reloadingMessage = "Reloading...";

#endif // DEFINES_HPP_ 