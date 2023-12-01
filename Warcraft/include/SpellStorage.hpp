#ifndef SPELLSTORAGE_HPP_
#define SPELLSTORAGE_HPP_

#include"Spell.hpp"
#include"Defines.hpp"
#include<map>
#include<vector>
#include<memory>

class SpellStorage
{
public:
   
    using InitializedSpell = std::shared_ptr<Spell>;
    using HeroSpells = std::vector<InitializedSpell>;
    using Spells = std::map<HeroType,HeroSpells>;

private :
    Spells spellStorage;

public:
    InitializedSpell InitializeSpell(SpellType type, const std::string &name, int manaCost);
    void CollectHeroSpells();
    void AddHeroSpells(HeroType hero, HeroSpells spells);
    HeroSpells& getHeroSpells(HeroType hero);
    SpellStorage() {}
    ~SpellStorage() {}
};

#endif //SPELLSTORAGE_HPP_