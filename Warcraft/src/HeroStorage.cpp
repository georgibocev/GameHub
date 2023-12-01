#include<iostream>
#include"HeroStorage.hpp"
#include"Archmage.hpp"
#include"DeathKnight.hpp"
#include"DrawRanger.hpp"

std::shared_ptr<Heroes> HeroStorage::InitializeHero(HeroType typeOfHero, const std::string &heroName, int heroMana, int manaRegenerationRate, int manaRegenerationModifier)
{
    switch (typeOfHero)
    {
    case ARCHMAGE:
       return  std::shared_ptr<Heroes>(std::make_shared<Archmage>(typeOfHero,heroName,heroMana,manaRegenerationRate,manaRegenerationModifier));
        break;
    case DEATHKNIGHT:
        return std::shared_ptr<Heroes>(std::make_shared<DeathKnight>(typeOfHero, heroName, heroMana, manaRegenerationRate));
        break;
    case DRAWRANGER:
        return std::shared_ptr<Heroes>(std::make_shared<DrawRanger>(typeOfHero, heroName, heroMana, manaRegenerationRate));
        break;
    default:
        throw std::invalid_argument("Invalid HeroType");
        break;
    }
    
}

void HeroStorage::TakeHeroInput( std::string &heroName, int &heroMana, int &manaRegenerationRate, int &manaRegenerationModifier, bool is_archmage)
{
    
    std::string name;
    int mana = 0;
    int manaRegRate = 0;
    int manaRegMod = 1;
    std::cin >> name >> mana >> manaRegRate;
    heroName = name;
    heroMana = mana;
    manaRegenerationRate = manaRegRate;
    if (is_archmage)
    {
        std::cin >> manaRegMod;
        manaRegenerationModifier = manaRegMod;
    }
}

void HeroStorage::AddHeroInStorage(HeroStorage::Hero hero)
{

    heroes.push_back(hero);

}
void HeroStorage::CollectHeroes()
{
    try
    {
    std::string name;
    int mana = 0;
    int manaRegRate = 0;
    int manaRegMod = 1;

    TakeHeroInput(name, mana, manaRegRate, manaRegMod, true);
    std::shared_ptr<Heroes> ptr1 = InitializeHero(ARCHMAGE, name, mana, manaRegRate, manaRegMod);
    AddHeroInStorage(ptr1);

    TakeHeroInput(name, mana, manaRegRate, manaRegMod, false);
    std::shared_ptr<Heroes> ptr2 = InitializeHero(DEATHKNIGHT, name, mana, manaRegRate, manaRegMod);
    AddHeroInStorage(ptr2);

    TakeHeroInput(name, mana, manaRegRate, manaRegMod, false);
    std::shared_ptr<Heroes> ptr3 = InitializeHero(DRAWRANGER, name, mana, manaRegRate, manaRegMod);
    AddHeroInStorage(ptr3);
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

HeroStorage::HeroesStorage const &HeroStorage::getStorage() const
{
    return heroes;
}