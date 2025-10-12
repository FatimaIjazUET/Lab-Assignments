#include <iostream>
using namespace std;

int main() {
    
    double RoomLength, RoomWidth, RoomHeight;
    double DoorLength, DoorWidth, WindowLength, WindowWidth;
    double BookshelfLength, BookshelfWidth;
    double WallArea, DoorArea, WindowsArea, BookshelfArea, PaintableArea, PaintNeeded, PaintCoverage;

   
    cout << "Enter Length, Width, and Height of the Room (in feet): ";
    cin >> RoomLength >> RoomWidth >> RoomHeight;

    cout << "Enter Length and Width of the Door (in feet): ";
    cin >> DoorLength >> DoorWidth;

    cout << "Enter Length and Width of Each Window (in feet): ";
    cin >> WindowLength >> WindowWidth;

    cout << "Enter Length and Width of the Bookshelf (in feet): ";
    cin >> BookshelfLength >> BookshelfWidth;

    cout << "Enter Area that Can Be Painted with One Gallon of Paint (in square feet): ";
    cin >> PaintCoverage;

  
    WallArea = 2 * (RoomLength + RoomWidth) * RoomHeight;

    DoorArea = DoorLength * DoorWidth;
    WindowsArea = 2 * (WindowLength * WindowWidth);
    BookshelfArea = BookshelfLength * BookshelfWidth;


    PaintableArea = WallArea - (DoorArea + WindowsArea + BookshelfArea);


    PaintNeeded = PaintableArea / PaintCoverage;

   
    cout << "\n---------- Paint Requirement Summary ----------\n";
    cout << "Total Wall Area: " << WallArea << " square feet" << endl;
    cout << "Paintable Area: " << PaintableArea << " square feet" << endl;
    cout << "Amount of Paint Needed: " << PaintNeeded << " gallons" << endl;
    cout << "\n-----------------------------------------------\n";
    
    return 0;
}
