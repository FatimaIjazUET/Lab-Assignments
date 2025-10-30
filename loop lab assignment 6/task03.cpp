#include <iostream>
using namespace std;


int totalDigits(int number);


int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Total digits: " << totalDigits(num) << endl;

    return 0;
}

int totalDigits(int number) {
    int count = 0;


    if (number == 0)
        return 1;

    if (number < 0)
        number = -number;

    
    while (number != 0) {
        number = number / 10;
        count++;
    }

    return count;
}
