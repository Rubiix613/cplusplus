//
//  main.cpp
//  Lab01
//
//  Created by Adam Di Cioccio on 2022-01-24.
//

#include <iostream>

using namespace std;

class Vehicle {
    private:
    int _w, _d;
    
    public:
    Vehicle(int w, int d) {
        _w = w;
        _d = d;
        cout << "In constructor with 2 parameters" << endl;
    }
    Vehicle(int w) {
        _w = w;
        cout << "In constructor with 1 parameters, w = " << w << endl;
    }
    Vehicle() {
        cout << "In constructor with 0 parameters" << endl;
    }
    ~Vehicle() {
        cout << "In destructor" << endl;
    }
    
    
};

int getInt(string type) {
    
    bool valid = false;
    char input[128];
    int i = 0;

    while(!valid) {
        cout << "Enter number of " << type << ": " << endl;
        cin >> input;
        
        string temp = input;
        i = atoi(temp.c_str());
        
        if ( i == 0 ) {
            cout << "Invalid input! (Not an integer)" << endl;
        } else if (i < 0) {
            cout << "Invalid input! (Not a positive value)" << endl;
        } else {
            valid = true;
        }
        
    }
    cin.clear();
    return i;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Demo #5\n";
    int door, wheel;
    
    Vehicle *pVehicle;
    
    door =  getInt("doors");
    
    wheel = getInt("wheels");
    
    cout << "You entered: " << door << ", " << wheel << endl;
    
    pVehicle = new Vehicle(door, wheel);
    
    cout << "Vehicle has been created\n";
    return 0;
}



