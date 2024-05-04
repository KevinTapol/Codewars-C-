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
 

Pointers - a value that has an address.
Key point is to access variable by reference instead of by value.
Pointers can be mutable, do not need to be initiated once declared, and commonly denoted with lowercase p.

int x = 2;
int * pX = &x;
int *z = &y;

Pointer creates a new var that stores the memory location of the reference.

cout << *z;
*/


int main(){

    int x = 2;
    int * pX = &x; // Declare a new value equal to the address of x. When an * is next to a type (in this case int) it points to the address of whatever is on the other side of the equation (in this case the reference of x).
    int y = *pX; // Copy the value of x to y using a pointer. The integer y is dereferenced to the value of x. When an * is not next to a type ex int, then it means dereference which is go to the address pointed at that address and grab the value.
    // These all point to the same box of what a is equal to. There are no copies. When any of the references are changed, the value is changed.
    cout << x << endl; // This will return the address or memory location of a and not the value.
    cout << &x << endl;
    cout << pX << endl;
    cout << &pX << endl;
    cout << *pX << endl;
}