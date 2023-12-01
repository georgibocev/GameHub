#ifndef HEROSTORAGE_HPP_
#define HEROSTORAGE_HPP_

#include<vector>
#include<memory>
#include"Archmage.hpp" 
#include"DeathKnight.hpp"
#include"DrawRanger.hpp"

class HeroStorage
{
    public:
        using Hero = std::shared_ptr<Heroes>;
        using HeroesStorage = std::vector<Hero>;

        HeroStorage() {}
        void TakeHeroInput( std::string &heroName, int& heroMana, int& manaRegenerationRate, int& manaRegenerationModifier,bool is_archmage);
        void CollectHeroes();
        std::shared_ptr<Heroes> InitializeHero(HeroType, const std::string &heroName, int heroMana, int manaRegenerationRate, int manaRegenerationModifier);
        void AddHeroInStorage(Hero hero);
        const HeroesStorage& getStorage() const;
        ~HeroStorage() {}
    private:
        HeroesStorage heroes;
};

#endif // HEROSTORAGE_HPP_