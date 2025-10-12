#include <iostream>
using namespace std;

int main() {
   
    double NumberOfShares, PurchasePrice, SellingPrice;
    double AmountInvested, PurchaseServiceCharge, SellingServiceCharge;
    double TotalServiceCharges, AmountReceived, GainOrLoss;
    const double ServiceChargePercent = 0.015; 
    cout << "Enter Number of Shares Sold: ";
    cin >> NumberOfShares;
    cout << "Enter Purchase Price of Each Share: $";
    cin >> PurchasePrice;
    cout << "Enter Selling Price of Each Share: $";
    cin >> SellingPrice;


    AmountInvested = NumberOfShares * PurchasePrice;
    PurchaseServiceCharge = AmountInvested * ServiceChargePercent;

    AmountReceived = NumberOfShares * SellingPrice;
    SellingServiceCharge = AmountReceived * ServiceChargePercent;

    TotalServiceCharges = PurchaseServiceCharge + SellingServiceCharge;
    GainOrLoss = (AmountReceived - SellingServiceCharge) - (AmountInvested + PurchaseServiceCharge);


    cout << "\n--------------- Summary ---------------\n";
    cout << "Amount Invested: $" << AmountInvested << endl;
    cout << "Total Service Charges: $" << TotalServiceCharges << endl;
    cout << "Amount Gained or Lost: $" << GainOrLoss << endl;
    cout << "Amount Received After Selling the Stock: $" << (AmountReceived - SellingServiceCharge) << endl;
    cout << "\n----------------------------------------\n";
                                                    
    return 0;
}

