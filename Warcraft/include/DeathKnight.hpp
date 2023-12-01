#ifndef DEATHKNIGHT_HPP_
#define DEATHKNIGHT_HPP_

#include "Heroes.hpp"
#include "Defines.hpp"

class DeathKnight: public Heroes
{
    public:
        DeathKnight(HeroType typeOfHero, const std::string &name, int maxMana, int baseManaRegenerateRate) : Heroes(typeOfHero, name, maxMana, baseManaRegenerateRate) {}
        void ShowSpecialAbility(SpellType typeOfSpellToCast) override;
        ~DeathKnight() {}
};

#endif //DEATHKNIGHT_HPP_