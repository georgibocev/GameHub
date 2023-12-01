#include "Player.hpp"

bool Player::isAlive() const
{
    if (vitalData.health > 0)
    {
        return true;
    }
    return false;
}

void Player::buyPistol(PistolType pistolID, int pistolDamagePerRound, int pistolClipSize, int pistolRemainingAmmo)
{
    pistol = PistolFactory::createPistol(pistolID, pistolDamagePerRound, pistolClipSize, pistolRemainingAmmo);
}

const std::unique_ptr<Pistol>& Player::getPistol() const
{
    return pistol;
}