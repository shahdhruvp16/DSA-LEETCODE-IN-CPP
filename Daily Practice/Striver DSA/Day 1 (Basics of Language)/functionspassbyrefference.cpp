// 📘 Function Theory in C++
// - A function is a block of code designed to perform a specific task.
// - Functions help in code reusability and modular programming.
// - Functions can take inputs (parameters) and may return a value.
// - Syntax:
//     returnType functionName(parameters) {
//         // function body
//     }
// - Types of functions:
//     1. Built-in functions (e.g., cout, cin, sqrt())
//     2. User-defined functions (functions created by programmers)
// - Functions can be:
//     - Pass by Value   → Copy of the variable is passed
//     - Pass by Reference → Actual variable reference is passed
//     - Pass by Pointer → Memory address is passed

// Pass by Reference Theory:
// - Uses & operator to pass reference to original variable
// - No copy is made, function works directly with original data
// - Changes made inside function affect the original variable
// - More efficient for large objects (no copying overhead)
// - Cannot pass literals or temporary values

#include <iostream>
using namespace std;

// Function using pass by reference
void increment(int& num) {
    num++;  // Modifies original variable
}

// Function to swap two numbers using pass by reference
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5;
    int y = 10;
    
    cout << "Before increment: x = " << x << endl;
    increment(x);  // Pass reference to x
    cout << "After increment: x = " << x << endl;
    
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);  // Pass references to x and y
    cout << "After swap: x = " << x << ", y = " << y << endl;
    
    return 0;
}
