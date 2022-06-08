#include "get_longest_string.hpp"
#include <iostream>

int main()
{
  const int ARRAY_SIZE = 5;
  // Create an array called inputs that can store 5 string values
  std::string inputs[ARRAY_SIZE];

  for (int i = 0; i < ARRAY_SIZE; i++)
  {
    std::cout << "Please enter string #" << i + 1 << ": ";
    // Store the user's input into the right location in the array
    std::getline(std::cin, inputs[i]);
  }
  
  std::string longest;
  // Call the get_longest_string function and store the longest string from the
  // array into the variable called longest

  longest = get_longest_string(inputs, ARRAY_SIZE);
  
  std::cout << "The longest string is: " << longest << std::endl;

  return 0;
}
