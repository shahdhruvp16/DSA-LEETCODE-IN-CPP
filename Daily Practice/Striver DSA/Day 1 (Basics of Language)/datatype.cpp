#include <iostream>
#include <string> // Required for using string
using namespace std;

int main() {
    // int: Stores integers (whole numbers). Range: -2,147,483,648 to 2,147,483,647 (4 bytes)
    int a = 10;
    cout << "int a = " << a << endl;

    // long: Stores larger integers than int. Range depends on system (32-bit or 64-bit).
    long b = 100000;
    cout << "long b = " << b << endl;

    // float: Stores floating-point numbers (single precision).
    float c = 10.5f;
    cout << "float c = " << c << endl;

    // double: Stores double-precision floating-point numbers.
    double d = 20.99;
    cout << "double d = " << d << endl;

    // char: Stores a single character.
    char e = 'A';
    cout << "char e = " << e << endl;

    // bool: Stores true (1) or false (0).
    bool f = true;
    cout << "bool f = " << f << endl;

    // string: Stores sequence of characters (text).
    string g = "Hello";
    cout << "string g = " << g << endl;

    // Demonstrating getline to take full line input
    string userInput;
    cout << "Enter your full name: ";
    getline(cin, userInput); // takes full line including spaces
    cout << "You entered: " << userInput << endl;

    // void: Represents no value. Example usage in a lambda function
    auto sayHello = []() -> void {
        cout << "This is a void function (returns nothing)" << endl;
    };
    sayHello();

    return 0;
}

