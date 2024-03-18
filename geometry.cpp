#include "geometry.h"
#include <iostream>
#include <cmath>

namespace geometry{

    bool read_point(double &x, double &y){
        std::cin >> x >> y;
        if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(80, '\n');
            std::cout << "Wrong input. Try again." <<  std::endl;
            return 0;
        }
        return 1;
    }

    void multiple_read(double &x, double &y){
        std::cout << "Enter point as x y:" << '\n';
        while(!(read_point(x,y)));
    }

    bool line_intersection(double x1L1, double y1L1,double x2L1, double y2L1,double x1L2, double y1L2,double x2L2, double y2L2){
        if(((x2L1 - x1L1) != (x2L2 - x1L2)) && ((-y2L1 + y1L1) != (-y2L2 + y1L2)) && (-x1L1*(x2L1 - x1L1) + y1L1*(y2L1 - y1L1) != -x1L2*(x2L2 - x1L2) + y1L2*(y2L2 - y1L2)))
        return 1;
        else return 0;
    }

    double line_intersection_X(double x1L1, double y1L1,double x2L1, double y2L1,double x1L2, double y1L2,double x2L2, double y2L2){
        double A1 = (x2L1 - x1L1), B1 = (-y2L1 + y1L1), C1 = -x1L1*(x2L1 - x1L1) + y1L1*(y2L1 - y1L1);
        double A2 = (x2L2 - x1L2), B2 = (-y2L2 + y1L2), C2 = -x1L2*(x2L2 - x1L2) + y1L2*(y2L2 - y1L2);
        return -(C1 * B2 - B1 * C2) / (A1*B2 - B1 * A2);
    }

    double line_intersection_Y(double x1L1, double y1L1,double x2L1, double y2L1,double x1L2, double y1L2,double x2L2, double y2L2){
        double A1 = (x2L1 - x1L1), B1 = (-y2L1 + y1L1), C1 = -x1L1*(x2L1 - x1L1) + y1L1*(y2L1 - y1L1);
        double A2 = (x2L2 - x1L2), B2 = (-y2L2 + y1L2), C2 = -x1L2*(x2L2 - x1L2) + y1L2*(y2L2 - y1L2);
        return -(A1*C2 - A2 * C1)/(A1*B2 - A2*B1);
    }

       bool intersect_segment_ray(double x1R, double y1R,double x2R, double y2R,double x1, double y1,double x2, double y2)
    {
        double X = line_intersection_X(x1R,y1R,x2R,y2R,x1,y1,x2,y2), Y = geometry::line_intersection_Y(x1R,y1R,x2R,y2R,x1,y1,x2,y2);
        
        if(line_intersection(x1R,y1R,x2R,y2R,x1,y1,x2,y2) && X >= x1R && X >= std::min(x1,x2) 
         && X <= std::max(x1,x2) && Y >= std::min(y1,y2) && Y <= std::max(y1,y2))
         return 1;
         else return 0;
    }
    bool exercise(double x1, double y1,double x2, double y2,double x3, double y3,double x4, double y4, double x1R, double y1R, double x2R, double y2R)
    {
        if(intersect_segment_ray(x1R,y1R,x2R,y2R, x1, y1, x2, y2) || intersect_segment_ray(x1R,y1R,x2R,y2R, x2, y2, x3, y3) 
        || intersect_segment_ray(x1R,y1R,x2R,y2R, x4, y4, x1, y1) || intersect_segment_ray(x1R,y1R,x2R,y2R, x3, y3, x4, y4))
        return 1;
        else return 0;
    }

    
}