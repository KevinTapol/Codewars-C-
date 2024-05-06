#include <iostream>
#include <string>
#include <map> // map library
using namespace std;

/* Maps are objects aka variables with key value pairs but will not return the declared order. Maps can be declared and not initialized. 
map<type, type> nameOfMap = {
    {keyType, valueType},
    {keyType, valueType},
    {keyType, valueType}
}
*/
int main() {

    /*
    map<int, int> mp = {
        {'T', 7},
        {'S', 8},
        {'a', 4}
    };
    cout << mp['a'] << endl; // This will return the value to the key of 'a'.
    cout << mp['O'] << endl; // If you cout a key that doesn't exist then 0 will be returned.

    mp['u'] = 9; // Insert a key of 'u' with a value of 9 to a preexisting map declared as mp.
    cout << mp['u'] << endl;
    mp.insert(pair<char, int>('j', 5)); // Insert a new key value using the insert() method with pair(), specifying type in <> and finally the key value pair. 
    cout << mp['j'] << endl;
    pair<char, int> p1('c', 2); // You can declare the pair without inserting it to the map.
    mp.insert(p1); // Here we are using the insert() method on the declared pair above.
    cout << mp['c'] << endl;
    cout << p1.first << endl; // Using .first will return the key to the declared pair p1.
    cout << p1.second << endl; // Using .second will return the value to the declared pair p1.
    mp.erase(p1.first); // This will erase the key value pair of p1 but not the declared variable par named p1.
    cout << mp[p1.first] << " " << mp['c'] << endl; // First statement is using the declared variable pair as the key for mp. The second is using a char that is equal to the pair. Both statements will return 0 because the key value pair was erased from the map mp.

    cout << p1.first << endl; // Here I am printing out the key to the variable pair p1 to prove it still exists but not inside of the map mp.
    cout << mp.empty() << endl; // Since the map contains pairs, .empty() will return 0 meaning false to being empty.
    cout << mp.size() << endl; // The .size() method returns the number of pairs in a map. Similar to the length of the object.
    mp.clear(); // This will clear the map entirely.
    cout << mp.empty() << endl; // Using the .empty() method will check if the map has no pairs returning a 1 if empty else 0 if pairs exist.
    */

    // Iterating through a map 
    
    map<char, int> mp2 = {
        {'K', 0},
        {'e', 1},
        {'v', 2},
    };

    for (auto itr = mp2.begin(); itr != mp2.end(); itr++) {

    }
 }