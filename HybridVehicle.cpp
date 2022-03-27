//
//  ElectricVehicle.cpp
//  Lab01
//
//  Created by Adam Di Cioccio on 2022-03-24.
//

#include "HybridVehicle.h"

using namespace std;

HybridVehicle::HybridVehicle(float maxGasoline, float gasEffeciency, float maxCharge, float electricEffeciency) {
    maxGasoline = maxGasoline;
    gasEffeciency = gasEffeciency;
    maxCharge = maxCharge;
    electricEffeciency = electricEffeciency;
}

HybridVehicle::HybridVehicle() {
    
}
    
HybridVehicle::~HybridVehicle() {
    cout << "In Gasoline Vehicle Destructor" << endl;
}
    
float HybridVehicle::calculateRange() {
    return (currentEnergy * 100) / engineEffeciency;
}
    
float HybridVehicle::percentEnergyRemaining() {
    return currentEnergy / (maxEnergy * 100);
}
    
void HybridVehicle::drive(float km) {
        
}
   






