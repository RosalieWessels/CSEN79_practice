#ifndef HOMEWORK_H
#define HOMEWORK_H

#include <ostream>
#include <iostream>
using namespace std;

class PolarPoint {
    private:
        int radius;
        int theta;

    public:
        PolarPoint(int init_radius = 0, int init_theta = 0) {
            radius = init_radius;
            theta = init_theta;
        }

        int get_r() {return radius;}
        int get_angle() {return theta;}
        void set_angle(int new_angle) {theta = new_angle;}
};
#endif

