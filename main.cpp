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

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Demo #3\n";
    
    Vehicle v1(4, 2);
    
    cout << "Vehicle has been created\n";
    return 0;
}
