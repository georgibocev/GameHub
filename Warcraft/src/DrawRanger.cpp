#include"DrawRanger.hpp"
#include<iostream>

void DrawRanger::ShowSpecialAbility(SpellType typeOfSpellToCast) 
{
    if (typeOfSpellToCast == BASIC)
    {
        std::cout << m_name  << " casted " << DRAW_RANGER_BASIC_SPELL_NAME << " for 0 mana " << std::endl;
    } 
}