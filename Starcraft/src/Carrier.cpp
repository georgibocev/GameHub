#include "Carrier.hpp"
#include "ProtossAirShip.hpp"

int Carrier::getInterceptors() const {
  if (getHealth() != CARRIER_HEALTH) {
    return DAMAGED_STATUS_INTERCEPTORS;
  }
    return MAX_INTERCEPTORS;    
}

int Carrier::dealDamage() const {
  
  return m_damage;
}

std::string Carrier::getName() const {
    return m_type;
}

int Carrier::getRegenSheild() const {
  return m_shieldRegenerating;
}