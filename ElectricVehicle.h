//
//  ElectricVehicle.h
//  Lab01
//
//  Created by Adam Di Cioccio on 2022-03-27.
//

#include "Vehicle.h"

class ElectricVehicle : public Vehicle {
private:
    
    
public:
    float currentCharge;
    float maxCharge = 125;
    
    ElectricVehicle(float currentCharge, float engineEffeciency) {
        this->currentCharge = currentCharge;
        this->engineEffeciency = engineEffeciency;
    }

    ElectricVehicle() {
        
    }
        
    ~ElectricVehicle() {
        cout << "In Electric Vehicle Destructor" << endl;
    }
        
    float calculateRange() {
        return (currentCharge * 100) / engineEffeciency;
    }
        
    float percentEnergyRemaining() {
        return currentCharge / (maxCharge * 100.0f);
    }
        
    void drive(float km) {
        currentCharge -= (km/100) * engineEffeciency;
    }

};

#ifndef ElectricVehicle_h
#define ElectricVehicle_h

#endif /* ElectricVehicle_h */
