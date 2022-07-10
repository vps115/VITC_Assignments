#include <iostream>
using namespace std;

class Esalary {
    private:
        int eid;
        char ename[20];
        float basic_salary, hra, da, net_salary;
    
    public:
        void input() {
            cout << "\nEnter Employee ID: ";
            cin >> eid;
            cout << "Enter Employee Name: ";
            cin >> ename;
            cout << "Enter Basic Salary: ";
            cin >> basic_salary;
        }
        
        void netsalary() {
            hra = 0.12 * basic_salary;
            da = 0.18 * basic_salary;
            net_salary = basic_salary + hra + da;
        }
        
        void output() {
            cout << "\nEmployee ID: " << eid;
            cout << "\nEmployee Name: " << ename;
            cout << "\nNet Salary: " << net_salary << "\n\n";
        }
        
};

int main() {
    Esalary e1;
    e1.input();
    e1.netsalary();
    e1.output(); 
}