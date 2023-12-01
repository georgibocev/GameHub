#ifndef DRAWRANGER_HPP_
#define DRAWRANGER_HPP_

#include "Heroes.hpp"
#include "Defines.hpp"

class DrawRanger: public Heroes
{
    public:
        DrawRanger(HeroType typeOfHero, const std::string &name, int maxMana, int baseManaRegenerateRate) : Heroes(typeOfHero, name, maxMana, baseManaRegenerateRate) {}
        void ShowSpecialAbility(SpellType typeOfSpellToCast) override;
        ~DrawRanger () {}
};

#endif //DRAWRANGER_HPP_