/*
Even or Odd
Parameters or Edge Cases: inputs will be integers and can be negative or positive
Return: "Even" if the input the input is even "Odd" if it is odd
Examples:
#include <string>

std::string even_or_odd(int number);

Describe(example_tests)
{
    It(zero)
    {
        Assert::That(even_or_odd(0), Equals("Even"), ExtraMessage("Incorrect answer for number=0"));
    }
  
    It(positive_odd_numbers)
    {
        Assert::That(even_or_odd( 1), Equals("Odd"), ExtraMessage("Incorrect answer for number=1"));
        Assert::That(even_or_odd(21), Equals("Odd"), ExtraMessage("Incorrect answer for number=21"));
    }  
  
    It(positive_even_numbers)
    {
        Assert::That(even_or_odd(  2), Equals("Even"), ExtraMessage("Incorrect answer for number=2"));
        Assert::That(even_or_odd(100), Equals("Even"), ExtraMessage("Incorrect answer for number=100"));
    }
  
    It(negative_odd_numbers)
    {
        Assert::That(even_or_odd( -1), Equals("Odd"), ExtraMessage("Incorrect answer for number=-1"));
        Assert::That(even_or_odd(-21), Equals("Odd"), ExtraMessage("Incorrect answer for number=-21"));
    }  
  
    It(negative_even_numbers)
    {
        Assert::That(even_or_odd(  -2), Equals("Even"), ExtraMessage("Incorrect answer for number=-2"));
        Assert::That(even_or_odd(-100), Equals("Even"), ExtraMessage("Incorrect answer for number=-100"));
    }  
};

Pseudocode:
use modulus to divide by 2 and if there is a remainder return "Even" else "Odd"
*/
//My Answer using ternary truthy falsy modulus
#include <string>

std::string even_or_odd(int number) {
  return number % 2 == 0 ? "Even": "Odd";
}

// best practices
// not importing the library for string
std::string even_or_odd(int num) 
{
  return (num%2==0)?"Even":"Odd";
}

// most clever
// bitwise and operation if it ends with the last bit as 1 then odd
std::string even_or_odd(int number) 
{
  return number&1 ? "Odd" : "Even";
}

// using if else
std::string even_or_odd(int number) 
{
  if (number % 2 == 0)
  {
    return "Even";
  }
  else  
    {
      return "Odd";
    }
    
}

// cleaner if else not using key word else
std::string even_or_odd(int number) 
{
  if(number % 2) 
    return "Odd";
  return "Even";
}