//While and Do-While Loop in C++
#include <iostream>
using namespace std;
int main()
{
    // Example 1: Print numbers from 1 to 5 using while loop
    cout << "Numbers from 1 to 5 using while loop:" << endl;
    int i = 1;
    while (i <= 5)
    {
        cout << i << " "; // Output each number
        i++;              // Increment the counter
    }
    cout << endl;

    // Example 2: Print numbers from 1 to 5 using do-while loop
    cout << "Numbers from 1 to 5 using do-while loop:" << endl;
    int j = 1;
    do
    {
        cout << j << " "; // Output each number
        j++;              // Increment the counter
    } while (j <= 5);
    cout << endl;

    return 0;
}