#ifndef DEFINES_HPP_
#define DEFINES_HPP_

enum ActionType { CAST_BASIC_SPELL, CAST_ULTIMATE_SPELL, REGENERATE_MANA };
enum HeroType {ARCHMAGE, DEATHKNIGHT,DRAWRANGER};

enum SpellType { BASIC = 0, ULTIMATE = 1 };

constexpr int NUMBER_OF_HEROES_FROM_INPUT = 3;
constexpr const char* ARCHMAGE_BASIC_SPELL_NAME = "Water Elemental";
constexpr int ARCHMAGE_BASIC_SPELL_MANA_COST = 120;
constexpr const char* ARCHMAGE_ULTIMATE_SPELL_NAME = "Mass Teleport";
constexpr int ARCHMAGE_ULTIMATE_SPELL_MANA_COST = 180;

constexpr const char* DEATH_KNIGHT_BASIC_SPELL_NAME = "Death Coil";
constexpr int DEATH_KNIGHT_BASIC_SPELL_MANA_COST = 75;
constexpr const char* DEATH_KNIGHT_ULTIMATE_SPELL_NAME = "Animate Dead";
constexpr int DEATH_KNIGHT_ULTIMATE_SPELL_MANA_COST = 200;

constexpr const char* DRAW_RANGER_BASIC_SPELL_NAME = "Silence";
constexpr int DRAW_RANGER_BASIC_SPELL_MANA_COST = 90;
constexpr const char* DRAW_RANGER_ULTIMATE_SPELL_NAME = "Charm";
constexpr int DRAW_RANGER_ULTIMATE_SPELL_MANA_COST = 150;

#endif  //DEFINES_HPP_ 