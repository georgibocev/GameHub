#include "DesertEagle.hpp"
#include "Player.hpp"
#include <iostream>

bool DesertEagle::fire(Player& target)
{
    if (mCurrClipBullets == 0)
    {
        reload();
        return false;
    }
    
    if (target.vitalData.armor == 0)
    {
        target.vitalData.health -= mDamagePerRound;
    }
    else
    {
        --mCurrClipBullets;

        if (target.vitalData.armor > 0) 
        {
        damageToArmorAndHealth(Percentages::TWENTYFIVE,target);
        }
    }

    printStatus(target);
    std::cout << "" << std::endl;

    if (target.vitalData.health <= 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

