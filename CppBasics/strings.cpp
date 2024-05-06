#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "hello world";
    cout << str.size(); //returns the number of characters in the string
    cout << str.length(); // Also returns the number of characters in the string.
    str[1] = '1';
    // must use single quotes for char! Can not using strings!
    // cout << str[1];

    for (int i = 0; i < str.length(); i++){
        char chr = str[i];
        cout << chr << endl;
    }

    // reference References can not be initialized as NULL and must be the same type of the variable being referenced!
    int a = 2;
    int &b = a;
    int &c = b;
    // These all point to the same box of what a is equal to. There are no copies. When any of the references are changed, the value is changed.
    cout << &a << endl; // This will return the address or memory location of a and not the value.
}