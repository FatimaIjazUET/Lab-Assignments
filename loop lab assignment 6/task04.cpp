#include <iostream>
using namespace std;


int frequencyChecker(int number, int digit);

int main() {
    int num, dig;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter a digit to find its frequency: ";
    cin >> dig;

    cout << "Frequency of " << dig << " = " << frequencyChecker(num, dig) << endl;

    return 0;
}


int frequencyChecker(int number, int digit) {
    int count = 0;

    
    if (number < 0)
        number = -number;

   
    while (number != 0) {
        int rem = number % 10; 
        if (rem == digit)
            count++;            
        number = number / 10;   
    }

    return count;
}
