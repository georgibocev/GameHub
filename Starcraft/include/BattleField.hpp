#ifndef BATTLEFIELD_HPP_
#define BATTLEFIELD_HPP_

#include <vector>
#include <string>
#include <memory>

class ProtossAirShip;
class TerranAirShip;

class BattleField {

private:
  std::vector<std::shared_ptr<ProtossAirShip>> protossFleet; 
  std::vector<std::shared_ptr<TerranAirShip>> terranFleet;   
  void terranAttack(int& lastProtossShipPos, int& lastTerranShipPos, const std::string& terranWin);
  void protossAttack(int& lastProtossShipPos, int& lastTerranShipPos, const std::string& protossWin);
  template <typename T>
  void shipDestroyedActions(std::vector<T>& defendingFleet, int& lastShipPos);

public:
  void generateTerranFleet(const std::string& terranFleetComposition);
  void generateProtossFleet(const std::string& protossFleetCompositon);
  void startBattle();
};

#endif  // BATTLEFIELD_HPP_