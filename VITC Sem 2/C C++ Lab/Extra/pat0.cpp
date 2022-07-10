#include <iostream>
#include <string>
using namespace std;

class SAG {
    string country_name;
    int Gold, Silver, Bronze;

    public:
    SAG(){};
    SAG(string cn, int g, int s, int b) {
        country_name = cn;
        Gold = g;
        Silver = s;
        Bronze = b;
    };

    friend void search_query(SAG arr[7]);
};

int main() {
    SAG sag[7];
    sag[0] = SAG("IND", 173, 93, 45);
    sag[1] = SAG("NEP", 51, 60, 96);
    sag[2] = SAG("SRI", 40, 83, 128);
    sag[3] = SAG("PAK", 32, 41, 59);
    sag[4] = SAG("BAN", 19, 32, 87);
    sag[5] = SAG("MDV", 1, 0, 4);
    sag[6] = SAG("BHU", 0, 7, 13);

    search_query(sag);
    return 0;
}

void search_query(SAG arr[7]){
        int i;
        string cname, search_key;
        cin>>cname>>search_key;

        for (i = 0; i < 7; i++) {
            if (cname == arr[i].country_name) {
                if (search_key == "G")
                cout<<arr[i].Gold;
                else if (search_key == "S")
                cout<<arr[i].Silver;
                else if (search_key == "B")
                cout<<arr[i].Bronze;
                else
                cout<<(arr[i].Gold+arr[i].Silver+arr[i].Bronze);
                break;
            }
        }
    }