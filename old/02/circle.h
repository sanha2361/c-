#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14;

struct C2dType {
    double x,y;
};


class CircleClass{
    C2dType center;
    double radius;
public:
    void init(double cx, double cy, double r){
        center.x = cx;
        center.y = cy;
        radius = r;
    }
    double area() const{
        return radius*radius*PI;
    }

    bool chkOverlap(const CircleClass& c) const{
        double dx = center.x-center.x;
        double dy = center.y-center.y;
        double dCntr = sqrt(dx*dx + dy * dy);
        return dCntr < radius + c.radius;
    }

   void display() const{
      cout << "center:(" << center.x <<"," << center.y << ")";
      cout << "radius:" << radius <<endl;
    }

    
};

#endif