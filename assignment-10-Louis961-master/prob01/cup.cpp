#include "cup.hpp"

double Cup::fluid_oz() { return fluid_oz_; }

std::string Cup::drink_type() { return drink_type_; }

void Cup::drink(double amount) {
  if ((fluid_oz_ - amount) < 0) {
    return;
  } else {
    fluid_oz_ = (fluid_oz_ - amount);
  }
}

void Cup::refill(double amount) { fluid_oz_ = (fluid_oz_ + amount); }

void Cup::new_drink(std::string name, double amount) {
  drink_type_ = name;
  fluid_oz_ = amount;
}

void Cup::empty() {
  fluid_oz_ = 0;
  drink_type_ = "nothing";
}