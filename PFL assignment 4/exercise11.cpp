#include<iostream>
using namespace std;
int main()
{
    int capacity, miles;
    cout<<"Enter capacity of Automobile's Fuel Tank (in gallons) = ";
    cin>>capacity;
    cout<<"\nEnter the miles per gallon the Automobile can move =      miles\b\b\b\b\b\b\b\b\b\b";
    cin>>miles;
    cout<<"\nTotal Miles the Automobile can move is "<<capacity*miles<<" miles.";
    
    return 0;
}