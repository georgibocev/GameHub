#include "TeranAirShip.hpp"

bool TerranAirShip::getBlownStatus() const {
     return m_isBlown;
}

int TerranAirShip::getHealth() const {
    return m_health;
}

void TerranAirShip::takeDamage(int damage) { 
    m_health-=damage;
    if(m_health < 0) {
        m_isBlown = true;
    }
}