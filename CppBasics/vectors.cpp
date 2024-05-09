#include <iostream>
#include <vector>
using namespace std;

// Vector are sequence containers representing arrays that can change in size but not in type. AKA dynamically resizable array.
int main() {
    vector<int> v1 = {1, 2, 3};

    /*
    cout << v1[0] << endl; // Calling item by index
    cout << v1.front() << endl; // .front() calls the first element in the vector.
    cout << v1.back() << endl; // .back calls the last element in the vector.
    cout << v1.size() << endl; // .size() gets the number of elements in the vector.
    cout << v1.capacity() << endl; // .capacity() gets the number of elements that the vector CAN hold. Currently returns 4.
    v1.push_back(9); // .push_back() adds to the end of the vector
    cout << v1.back() << endl;
    cout << v1.capacity() << endl; // .capacity() gets the number of elements that the vector CAN hold. After adding an element, it will double the size of the vector. When it reaches that doubled value, it will double the size again.
    v1.pop_back();// .pop_back() returns the last item of the vector and at the same time removes it from the vector.
    cout << v1.back() << endl;
    v1.shrink_to_fit(); // Manually shrinks the vector capacity to the number of elements in the vector. Vectors will not automatically shrink in capacity once items are removed from the vector. 
    */

    // How to insert and erase elements.
    /*
    v1.insert(v1.begin(), 5); // Inserts element 5 at the beginning of the vector.
    cout << v1[0] << endl;
    v1.insert(v1.begin() + 1, 4); // Inserts element 4 at the index following the first index.
    cout << v1[1] << endl;
    v1.erase(v1.begin()); // This will erase and element at the first position.
    */

   // Iterating through a vector
   for (int i = 0; i < v1.size(); i++) {
      cout << v1[i] << endl;
   }

   for (auto itr = v1.begin(); itr != v1.end(); itr++) {
      cout << *itr << endl; // Need to dereference the pointer to return the element.
   }
}

