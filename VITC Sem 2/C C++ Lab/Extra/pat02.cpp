#include <iostream>
using namespace std;

class Timezone {
    int age, game;
    
    public:
    void get_data() {
        cin>>age;
        if (age > 5)
        cin>>game;
        else
        game = 0;
    }
    void recharge() {
        if (game)
        this->recharge(age, game);
        else
        this->recharge(age);
    }
    void recharge(int a, int g) {
        cout<<g*100;
    }

    void recharge(int a) {
        cout<<"Kids Zone";
    }

};

int main () {
    
    Timezone p;

    p.get_data();
    p.recharge();
    
    return 0;
}