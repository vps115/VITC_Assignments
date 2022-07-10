#include <iostream>
using namespace std;

class Accounts {
    int purchase, sales;
        
    public:
    void read() {
        int i, n;
        cout<<"\nEnter Number of Items: ";
        cin>>n;
        
        int p[n], s[n];
        purchase = 0;
        cout<<"\nEnter Purchase Price of each Item: \n";
        for (i = 0; i < n; i++) {
            cout<<"Item "<<i+1<<": ";
            cin>>p[i];
            purchase += p[i];
        }
        sales = 0;
        cout<<"\nEnter Sales Price of each Item: \n";
        for (i = 0; i < n; i++) {
            cout<<"Item "<<i+1<<": ";
            cin>>s[i];
            sales += s[i];
        }
    }  

    friend void tax (Accounts company);
};
    
int main() {

    Accounts company;
    company.read();
    tax(company);
    return 0;
}

void tax (Accounts company) {
    int profit;
    float tax;

    profit = company.sales - company.purchase;
    
    if (profit > 0) {
        tax = 0.04 * profit;    
        cout<<"\nTotal Tax to Pay: "<<tax;
    }
    else {
        cout<<"Company in Loss";
    }
}
