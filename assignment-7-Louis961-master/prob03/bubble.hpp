#include <math.h>

class Bubble
{
public:
    void set_radius(double);
    double get_radius();
    double volume();

private:
    double radius_;
};

Bubble combine_bubble(Bubble, Bubble);