//
//  ElectricVehicle.cpp
//  Lab01
//
//  Created by Adam Di Cioccio on 2022-03-24.
//

#include "GasolineVehicle.h"

using namespace std;

GasolineVehicle::GasolineVehicle(float currentGasoline, float engineEffeciency) {
    this->currentGasoline = currentGasoline;
    this->engineEffeciency = engineEffeciency;
    
    this->maxGasoline = currentGasoline;
}

GasolineVehicle::GasolineVehicle() {
    
}
    
GasolineVehicle::~GasolineVehicle() {
    cout << "In Gasoline Vehicle Destructor" << endl;
}
    
float GasolineVehicle::calculateRange() {
    return (currentGasoline * 100) / engineEffeciency;
}
    
float GasolineVehicle::percentEnergyRemaining() {
    return (currentGasoline / maxGasoline) * 100.0f;
}
    
void GasolineVehicle::drive(float km) {
    currentGasoline -= (km/100) * engineEffeciency;
}
   






