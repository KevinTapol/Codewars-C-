#include <iostream>
#include <set>
using namespace std;

// Sets AKA unordered collection of unique elements - are a type of associative containers in which each element has to be unique, because the value iof the element identifies it. Sets can be declared and unassigned.
int main() {
    /* 
    set<char> s25;
    set<char> s1 = {'C', 'D', 'C', 'D'};
    cout << s1.size() << endl; // This will return the size of the set being 2 because duplicates are automatically removed.
    s1.insert('B'); // .insert() is used to add an element to the set.
    s1.erase('C'); // .erase() is used to remove an element from the set.
    for (auto itr = s1.begin(); itr != s1.end(); itr++) {
        cout << *itr << endl; // This will return each unique element.
    }

    if (s1.find('C') == s1.end()) { // Using .find() and checking the full set with .end() to see if an element exists in the set.
        cout << "C not found in set s1!" << endl;
    } else {
        cout << "Found C in set s1!" << endl;
    }
    */
   string string1 = "This is a test of the national checking for set systems. Test go BRRRRrrrrrr! is you could had";
   string string2 = "is you could had";
   set<char> set1;
   set<char> set2;

   /*
   Goal is to check to see if all the the chars from the string find exists in the string string1. 
   In the first for loop, we inserting each unique char from the string string1 to the set named set1.
   In the 2nd for loop, we are printing out the elements from the set set1.
   In the 3rd for loop, we inserting each unique char from the string2 into the set named set2.
   In the 4th for loop, we are iterating through set1 and removing it from set2. 
   The if statement checks to see if set2 is empty after removing all of the characters that exist in set1.
   */  

   for (int i = 0; i < string1.length(); i++) {
        char letter = string1[i]; // Good practice to define the variable being inserted instead of directly inserting into the loop.
        set1.insert(letter); // Alternatively you can combine both lines with write exists.insert(string1[i]);
   }
    // iterating through exists set and dereferencing pointers to print out values.
   for (auto itr = set1.begin(); itr != set1.end(); itr++) {
        // cout << *itr << endl;
   }
    // Assigning the string find's each char to the set named both.
    for (int i = 0; i < string2.length(); i++) {
        char letter = string2[i];
        set2.insert(letter);
    }
    // Checking to see if chars in set both appear in set exists by removing each char from set named both
    for (int i = 0; i < string1.length(); i++) {
        char letter = string1[i];
        set2.erase(letter);
    }

    if (set2.size() > 0) {
        cout << "No, set named set1 of unique chars from string1 does not contain all the chars from set named set2 of unique chars from string2.";
    } else {
        cout << "Yes, all characters in set2 of unique values from string2 exists in set1 of unique values from string1!";
    }

}