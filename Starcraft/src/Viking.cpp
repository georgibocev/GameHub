#include "Viking.hpp"
#include "TeranAirShip.hpp"
#include "ProtossAirShip.hpp"

int Viking::dealDamage(ProtossAirShip& opponent) {
    int damage = VIKING_DAMAGE;
    if (opponent.getName() == phoenix) {
        return damage * 2;
    } else {
        return damage;
    }
}

std::string Viking::getName() const {
    return m_type;
}