#include "Pistol.hpp"
#include <iostream>
#include "Player.hpp"
void Pistol::reload()
{
    if (mRemainingAmmo == 0)
    {
        std::cout << noAmmoLeftMessage << std::endl;
        return;
    }

    int bulletsToReload = 0;
    if (mClipSize > mRemainingAmmo)
    {
        bulletsToReload = mRemainingAmmo;
    }
    else
    {
        bulletsToReload = mClipSize;
    }

    mRemainingAmmo -= bulletsToReload;
    mCurrClipBullets += bulletsToReload;

    std::cout << reloadingMessage << std::endl;
    std::cout << "currClipBullets: " <<  mCurrClipBullets << ", remainingAmmo: " << mRemainingAmmo << std::endl;
    std::cout << " " << std::endl;
}

void Pistol::damageToArmorAndHealth(int percent,Player& target){
    int damageToArmorAndHealth = (mDamagePerRound / percent < target.vitalData.armor) ? mDamagePerRound / percent : target.vitalData.armor;
    target.vitalData.armor -= damageToArmorAndHealth;
    int damageToHealth = mDamagePerRound - damageToArmorAndHealth;
    target.vitalData.health -= damageToHealth;
}

void Pistol::printStatus(Player& target){
    std::cout << "Enemy left with: " << target.vitalData.health << " health and " << target.vitalData.armor << " armor" << std::endl;
}