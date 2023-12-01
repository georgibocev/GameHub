#ifndef BATTLECRUSER_HPP_
#define BATTLECRUSER_HPP_

#include "Defines.hpp"
#include "TeranAirShip.hpp"

class BattleCruser : public TerranAirShip {

private:
    int turnCounter = 0;
    
public:
    BattleCruser() : TerranAirShip(AirShipDefines::BATTLE_CRUSER_HEALTH), turnCounter(1) {m_type=battlecruser;}
    virtual ~BattleCruser() {}
    int dealDamage(ProtossAirShip& opponent) override;   
    std::string getName() const override;
};

#endif //BATTLECRUSER_HPP_