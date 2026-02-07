#include <iostream>
using namespace std;


double calculateCurrent(double voltage, double resistance) {
    if (resistance == 0) {
        cout << "Error: Resistance cannot be zero!" << endl;
        return 0;
    }
    return voltage / resistance;
}

int main() {
    
    cout << "Current with voltage 10V and resistance 2O: " 
         << calculateCurrent(10, 2) << "A" << endl;
    
    return 0;
}
