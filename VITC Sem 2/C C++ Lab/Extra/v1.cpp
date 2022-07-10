#include <iostream>
using namespace std;

class Attendance {

    private:
    char name[30];
    int roll_no;
    float percent;

    public:
    Attendance() {
        roll_no = 0;
        percent = 0.0;
    }

    void get_details () {
        cin>>name;
        cin>>roll_no;
    }
    void show_details () {
        cout<<name<<endl;
        cout<<roll_no<<endl;
        cout<<percent<<endl;
    }
    float get_attendance() {
        cin>>percent;
        return percent;
    }

    friend void order(Attendance s1, Attendance s2);
};

void sort(Attendance* s, int n);

int main() {
    int n, i;
    cout<<"Enter number of students: ";
    cin>>n;
    
    Attendance d1[n];

    for (i = 0; i < n; i++) {
        d1[i].get_details();
        d1[i].get_attendance();
        cout<<"\n";
    }

    sort(d1, n);

    for (i = 0; i < 3; i++) {
        d1[i].show_details();
        cout<<"\n";
    }

    return 0;
}   