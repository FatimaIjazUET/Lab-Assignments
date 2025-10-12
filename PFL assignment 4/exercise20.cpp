#include <iostream>
using namespace std;

int main() {
    
    double FixedCommission, CommissionPercent, CarCost, MinAddAmount, MaxAddAmount;
    double MinSellingPrice, MaxSellingPrice, MinCommission, MaxCommission;

    
    cout << "Enter Salesperson's Fixed Commission: $";
    cin >> FixedCommission;
    cout << "Enter Commission Percentage: ";
    cin >> CommissionPercent;
    cout << "Enter Purchasing Cost of the Car: $";
    cin >> CarCost;
    cout << "Enter Minimum Amount to Add to Cost for Minimum Selling Price: $";
    cin >> MinAddAmount;
    cout << "Enter Maximum Amount to Add to Cost for Maximum Selling Price: $";
    cin >> MaxAddAmount;

    MinSellingPrice = CarCost + MinAddAmount;
    MaxSellingPrice = CarCost + MaxAddAmount;

      MinCommission = FixedCommission + (CommissionPercent / 100) * MinAddAmount;
    MaxCommission = FixedCommission + (CommissionPercent / 100) * MaxAddAmount;

    
    cout << "\n------------------------- Summary -------------------------\n";
    cout << "Minimum Selling Price of the Car: $" << MinSellingPrice << endl;
    cout << "Maximum Selling Price of the Car: $" << MaxSellingPrice << endl;
    cout << "Minimum Possible Commission:      $" << MinCommission << endl;
    cout << "Maximum Possible Commission:      $" << MaxCommission << endl;
    cout << "\n-----------------------------------------------------------\n";
    
    return 0;
}
