#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double ConcreteCubicYards, ThicknessInches, LengthToWidthRatio;
    double ConcreteCubicFeet, ThicknessFeet, Area, Width, Length;
    const double CubicFeetPerCubicYard = 27.0;


    cout << "Enter Amount of Premixed Concrete Ordered (in cubic yards): ";
    cin >> ConcreteCubicYards;

    cout << "Enter Thickness of the Patio (in inches): ";
    cin >> ThicknessInches;

    cout << "Enter Ratio of Length to Width: ";
    cin >> LengthToWidthRatio;


    ConcreteCubicFeet = ConcreteCubicYards * CubicFeetPerCubicYard;
    ThicknessFeet = ThicknessInches / 12.0;

  
    Area = ConcreteCubicFeet / ThicknessFeet;

    Width = sqrt(Area / LengthToWidthRatio);
    Length = LengthToWidthRatio * Width;


    cout << "\n---------- Patio Dimensions ----------\n";
    cout << "Width of the Patio: " << Width << " feet" << endl;
    cout << "Length of the Patio: " << Length << " feet" << endl;
    cout << "\n--------------------------------------\n";
    
    return 0;
}
