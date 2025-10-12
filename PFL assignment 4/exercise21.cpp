#include <iostream>
using namespace std;

int main() {
 
    double Mass1, Mass2, Distance, Force;
    const double GravitationalConstant = 6.67e-8;

    
    cout << "Enter Mass of the First Body (in grams): ";
    cin >> Mass1;
    cout << "Enter Mass of the Second Body (in grams): ";
    cin >> Mass2;
    cout << "Enter Distance between the Bodies (in centimeters): ";
    cin >> Distance;


    Force = GravitationalConstant * ((Mass1 * Mass2) / (Distance * Distance));

   
    cout << "\n---------- Result ----------\n";
    cout << "Force between the Bodies: " << Force << " dynes" << endl;
    
    return 0;
}
