#ifndef CARRIER_HPP_
#define CARRIER_HPP_

#include "Defines.hpp"
#include "ProtossAirShip.hpp"

class Carrier : public ProtossAirShip {

private:
    int m_damage = 0;
    int m_shieldRegenerating = 0;
       
public:
    Carrier() : ProtossAirShip(CARRIER_HEALTH, CARRIER_SHIELD),m_damage(CARRIER_DAMAGE), m_shieldRegenerating(CARRIER_SHIELD_REGENERATE_RATE) {m_type=carrier;}
    int dealDamage() const override;
    std::string getName() const override;
    int getRegenSheild() const override;
    int getInterceptors() const override; 
};

#endif //CARRIER_HPP_