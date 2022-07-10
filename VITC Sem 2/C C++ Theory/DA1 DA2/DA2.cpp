#include <iostream>
#include <string>
using namespace std;

//Size of stack
const int SIZE = 10;

//Template for a stack of elements
template <class Rack>
class Elements {
    Rack stack[SIZE];
    int pos;

    public:
    //Initialise empty stack
    Elements() {
        pos = 0;
    }

    //Function to add elements on top
    void add(Rack ele) {
        stack[pos] = ele;
        pos++;
    }

    //Function to remove elements from top
    Rack remove() {
        if (pos == 0) {
            cout<<"Rack is empty.\n\n";
            try
            {
                return 0;
            }
            catch(const exception &e)
            {
                return "";
            }  
        }
        pos--;
        return stack[pos];
    }
};

//Main function
int main() {

    /*Create a object "Books" of string type from 
      template class*/
    Elements<string> Books;
    
    //Add books to the rack
    cout<<"\nEnter name of the books to be added: \n";
    for(int i = 0; i < SIZE; i++) {
        string book;
        cout<<"Book "<<i+1<<": ";
        getline(cin, book);
        Books.add(book);
    }

    //Remove books from the rack
    string r = "\nBooks removed in the order:";
    while (!r.empty()) {
        cout<<r<<endl;
        r = Books.remove();
    }

    return 0;
}