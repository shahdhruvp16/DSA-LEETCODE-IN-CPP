//1D Array in C++
#include <iostream>
using namespace std;
int main()
{
    // Declare an array of integers with a size of 5
    int arr[5];

    // Taking input for the array elements
    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i]; // Input each element
    }

    // Displaying the array elements
    cout << "You entered:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " "; // Output each element
    }
    cout << endl;

    return 0;
}

//2D Array in C++
#include <iostream>
using namespace std;
int main()
{
    int arr[2][3];

    cout << "Enter 6 integers:" << endl;    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "You entered:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}   
/* If I input the following 6 integers:
1 2 3
4 5 6
*/