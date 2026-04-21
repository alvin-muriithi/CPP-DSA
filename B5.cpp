#include <iostream>
using namespace std;

int main() {
    int x = 0;   
    int y = 20;     
    
    //repeats the loop until y is less than 6
    do {
        y = y - 4;          // SUBTRACT 4 FROM y
        x = x + (2 / y);  // ADD 2/y TO x
    } while (y >= 6);       // UNTIL y IS LESS THAN 6 (continue while y >= 6)
    
    // x value after the loop
    cout << "The value of x is: " << x << endl;
    
    return 0;
}