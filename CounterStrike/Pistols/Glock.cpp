#include "Glock.hpp"
#include "Player.hpp"
#include <iostream>
#include "Defines.hpp"

bool Glock::fire(Player& target)
{
    int shootsPerTurn = 3;
        if (mCurrClipBullets > 0) 
        {
                for (int i = 0; i < shootsPerTurn; ++i) 
                {
                    if (mCurrClipBullets == 0)
                    {
                        reload();
                        break;
                    }
                    if (target.vitalData.armor > 0) 
                    {
                        damageToArmorAndHealth(Percentages::FIFTY,target);
                    } 
                    else 
                    {
                        target.vitalData.health -= mDamagePerRound;
                    }
                    printStatus(target);
                    --mCurrClipBullets;
                    if (target.vitalData.health <= 0)
                    {
                        return true;
                    }
                }
                std::cout << "" << std::endl;
        } 
        else if (mCurrClipBullets == 0) 
        {
            reload();
        }
        return false;
    }