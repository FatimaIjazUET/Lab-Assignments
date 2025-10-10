#include <iostream>
using namespace std;

int main() {
    
    int population;  
    int n;
    int futurePopulation;

    
    cout << "Enter the current world population: ";
    cin >> population;

    
    cout << "Enter the number of people born every month: ";
    cin >> n;

    
    
    
    futurePopulation = population + (n*30*12);

    cout << "The world population after 3 decades will be: "
         << futurePopulation << " people.";

    return 0;
}
