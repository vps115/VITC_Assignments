#include <iostream>
using namespace std;

int n;
class Employee {
    char name[30];
    int emp_id, salary;
        
    public:
    void getdata () {
        cout<<"\n\nEmployee ID: ";
        cin>>emp_id;
        cout<<"Employee Name: ";
        cin>>name;
        cout<<"Salary: ";
        cin>>salary;
    }    
    void putdata () {
        cout<<"Employee ID: "<<emp_id<<"\n";
        cout<<"Employee Name: "<<name<<"\n";
        cout<<"Salary: "<<salary<<"\n";
    }
    
    friend void linearSearch (int x, Employee array[]);
};
    
int main() {
    int i, x;
    cout<<"Enter Number of Employees: ";
    cin>>n;
    Employee database[n];
        
    for (i = 0; i < n; i++) {
        database[i].getdata();
    }
    
    cout<<"\nEnter Employee ID to Search: ";
    cin>>x;
    linearSearch(x,database);
    return 0;
}

void linearSearch (int x, Employee array[]) {
    int i, id;
    for (i = 0; i < n; i++) {
        id = array[i].emp_id;
        if (x == id) {
            array[i].putdata();
        }
    }
}
