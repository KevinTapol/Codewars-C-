#include <iostream>
#include <string>
using namespace std;

/*
if
else if
else

switch
case
default
*/

int main() {
    int x = 2;
    switch(x + 1) {
        case 1:
            cout << "cool";
            break;
        case 2:
            cout << "not cool";
            break;
        default:
            cout << "default";
            break;
    }
}