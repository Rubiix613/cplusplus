//
//  HybridVehicle.h
//  Lab01
//
//  Created by Adam Di Cioccio on 2022-03-27.
//

#include "ElectricVehicle.h"
#include "GasolineVehicle.h"

class HybridVehicle : public ElectricVehicle, public GasolineVehicle {
private:
    float currentEnergy, electricEffeciency, gasEffeciency;
    float maxEnergy = 120;
    
public:
    HybridVehicle(float currentGasoline, float gasEffeciency, float currentCharge, float electricEffeciency) {
        
        this->currentGasoline = currentGasoline;
        this->gasEffeciency = gasEffeciency;
        this->currentCharge = currentCharge;
        this->electricEffeciency = electricEffeciency;
        
        this->currentEnergy = (currentGasoline+currentCharge);
    }

    HybridVehicle() {
        
    }
        
    ~HybridVehicle() {
        cout << "In Gasoline Vehicle Destructor" << endl;
    }
        
    float calculateRange() {
        return (currentEnergy * 100) / ((gasEffeciency + electricEffeciency)/2);
    }
        
    float percentEnergyRemaining() {
        return currentEnergy / (maxEnergy * 100.0f);
    }
        
    void drive(float km) {
        
        currentEnergy -= (km/100) * ((gasEffeciency + electricEffeciency)/2);
        if ((currentGasoline+currentCharge) <= 0) {
            cout << "Vehicle is out of fuel!" << endl;
        }
    }

    
};

#ifndef HybridVehicle_h
#define HybridVehicle_h


#endif /* HybridVehicle_h */
