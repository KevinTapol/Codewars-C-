#include <iostream>
#include <string>
using namespace std;

int main() {
    /*
    //basic for loop
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }
    */
   // for loop iterating through an array with a preexisting array
   /*
   int x [] = {5, 6, 7, 8, 9, 10};
   for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++) {
        cout << "index " << i << " element " << x[i] << endl;
   }
   */
   // for loop an uninitialized array
   int x [5];
    for (int i = 0; i < sizeof(x)/sizeof(x[0]); i ++) {
        x[i] = i*i;
        cout << x[i] << endl;
    }
}