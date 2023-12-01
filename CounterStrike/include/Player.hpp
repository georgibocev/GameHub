#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include "Defines.hpp"
#include "Pistol.hpp"
#include "PistolFactory.hpp"
#include <memory>

class Player
{
    private:
        std::unique_ptr<Pistol> pistol;
    
    public:
        void buyPistol(PistolType pistolD, int pistolDamagePerRound, int pistolClipSize, int pistolRemainingAmmo);
        bool isAlive() const;
        const std::unique_ptr<Pistol>& getPistol() const;
        PlayerVitalData vitalData;
        Player(): pistol(nullptr) {}
};
#endif //PLAYER_HPP_