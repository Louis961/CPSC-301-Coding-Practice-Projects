#include "car.hpp"
#include <iomanip>
#include <iostream>

int main()
{
  Car cars[3];
  for (int i = 0; i < 3; i++)
  {
    std::string name;
    double price;
    int mileage;
    std::cout << "Car #" << i + 1 << "\n";
    std::cout << "Please enter the name: ";
    std::getline(std::cin, name);
    cars[i].set_name(name);
    std::cout << "Please enter the milage: ";
    std::cin >> mileage;
    cars[i].set_mileage(mileage);
    std::cout << "Please enter the price: ";
    std::cin >> price;
    cars[i].set_price(price);
    std::cin.ignore();

    // Set the name, price and mileage of the corresponding Car
    // object based on user input.
  }

  // Create a Car object whose name is lowest.
  // Call the lowerst_price function to get the Car object with the lowest price from
  // the array then assign it to the Car object called lowest.

  Car lowest;
  std::string lowestName;
  double lowestPrice;
  int lowestMileage;

  lowest = cars[lowest_price(cars, 3)];

  lowestName = lowest.get_name();
  lowestPrice = lowest.get_price();
  lowestMileage = lowest.get_mileage();

  std::cout << std::fixed << std::setprecision(2);

  std::cout << "\nThe car with the lowest price is " << lowestName;
  // Display the name of the car with the lowest price (use the lowest variable)

  std::cout << " with a mileage of " << lowestMileage;
      // Display the mileage of the car with the lowest price (use the lowest
      // variable)

      std::cout
            << " and a price of $" << lowestPrice;

      // Display the price of the car with the lowest price (use the lowest
      // variable)

      std::cout
            << "\n";

  return 0;
}
