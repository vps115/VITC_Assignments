#include <iostream>
using namespace std;

class Boarding {

    int x, age, fare;
    char name[30], address[50], mn[10];

    public:
    void getdata() {
        cin>>name;
        cin>>x;
        cin>>address;
        cin>>mn;
        cin>>age;
        cin>>fare;
    }
    void putdata() {
        cout<<name<<endl;
        cout<<"CA"<<x<<endl;
        cout<<mn<<endl;
        cout<<age<<endl;
    }
    
    friend void discount (Boarding p);
};

int main () {
    
    Boarding p1;
    p1.getdata();
    p1.putdata();
    discount(p1);
    
    return 0;
}

void discount (Boarding p) {
    int dfare;

    if (p.age>=12 && p.age<=58) {
        dfare = p.fare - 0.2*p.fare;
    }
    else if (p.age>58) {
        dfare = p.fare - 0.4*p.fare;
    }
    else {
        dfare = p.fare - 0.5*p.fare;
    }

    cout<<dfare;
}