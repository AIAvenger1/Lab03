#pragma once

namespace geometry{
    bool read_point(double &x, double &y);
    void multiple_read(double &x, double &y);
    bool line_intersection(double x1L1, double y1L1,double x2L1, double y2L1,double x1L2, double y1L2,double x2L2, double y2L2);
    double line_intersection_X(double x1L1, double y1L1,double x2L1, double y2L1,double x1L2, double y1L2,double x2L2, double y2L2);
    double line_intersection_Y(double x1L1, double y1L1,double x2L1, double y2L1,double x1L2, double y1L2,double x2L2, double y2L2);
    bool intersect_segment_ray(double x1, double y1,double x2, double y2,double x3, double y3,double x4, double y4);
    bool exercise(double x1, double y1,double x2, double y2,double x3, double y3,double x4, double y4, double x1R, double y1R, double x2R, double y2R);
}