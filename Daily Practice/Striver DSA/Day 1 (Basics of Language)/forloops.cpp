//For loops in C++
#include <iostream>
using namespace std;
int main()
{
    // Example 1: Print numbers from 1 to 5
    cout << "Numbers from 1 to 5:" << endl;
    for (int i = 1; i <= 5; i++)
    {
        cout << i << " "; // Output each number
    }
    cout << endl;

    // Example 2: Print even numbers from 2 to 10
    cout << "Even numbers from 2 to 10:" << endl;
    for (int i = 2; i <= 10; i += 2)
    {
        cout << i << " "; // Output each even number
    }
    cout << endl;

    // Example 3: Print elements of an array
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    cout << "Array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Output each element of the array
    }
    cout << endl;

    return 0;
}