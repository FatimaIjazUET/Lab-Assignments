#include <iostream>
using namespace std;

int main() {
    // Variable declarations
    double PayRate, HoursPerWeek, TotalIncome, TaxAmount, IncomeAfterTax;
    double ClothesCost, SuppliesCost, RemainingMoney, SavingsBonds, ParentBonds;
    const int Weeks = 5;

    // Input section
    cout << "Enter your hourly pay rate: $";
    cin >> PayRate;
    cout << "Enter number of hours you worked each week: ";
    cin >> HoursPerWeek;

    // Calculations
    TotalIncome = PayRate * HoursPerWeek * Weeks;
    TaxAmount = TotalIncome * 0.14;
    IncomeAfterTax = TotalIncome - TaxAmount;

    ClothesCost = IncomeAfterTax * 0.10;
    SuppliesCost = IncomeAfterTax * 0.01;

    RemainingMoney = IncomeAfterTax - (ClothesCost + SuppliesCost);
    SavingsBonds = RemainingMoney * 0.25;
    ParentBonds = SavingsBonds * 0.50;

    // Output section
    cout << "\n-------------------- Summary --------------------\n";
    cout << "Income before taxes: $" << TotalIncome << endl;
    cout << "Income after taxes:  $" << IncomeAfterTax << endl;
    cout << "Money spent on clothes and accessories: $" << ClothesCost << endl;
    cout << "Money spent on school supplies:         $" << SuppliesCost << endl;
    cout << "Money spent to buy savings bonds:       $" << SavingsBonds << endl;
    cout << "Money your parents spent on bonds:      $" << ParentBonds << endl;
    cout << "\n-------------------------------------------------\n" << endl;

    return 0;
}
