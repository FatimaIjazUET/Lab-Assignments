#include<iostream>
using namespace std;
int main()
{
    double Size, SizeInComputer, ActualSize;
    cout<<"Enter the size of Hard Drive specified by Manufacturer =     GB\b\b\b\b\b\b";
    cin>>Size;
    ActualSize = Size * 1000 * 1000 * 1000;
    SizeInComputer = ActualSize / (1024 * 1024 * 1024);
    cout<<"\nThe Actual Size of Hard Drive = "<<SizeInComputer<<" GB";
    
    return 0;
}