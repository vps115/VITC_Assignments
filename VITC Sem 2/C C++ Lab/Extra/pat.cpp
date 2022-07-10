#include <iostream>
#include <cstring>
using namespace std;

class Student {
    char name[30];
    int mark1, mark2, mark3, mark4, mark5, roll_no;
    
    public:
    char type[2];
    void get_data() {
        cin>>name;
        cin>>roll_no;
        cin>>mark1;
        cin>>mark2;
        cin>>mark3;
        cin>>mark4;
        cin>>mark5;
        cin>>type;
    }
    
    float avg() {
        return (float) (mark1 + mark2 + mark3 + mark4 + mark5) /5;
    }
};

class Ug : public Student {
    int excurr;
    char club[3];
    
    public:
    void get_ug_data() {
        cin>>excurr;
        cin>>club;
    }
    
    void ug_res(Student s) {
        float avg = s.avg();
        if (avg>=60 && excurr>=2 && !strcmp(club,"Yes")) {
            cout<<"Cleared UG";
        }
        else {
            cout<<"Not Cleared UG";
        }
    }
};

class Pg : public Student {
    char paper[3];
    
    public:
    void get_pg_data() {
        cin>>paper;
    }
    
    void pg_res(Student s) {
        float avg = s.avg();
        if (avg>=60 && !strcmp(paper,"Yes")) {
            cout<<"Cleared PG";
        }
        else {
            cout<<"Not Cleared PG";
        }
    }
};

int main() {
    Student s;
    s.get_data();
    
    if (!strcmp(s.type, "UG")) {
        Ug s1;
        s1.get_ug_data();
        s1.ug_res(s);
    }
    else {
        Pg s1;
        s1.get_pg_data();
        s1.pg_res(s);
    }

    return 0;
}
