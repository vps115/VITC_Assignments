#include <iostream>
#include <string>
using namespace std;

const int SIZE = 3;

class Item {
    string item_name;
    int price, total_count_available;

    public:

    void input() {
        cin>>item_name;
        cin>>price;
        cin>>total_count_available;
    }

    void display() {
        cout<<item_name<<endl;
        cout<<price<<endl;
        cout<<total_count_available<<endl;
    }

    void purchase(int stock) {
        if (stock>total_count_available)
        cout<<"Requested count is not available"<<endl;
        else
        cout<<"Total Price: "<<price*stock<<endl;        
    }

    friend int search(Item arr[], int n, string req_name, int req_stock);
};

int search(Item arr[], int n, string req_name, int req_stock) {
    for (int i = 0; i < n; i++) {
        if (arr[i].item_name == req_name) {
            arr[i].display();
            arr[i].purchase(req_stock);
            return 0;
        }
    }
    cout<<"not available";
    return 0;
}


int main() {
    Item list[SIZE];

    for (int i = 0; i < SIZE; i++) {
        list[i].input();
    }

    string req_name;
    int req_stock;
    cin>>req_name>>req_stock;
    search(list, SIZE, req_name, req_stock);

    return 0;
}