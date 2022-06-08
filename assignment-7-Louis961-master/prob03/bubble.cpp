#include "bubble.hpp"

void Bubble::set_radius(double radius)
{
    radius_ = radius;
}

double Bubble::get_radius()
{
    return radius_;
}

double Bubble::volume()
{
    double volume;
    volume = (3.1415) * 4 * (pow(radius_, 3)) / 3;
    return volume;
}

Bubble combine_bubble(Bubble bub1, Bubble bub2)
{
    Bubble combined;
    double rad1, rad2, rad3;

    rad1 = bub1.get_radius();
    rad2 = bub2.get_radius();

    rad3 = rad1 + rad2;
    combined.set_radius(rad3);

    return combined;
}