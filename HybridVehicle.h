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
    float currentEnergy, maxEnergy, electricEffeciency, gasEffeciency;
    
public:
    HybridVehicle(float maxGasoline, float gasEffeciency, float maxCharge, float electricEffeciency);
    
    HybridVehicle();
    
    virtual ~HybridVehicle();
    
    float calculateRange();
    
    float percentEnergyRemaining();
    
    void drive(float km);

    
};

#ifndef HybridVehicle_h
#define HybridVehicle_h


#endif /* HybridVehicle_h */
