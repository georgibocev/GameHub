#ifndef PHOENIX_HPP_
#define PHOENIX_HPP_

#include "Defines.hpp"
#include "ProtossAirShip.hpp"

class Phoenix : public ProtossAirShip {

private:
    int m_shieldRegenerating = 0;
    int m_damage = 0;

public:
    Phoenix() : ProtossAirShip(PHOENIX_HEALTH, PHOENIX_SHIELD), m_shieldRegenerating(PHOENIX_SHIELD_REGENERATE_RATE), m_damage(PHOENIX_DAMAGE){m_type=phoenix;}
    std::string getName() const override;
    int dealDamage() const override;
    int getRegenSheild() const override {return m_shieldRegenerating;} 
};

#endif //PHOENIX_HPP_