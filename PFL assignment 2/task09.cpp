#include <iostream>
using namespace std;

int main() {
    
    int ageY, ageD;

    
    cout << "Enter your age in years: ";
    cin >> ageY;

    
    ageD = ageY * 365;   

   
    cout << "Your age in days is approximately " << ageD << " days" << endl;

    return 0;
}
