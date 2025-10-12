#include <iostream>
using namespace std;

int main() {
 
    double WireLength, Radius, Area;
    const double PI = 3.1416;

    
    cout << "Enter Length of the Wire (in inches or cm): ";
    cin >> WireLength;

   
    Radius = WireLength / (2 * PI);
    Area = PI * Radius * Radius;


    cout << "\n---------- Circle Details ----------\n";
    cout << "Radius of the Circle: " << Radius << endl;
    cout << "Area of the Circle: " << Area << endl;
    cout << "\n------------------------------------\n";
    
    return 0;
}
