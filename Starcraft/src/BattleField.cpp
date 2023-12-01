#include "BattleField.hpp"
#include "ProtossAirShip.hpp"
#include "TeranAirShip.hpp"
#include "Defines.hpp"
#include "Viking.hpp"
#include "BattleCruser.hpp"
#include "Carrier.hpp"
#include "Phoenix.hpp"

#include <iostream>

void BattleField::generateProtossFleet(const std::string& protossFleetComposition) {
    for (char shipType : protossFleetComposition) {
        if (shipType == 'c')
            protossFleet.push_back(std::make_shared<Carrier>());
        else if (shipType == 'p')
            protossFleet.push_back(std::make_shared<Phoenix>());
    }
}
    
void BattleField::generateTerranFleet(const std::string& terranFleetComposition) {
    for (char shipType : terranFleetComposition) {
        if (shipType == 'v')
            terranFleet.push_back(std::make_shared<Viking>());
        else if (shipType == 'b')
            terranFleet.push_back(std::make_shared<BattleCruser>()); 
    }
}

template <typename T>
void BattleField::shipDestroyedActions(std::vector<T>& defendingFleet, int& lastShipPos) {
    defendingFleet.pop_back();
    --lastShipPos;
}

void BattleField::terranAttack(int& lastProtossShipPos, int& lastTerranShipPos, const std::string& terranWin) {
    for (size_t i = 0 ; i != terranFleet.size(); ++i) { // i is the current attacking ship index  
        int currentAttackingTerranID = i;
        int terranDamage = terranFleet[i]->dealDamage(*protossFleet[lastProtossShipPos]);
        protossFleet[lastProtossShipPos]->takeDamage(terranDamage);
        if (protossFleet[lastProtossShipPos]->getBlownStatus()) {
            std::cout << terranFleet[lastTerranShipPos]->getName() << " with ID: " << currentAttackingTerranID << " killed enemy airship with ID: " << lastProtossShipPos << std::endl;
            shipDestroyedActions(protossFleet, lastProtossShipPos);
            if (protossFleet.empty()) {
                std::cout << terranWin << std::endl;
                return;
            }
        }
    }
    std::cout << "Last Protoss AirShip with ID: " << lastProtossShipPos << " has " << protossFleet[lastProtossShipPos]->getHealth() << " health and " << protossFleet[lastProtossShipPos]->getShield() <<" shield left"<< std::endl;
}

void BattleField::protossAttack(int& lastProtossShipPos, int& lastTerranShipPos, const std::string& protossWin) {
    for (size_t i = 0 ; i != protossFleet.size(); ++i) { // i is the current attacking ship index
        int currentAttackingProtosID = i;
        if (protossFleet[i]->getName() != carrier)
        {
            int protossDamage = protossFleet[i]->dealDamage();
            terranFleet[lastTerranShipPos]->takeDamage(protossDamage);
            if (terranFleet[lastTerranShipPos]->getBlownStatus()) {
                std::cout << protossFleet[lastProtossShipPos]->getName() << " with ID: " << currentAttackingProtosID << " killed enemy airship with ID: " << lastTerranShipPos << std::endl;
                shipDestroyedActions(terranFleet, lastTerranShipPos);
                if (terranFleet.empty()) {
                    std::cout << protossWin << std:: endl;
                    return;
                }
            }
        }
            else {
            int protossDamage = protossFleet[i]->dealDamage();
            for (int j = 0; j < protossFleet[i]->getInterceptors(); ++j) {
                terranFleet[lastTerranShipPos]->takeDamage(protossDamage);
                if (terranFleet[lastTerranShipPos]->getBlownStatus()) {
                    std::cout << protossFleet[lastProtossShipPos]->getName() << " with ID: " << currentAttackingProtosID << " killed enemy airship with ID: " << lastTerranShipPos << std::endl;
                    shipDestroyedActions(terranFleet, lastTerranShipPos);
                    if (terranFleet.empty()) {
                        std::cout << protossWin << std:: endl;
                        return;
                    }
                }
            }
        }
    }
    std::cout << "Last Terran AirShip with ID: " << lastTerranShipPos << " has " << terranFleet[lastTerranShipPos]->getHealth() << " health left" << std::endl;
    protossFleet[lastProtossShipPos]->regenerateShield(protossFleet[lastProtossShipPos]->getRegenSheild());
}

void BattleField::startBattle() {
    const std::string terranWin = "TERRAN has won!";
    const std::string protossWin = "PROTOSS has won!";
    while (!terranFleet.empty() && !protossFleet.empty()) {
        int lastTerranShipPos = terranFleet.size() - 1; 
        int lastProtossShipPos = protossFleet.size() - 1;
        terranAttack(lastProtossShipPos, lastTerranShipPos, terranWin);
        if (protossFleet.empty()) {
            break;
        }
        protossAttack(lastProtossShipPos, lastTerranShipPos, protossWin);
    }
}