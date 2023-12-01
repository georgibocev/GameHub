#ifndef ARCHMAGE_HPP_
#define ARCHMAGE_HPP_

#include "Heroes.hpp"
#include "Defines.hpp"

class Archmage : public Heroes
{
    private:
        int m_manaRegenModifier = 0;
    public:
        Archmage(HeroType typeOfHero, const std::string &name, int maxMana, int baseManaRegenerateRate, int manaRegenModifier) : Heroes(typeOfHero, name, maxMana, baseManaRegenerateRate), m_manaRegenModifier(manaRegenModifier) {}
        void RegenerateMana() override;
        void ShowSpecialAbility(SpellType typeOfSpellToCast) override;
        ~Archmage() {}
};
#endif //ARCHMAGE_HPP_