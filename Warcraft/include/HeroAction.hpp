#ifndef HEROACTION_HPP_
#define HEROACTION_HPP_

#include<vector>
#include<memory>
#include"Defines.hpp"
#include"Heroes.hpp"

class HeroAction
{
    public:
        using WarcraftHeroes = std::vector<std::shared_ptr<Heroes>>;
        HeroAction() {}
        void MakeAllHeroesCastSpell(const WarcraftHeroes heroes, SpellType typeOfSpell) const;
        void MakeAllHeroesToRegenerateMana(const WarcraftHeroes heroes) const;
        ~HeroAction() {}
};

#endif //HEROACTION_HPP_
