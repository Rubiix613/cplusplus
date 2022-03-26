//
//  Vehicle.h
//  Lab01
//
//  Created by Adam Di Cioccio on 2022-02-03.
//

#pragma once

#include <stdio.h>
#include <iostream>

using namespace std;

class Vehicle {
private:
    int _w, _d;

public:
    
    float engineEffeciency;
    
    int getW();
    int getD();
    
    void setW(int w);
    void setD(int d);
    
    Vehicle();

    Vehicle(int w);

    Vehicle(int w, int d);
    
    ~Vehicle();
    
    void printVehicle();
    
    Vehicle(Vehicle &copy) {
        _w = copy.getW();
        _d = copy.getD();
    
    }
    
    Vehicle(Vehicle *copy) : Vehicle(*copy) {}
    
    //Vehicle (Vehicle &);
    
    //Vehicle (Vehicle *);
    
    //overload assignment operator
    Vehicle operator=(const Vehicle& v);
    
    //overload comparison operator equal
    bool operator==(const Vehicle& v);
    
    //overload comparison operator not equal
    bool operator!=(const Vehicle& v);
    
    //overload postfix inc and dec
    Vehicle operator++(int);
    Vehicle operator--(int);
    
    //overload prefix inc and dec
    Vehicle operator++();
    Vehicle operator--();
    
    friend ostream& operator << (ostream&, const Vehicle& v);
    
    virtual float calculateRange();
    
    virtual float percentEnergyRemaining();
    
    virtual void drive(float km);
    
};

class ElectricVehicle : public Vehicle {
private:
    int currentCharge, maxCharge;
    
public:
    ElectricVehicle();
    
    ~ElectricVehicle();
    
    float calculateRange();
        
    float percentEnergyRemaining();
        
    void drive(float km);
    
    
};

class GasolineVehicle : public Vehicle {
private:
    int currentGasoline, maxGasoline;
    
public:
    GasolineVehicle() {}
    
    ~GasolineVehicle() {}
    
    
};

class HybridVehicle : public ElectricVehicle, public GasolineVehicle {
private:
    
public:
    HybridVehicle() {}
    
    ~HybridVehicle() {}
    
    
};

#ifndef Vehicle_h
#define Vehicle_h


#endif /* Vehicle_h */
