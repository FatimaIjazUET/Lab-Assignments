#include<iostream>
#include<string>
using namespace std;
int SECRET=11;
double RATE=12.50;
int main()
{
    int num1, num2, newNum;
    double hoursWorked, wages;
    string name;
    cout<<"Enter 2 Numbers seperated by one or more spaces = ";
    cin>>num1>>num2;
    cout<<"\nThe Value of num1 = "<<num1<<" and the Value of num2 = "<<num2<<endl;
    newNum = (num1*2) + num2;
    newNum = newNum + SECRET;
    cout<<"New Number = "<<newNum<<endl;
    cout<<"Enter your Last Name = ";
    cin>>name;
    cout<<"\nEnter a Decimal No. between 0 and 70 = ";
    cin>>hoursWorked;
    wages = hoursWorked * RATE;
    cout<<"Name: "<<name<<endl;
    cout<<"Pay Rate: $"<<RATE<<endl;
    cout<<"Hours Worked: "<<hoursWorked<<endl;
    cout<<"Salary: $"<<wages<<endl;
    
    
    return 0;
}