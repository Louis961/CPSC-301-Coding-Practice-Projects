#include "car.hpp"
#include <string>
#include <iostream>

std::string Car::get_name()
{
    return name_;
}

double Car::get_price()
{
    return price_;
}

unsigned int Car::get_mileage()
{
    return mileage_;
}

void Car::set_name(std::string name)
{
    name_ = name;
    return;
}

void Car::set_price(double price)
{
    price_ = price;
    return;
}

void Car::set_mileage(unsigned int mileage)
{
    mileage_ = mileage;
    return;
}

unsigned int lowest_price(Car cars[], unsigned int size)
{
    Car arr_store;
    Car arr_store2;
    double temp_price = 0.00;
    double temp_price2 = 0.00;
    int lowestPriceIndex = 0;
    unsigned int j = 0;

    for (int i = 1; i < size; i++)
    {
        arr_store = cars[j];
        arr_store2 = cars[i];
        std::cout << i << "\n";
        //std::cout << arr_store.get_name() << " " << arr_store.get_mileage() << " " << arr_store.get_price() << "\n";
        temp_price = arr_store.get_price();
        temp_price2 = arr_store2.get_price();
        
        if (temp_price > temp_price2)
        {
            lowestPriceIndex = i;
            j++;
        }
        else{
            lowestPriceIndex = j;
        }
    }
    return lowestPriceIndex;
}