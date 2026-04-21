#include <iostream>
using namespace std;

// Uppercase checker function
bool isUppercase(char ch) {
    return (ch >= 'A' && ch <= 'Z');
}

// Lowercase checker function
bool isLowercase(char ch) {
    return (ch >= 'a' && ch <= 'z');
}

int main() {
    char character;
    
    // Type a character
    cout << "Enter a character: ";
    cin >> character;
    
    // used to check if the character is uppercase
    if (isUppercase(character)) {
        cout << character << " is an uppercase letter" << endl;
    }
    // used to check if the character is lowercase
    else if (isLowercase(character)) {
        cout << character << " is a lowercase letter" << endl;
    }
    // used to check if the character is not a letter
    else {
        cout << character << " is not a letter" << endl;
    }

    return 0;
}