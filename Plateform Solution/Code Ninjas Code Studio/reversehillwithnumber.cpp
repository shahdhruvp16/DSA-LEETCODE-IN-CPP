#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the reverse left hill pattern: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i+1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}