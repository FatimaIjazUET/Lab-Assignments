#include<iostream>
using namespace std;
float PI=3.141593;
int main()
{
    int Radius, Area, Price, PricePerArea;
    cout<<"Enter Radius of Pizza (in inches) = ";
    cin>>Radius;
    cout<<"\nEnter Price of Pizza (in Rupees) = Rs.";
    cin>>Price;
    Area = PI * (Radius * Radius);
    PricePerArea = Price / Area;
    cout<<"\nPrice of the Pizza per square inch = Rs."<<PricePerArea;
    
    return 0;
}