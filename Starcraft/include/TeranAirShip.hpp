#ifndef TERANAIRSHIP_HPP_
#define TERANAIRSHIP_HPP_

#include "Defines.hpp"

class ProtossAirShip;

class TerranAirShip {

protected:
    int m_health = 0;
    bool m_isBlown = false;
    std::string m_type;

public:
    TerranAirShip(int shipHealth) : m_health(shipHealth),m_isBlown(false) {}
    virtual ~TerranAirShip() {} 
    void takeDamage(int damage);
    bool getBlownStatus() const; 
    int getHealth()const;
    virtual int dealDamage(ProtossAirShip& opp) = 0;
    virtual std::string getName() const = 0;
};

#endif //TERANAIRSHIP_HPP_