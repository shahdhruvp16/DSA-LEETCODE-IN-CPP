#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the reverse left hill pattern: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}