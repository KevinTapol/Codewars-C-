#include <iostream>
#include <string>
using namespace std;
// Functions should only do one thing and one thing well.
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

// Void function does not return a value or have a return statement. It will error out if you add a return statement.
void test() {
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }
}

void print(string text){
    cout << text << endl;
}

void printNtimes(int n, string text) {
    for (int i = 0; i < n; i++) {
        //cout << text << endl; // replaced by the function print()
        print(text);
    }
}

// Giving a parameter a default value. So, you don't have to pass in an argument for int z.
int doMath(int x, int y, int z = 1){
    return (x + y) * z;
}

// Function that returns type pair from the arguments.
pair<int, int> makePair(int x, int y){
    if (x > y) {
        return pair<int, int>(x, y);
    } else {
        return pair<int, int>(y, x);
    }
}

/* Refactored version
pair<int, int> makePair(int x, int y){
    if (x > y) {
        return pair<int, int>(x, y);
    } 
    return pair<int, int>(y, x);
}
*/


// Pass by value Pass by function. The following fails returning x = 2 and y = 4 even after swap() is called.
/*
void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}
*/

/* The reason this doesn't work is because a copy of the value is being passed in and not the original value. To get the real value, we must use references and pointers. You can use pointers by changing the function parameters to

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
but you must call the function in int main() with references swap(&a, &b); Passing by references is better practice over pass by pointer.
*/

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}


int main() {
    // int result = add(2, 3);
    // int result = getNumber();
    // cout << result << endl;
    // cout << getNumber() << endl;
    // test(); // calling test() and using a void function which does not demand a return.
    // printNtimes(5, "Pete");
    // printNtimes(7, "Repeat");
    // cout << doMath(3, 4) << endl; // using default for z
    // cout << doMath(3, 4, 2) << endl; // passing in an argument for z
    // cout << makePair(2, 3).first << endl; // Calling the first element in the makePair function
    int a = 2;
    int b = 4;
    cout << a << endl;
    cout << b << endl;
    cout << "Swapping" << endl;
    swap(a, b);
    cout << a << endl;
    cout << b << endl;
}