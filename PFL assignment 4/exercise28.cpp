#include <iostream>
using namespace std;

int main() {
  
    double NumberOfStudents, CaloriesPerStudent, CaloriesPerPoundNuts;
    double CaloriesPerPoundFruit, TotalCaloriesNeeded, TotalPoundsMixture;
    double PoundsNuts, PoundsFruit;


    cout << "Enter Number of Students: ";
    cin >> NumberOfStudents;

    cout << "Enter Calories Required for Each Student: ";
    cin >> CaloriesPerStudent;

    cout << "Enter Number of Calories in Each Pound of Nuts: ";
    cin >> CaloriesPerPoundNuts;


    CaloriesPerPoundFruit = CaloriesPerPoundNuts / 0.70;
    TotalCaloriesNeeded = NumberOfStudents * CaloriesPerStudent;

    TotalPoundsMixture = TotalCaloriesNeeded / ((CaloriesPerPoundNuts + CaloriesPerPoundFruit) / 2);

    PoundsNuts = TotalPoundsMixture / 2;
    PoundsFruit = TotalPoundsMixture / 2;


    cout << "\n--------------- Mixture Requirement Summary ---------------\n";
    cout << "Total Calories Needed: " << TotalCaloriesNeeded << " calories" << endl;
    cout << "Calories per Pound of Dried Fruit: " << CaloriesPerPoundFruit << " calories" << endl;
    cout << "Pounds of Nuts Needed: " << PoundsNuts << endl;
    cout << "Pounds of Dried Fruit Needed: " << PoundsFruit << endl;
    cout << "\n-----------------------------------------------------------\n";
    
    return 0;
}
