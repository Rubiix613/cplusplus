//
//  ElectricVehicle.cpp
//  Lab01
//
//  Created by Adam Di Cioccio on 2022-03-24.
//

#include "Vehicle.h"

using namespace std;

ElectricVehicle::ElectricVehicle() {
    
}
    
ElectricVehicle::~ElectricVehicle() {
    cout << "In Electric Vehicle Destructor" << endl;
}
    
float ElectricVehicle::calculateRange() {
    return (currentCharge * 100) / engineEffeciency;
}
    
float ElectricVehicle::percentEnergyRemaining() {
    return currentCharge / (maxCharge * 100);
}
    
void ElectricVehicle::drive(float km) {
        
}
   






