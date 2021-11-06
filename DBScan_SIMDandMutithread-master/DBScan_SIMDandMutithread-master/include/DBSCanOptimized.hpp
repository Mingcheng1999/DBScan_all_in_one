#ifndef DBS_CAN_H
#define DBS_CAN_H

#include <vector>
#include "PointOptimized.hpp"

std::vector<unsigned int> DBSCan (std::vector<Point> p, double eps, unsigned short int Minpts);

#endif
