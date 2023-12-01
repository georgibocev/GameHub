#ifndef SPELL_HPP_
#define SPELL_HPP_

#include <string>
#include"Defines.hpp"

class Spell
{
private:
    SpellType m_spellType;
    std::string m_spellName;
    int m_manaCostForSpell = 0;
    
public:
    Spell(SpellType typeOfSpell,const std::string& spellName,int costOfManaForSpell) : m_spellType(typeOfSpell),m_spellName(spellName),m_manaCostForSpell(costOfManaForSpell) {}
    inline SpellType getTypeOfSpell() const {return m_spellType;}
    inline int getManaForSpell() const {return m_manaCostForSpell;}
    inline const std::string& getSpellName() const {return m_spellName;}
    ~Spell() {}
};

#endif // SPELL_HPP_