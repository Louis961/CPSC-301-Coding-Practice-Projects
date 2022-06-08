#include "bubble.hpp"
#include <iomanip>
#include <iostream>
int main()
{
  // Create two bubble objects called bubble1 and bubble 2
  Bubble bub1;
  Bubble bub2;

  double radius1, radius2;
  std::cout << "Please enter the radius of the first bubble: ";
  std::cin >> radius1;

  // Set the radius of bubble1 to radius1
  bub1.set_radius(radius1);

  std::cout << "Please enter the radius of the second bubble: ";
  std::cin >> radius2;

  // Set the radius of bubble2 to radius2
  bub2.set_radius(radius2);

  // Create a new bubble object called combined
  Bubble combined;

  // Call the combine_bubble function to combine the bubble1 and bubble2 objects
  // then store the result in the combined variable
  combined = combine_bubble(bub1, bub2);

  double volume;
  // Get the volume of output and store it in the the variable called volume
  volume = combined.volume();

  std::cout
      << "The bubbles have now combined and created a bubble with the volume "
         "of: "
      << std::fixed << std::setprecision(2) << volume << std::endl;
  return 0;
}
