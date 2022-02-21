//
//  Vehicle.cpp
//  Lab01
//
//  Created by Adam Di Cioccio on 2022-02-04.
//
#include "Vehicle.h"

using namespace std;

int Vehicle::getD() {
    return _d;
}

int Vehicle::getW() {
    return _w;
}

void Vehicle::setD(int d) {
    _d = d;
}

void Vehicle::setW(int w) {
    _w = w;
}

Vehicle::Vehicle(int w, int d) {
    _w = w;
    _d = d;
    cout << "In constructor with 2 parameters" << endl;
}

Vehicle::Vehicle(int w) : Vehicle(w, 0) {
    cout << "In constructor with 1 parameters, w = " << w << endl;
}

Vehicle::Vehicle() : Vehicle(0) {
    cout << "In constructor with 0 parameters" << endl;
}

Vehicle::~Vehicle() {
    cout << "In destructor" << endl;
}

void Vehicle::printVehicle() {
    cout << "VEHICLE: Wheels " << _w << " | Doors " << _d << endl;
}

//overload assignment operator
void Vehicle::operator=(Vehicle& v) {
    _d = v.getD();
    _w = v.getW();
}

//overload comparison operator
bool Vehicle::operator==(Vehicle& v) {
    return (_d == v.getD() && _w == v.getW());
}

//overload postfix dec
Vehicle Vehicle::operator--() {
    --_w;
    --_d;
    return *this;
}

//overload postfix inc
Vehicle Vehicle::operator++() {
    ++_w;
    ++_d;
    return *this;
}

//overload prefix dec
Vehicle Vehicle::operator--(int) {
    _w--;
    _d--;
    return *this;
}

//overload prefix inc
Vehicle Vehicle::operator++(int) {
    _w++;
    _d++;
    return *this;
}





