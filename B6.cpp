#include <iostream>
using namespace std;

int main() {
    // 5 values input, sum and average
    const int SIZE = 5;
    int numbers[SIZE];
    int sum = 0;
    double average;
    
    // loop allowing 5 values to be continuosly be inputed and added to the sum
    cout << "Please enter 5 numbers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> numbers[i];

        //add the current number to the sum
        sum = sum + numbers[i];  
    }
    
    // function to calculate the average of the 5 values
    //allows for decimals (double data type)
    average = sum / (double)SIZE; 
    
    // average displayed
    cout << "\nThe average of the 5 values is: " << average << endl;
    
    return 0;
}