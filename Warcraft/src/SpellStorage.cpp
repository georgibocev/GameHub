#include<iostream>
#include"SpellStorage.hpp"

SpellStorage::InitializedSpell SpellStorage::InitializeSpell(SpellType type, const std::string &name, int manaCost)
{
    return std::unique_ptr<Spell>(new Spell(type,name,manaCost));
}
void SpellStorage::CollectHeroSpells()
{
    InitializedSpell archmageSpell1 = InitializeSpell(BASIC, ARCHMAGE_BASIC_SPELL_NAME, ARCHMAGE_BASIC_SPELL_MANA_COST);
    InitializedSpell archmageSpell2 = InitializeSpell(ULTIMATE, ARCHMAGE_ULTIMATE_SPELL_NAME, ARCHMAGE_ULTIMATE_SPELL_MANA_COST);
    InitializedSpell deathknight1 = InitializeSpell(BASIC, DEATH_KNIGHT_BASIC_SPELL_NAME, DEATH_KNIGHT_BASIC_SPELL_MANA_COST);
    InitializedSpell deathknight2 = InitializeSpell(ULTIMATE, DEATH_KNIGHT_ULTIMATE_SPELL_NAME, DEATH_KNIGHT_ULTIMATE_SPELL_MANA_COST);
    InitializedSpell drawranger1 = InitializeSpell(BASIC, DRAW_RANGER_BASIC_SPELL_NAME, DRAW_RANGER_BASIC_SPELL_MANA_COST);
    InitializedSpell drawranger2 = InitializeSpell(ULTIMATE, DRAW_RANGER_ULTIMATE_SPELL_NAME, DRAW_RANGER_ULTIMATE_SPELL_MANA_COST);

    HeroSpells archMageSpells; 
    HeroSpells deathknightSpells;
    HeroSpells drawrangerSpells;
    archMageSpells.push_back(archmageSpell1); // could be done with a loop
    archMageSpells.push_back(archmageSpell2);
    deathknightSpells.push_back(deathknight1);
    deathknightSpells.push_back(deathknight2);
    drawrangerSpells.push_back(drawranger1);
    drawrangerSpells.push_back(drawranger2);

    AddHeroSpells(ARCHMAGE, archMageSpells);
    AddHeroSpells(DEATHKNIGHT, deathknightSpells);
    AddHeroSpells(DRAWRANGER,drawrangerSpells);
}
void SpellStorage::AddHeroSpells(HeroType hero, SpellStorage::HeroSpells spells)
{
    spellStorage[hero] = spells;
}

SpellStorage::HeroSpells& SpellStorage::getHeroSpells(HeroType hero)
{
    std::map<HeroType, std::vector<std::shared_ptr<Spell>>>::iterator iter;
    for (auto i = spellStorage.begin(); i != spellStorage.end(); i++)
    {
        if (hero == i->first)
        {
           
            iter = i;
            break;
        }
    }
    return iter->second;
}