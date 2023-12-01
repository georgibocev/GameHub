#include"Archmage.hpp"

void Archmage::RegenerateMana()
{
    m_maxMana += (m_baseManaRegenerateRate * m_manaRegenModifier);
}

void Archmage::ShowSpecialAbility(SpellType typeOfSpellToCast) 
{
    if (typeOfSpellToCast ==ULTIMATE)
    {
        RegenerateMana();
    }
}