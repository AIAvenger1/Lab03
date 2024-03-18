#include "quad.h"
#include "geometry.h"
#include <iostream>

namespace geometry::quad{
    bool read_quad(double &x1, double &y1,double &x2, double &y2,double &x3, double &y3,double &x4, double &y4)
    {
        std::cout << "Enter points for quad" << '\n';
        std::cout << "Enter 1 point:" << '\n';
        multiple_read(x1,y1);
        std::cout << "Enter 2 point:" << '\n';
        multiple_read(x2,y2);
        std::cout << "Enter 3 point:" << '\n';
        multiple_read(x3,y3);
        std::cout << "Enter 4 point:" << '\n';
        multiple_read(x4,y4);
    }
}