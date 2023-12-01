#ifndef DESERTEAGLE_HPP_
#define DESERTEAGLE_HPP_

#include "Defines.hpp"
#include "Pistol.hpp"

class Player;

class DesertEagle : public Pistol
{
    public:
        DesertEagle(int damagePerRound, int clipSize, int remainingAmmo) : Pistol(damagePerRound, clipSize, remainingAmmo) {}
        bool fire(Player& target) override;
};

#endif //DESERTEAGLE_HPP_