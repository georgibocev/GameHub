#ifndef PISTOL_HPP_
#define PISTOL_HPP_

#include "Defines.hpp"

class Player;

class Pistol
{
    protected: 
        int mDamagePerRound;
        int mClipSize;
        int mRemainingAmmo;
        int mCurrClipBullets;
        void damageToArmorAndHealth(int percent,Player& target);
        void printStatus(Player& target);
    public:
        Pistol (int DamagePerRound, int clipSize, int remainingAmmo) : 
        mDamagePerRound(DamagePerRound),
        mClipSize(clipSize),
        mRemainingAmmo(remainingAmmo),
        mCurrClipBullets(mClipSize) {}
        virtual bool fire(Player& target) = 0;
        void reload(); 
        virtual ~Pistol() {}
};

#endif //PISTOL_HPP_