#include<iostream>
using namespace std;
int main()
{
    int OPrice, Markup, SPrice, FPrice, TaxRate, Tax;
    cout<<"Enter Orignal Price of item sold = ";
    cin>>OPrice;
    cout<<"\nEnter Percentage of Mark-up Price = ";
    cin>>Markup;
    cout<<"\nEnter the Sales Tax Rate = ";
    cin>>TaxRate;
    SPrice = OPrice + ((OPrice * Markup)/100);
    Tax = (OPrice * TaxRate)/100;
    FPrice = SPrice + Tax;
    cout<<"\n____________________________________";
    cout<<"\n|   Orignal Price = "<<OPrice;
    cout<<"\n|   Percentage of Mark-up = "<<Markup;
    cout<<"\n|   Store's Selling Price = "<<SPrice;
    cout<<"\n|   The Sales Tax Rate = "<<TaxRate;
    cout<<"\n|   The Sales Tax = "<<Tax;
    cout<<"\n|   THE FINAL PRICE = "<<FPrice;
    cout<<"\n|___________________________________";
    
    return 0;
}