#include<iostream>
using namespace std;
int main()
{
    float Milk, Cost, Profit, _1LCost, ProfitOnCarton;
    int Cartons;
    cout<<"Enter the Total Amount of Milk produced in the morning =        liters.\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    cin>>Milk;
    cout<<"Enter the Cos of producing one Liter =        $\b\b\b\b\b\b\b\b";
    cin>>_1LCost;
    cout<<"Enter the Profit on Each Carton =        $\b\b\b\b\b\b\b\b";
    cin>>ProfitOnCarton;

    Cartons = Milk / 3.78;
    Cost = Milk * _1LCost;
    Profit = Cartons * ProfitOnCarton;
    
    cout<<"\nThe Number of Cartons needed = "<<Cartons;
    cout<<"\nThe Cost of producing Milk = $"<<Cost;
    cout<<"\nThe Profit for producing Milk = $"<<Profit;
    
    return 0;
}