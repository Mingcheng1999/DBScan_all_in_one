#ifndef Point_H
#define Point_H

#ifndef POINT_UNDEFIEND
#define POINT_UNDEFINED -1
#endif

#include <iostream>
#include <vector>
//#include "3d-vectors.hpp"

struct __attribute__ ((aligned(16)))Point {
     float              x;
     float              y;
     float         grp_id;
};
//__attribute__((packed));

float get_distance(Point p1, Point p2);
float get_distance(Point p, double x, double y);

#endif
