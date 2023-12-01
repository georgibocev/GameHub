#include<iostream>
#include"HeroAction.hpp"

void HeroAction::MakeAllHeroesCastSpell(const WarcraftHeroes heroes, SpellType typeOfSpell) const
{
    for (auto it = heroes.begin(); it != heroes.end(); ++it)
    {
        try
        {
            (*it)->CastSpell(typeOfSpell);
        }
        catch (const std::invalid_argument& e)
        {
            std::cerr << "Invalid argument: " << e.what() << std::endl;
        }
        catch (const std::runtime_error& e)
        {
            std::cerr << "Runtime error: " << e.what() << std::endl;
        }
        catch (const std::exception& e)
        {
            std::cerr << "Exception occurred: " << e.what() << std::endl;
        }
    }
}

void HeroAction::MakeAllHeroesToRegenerateMana(const WarcraftHeroes heroes) const
{
    for (auto it = heroes.begin(); it != heroes.end(); ++it)
    {
        try
        {
            (*it)->RegenerateMana();
        }
        catch (const std::invalid_argument& e)
        {
            std::cerr << "Invalid argument: " << e.what() << std::endl;
        }
        catch (const std::runtime_error& e)
        {
            std::cerr << "Runtime error: " << e.what() << std::endl;
        }
        catch (const std::exception& e)
        {
            std::cerr << "Exception occurred: " << e.what() << std::endl;
        }
    }
}