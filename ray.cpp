#include "ray.h"
#include "geometry.h"
#include <iostream>

namespace geometry::ray{
    bool read_ray(double &x1, double &y1,double &x2, double &y2)
    {
        std::cout << "Enter points for ray" << '\n';
        std::cout << "Enter 1 point:" << '\n';
        multiple_read(x1,y1);
        std::cout << "Enter 2 point:" << '\n';
        multiple_read(x2,y2);
    }
}