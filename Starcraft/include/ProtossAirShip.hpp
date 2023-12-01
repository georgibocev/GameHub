#ifndef PROTOSAIRSHIP_HPP_
#define PROTOSAIRSHIP_HPP_

#include "Defines.hpp"

class ProtossAirShip {

protected: 
    int m_health = 0;
    int m_shield = 0;
    int m_maxShield = 0;
    bool m_isBlown = false;
    int m_inteceptors=0;
    std::string m_type;
public:
    ProtossAirShip() = default;
    ProtossAirShip(int health, int shield) : m_health(health), m_shield(shield), m_maxShield(shield),m_isBlown(false) {}
    virtual ~ProtossAirShip() {} 
    void takeDamage(int damage); 
    void regenerateShield(int shieldRegenerating);
    int getShield() const;
    int getHealth() const;
    bool getBlownStatus() const;
    virtual std::string getName() const = 0;
    virtual int dealDamage() const = 0;
    virtual int getRegenSheild() const = 0;
    virtual int getInterceptors() const;
};

#endif //PROTOSAIRSHIP_HPP_