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
    float maxEnergy;
    
public:
    HybridVehicle(float currentGasoline, float gasEffeciency, float currentCharge, float electricEffeciency);
    
    HybridVehicle();
    
    virtual ~HybridVehicle();
    
    float calculateRange();
    
    float percentEnergyRemaining();
    
    void drive(float km);

    
};

#ifndef HybridVehicle_h
#define HybridVehicle_h


#endif /* HybridVehicle_h */
