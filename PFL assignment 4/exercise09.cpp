#include<iostream>
using namespace std;
int main()
{
    float TestScore1, TestScore2, TestScore3, TestScore4, TestScore5, Average;
    cout<<"Enter 1st TestScore = ";
    cin>>TestScore1;
    cout<<"\nEnter 2nd TestScore = ";
    cin>>TestScore2;
    cout<<"\nEnter 3rd TestScore = ";
    cin>>TestScore3;
    cout<<"\nEnter 4th TestScore = ";
    cin>>TestScore4;
    cout<<"\nEnter 5th TestScore = ";
    cin>>TestScore5;
    Average = (TestScore1+TestScore2+TestScore3+TestScore4+TestScore5)/5;
    cout<<"\nAverage TestScore is "<<Average;
    
    return 0;
}