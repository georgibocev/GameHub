#include "Phoenix.hpp"
#include "ProtossAirShip.hpp"

int Phoenix::dealDamage() const {
    return m_damage;
}

std::string Phoenix::getName() const {
    return m_type;
}