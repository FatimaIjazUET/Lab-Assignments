#include <iostream>
using namespace std;

int main() 
{
    double BagCapacity, MetricTonInPounds, NumberOfBags;
    MetricTonInPounds = 2205;
    cout << "Enter Amount of Rice a Bag Can Hold (in pounds): ";
    cin >> BagCapacity;
    NumberOfBags = MetricTonInPounds / BagCapacity;
    cout << "Number of Bags Needed to Store One Metric Ton of Rice: " << NumberOfBags << endl;

    return 0;
}
