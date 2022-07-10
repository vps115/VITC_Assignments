#include <iostream>
using namespace std;

int main() {
    int empid, bp;
    float da, hra, salary;

    cout<<"\nEnter Employee ID: ";
    cin>>empid;
    cout<<"Enter Basic Pay: ";
    cin>>bp;
    cout<<"Enter Percentage of DA: ";
    cin>>da;
    cout<<"Enter HRA: ";
    cin>>hra;

    salary = bp + (da*0.01)*bp + hra;

    cout<<"\nEmployee ID: "<<empid<<"\n";
    cout<<"Total Salary: "<<salary<<"\n\n";

    return 0;
}