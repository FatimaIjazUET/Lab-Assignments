#include <iostream>
using namespace std;

int main() {
    
    string name;
    float matricMarks, interMarks, ecatMarks;
    float aggregate;

    
    cout << "Enter student's name: ";
    cin>>name; 

    cout << "Enter Matriculation marks (out of 1100): ";
    cin >> matricMarks;

    cout << "Enter Intermediate marks (out of 550): ";
    cin >> interMarks;

    cout << "Enter ECAT marks (out of 400): ";
    cin >> ecatMarks;

    
    aggregate = ((matricMarks / 1100) * 10)   
              + ((interMarks / 550) * 40)    
              + ((ecatMarks / 400) * 50);     

    
    
    cout << "Aggregate Score of Mirza in UET is: " << aggregate << "%";

    return 0;
}
