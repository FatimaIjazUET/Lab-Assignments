#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"Enter your name:";
    cin>>name;
    
    int rollnum;
    cout<<"Enter your roll number:";
    cin>>rollnum;

    float aggregate;
    cout<<endl<<"Enter your aggregate:";
    cin>>aggregate;

    char section;
    cout<<endl<<"Enter your section:";
    cin>>section;
 
    cout<<"Student Information:"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Roll number:"<<rollnum<<endl;
    cout<<"Aggregate:"<<aggregate<<endl;
    cout<<"Section:"<<section<<endl;
    return 0;
}