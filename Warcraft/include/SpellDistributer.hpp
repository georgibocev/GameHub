#ifndef SPELLDISTRIBUTER_HPP_
#define SPELLDISTRIBUTER_HPP_

#include"SpellStorage.hpp"
#include"HeroStorage.hpp"

class SpellDistributer
{
private:
    SpellStorage spellStorage;
    HeroStorage heroStorage;
public:
   inline SpellDistributer(SpellStorage SpellStorage, HeroStorage HeroStorage): spellStorage(SpellStorage), heroStorage(HeroStorage) {}
   void DistributeSpellsToHeroes();
    ~SpellDistributer() {}
};

#endif //SPELLDISTRIBUTER_HPP_