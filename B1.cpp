#include <iostream>
using namespace std;

int main() {
    int days;
    
    //Type the number of days
    cout << "Enter number of days: ";
    cin >> days;
    
    //convert days to seconds
    int seconds = days * 24 * 60 * 60;
    
    //result
    cout << days << " days has " << seconds << " seconds" << endl;
    
    return 0;
}