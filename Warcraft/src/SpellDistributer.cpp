#include<iostream>
#include"SpellDistributer.hpp"

void SpellDistributer::DistributeSpellsToHeroes()
{
    HeroStorage::HeroesStorage heroes = heroStorage.getStorage();
   int size = heroes.size();
   for (int i = 0; i < size; ++i)
     {  
         SpellStorage::HeroSpells* spells = &spellStorage.getHeroSpells(heroes[i]->getHeroType());
         int spellSize = spells->size();
         for (int j = 0; j < spellSize; j++)
         {
            heroes[i]->AddSpell((*spells)[j]);
         }   
     }
}