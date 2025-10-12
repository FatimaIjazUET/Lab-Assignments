#include<iostream>
using namespace std;
int main()
{
    int timesec, sec, min, hour;
    cout<<"Enter Time in Seconds = ";
    cin>>timesec;
    hour = timesec / 3600;
    min = (timesec % 3600) / 60;
    sec = (timesec % 3600) % 60;
    cout<<"\nTime in H:M:S = "<<hour<<":"<<min<<":"<<sec<<".";
    
    return 0;
}