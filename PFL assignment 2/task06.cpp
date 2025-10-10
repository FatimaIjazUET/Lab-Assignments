#include <iostream>
using namespace std;

int main() {
   
    double megabytes, bits;

    
    cout << "Enter the size in Megabytes (MB): ";
    cin >> megabytes;

    
    bits = megabytes * 1024 * 1024 * 8;

    
    cout << megabytes << " MB = " << bits << " bits" ;

    return 0;
}