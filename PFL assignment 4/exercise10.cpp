#include<iostream>
using namespace std;
int main()
{
    float Number1, Number2, Number3, Number4, Number5, Average;
    cout<<"Enter 1st Number in Decimal = ";
    cin>>Number1;
    cout<<"\nEnter 2nd Number in Decimal = ";
    cin>>Number2;
    cout<<"\nEnter 3rd Number in Decimal = ";
    cin>>Number3;
    cout<<"\nEnter 4th Number in Decimal = ";
    cin>>Number4;
    cout<<"\nEnter 5th Number in Decimal = ";
    cin>>Number5;
    Average = Number1+Number2+Number3+Number4+Number5;
    cout<<"\nSum of All Numbers in Integer = "<<static_cast<int>(Average);
    
    return 0;
}