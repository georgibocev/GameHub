#include"DeathKnight.hpp"
#include<iostream>

void DeathKnight::ShowSpecialAbility(SpellType typeOfSpellToCast) 
{
    if (typeOfSpellToCast == ULTIMATE)
    {
       std::cout << m_name << " casted " << DEATH_KNIGHT_BASIC_SPELL_NAME << " for 0 mana " << std::endl;
    }
}