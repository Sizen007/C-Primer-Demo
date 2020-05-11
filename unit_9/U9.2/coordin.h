//
// Created by sizen on 11.05.20.
//

#ifndef U9_2_COORDIN_H
#define U9_2_COORDIN_H
#include <iostream>
using namespace std;

struct Polar{
    double distance;
    double angle;
};

struct Rect{
    double x;
    double y;
};

Polar rect_to_polar(Rect xypos);
void show_polar(Polar dapos);

#endif //U9_2_COORDIN_H
