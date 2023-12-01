#include"Heroes.hpp"
#include"Spell.hpp"
#include<iostream>

void Heroes::CastSpell(SpellType typeOfSpellToCast)
{
    try
    {
        for (auto i = spells.begin(); i != spells.end(); i++)
        {
            if (typeOfSpellToCast == i->first)
            {
                if (m_maxMana >= i->second->getManaForSpell())
                {
                    m_maxMana -= i->second->getManaForSpell();
                    PrintSpellCast(m_name, i->second->getSpellName(), i->second->getManaForSpell(), true);
                    ShowSpecialAbility(typeOfSpellToCast);
                }
                else 
                {
                    PrintSpellCast(m_name, i->second->getSpellName(), i->second->getManaForSpell(), false);
                }          
            }
            if (m_maxMana < 0)
            {
                throw std::invalid_argument("Mana is less than 0.");
            }
        }
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
    }
}

void Heroes::AddSpell(Heroes::HeroSpell spell)
{
    SpellType type = spell->getTypeOfSpell();

    spells.insert(std::make_pair(type, spell));
}

void Heroes::RegenerateMana()
{
   m_maxMana += m_baseManaRegenerateRate;
}

HeroType Heroes::getHeroType() const
{
    return m_typeOfHero;
}

void Heroes::PrintSpellCast(const std::string& heroName, const std::string& spellName, int spellManaCost, bool successful)
{
    if (successful)
    {
       
        std::cout << heroName << " casted " << spellName << " for " << spellManaCost << " mana." << std::endl;
    }
    else
    {
        std::cout << heroName << " - not enough mana to cast " << spellName << "." << std::endl;
    }
}