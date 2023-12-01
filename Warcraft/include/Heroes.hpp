#ifndef HERO_HPP_
#define HERO_HPP_

#include <string>
#include<map>
#include<memory>
#include"Defines.hpp"
#include"Spell.hpp"

class Heroes
{
    protected:
        using HeroSpell  = std::shared_ptr<Spell>;
        using HeroSpells = std::map<SpellType,HeroSpell>;
        
        HeroType m_typeOfHero;
        std::string m_name;
        int m_maxMana = 0;
        int m_baseManaRegenerateRate = 0;
        HeroSpells spells;

        /*  
        std::string m_basicSpellName;
        std::string m_ultimateSpellName;
        int m_basicSpellManaCost = 0;
        int m_ultimateSpellManaCost = 0; 
        */
    public:
        
        inline Heroes(HeroType typeOfHero, const std::string &name, int maxMana, int baseManaRegenerateRate) : m_typeOfHero(typeOfHero), m_name(name), m_maxMana(maxMana), m_baseManaRegenerateRate(baseManaRegenerateRate) {}
        void CastSpell(SpellType typeOfSpellToCast);
        void AddSpell(HeroSpell spell);
        HeroType getHeroType() const;
        virtual void RegenerateMana();
        virtual void ShowSpecialAbility(SpellType typeOfSpellToCast) = 0;
        virtual ~Heroes() {}
        int getMana() const {return m_maxMana;}
        void PrintSpellCast(const std::string& heroName, const std::string& spellName, int spellManaCost, bool successful);
     
};

#endif //HERO_HPP_
