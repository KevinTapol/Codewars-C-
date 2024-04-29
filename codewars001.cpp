/*
Parameters or Edge Cases: Inputs/arguments will be integers and can be negative
Return: the product of the inputs
Examples:
    Describe(multiply_method)
    {
        It(should_handle_basic_tests)
        {
            Assert::That(multiply(1,2), Equals(2));
            Assert::That(multiply(3,4), Equals(12));
            Assert::That(multiply(5,6), Equals(30));
            Assert::That(multiply(-1,20), Equals(-20));
        }
    };
Pseudocode:
    return the product of the inputs


*/
// My Answer
int multiply(int a, int b){
    return a * b;
}

// 2nd most clever
#include <functional>

std::multiplies<int> multiply;

// using a ternary with redundant math
int multiply(int a, int b) {
    return b > 1 ? a + multiply(a, b - 1) : a;
}