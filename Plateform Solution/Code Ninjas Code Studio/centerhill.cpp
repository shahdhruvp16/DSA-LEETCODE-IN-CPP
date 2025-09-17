#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the pyramid pattern: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }

        // Print trailing spaces (optional, just for symmetry)
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << endl;  // Move to next line
    }

    return 0;
}
