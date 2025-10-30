#include <iostream>
using namespace std;


void printTable(int number);


int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

 printTable(num);

    return 0;
}


void printTable(int number) {
    cout << "\nMultiplication Table of " << number << ":\n";
    for (int i = 1; i <= 10; i++) {
          cout << number << " x " << i << " = " << number * i << endl;
    }
}
