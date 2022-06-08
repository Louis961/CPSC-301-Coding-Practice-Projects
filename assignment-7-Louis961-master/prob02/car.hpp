#include <string>

class Car
{
public:
    std::string get_name();
    double get_price();
    unsigned int get_mileage();

    void set_name(std::string name);
    void set_price(double price);
    void set_mileage(unsigned int mileage);

private:
    std::string name_;
    double price_;
    unsigned int mileage_;
};

unsigned int lowest_price(Car [], unsigned int);