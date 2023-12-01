#ifndef VIKING_HPP_
#define VIKING_HPP_

#include "Defines.hpp"
#include "TeranAirShip.hpp"

class Viking : public TerranAirShip {

public:
    Viking() : TerranAirShip(AirShipDefines::VIKING_HEALTH) {m_type=viking;}
    virtual ~Viking() {}
    int dealDamage(ProtossAirShip& opponent) override;
    std::string getName() const override;
};

#endif //VIKING_HPP_