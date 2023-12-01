#include "BattleCruser.hpp"
#include "Defines.hpp"
#include "TeranAirShip.hpp"
#include "ProtossAirShip.hpp"

int BattleCruser::dealDamage(ProtossAirShip& opponent) {
    int damage;
    static_cast<void>(opponent);
    if (turnCounter  % YAMATO_CANNON_LOADING_TURNS == 0) {
        damage = YAMATO_CANNON_MULTIPLIER * BATTLE_CRUSER_DAMAGE;
        } else {
            damage = BATTLE_CRUSER_DAMAGE;
        }
        ++turnCounter;
        return damage;
}

std::string BattleCruser::getName() const {
    return m_type;
}