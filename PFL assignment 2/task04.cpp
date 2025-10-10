#include <iostream>
using namespace std;

int main() {
    
    float Q, t, I;

    
    cout << "Enter the charge (Q) in coulombs: ";
    cin >> Q;

    
    cout << "Enter the time (t) in seconds: ";
    cin >> t;
    
        I = Q / t;

        
        cout << "The current (I) is: " << I << " amperes";
    } 