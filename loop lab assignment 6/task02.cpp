#include <iostream>
using namespace std;


void generateFibonacci(int length);


int main() {
    int n;
    cout << "Enter the length of Fibonacci series: ";
    cin >> n;

    generateFibonacci(n);  
    return 0;
}


void generateFibonacci(int length) {
    int first = 0, second = 1, next;

    cout << "\nFibonacci Series of length " << length << ":\n";

    for (int i = 1; i <= length; i++) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    cout << endl;
}

