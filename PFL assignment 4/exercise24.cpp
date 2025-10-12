#include <iostream>
using namespace std;

int main() {

    double WireLength, Length, Width;

    cout << "Enter Length of the Wire : ";
    cin >> WireLength;

   
    Width = WireLength / 5;
    Length = 1.5 * Width;

    cout << "\n----- Picture Frame Dimensions -----\n";
    cout << "Width of the Picture Frame: " << Width << endl;
    cout << "Length of the Picture Frame: " << Length << endl;
    
    return 0;
}
