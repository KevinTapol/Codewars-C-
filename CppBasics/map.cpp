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

    /*
    // Iterating through a map 

    // Collection data type - data type that stores more than 1 element. Collection data types use iterators. Using .being() creates an iterator object and gives us access to the first iterator object in the map. Since the map does not contain any specific order, we won't know what the first item will be. So, using .begin() we aren't sure where we are going to start. Using .end() lets us know we went through every pair. We can use .begin() and .end() on any collection like a tuple.

    map<char, int> mp2 = {
        {'K', 0},
        {'e', 1},
        {'v', 2},
    };

   // Here we are using auto to infer the type instead of using map<char, int>::iterator
   // for (map<char, int>::iterator itr = mp2.begin(); itr != mp2.end(); itr++) {
    for (auto itr = mp2.begin(); itr != mp2.end(); itr++) {
        cout << (*itr).first << endl; // Using a pointer to dereference the values of the keys in the map.
        // cout << itr->.first << endl; // -> is shorthand notation for dereferencing as a pointer
    }
    */

   // Practical Example count the number of occurrences of each letter.
   // The idea is to have the key as the letter and the value as the number of occurrences.
   
   string test = "Hello World, my name is chicka chicka Slim Shady.";

   map<char, int> freq;

   for (int i = 0; i < test.length(); i++) {
        char letter = test[i];
        // cout << letter << endl;
        // increment the key by one each time we find it
        // freq.find() points to the iterator to the pair in the map that has the key letter
        if (freq.find(letter) == freq.end()) {
            freq[letter] = 0;
        }
        freq[letter]++; // add 1 to the int value
        cout << letter << ", " << freq[letter] << endl; // print out each character and how many times they currently occur.
   }

   



 }