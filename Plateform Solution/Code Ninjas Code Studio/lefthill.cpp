#include <iostream>
using namespace std;
void lefthillPattern (int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cout << "Enter the size of the lefthill pattern: ";
    cin >> n;
    lefthillPattern(n);
    return 0;
}