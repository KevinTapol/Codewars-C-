#include <iostream>
#include <string>
using namespace std;

/* 
Text book defs 
    - Reference is a simple reference datatype that is less powerful but safer than the pointer type inherited from C.
    - Alias is a name that refers to a previously defined type.

Reference aka Alias return the address or memory location of a variable and not the value. 
References must be initialized, must be of the same type of the referenced variable and cannot be NULL.
When any of the references are changed, the value is changed. 
You can not change what a reference references.

Ex
int a = 2;
int &b = a;
int &c = b;
All values are equal to 2.

a = 4 
All values a, b and c are now equal to 4.

c = 3
All values a, b and c are not equal to 3.

Since & refers to the memory location of the stored value, you can print out the location with the following lines:
cout << &a;
cout << &b;
cout << &c;
 
*/


int main(){

    int a = 2;
    int &b = a;
    int &c = b;
    // These all point to the same box of what a is equal to. There are no copies. When any of the references are changed, the value is changed.
    cout << &a << endl; // This will return the address or memory location of a and not the value.
}