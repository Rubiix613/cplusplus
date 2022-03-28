//
//  ElectricVehicle.cpp
//  Lab01
//
//  Created by Adam Di Cioccio on 2022-03-24.
//

#include "HybridVehicle.h"

using namespace std;

HybridVehicle::HybridVehicle(float currentGasoline, float gasEffeciency, float currentCharge, float electricEffeciency) {
    
    this->currentGasoline = currentGasoline;
    this->gasEffeciency = gasEffeciency;
    this->currentCharge = currentCharge;
    this->electricEffeciency = electricEffeciency;
    
    this->currentEnergy = (currentGasoline+currentCharge);
    this->maxEnergy = (currentGasoline+currentCharge);
}

HybridVehicle::HybridVehicle() {
    
}
    
HybridVehicle::~HybridVehicle() {
    cout << "In Gasoline Vehicle Destructor" << endl;
}
    
float HybridVehicle::calculateRange() {
    return (currentEnergy * 100) / ((gasEffeciency + electricEffeciency)/2);
}
    
float HybridVehicle::percentEnergyRemaining() {
    return (currentEnergy / maxEnergy) * 100.0f;
}
    
void HybridVehicle::drive(float km) {
    
    currentEnergy -= (km/100) * ((gasEffeciency + electricEffeciency)/2);
    if ((currentGasoline+currentCharge) <= 0) {
        cout << "Vehicle is out of fuel!" << endl;
    }
}
   






