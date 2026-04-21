#include <iostream>
#include <cmath>  //inbuilt function 
using namespace std;

int main() {
    double radius, volume;
    
    //Type the radius of the sphere
    cout << "Enter the radius of the sphere: ";
    cin >> radius;
    
    // volume calculation to decimal places
    volume = (4/ 3) * M_PI * pow(radius, 3);
    
    //result
    cout << "The volume of the sphere is: " << volume << endl;
    
    return 0;
}