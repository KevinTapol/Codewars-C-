#include <iostream>
#include <string>
using namespace std;

// arrays in C++ use {} instead of []
// you must define the size of the array in the [] and they must contain that size or they will error out.
int main() {
    int x = 5; //define the size of the array in []
    string arrString[] {"is", "you", "could", "had"};
    char arrChar[x];
    bool arrBool[x];
    float arrFloat[x];
    int arrInt[] = {1, 2, 3, 4, 5}; // If you declare the elements in your array, you do not need to define the size.
    int arr[] {1, 2, 3, 4, 5}; // When assigning an array, you do not need the = sign for C++.
    cout << arr << endl; // This will print out the memory location of the array and not the array itself.
    cout << arr[0] << endl; // This will return whatever character is at the index in the brackets. In this example 1.
    arr[0] = 10; // You can reassign the character at the index in the [] to whatever value you want.
    cout << arr[0] << endl;
    // sizeof() returns the size of the array in bytes. If you want the length of the array, you have to divide the sizeof() the array by the sizeof the first element in the array.
    cout << sizeof(arr)/sizeof(arr[0]) << endl; // This will return the length of the array.
    cout << sizeof(arrString)/sizeof(arrString[0]);
}