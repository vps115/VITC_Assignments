# include <iostream>
using namespace std;

class Bank {
    private:
    int accno;
    char name [10];
    int balance;

    public:
    Bank () {
        scanf("%d", &accno);
        scanf("%s", &name);
        scanf("%d", &balance);
    }
    void withdraw(int amt) {
        balance -= amt;
    }
    void deposit(int amt) {
        balance += amt;
    }
    void update(char action, int amount) {
        if (action == 'w')
        this->withdraw(amount);
        if (action == 'd')
        this->deposit(amount);
        printf("%d", accno);
        printf("%s", name);
        printf("%d", balance);
    }
};

int main () {
    Bank s1;
}