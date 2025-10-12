#include<iostream>
using namespace std;
int main()
{
    float Num;
    cout<<"Enter Number in decimal = ";
    cin>>Num;
    cout<<"\nThe Number in Integer is "<<static_cast<int>(Num);
    
    return 0;
}