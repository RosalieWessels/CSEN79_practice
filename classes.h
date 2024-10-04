#ifndef CLASSES_H  // Include guard to prevent multiple inclusions
#define CLASSES_H

#include <ostream>
#include <iostream>
using namespace std;

class Point {
    private:
        int x = 0;
        int y = 0;
    
    public:
        Point(int init_x, int init_y) {
            x = init_x;
            y = init_y;
        }
    
        friend ostream& operator<<(ostream& out, const Point& p) {
            out << "x: " << p.x << ", y: " << p.y;
            return out;
        }

        int get_y() {
            return y;
        }

        int get_x() {
            return x;
        }
};

class Line {
    private:
        //y = mx+b
        Point point1;
        Point point2;
        double m;
        double b;

    public:
        Line(Point init_point1, Point init_point2) {
            point1 = init_point1;
            point2 = init_point2;
            calculate_slope();
            calculate_intercept();
        }

        void calculate_slope() {
            m = (double) (point2.get_y() - point1.get_y()) / (point2.get_x() - point1.get_x());
        }

        void calculate_intercept() {
            //y = mx + b
            b = (double) (point2.get_y()) - (m * point2.get_x());
        }

        double get_m() {
            return m;
        }
};

#endif