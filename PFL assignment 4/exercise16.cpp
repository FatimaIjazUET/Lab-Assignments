#include<iostream>
using namespace std;
int main()
{
    float Milk, Cost, Profit;
    int Cartons;
    cout<<"Enter the Total Amount of Milk produced in the morning =        liters.\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    cin>>Milk;
    
    Cartons = Milk / 3.78;
    Cost = Milk * 0.38;
    Profit = Cartons * 0.27;
    
    cout<<"\nThe Number of Cartons needed = "<<Cartons;
    cout<<"\nThe Cost of producing Milk = $"<<Cost;
    cout<<"\nThe Profit for producing Milk = $"<<Profit;
    
    return 0;
}