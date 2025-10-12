#include <iostream>
using namespace std;

int main() {
    
    int Quarters, Dimes, Nickels, TotalPennies;


    cout << "Enter the number of quarters: ";
    cin >> Quarters;
    cout << "Enter the number of dimes: ";
    cin >> Dimes;
    cout << "Enter the number of nickels: ";
    cin >> Nickels;

    
    TotalPennies = (Quarters * 25) + (Dimes * 10) + (Nickels * 5);

    
    cout << "\nThe total value of your coins in pennies is: " << TotalPennies << " pennies." << endl;

    return 0;
}
