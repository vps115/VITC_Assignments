#include <iostream>
using namespace std;

class Rectangle {
    private:
    int l, b, a;
    
    public:
    Rectangle() {
        l = 0;
        b = 0;
    }
    Rectangle(int x, int y) {
        l = x;
        b = y;
    }
    Rectangle(int x) {
        l = x;
        b = x;
    }
    void area () {
        a = l*b;
        cout << "Length: " << l;
        cout << "\nBreadth: " << b;
        cout << "\nArea: " << a << "\n\n";
    }
};

int main() {
    Rectangle c1;
    Rectangle c2(5, 10);
    Rectangle c3(5);
    
    cout << "\n";
    
    c1.area();
    c2.area();
    c3.area();
    
    return 0;
}