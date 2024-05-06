#include <iostream>
#include <string>
#include <tuple>
using namespace std;

/*
Tuple is an array with mixed variables types.
*/
int main() {
    /*
    tuple <int, string> personA; // initialized an empty tuple
    tuple <int, string> personB(20, "John"); // initialized an empty tuple
    cout << get<1>(personB) << endl; // instead of person[0] in an array you need the fn get<index>(nameOfTuple) 
    get<1>(personB) = "Billy"; // reassigning the string value
    cout << get<1>(personB) << endl;

    tuple <int, char, bool, float> thing;
    thing = make_tuple(23, 'H', true, 23.4); // make_tuple() is a fn that takes in the declared types that are already declared but not initialized.
    cout << get<0>(thing) << endl;
    cout << get<1>(thing) << endl;
    cout << get<2>(thing) << endl;
    cout << get<3>(thing) << endl;
    */

    // You can swap the contents of 2 tuples only if the tuples have the same type.
    /*
    tuple <int, int> t1 = make_tuple(1, 2);
    tuple <int, int> t2 = make_tuple(3, 4);
    t1.swap(t2);
    cout << get<0>(t1) << endl;
    cout << get<1>(t1) << endl;
    cout << get<0>(t2) << endl;
    cout << get<1>(t2) << endl;
    */

   // You can decompose a tuple into its individual components using tie()
   /*
   tuple <int, int> t1 = make_tuple(1, 2);
   int x, y;

   tie(x, y) = t1;
   cout << x << endl << y;
   */

  // Concatenating Tuples tuple_cat() must specify the types if not using auto! Best practices is to use types and not auto for inference.
  tuple <int, char> t1(20, 'T');
  tuple <char, string> t2('R', "Hola Mundo!");
  tuple <int, char, char, string> t3 = tuple_cat(t1, t2); // specifying the type
  auto t4 = tuple_cat(t1, t2); // using auto to infer the types
  cout << get<0>(t3) << endl;
  cout << get<0>(t4) << endl;

}