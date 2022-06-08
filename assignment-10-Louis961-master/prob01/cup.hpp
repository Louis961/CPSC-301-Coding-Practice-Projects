#include <string>

class Cup {
public:
  Cup() // default constructor
  {
    std::string drink_type_ = "Water";
    double fluid_oz_ = 16.0;
  };

  Cup(std::string drink_type, double fluid_oz) // parameterized constructor
  {
    drink_type_ = drink_type;
    fluid_oz_ = fluid_oz;
  };

  void drink(double amount);
  void refill(double amount);
  void new_drink(std::string name, double amount);
  void empty();

  std::string drink_type();
  double fluid_oz();

  private:
  std::string drink_type_;
  double fluid_oz_;
};