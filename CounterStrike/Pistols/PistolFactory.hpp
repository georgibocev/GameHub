#ifndef PISTOL_FACTORY_HPP_
#define PISTOL_FACTORY_HPP_

#include "Pistol.hpp"
#include <memory>

class PistolFactory {
public:
    static std::unique_ptr<Pistol> createPistol(PistolType pistolType, int damagePerRound, int clipSize, int remainingAmmo);
};

#endif // PISTOL_FACTORY_HPP_