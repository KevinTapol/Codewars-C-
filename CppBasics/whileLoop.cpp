#include <iostream>
#include <string>
using namespace std;

// While loop is a more specific use case of iteration. User input.
int main() {
    
    for(int i = 0; i < 10; i++) {
        cout << i << endl;
    }
    int i = 0;
    while (i < 10) {
        cout << i << endl;
        i++;
    }
    

   
   int input = -1;
   while (input != 1 && input != 2) {
    cout << "Type the number 1 or 2: ";
    cin >> input;
   }
   
    // stop condition
   // !(input !=1 && input != 2) same as input == 1 || input == 2

// break will end the closest loop
    
   int input = -1;
   while (true){
    cout << "Type the number 1 or 2: ";
    cin >> input;
    if (input == 1 || input == 2) {
        break;
    } else {
        cout << "Please for the love of God type the number 1 or 2! ";
    }
   }
    
//    nested loop 

   int j = 0;
   while (j < 3) {
    for (int i = 0; i < 5; i++){
        cout << i << endl;
        if (i == 2) {
            cout << "done";
            break;
        }
    }
    j++;
   }
   
  
// continue will bring you to the next iteration of the loop. In this case, we are skipping the conditions where i = 7 or i = 9.
    
    for (int i = 0; i < 10; i++){
        if (i == 9 || i == 7){
            continue;
        }
        cout << i << endl;
    }
    // same outcome not using continue but with a more complex condition.
    for (int i = 0; i < 10; i++){
        if (i != 9 && i != 7){
            cout << i << endl;
        }
    }
    
// regular while loop check condition then execute
    int x = 10;
    int add;
    cout << "Type a number to add to x: ";
    cin >> add;
    x += add;
    cout << "x is: " << x << endl;
    while (x < 10) {
        cout << "Type a number to add to x: ";
        cin >> add;
        x += add;
        cout << "x is: " << x << endl;
    }

// do while loop execute then check the condition
    do {
        int add;
        cout << "Type a number to add to x: ";
        cin >> add;
        x += add;
        cout << "x is: " << x << endl;
    }while (x < 10);
}