#include <iostream>
using namespace std;

int main() {
    
    int wins, draws, losses, points;

    
    cout << "Enter the number of wins: ";
    cin >> wins;

    cout << "Enter the number of draws: ";
    cin >> draws;

    cout << "Enter the number of losses: ";
    cin >> losses;

    
    points = (wins * 3) + (draws * 1) + (losses * 0);

   
    cout << "Pakistan has obtained " << points <<" points in the Asia Cup Tournament.";

    return 0;
}
