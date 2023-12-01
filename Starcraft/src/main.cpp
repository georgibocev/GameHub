#include "BattleField.hpp"

#include <iostream>

int main() {
    std::string protosin;
    std::string teranin;
    std::cout<<"Enter teran"<<std::endl;
    std::cin >> teranin;
    std::cout<<"Enter protos"<<std::endl;
    std::cin >> protosin;
    
    BattleField battlefield;
    battlefield.generateProtossFleet(protosin);
    battlefield.generateTerranFleet(teranin);
    battlefield.startBattle();
    
    return 0;
}