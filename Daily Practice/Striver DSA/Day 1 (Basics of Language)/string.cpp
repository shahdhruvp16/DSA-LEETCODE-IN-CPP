//Strings in C++
#include <iostream>
#include <string> // Required for using string
using namespace std;
int main()
{
    string str; // Declare a string variable
    cout << "Enter a string: ";
    getline(cin, str); // Use getline to read a full line including spaces
    cout << "You entered: " << str << endl; // Output the entered string

    // Demonstrating some common string operations
    cout << "Length of the string: " << str.length() << endl; // Length of the string
    if (!str.empty()) {
        cout << "First character: " << str[0] << endl; // Accessing first character
        cout << "Last character: " << str[str.length() - 1] << endl; // Accessing last character
    }

    // Concatenation
    string anotherStr = " - Welcome to C++ programming!";
    string concatenatedStr = str + anotherStr;
    cout << "Concatenated String: " << concatenatedStr << endl;

    // Substring
    if (str.length() >= 5) {
        string subStr = str.substr(0, 5); // Get first 5 characters
        cout << "Substring (first 5 characters): " << subStr << endl;
    }

    return 0;
}