#include <iostream>
using namespace std;

int main() {
    
    int hours, seconds;

    cout << "Enter time in hours: ";
    cin >> hours;

    seconds = hours * 60 * 60;  

cout << hours << " hour(s) = "<<endl;
cout<< seconds << " seconds";

    return 0;
}