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
    HybridVehicle(float maxGasoline, float gasEffeciency, float maxCharge, float electricEffeciency) {
        maxGasoline = maxGasoline;
        gasEffeciency = gasEffeciency;
        maxCharge = maxCharge;
        electricEffeciency = electricEffeciency;
    }

    HybridVehicle() {
        
    }
        
    ~HybridVehicle() {
        cout << "In Gasoline Vehicle Destructor" << endl;
    }
        
    float calculateRange() {
        return (currentEnergy * 100) / (gasEffeciency+electricEffeciency);
    }
        
    float percentEnergyRemaining() {
        return currentEnergy / (maxEnergy * 100);
    }
        
    void drive(float km) {
            
    }

    
};

#ifndef HybridVehicle_h
#define HybridVehicle_h


#endif /* HybridVehicle_h */
