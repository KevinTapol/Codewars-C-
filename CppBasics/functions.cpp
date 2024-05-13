#include <iostream>
using namespace std;

// you must define the type of return of the function first ex int
// parameters x and y
int add(int x, int y) {
    return x + y;
}

// As soon as a function hits a return, it executes and exits. So return 5; is never read.
int getNumber() {
    return 6;
    return 5;
}

// Void function does not return a value
void test() {
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }
}

// here we are calling the add fn inside our main function
// arguments 2 and 3
int main() {
    // int result = add(2, 3);
    // int result = getNumber();
    // cout << result << endl;
    // cout << getNumber() << endl;
    test(); // calling test() and using a void function which does not demand a return.
}