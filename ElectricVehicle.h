//
//  ElectricVehicle.h
//  Lab01
//
//  Created by Adam Di Cioccio on 2022-03-27.
//

#include "Vehicle.h"

class ElectricVehicle : virtual public Vehicle {
private:
    float currentCharge;
    float maxCharge = 75;
    
public:
    ElectricVehicle(float currentCharge, float engineEffeciency);
    
    ElectricVehicle();
    
    virtual ~ElectricVehicle();
    
    float calculateRange();
    
    float percentEnergyRemaining();
    
    void drive(float km);

};

#ifndef ElectricVehicle_h
#define ElectricVehicle_h

#endif /* ElectricVehicle_h */
