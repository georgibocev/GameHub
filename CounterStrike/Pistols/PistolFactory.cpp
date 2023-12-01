#include "PistolFactory.hpp"
#include "Defines.hpp"
#include "Glock.hpp"
#include "DesertEagle.hpp"
#include <stdexcept>

std::unique_ptr<Pistol> PistolFactory::createPistol(PistolType pistolType, int damagePerRound, int clipSize, int remainingAmmo) {
    if (pistolType == PistolType::DESERT_EAGLE) {
        return std::make_unique<DesertEagle>(damagePerRound, clipSize, remainingAmmo);
    } else if (pistolType == PistolType::GLOCK) {
        return std::make_unique<Glock>(damagePerRound, clipSize, remainingAmmo);
    } else {
        throw std::invalid_argument("Invalid pistol type provided."); 
    }
}