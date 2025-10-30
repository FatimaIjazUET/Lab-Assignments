#include <iostream>
using namespace std;


int digitSum(int number);

int main() {
    int num;

    cout << "Enter any number: ";
    cin >> num;

    cout << "Sum of digits = " << digitSum(num) << endl;

    return 0;
}


int digitSum(int number) {
    int sum = 0;

    
    if (number < 0)
        number = -number;

    
    while (number != 0) {
        int rem = number % 10; 
        sum = sum + rem;        
        number = number / 10;   
    }

    return sum;
}
