#include<iostream>
#include<string>

using namespace std;
int n;
class bill{
    string i_name[n];
    int i_price[n];

    public:
    void get_data() {
        cin>>n;
        for(int i = 0; i < n; i++) {
            cin>>i_name[i];
            cin>>i_price[i];
        }
    }

    int operator ++ () {
        int total = 0;
        for(int i = 0; i < n; i++) {
            total += i_price[i];
        }
        return total;
    }

    string operator [] (int i){
        if(i>3) {
            cout<<"NO";
            return i_name[0];
        }
        return i_name[i];
    }
};

int main() {
    bill a;

    a.get_data();
    cout<<++a;
    cout<<a[0];
}

