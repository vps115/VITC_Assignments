#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c, i;

    cout << "Enter N: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (i = 0; i<n; i++) {
        if (i==0 || i==1)
        cout << i << " ";
        else {
            c = a + b;
            a = b;
            b = c;
            cout << c << " ";
        }
    }
    return 0;
}