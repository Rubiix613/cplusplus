//
//  ElectricVehicle.cpp
//  Lab01
//
//  Created by Adam Di Cioccio on 2022-03-24.
//

#include "ElectricVehicle.h"

using namespace std;

ElectricVehicle::ElectricVehicle(float currentCharge, float engineEffeciency) {
    this->currentCharge = currentCharge;
    this->engineEffeciency = engineEffeciency;
    
    this->maxCharge = currentCharge;
}

ElectricVehicle::ElectricVehicle() {
    
}
    
ElectricVehicle::~ElectricVehicle() {
    cout << "In Electric Vehicle Destructor" << endl;
}
    
float ElectricVehicle::calculateRange() {
    return (currentCharge * 100) / engineEffeciency;
}
    
float ElectricVehicle::percentEnergyRemaining() {
    return (currentCharge / maxCharge) * 100.0f;
}
    
void ElectricVehicle::drive(float km) {
    currentCharge -= (km/100) * engineEffeciency;
}
   






