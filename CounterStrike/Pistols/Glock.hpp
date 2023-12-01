#ifndef GLOCK_HPP_
#define GLOCK_HPP_

#include "Pistol.hpp"

class Player;

class Glock : public Pistol
{
    public:
        Glock(int damagePerRound, int clipSize, int remainingAmmo) : Pistol(damagePerRound, clipSize, remainingAmmo) {}
        bool fire(Player& target) override;
};

#endif //GLOCK_HPP_