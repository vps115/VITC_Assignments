#include <iostream>
using namespace std;

inline void fib(int n) {
    int a = 0, b = 1, c, i;

    for (i = 0; i<n; i++) {
        if (i < 2)
        cout << i << " ";
        else {
            c = a + b;
            a = b;
            b = c;
            cout << c << " ";
        }
    }
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    fib(n);

    return 0;
}