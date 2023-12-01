#include <iostream>
#include <sstream>

#include "Defines.hpp"
#include "Heroes.hpp"
#include "Archmage.hpp"
#include "DeathKnight.hpp"
#include "DrawRanger.hpp"
#include "HeroStorage.hpp"
#include "SpellDistributer.hpp"
#include "HeroAction.hpp"

int main() {

HeroStorage heroStorage;
SpellStorage spellStorage;
spellStorage.CollectHeroSpells();
try 
{
  heroStorage.CollectHeroes();
  SpellDistributer spellDistributer(spellStorage,heroStorage);
  spellDistributer.DistributeSpellsToHeroes();
  HeroAction heroAction;

  int currAction = 0;

  while (std::cin >> currAction) {
    switch (currAction) {
      case ActionType::CAST_BASIC_SPELL:
        heroAction.MakeAllHeroesCastSpell(heroStorage.getStorage(),BASIC);
        break;

      case ActionType::CAST_ULTIMATE_SPELL:
        heroAction.MakeAllHeroesCastSpell(heroStorage.getStorage(), ULTIMATE);
        break;

      case ActionType::REGENERATE_MANA:
        heroAction.MakeAllHeroesToRegenerateMana(heroStorage.getStorage());
        break;
    }
  }
}
  catch(const std::exception& e)
  {
    std::cerr << "Exception occurred: " << e.what() << std::endl;
  }
  return EXIT_SUCCESS;
}