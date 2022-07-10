#include <iostream>
using namespace std;

class Sequence {
    int array[5];

    public:
    int* get_in() {
        int i;

        for (i = 0; i < 5; i++) {
            cin>>array[i];
        }

        return array;
    }
};

class Progression : public Sequence {
    public:
    void find_seq() {
        int i, ap = 1, gp = 1;
        int* arr = get_in();

        int d = arr[1] - arr[0];
        for (i = 1; i < 4; i++) {
            if (arr[i+1] - arr[i] != d) {
                ap = 0;
                break;
            }
        }

        if (arr[0]!=0) {
            int r = arr[1] / arr[0];
            for (i = 1; i < 4; i++) {
                if ((arr[i] == 0) || (arr[i+1] == 0) || arr[i+1] / arr[i] != r) {
                    gp = 0;
                    break;
                }
            }
        }
        

        if (ap == 1)
        cout<<"It is an arithematic sequence";
        else if (gp == 1)
        cout<<"It is a geometric sequence";
        else
        cout<<"It is not an arithematic/geometric sequence";

    }
};

int main() {
    Progression seq;
    seq.find_seq();
    return 0;
}