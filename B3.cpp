#include <iostream>
using namespace std;

//area calcuation function
double calculateArea(double side) {
    return side * side;
}

// perimeter calculation function
double calculatePerimeter(double side) {
    return 4 * side;
}

int main() {
    double side;
    
    // type the length
    cout << "Enter the length of the square: ";
    cin >> side;
    
    // area calculation
    double area = calculateArea(side);

    // perimeter calculation
    double perimeter = calculatePerimeter(side);
    
    //results
    cout << "Area of square: " << area << endl;
    cout << "Perimeter of square: " << perimeter << endl;
    
    return 0;
}