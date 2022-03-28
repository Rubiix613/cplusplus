//
//  GasolineVehicle.h
//  Lab01
//
//  Created by Adam Di Cioccio on 2022-03-27.
//

#include "Vehicle.h"

class GasolineVehicle : public Vehicle {
private:
    
public:
    float currentGasoline;
    float maxGasoline;
    
    GasolineVehicle(float currentGasoline, float engineEffeciency) {
        this->currentGasoline = currentGasoline;
        this->engineEffeciency = engineEffeciency;
        this->maxGasoline = currentGasoline;
    }

    GasolineVehicle() {
        
    }
        
    ~GasolineVehicle() {
        cout << "In Gasoline Vehicle Destructor" << endl;
    }
        
    float calculateRange() {
        return (currentGasoline * 100) / engineEffeciency;
    }
        
    float percentEnergyRemaining() {
        return (currentGasoline / maxGasoline) * 100.0f;
    }
        
    void drive(float km) {
        currentGasoline -= (km/100) * engineEffeciency;
    }

    
};

#ifndef GasolineVehicle_h
#define GasolineVehicle_h


#endif /* GasolineVehicle_h */
