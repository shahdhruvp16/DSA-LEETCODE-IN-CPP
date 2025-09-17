#include <iostream>
using namespace std;

void printSquarePattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the size of the square pattern: ";
    cin >> n;
    printSquarePattern(n);
    return 0;
}
