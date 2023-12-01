#include "ProtossAirShip.hpp"

void ProtossAirShip::takeDamage(int damage) {
    if (this->m_shield >= damage) {
        this->m_shield -= damage;
    }
    else {
        int differenceAfterBreakingShield = damage - this->m_shield;
        this->m_shield = 0;
        this->m_health -= differenceAfterBreakingShield;
    }

    if (m_health <= 0) {
        this->m_isBlown = true;
    }
}

void ProtossAirShip::regenerateShield(int shieldRegenerating) {
    int regeneratedShield = this->m_shield + shieldRegenerating;
    if (regeneratedShield <= this->m_maxShield) {
        this->m_shield = regeneratedShield;
    }
    else {
        this->m_shield = this->m_maxShield;
    }
}

int ProtossAirShip::getShield() const {
    return m_shield;
}

int ProtossAirShip::getHealth() const {
    return m_health;
}

bool ProtossAirShip::getBlownStatus() const {
     return m_isBlown;
}

int ProtossAirShip::getInterceptors() const {
    return m_inteceptors;
}